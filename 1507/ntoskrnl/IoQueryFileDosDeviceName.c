/*
 * XREFs of IoQueryFileDosDeviceName @ 0x140549C1C
 * Callers:
 *     CcMmLogLostDelayedWriteError @ 0x1401DD19C (CcMmLogLostDelayedWriteError.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopQueryNameInternal @ 0x140426C40 (IopQueryNameInternal.c)
 */

NTSTATUS __stdcall IoQueryFileDosDeviceName(PFILE_OBJECT FileObject, POBJECT_NAME_INFORMATION *ObjectNameInformation)
{
  SIZE_T v2; // rdi
  __int64 v5; // rdx
  _OBJECT_NAME_INFORMATION *PoolWithTag; // rbx
  NTSTATUS NameInternal; // edi
  SIZE_T NumberOfBytes; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = 208LL;
  LODWORD(v10) = 208;
  while ( 1 )
  {
    PoolWithTag = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, v2, 0x6E446F49u);
    if ( !PoolWithTag )
      break;
    LODWORD(NumberOfBytes) = v2;
    NameInternal = IopQueryNameInternal(
                     (__int64)FileObject,
                     v5,
                     1,
                     &PoolWithTag->Name,
                     NumberOfBytes,
                     (unsigned int *)&v10,
                     0);
    if ( !NameInternal )
    {
      *ObjectNameInformation = PoolWithTag;
      return NameInternal;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( NameInternal != -2147483643 )
      return NameInternal;
    v2 = (unsigned int)v10;
  }
  return -1073741670;
}
