/*
 * XREFs of NtCreateSection @ 0x14042B860
 * Callers:
 *     PfpFileBuildReadSupport @ 0x1404EC2A0 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x1404EDC30 (PfSnGetSectionObject.c)
 * Callees:
 *     CcZeroEndOfLastPage @ 0x1400243D0 (CcZeroEndOfLastPage.c)
 *     MiDereferenceControlAreaFile @ 0x1400261C0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026210 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 *     MmCreateSection @ 0x14042BAE0 (MmCreateSection.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  PHANDLE v8; // r15
  int v9; // edx
  NTSTATUS result; // eax
  _QWORD *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  struct _FILE_OBJECT *v14; // rbx
  int v15; // eax
  PVOID Object; // [rsp+50h] [rbp-28h] BYREF
  __int64 v17; // [rsp+58h] [rbp-20h] BYREF

  v8 = SectionHandle;
  if ( (AllocationAttributes & 0x3000000) == 0x3000000 )
    return -1073741580;
  v9 = 1;
  if ( (AllocationAttributes & 0x2100000) == 0 || (AllocationAttributes & 0x1100000) == 0x1100000 )
    v9 = 0;
  if ( (AllocationAttributes & 0x2087FF80) != 0 || (AllocationAttributes & 0xF100000) == 0 )
    return -1073741580;
  if ( (AllocationAttributes & 0x3100000) != 0 )
  {
    v15 = -868220928;
    if ( (AllocationAttributes & 0x2100000) != 0 )
      v15 = -872415232;
    if ( (v15 & AllocationAttributes) != 0 )
      return -1073741580;
  }
  if ( (AllocationAttributes & 0xC000000) == 0xC000000 || (AllocationAttributes & 0x80080000) == 0x80080000 )
    return -1073741580;
  if ( (SectionPageProtection & 0x701) != 0 )
    return -1073741755;
  if ( !KeGetCurrentThread()->PreviousMode )
    goto LABEL_17;
  if ( v9 )
    return -1073741580;
  if ( (unsigned __int64)SectionHandle >= 0x7FFFFFFF0000LL )
    SectionHandle = (PHANDLE)0x7FFFFFFF0000LL;
  *SectionHandle = *SectionHandle;
  if ( MaximumSize && ((unsigned __int8)MaximumSize & 3) != 0 )
    ExRaiseDatatypeMisalignment();
LABEL_17:
  while ( 1 )
  {
    result = MmCreateSection(
               (unsigned int)&Object,
               SectionPageProtection,
               AllocationAttributes,
               (__int64)FileHandle,
               0LL);
    if ( result >= 0 )
      break;
    if ( result != -1073741740 )
      return result;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  v11 = Object;
  v12 = MiSectionControlArea((__int64)Object);
  v13 = v12;
  if ( v12 && *(_QWORD *)(v12 + 64) )
  {
    v14 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v12);
    CcZeroEndOfLastPage(v14);
    MiDereferenceControlAreaFile(v13, (unsigned __int64)v14);
  }
  result = ObInsertObjectEx(v11, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&v17);
  if ( result >= 0 )
    *v8 = (HANDLE)v17;
  return result;
}
