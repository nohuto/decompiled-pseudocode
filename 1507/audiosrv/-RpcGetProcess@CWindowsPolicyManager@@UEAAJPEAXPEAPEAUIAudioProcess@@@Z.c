/*
 * XREFs of ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180021EB0
 * Callers:
 *     AudioServerInitialize @ 0x18000A980 (AudioServerInitialize.c)
 *     AudioServerIsFormatSupported @ 0x180022F00 (AudioServerIsFormatSupported.c)
 *     AudioSessionManagerGetCurrentSession @ 0x18002B720 (AudioSessionManagerGetCurrentSession.c)
 *     GetAudioSessionManager @ 0x18002DD50 (GetAudioSessionManager.c)
 *     ?RpcAudioDataFlowAccessCheck@@YAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAPEAUIAudioProcess@@@Z @ 0x18002F880 (-RpcAudioDataFlowAccessCheck@@YAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KPEAPEAUIAu.c)
 *     AudioServerIsOffloadCapable @ 0x180037810 (AudioServerIsOffloadCapable.c)
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B5F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::RpcGetProcess(
        CWindowsPolicyManager *this,
        void *a2,
        struct IAudioProcess **a3)
{
  struct IAudioProcess *v3; // rbx
  __int64 result; // rax
  struct CProcess *v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = 0LL;
  result = 0LL;
  if ( !a3 )
    result = 2147500035LL;
  if ( (int)result >= 0 )
  {
    result = CApplicationManager::RpcGetProcess((CApplicationManager *)0x80004003LL, a2, &v6);
    if ( (int)result >= 0 )
    {
      if ( v6 )
        v3 = (struct CProcess *)((char *)v6 + 16);
      *a3 = v3;
    }
  }
  return result;
}
