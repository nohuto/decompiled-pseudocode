/*
 * XREFs of NtCreateSection @ 0x1403F7DD0
 * Callers:
 *     PfpFileBuildReadSupport @ 0x1404D9100 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x1404DAABC (PfSnGetSectionObject.c)
 *     VerifierNtCreateSection @ 0x1406D0544 (VerifierNtCreateSection.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     CcZeroEndOfLastPage @ 0x14003D0A0 (CcZeroEndOfLastPage.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  int v7; // r13d
  PHANDLE v8; // r14
  int v10; // edx
  LONGLONG QuadPart; // rax
  char PreviousMode; // di
  int SessionId; // eax
  NTSTATUS result; // eax
  PVOID v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdi
  struct _FILE_OBJECT *v18; // rbx
  int v19; // eax
  __int64 v20; // [rsp+30h] [rbp-68h]
  LONGLONG v21; // [rsp+60h] [rbp-38h]
  int v22[2]; // [rsp+68h] [rbp-30h] BYREF
  PVOID Object; // [rsp+70h] [rbp-28h] BYREF
  __int64 v24; // [rsp+78h] [rbp-20h] BYREF
  char AllocationAttributesa; // [rsp+C8h] [rbp+30h]

  v7 = (int)ObjectAttributes;
  v8 = SectionHandle;
  if ( (AllocationAttributes & 0x3000000) == 0x3000000 )
    return -1073741580;
  v10 = 1;
  if ( (AllocationAttributes & 0x2100000) == 0 || (AllocationAttributes & 0x1100000) == 0x1100000 )
    v10 = 0;
  if ( (AllocationAttributes & 0x208FFF80) != 0 || (AllocationAttributes & 0xF100000) == 0 )
    return -1073741580;
  if ( (AllocationAttributes & 0x3100000) != 0 )
  {
    v19 = -868220928;
    if ( (AllocationAttributes & 0x2100000) != 0 )
      v19 = -872415232;
    if ( (v19 & AllocationAttributes) != 0 )
      return -1073741580;
  }
  if ( (AllocationAttributes & 0xC000000) == 0xC000000 )
    return -1073741580;
  if ( (SectionPageProtection & 0x701) != 0 )
    return -1073741755;
  if ( !KeGetCurrentThread()->PreviousMode )
  {
    if ( MaximumSize )
      QuadPart = MaximumSize->QuadPart;
    else
      QuadPart = 0LL;
    v21 = QuadPart;
    goto LABEL_19;
  }
  if ( v10 )
    return -1073741580;
  if ( (unsigned __int64)SectionHandle >= MmUserProbeAddress )
    SectionHandle = (PHANDLE)MmUserProbeAddress;
  *SectionHandle = *SectionHandle;
  if ( MaximumSize )
  {
    if ( ((unsigned __int8)MaximumSize & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = MaximumSize->QuadPart;
  }
  else
  {
    QuadPart = 0LL;
  }
  v21 = QuadPart;
LABEL_19:
  while ( 1 )
  {
    *(_QWORD *)v22 = QuadPart;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    AllocationAttributesa = PreviousMode == 1 ? BYTE1(KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next) : 0;
    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    LOBYTE(v20) = AllocationAttributesa;
    result = MiCreateSection(
               (int)&Object,
               v7,
               0,
               (int)v22,
               SectionPageProtection,
               AllocationAttributes,
               v20,
               FileHandle,
               0LL,
               PreviousMode,
               SessionId);
    if ( result >= 0 )
      break;
    if ( result != -1073741740 )
      return result;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    QuadPart = v21;
  }
  v15 = Object;
  v16 = MiSectionControlArea((__int64)Object);
  v17 = v16;
  if ( v16 && *(_QWORD *)(v16 + 64) )
  {
    v18 = (struct _FILE_OBJECT *)MI_REFERENCE_CONTROL_AREA_FILE(v16);
    CcZeroEndOfLastPage(v18);
    MI_DEREFERENCE_CONTROL_AREA_FILE(v17, (unsigned __int64)v18);
  }
  result = ObInsertObjectEx(v15, 0, 0LL, (__int64)&v24);
  if ( result >= 0 )
    *v8 = (HANDLE)v24;
  return result;
}
