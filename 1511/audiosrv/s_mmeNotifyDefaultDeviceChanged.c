/*
 * XREFs of s_mmeNotifyDefaultDeviceChanged @ 0x180091310
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x18003A3D0 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180091080 (-MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_i.c)
 */

DWORD __fastcall s_mmeNotifyDefaultDeviceChanged(
        void *a1,
        void *a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        const unsigned __int16 *a4)
{
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v6; // esi
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF

  v6 = (int)a2;
  if ( !(unsigned int)CheckRpcClientTokenMembershipsDisjunctive(a1, a2, v8) )
    return GetLastError();
  if ( v8[0] )
  {
    MmeOnDefaultDeviceChanged(v6, a3, a4);
    if ( v8[0] )
      return 0;
  }
  return 5;
}
