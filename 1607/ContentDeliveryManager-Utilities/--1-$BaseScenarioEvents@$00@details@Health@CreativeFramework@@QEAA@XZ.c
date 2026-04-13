/*
 * XREFs of ??1?$BaseScenarioEvents@$00@details@Health@CreativeFramework@@QEAA@XZ @ 0x18002CEE8
 * Callers:
 *     ??__Fs_traits@?1???$HandleEvent@$09I_K@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXI_K@Z@YAXXZ @ 0x18005D120 (--__Fs_traits@-1---$HandleEvent@$09I_K@-$OffersHealthTracker@$00$00@details@Health@CreativeFrame.c)
 *     ??__Fs_traits@?1???$HandleEvent@$00$$V@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXXZ@YAXXZ @ 0x18005D240 (--__Fs_traits@-1---$HandleEvent@$00$$V@-$OffersHealthTracker@$00$00@details@Health@CreativeFrame.c)
 *     ??__Fs_traits@?1???$HandleEvent@$08$$V@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXXZ@YAXXZ @ 0x18005D360 (--__Fs_traits@-1---$HandleEvent@$08$$V@-$OffersHealthTracker@$00$00@details@Health@CreativeFrame.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18001B7B8 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?WriteHealthEvaluationInfo@?$BaseScenarioEvents@$0P@@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002DBC4 (-WriteHealthEvaluationInfo@-$BaseScenarioEvents@$0P@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?WritePlacementReportedInfo@?$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002DCA8 (-WritePlacementReportedInfo@-$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ.c)
 */

void __fastcall CreativeFramework::Health::details::BaseScenarioEvents<1>::~BaseScenarioEvents<1>(__int64 a1)
{
  const WCHAR *v2; // rdx
  unsigned int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rdx
  HKEY v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)a1 = &CreativeFramework::Health::details::BaseScenarioEvents<1>::`vftable';
  if ( !*(_BYTE *)(a1 + 209) || !*(_BYTE *)(a1 + 208) )
    goto LABEL_12;
  v2 = (const WCHAR *)(a1 + 176);
  hKey = 0LL;
  if ( *(_QWORD *)(a1 + 200) >= 8uLL )
    v2 = *(const WCHAR **)v2;
  v3 = RegCreateKeyExW(HKEY_CURRENT_USER, v2, 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL);
  if ( v3 )
  {
    v5 = 440LL;
  }
  else
  {
    v3 = RegSetValueExW(hKey, 0LL, 0, 3u, (const BYTE *)(a1 + 8), 0x5Cu);
    if ( !v3 )
      goto LABEL_10;
    v5 = 443LL;
  }
  wil::details::in1diag3::_Log_Win32(retaddr, (void *)v5, v4, (const char *)v3);
LABEL_10:
  v6 = hKey;
  *(_BYTE *)(a1 + 208) = 0;
  if ( v6 )
    RegCloseKey(v6);
LABEL_12:
  CreativeFramework::Health::details::BaseScenarioEvents<14>::WritePlacementReportedInfo(a1);
  CreativeFramework::Health::details::BaseScenarioEvents<15>::WriteHealthEvaluationInfo(a1);
  if ( *(_QWORD *)(a1 + 200) >= 8uLL )
    operator delete(*(void **)(a1 + 176));
  *(_QWORD *)(a1 + 200) = 7LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_WORD *)(a1 + 176) = 0;
}
