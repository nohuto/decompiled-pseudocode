/*
 * XREFs of IoQueryFileDosDeviceName @ 0x1404EB03C
 * Callers:
 *     CcMmLogLostDelayedWriteError @ 0x1401B1AE0 (CcMmLogLostDelayedWriteError.c)
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopQueryNameInternal @ 0x1404ECAA0 (IopQueryNameInternal.c)
 */

NTSTATUS __stdcall IoQueryFileDosDeviceName(PFILE_OBJECT FileObject, POBJECT_NAME_INFORMATION *ObjectNameInformation)
{
  SIZE_T v2; // rdi
  int v4; // ebp
  int v5; // edx
  _OBJECT_NAME_INFORMATION *PoolWithTag; // rbx
  int v7; // r8d
  NTSTATUS NameInternal; // edi
  SIZE_T NumberOfBytes; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = 208LL;
  LODWORD(v11) = 208;
  v4 = (int)FileObject;
  while ( 1 )
  {
    PoolWithTag = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, v2, 0x6E446F49u);
    if ( !PoolWithTag )
      break;
    LOBYTE(v7) = 1;
    LODWORD(NumberOfBytes) = v2;
    NameInternal = IopQueryNameInternal(v4, v5, v7, (int)PoolWithTag, NumberOfBytes, (__int64)&v11, 0);
    if ( !NameInternal )
    {
      *ObjectNameInformation = PoolWithTag;
      return NameInternal;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( NameInternal != -2147483643 )
      return NameInternal;
    v2 = (unsigned int)v11;
  }
  return -1073741670;
}
