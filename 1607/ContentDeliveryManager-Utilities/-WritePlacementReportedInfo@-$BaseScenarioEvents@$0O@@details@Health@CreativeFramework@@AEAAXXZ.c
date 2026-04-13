/*
 * XREFs of ?WritePlacementReportedInfo@?$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002DCA8
 * Callers:
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002AD2C (--$HandleEvent@$09I_K@-$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002AE74 (--$HandleEvent@$09I_K@-$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002AFBC (--$HandleEvent@$09I_K@-$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0N@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B104 (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0N@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0O@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B24C (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0O@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0M@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B394 (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0M@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B4DC (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0P@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B624 (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0P@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$0BA@$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x18002B76C (--$HandleEvent@$09I_K@-$OffersHealthTracker@$0BA@$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x18002B8B4 (_anonymous_namespace_--PlacementHealth--HandleEvent_9_.c)
 *     ??1?$BaseScenarioEvents@$0BA@@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002C588 (--1-$BaseScenarioEvents@$0BA@@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ??1?$BaseScenarioEvents@$0P@@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002C6B4 (--1-$BaseScenarioEvents@$0P@@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ??1?$BaseScenarioEvents@$0L@@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002C7E0 (--1-$BaseScenarioEvents@$0L@@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ??1?$BaseScenarioEvents@$0M@@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002C90C (--1-$BaseScenarioEvents@$0M@@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ??1?$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002CA38 (--1-$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ??1?$BaseScenarioEvents@$0N@@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002CB64 (--1-$BaseScenarioEvents@$0N@@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ??1?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002CC90 (--1-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ??1?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002CDBC (--1-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@QEAA@XZ.c)
 *     ??1?$BaseScenarioEvents@$00@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002CEE8 (--1-$BaseScenarioEvents@$00@details@Health@CreativeFramework@@QEAA@XZ.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18001B7B8 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(__int64 a1)
{
  const WCHAR *v2; // rdx
  unsigned int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rdx
  HKEY v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 211) && *(_BYTE *)(a1 + 210) )
  {
    hKey = 0LL;
    v2 = (const WCHAR *)(a1 + 176);
    if ( *(_QWORD *)(a1 + 200) >= 8uLL )
      v2 = *(const WCHAR **)v2;
    v3 = RegCreateKeyExW(HKEY_CURRENT_USER, v2, 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL);
    if ( v3 )
    {
      v5 = 440LL;
    }
    else
    {
      v3 = RegSetValueExW(hKey, L"PlacementReported", 0, 3u, (const BYTE *)(a1 + 104), 0x24u);
      if ( !v3 )
        goto LABEL_10;
      v5 = 443LL;
    }
    wil::details::in1diag3::_Log_Win32(retaddr, (void *)v5, v4, (const char *)v3);
LABEL_10:
    v6 = hKey;
    *(_BYTE *)(a1 + 210) = 0;
    if ( v6 )
      RegCloseKey(v6);
  }
}
