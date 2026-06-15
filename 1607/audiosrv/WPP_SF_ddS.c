/*
 * XREFs of WPP_SF_ddS @ 0x180079EC0
 * Callers:
 *     ?MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180079CB0 (-MmeOnDefaultDeviceChanged@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_i.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_ddS(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, __int64 a6)
{
  __int64 v6; // rax
  int v8; // [rsp+88h] [rbp+20h] BYREF

  v8 = a4;
  if ( a6 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(a6 + 2 * v6) );
  }
  return EtwTraceMessage(a1, 43LL, &WPP_b102d38601a836944f027ba64192a35a_Traceguids, 28LL, &v8, 4LL, &a5);
}
