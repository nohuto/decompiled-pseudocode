/*
 * XREFs of IoQueryFileDosDeviceName @ 0x1404D7F30
 * Callers:
 *     CcMmLogLostDelayedWriteError @ 0x1401A9038 (CcMmLogLostDelayedWriteError.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopQueryNameInternal @ 0x1404D8B10 (IopQueryNameInternal.c)
 */

NTSTATUS __stdcall IoQueryFileDosDeviceName(PFILE_OBJECT FileObject, POBJECT_NAME_INFORMATION *ObjectNameInformation)
{
  int v3; // ebp
  SIZE_T v4; // rdx
  int v5; // edx
  _OBJECT_NAME_INFORMATION *PoolWithTag; // rbx
  int v7; // r8d
  NTSTATUS NameInternal; // edi
  SIZE_T NumberOfBytes; // [rsp+20h] [rbp-28h]
  SIZE_T v11; // [rsp+60h] [rbp+18h] BYREF

  v3 = (int)FileObject;
  v4 = 208LL;
  LODWORD(v11) = 208;
  while ( 1 )
  {
    PoolWithTag = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, v4, 0x6E446F49u);
    if ( !PoolWithTag )
      break;
    LOBYTE(v7) = 1;
    LODWORD(NumberOfBytes) = v11;
    LOBYTE(v5) = 1;
    NameInternal = IopQueryNameInternal(v3, v5, v7, (int)PoolWithTag, NumberOfBytes, (__int64)&v11, 0);
    if ( !NameInternal )
    {
      *ObjectNameInformation = PoolWithTag;
      return NameInternal;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( NameInternal != -2147483643 )
      return NameInternal;
    v4 = (unsigned int)v11;
  }
  return -1073741670;
}
