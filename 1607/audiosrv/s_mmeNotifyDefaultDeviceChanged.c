/*
 * XREFs of s_mmeNotifyDefaultDeviceChanged @ 0x180079F70
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z @ 0x180029E18 (-CheckRpcClientTokenMembershipsDisjunctive@@YAHPEAX0PEAH@Z.c)
 *     ?MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180079CB0 (-MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_i.c)
 */

DWORD __fastcall s_mmeNotifyDefaultDeviceChanged(
        __int64 a1,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        const unsigned __int16 *a4)
{
  void *v7; // rdx
  void *v8; // rcx
  int v10[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( !(unsigned int)IsMmeNotifyDefaultDeviceChangedSupported() )
    return 1;
  if ( !(unsigned int)CheckRpcClientTokenMembershipsDisjunctive(v8, v7, v10) )
    return GetLastError();
  if ( v10[0] )
  {
    MmeOnDefaultDeviceChanged(a2, a3, a4);
    if ( v10[0] )
      return 0;
  }
  return 5;
}
