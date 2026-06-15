/*
 * XREFs of ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x18001BBDC
 * Callers:
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x180005160 (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x180005260 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001A328 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

void __fastcall TsSessionIdInitAccessibilityAudioSettings(DWORD SessionId, int a2)
{
  struct TSSession *v4; // rax
  struct TSSession *v5; // [rsp+40h] [rbp+18h] BYREF

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
  if ( !(unsigned int)TsSessionFromSessionId(SessionId, 1, 0LL, &v5) )
  {
    v4 = v5;
    *((_DWORD *)v5 + 91) = a2;
    *((_DWORD *)v4 + 90) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
}
