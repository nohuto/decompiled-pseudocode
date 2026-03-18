/*
 * XREFs of CmpQueryFileSecurityDescriptor @ 0x1403DD9C0
 * Callers:
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     CmpInitHiveFromFile @ 0x1403DCB84 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1403DD4E4 (CmpOpenHiveFile.c)
 *     CmpStartRMLog @ 0x140542840 (CmpStartRMLog.c)
 * Callees:
 *     ZwQuerySecurityObject @ 0x140152EC0 (ZwQuerySecurityObject.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpQueryFileSecurityDescriptor(HANDLE Handle, _QWORD *a2)
{
  PVOID PoolWithTag; // rdi
  NTSTATUS SecurityObject; // ebx
  __int64 result; // rax
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp+10h] BYREF

  PoolWithTag = 0LL;
  LODWORD(NumberOfBytes) = 0;
  SecurityObject = ZwQuerySecurityObject(Handle, 4u, 0LL, 0, (PULONG)&NumberOfBytes);
  if ( SecurityObject == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64734D43u);
    if ( PoolWithTag )
    {
      SecurityObject = ZwQuerySecurityObject(Handle, 4u, PoolWithTag, NumberOfBytes, (PULONG)&NumberOfBytes);
      if ( SecurityObject < 0 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
    }
    else
    {
      SecurityObject = -1073741670;
    }
  }
  else if ( !SecurityObject )
  {
    SecurityObject = -1073741823;
  }
  result = (unsigned int)SecurityObject;
  *a2 = PoolWithTag;
  return result;
}
