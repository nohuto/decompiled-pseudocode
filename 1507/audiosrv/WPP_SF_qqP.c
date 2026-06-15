/*
 * XREFs of WPP_SF_qqP @ 0x18008DC3C
 * Callers:
 *     ?RetryGetSaDeviceForExclusive@CVADServer@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEAVCAudioSessionManager@@PEAUISaProvider@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6KPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BC88 (-RetryGetSaDeviceForExclusive@CVADServer@@IEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEA.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qqP(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_1ce008ef94d310117402048c610b448c_Traceguids, 80LL, (__int64 *)va);
}
