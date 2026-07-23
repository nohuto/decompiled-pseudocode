/*
 * XREFs of IopCaptureObjectName @ 0x1403EC9FC
 * Callers:
 *     IoBuildPoDeviceNotifyList @ 0x1403EC46C (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObQueryNameString @ 0x14054C280 (ObQueryNameString.c)
 */

_WORD *__fastcall IopCaptureObjectName(void *a1)
{
  _WORD *v1; // rbx
  _WORD *PoolWithTag; // rax
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-228h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+30h] [rbp-218h] BYREF

  v1 = 0LL;
  if ( ObQueryNameString(a1, &ObjectNameInfo, 0x200u, ReturnLength) >= 0 )
  {
    if ( ObjectNameInfo.Name.Buffer )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ObjectNameInfo.Name.Length + 2LL, 0x72775044u);
      v1 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, ObjectNameInfo.Name.Buffer, ObjectNameInfo.Name.Length);
        v1[(unsigned __int64)ObjectNameInfo.Name.Length >> 1] = 0;
      }
    }
  }
  return v1;
}
