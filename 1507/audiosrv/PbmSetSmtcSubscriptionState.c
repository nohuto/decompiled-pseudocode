/*
 * XREFs of PbmSetSmtcSubscriptionState @ 0x18000557C
 * Callers:
 *     s_pbmSetSmtcSubscriptionState @ 0x180005570 (s_pbmSetSmtcSubscriptionState.c)
 * Callees:
 *     ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@H@Z @ 0x1800025F4 (-SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@H@Z.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B5F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall PbmSetSmtcSubscriptionState(void *a1, unsigned int a2)
{
  unsigned int v2; // edi
  CApplicationManager *v5; // rcx
  int Process; // eax
  CApplicationManager *v7; // rcx
  struct CProcess *v8; // rbx
  struct CProcess *v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v10 = 0LL;
  v5 = *(CApplicationManager **)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      11LL,
      &WPP_cc4817decd7d1c7b2aff0e99c7413fd5_Traceguids,
      a2);
  }
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(v5, a1, &v10);
    v8 = v10;
    v2 = Process;
    if ( Process >= 0 )
      v2 = CApplicationManager::SetSmtcSubscriptionState(v7, v10, a2);
    if ( v8 )
      CUnknown::Release(v8);
  }
  return v2;
}
