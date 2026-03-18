/*
 * XREFs of DwmAsyncNotifyDigitizerActiveContacts @ 0x1C025F70C
 * Callers:
 *     ?RemoveFromActiveDevices@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@HPEAH@Z @ 0x1C01C5E58 (-RemoveFromActiveDevices@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@HPEAH@Z.c)
 *     DecActiveContacts @ 0x1C01C83FC (DecActiveContacts.c)
 *     DwmAsyncNotifyDigitizerActiveContactsWrap @ 0x1C01C9760 (DwmAsyncNotifyDigitizerActiveContactsWrap.c)
 *     ExtractDeviceUsages @ 0x1C01C995C (ExtractDeviceUsages.c)
 *     IncActiveContacts @ 0x1C01CBD8C (IncActiveContacts.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall DwmAsyncNotifyDigitizerActiveContacts(PVOID Object, int a2, int a3)
{
  unsigned int v6; // ebx
  _DWORD v8[14]; // [rsp+20h] [rbp-58h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset((char *)v8 + 2, 0, 0x32uLL);
    v8[0] = 3407884;
    LOWORD(v8[1]) = 0x8000;
    v8[10] = 1073741910;
    v8[11] = a2;
    v8[12] = a3;
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
