/*
 * XREFs of ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x18001B9C0
 * Callers:
 *     GetAudioSessionManager @ 0x180005890 (GetAudioSessionManager.c)
 *     AudioServerIsFormatSupported @ 0x180019680 (AudioServerIsFormatSupported.c)
 *     AudioServerCreateStream @ 0x18002B8A0 (AudioServerCreateStream.c)
 *     AudioServerInitialize @ 0x18002BC30 (AudioServerInitialize.c)
 *     AudioSessionManagerGetCurrentSession @ 0x180037D30 (AudioSessionManagerGetCurrentSession.c)
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001D7D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 */

int __fastcall CWindowsPolicyManager::RpcGetProcess(CWindowsPolicyManager *this, void *a2, struct IAudioProcess **a3)
{
  struct IAudioProcess *v3; // rbx
  int result; // eax
  struct CProcess *v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = 0LL;
  result = 0;
  if ( !a3 )
    result = -2147467261;
  if ( result >= 0 )
  {
    result = CApplicationManager::RpcGetProcess((CApplicationManager *)0x80004003LL, a2, &v6);
    if ( result >= 0 )
    {
      if ( v6 )
        v3 = (struct CProcess *)((char *)v6 + 16);
      *a3 = v3;
    }
  }
  return result;
}
