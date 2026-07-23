/*
 * XREFs of PoFxEnableDStateReporting @ 0x14066C3FC
 * Callers:
 *     <none>
 * Callees:
 *     PoFxStartDevicePowerManagement @ 0x1401420A0 (PoFxStartDevicePowerManagement.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopFxRegisterDevice @ 0x14056711C (PopFxRegisterDevice.c)
 */

__int64 __fastcall PoFxEnableDStateReporting(struct _DEVICE_OBJECT *Object)
{
  int v2; // ebx
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v5[56]; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v6[7]; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v7[3]; // [rsp+B8h] [rbp+2Fh] BYREF

  if ( Object )
  {
    memset(v5, 0, sizeof(v5));
    memset(v6, 0, sizeof(v6));
    HIDWORD(v6[3]) = 1;
    memset(v7, 0, sizeof(v7));
    v6[4] = v7;
    v2 = PopFxRegisterDevice(Object, (int)v5, (int)v6, 1, 0LL, 0LL, &BugCheckParameter2);
    if ( v2 >= 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 616) |= 1u;
      PoFxStartDevicePowerManagement(BugCheckParameter2);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
