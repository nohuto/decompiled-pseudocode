/*
 * XREFs of PbmSetSmtcSubscriptionState @ 0x180016A50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@H@Z @ 0x180011460 (-SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800117F4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmSetSmtcSubscriptionState(void *a1, int a2, int a3)
{
  unsigned int v3; // edi
  CApplicationManager *v7; // rcx
  int Process; // eax
  __int64 v9; // rcx
  struct CProcess *v10; // rbx
  struct CProcess *v11; // rbx
  struct CProcess *v13; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v13 = 0LL;
  v7 = (CApplicationManager *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_b2b9e70fdf4835d1bdf2ce05ed3afacd_Traceguids, a2);
  }
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(v7, a1, &v13);
    v10 = v13;
    v3 = Process;
    if ( Process >= 0 )
      v3 = CApplicationManager::SetSmtcSubscriptionState(v9, v13, a2, a3);
    if ( v10 && _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 2, 0xFFFFFFFF) == 1 )
    {
      v11 = v13;
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v13 + 32LL))(v13);
      (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
    }
  }
  return v3;
}
