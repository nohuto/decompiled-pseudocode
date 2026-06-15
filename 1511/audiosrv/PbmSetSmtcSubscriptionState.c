/*
 * XREFs of PbmSetSmtcSubscriptionState @ 0x18009E200
 * Callers:
 *     s_pbmSetSmtcSubscriptionState @ 0x180091660 (s_pbmSetSmtcSubscriptionState.c)
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001D7D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x18009F164 (-SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 */

__int64 __fastcall PbmSetSmtcSubscriptionState(void *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  CApplicationManager *v7; // rcx
  int Process; // eax
  __int64 v9; // rcx
  struct CProcess *v10; // rbx
  struct CProcess *v12; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v12 = 0LL;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_17b92df939233e863430647977143f3d_Traceguids, a2);
  }
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(v7, a1, &v12);
    v10 = v12;
    v3 = Process;
    if ( Process >= 0 )
      v3 = CApplicationManager::SetSmtcSubscriptionState(v9, v12, a2, a3);
    if ( v10 )
      CUnknown::Release(v10);
  }
  return v3;
}
