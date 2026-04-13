/*
 * XREFs of ??1?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@QEAA@XZ @ 0x18001A1A4
 * Callers:
 *     ??__Fs_traits@?1???$HandleEvent@$09I_K@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXI_K@Z@YAXXZ @ 0x180029EA0 (--__Fs_traits@-1---$HandleEvent@$09I_K@-$OffersHealthTracker@$02$00@details@Health@CreativeFrame.c)
 *     ??__Fs_traits@?1???$HandleEvent@$09I_K@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXI_K@Z@YAXXZ @ 0x180029EC0 (--__Fs_traits@-1---$HandleEvent@$09I_K@-$OffersHealthTracker@$01$00@details@Health@CreativeFrame.c)
 *     ??__Fs_traits@?1???$HandleEvent@$09I_K@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXI_K@Z@YAXXZ @ 0x180029EE0 (--__Fs_traits@-1---$HandleEvent@$09I_K@-$OffersHealthTracker@$00$00@details@Health@CreativeFrame.c)
 *     ??__Fs_traits@?1???$HandleEvent@$00$$$V@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXXZ@YAXXZ @ 0x180029F00 (--__Fs_traits@-1---$HandleEvent@$00$$$V@-$OffersHealthTracker@$02$00@details@Health@CreativeFram.c)
 *     ??__Fs_traits@?1???$HandleEvent@$00$$$V@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXXZ@YAXXZ @ 0x180029F20 (--__Fs_traits@-1---$HandleEvent@$00$$$V@-$OffersHealthTracker@$01$00@details@Health@CreativeFram.c)
 *     ??__Fs_traits@?1???$HandleEvent@$00$$$V@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXXZ@YAXXZ @ 0x180029F40 (--__Fs_traits@-1---$HandleEvent@$00$$$V@-$OffersHealthTracker@$00$00@details@Health@CreativeFram.c)
 *     ??__Fs_traits@?1???$HandleEvent@$08$$$V@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXXZ@YAXXZ @ 0x180029F60 (--__Fs_traits@-1---$HandleEvent@$08$$$V@-$OffersHealthTracker@$02$00@details@Health@CreativeFram.c)
 *     ??__Fs_traits@?1???$HandleEvent@$08$$$V@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXXZ@YAXXZ @ 0x180029F80 (--__Fs_traits@-1---$HandleEvent@$08$$$V@-$OffersHealthTracker@$01$00@details@Health@CreativeFram.c)
 *     ??__Fs_traits@?1???$HandleEvent@$08$$$V@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXXZ@YAXXZ @ 0x180029FA0 (--__Fs_traits@-1---$HandleEvent@$08$$$V@-$OffersHealthTracker@$00$00@details@Health@CreativeFram.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800083D8 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?WritePlacementReportedInfo@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x18001AA50 (-WritePlacementReportedInfo@-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?WriteHealthEvaluationInfo@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x18001AB30 (-WriteHealthEvaluationInfo@-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ.c)
 */

void __fastcall CreativeFramework::Health::details::BaseScenarioEvents<3>::~BaseScenarioEvents<3>(__int64 a1)
{
  const WCHAR *v2; // rdx
  unsigned int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rdx
  HKEY v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)a1 = &CreativeFramework::Health::details::BaseScenarioEvents<3>::`vftable';
  if ( !*(_BYTE *)(a1 + 201) || !*(_BYTE *)(a1 + 200) )
    goto LABEL_12;
  v2 = (const WCHAR *)(a1 + 168);
  hKey = 0LL;
  if ( *(_QWORD *)(a1 + 192) >= 8uLL )
    v2 = *(const WCHAR **)v2;
  v3 = RegCreateKeyExW(HKEY_CURRENT_USER, v2, 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL);
  if ( v3 )
  {
    v5 = 430LL;
  }
  else
  {
    v3 = RegSetValueExW(hKey, 0LL, 0, 3u, (const BYTE *)(a1 + 8), 0x54u);
    if ( !v3 )
      goto LABEL_10;
    v5 = 433LL;
  }
  wil::details::in1diag3::_Log_Win32(retaddr, v5, v4, (const char *)v3);
LABEL_10:
  v6 = hKey;
  *(_BYTE *)(a1 + 200) = 0;
  if ( v6 )
    RegCloseKey(v6);
LABEL_12:
  CreativeFramework::Health::details::BaseScenarioEvents<3>::WritePlacementReportedInfo(a1);
  CreativeFramework::Health::details::BaseScenarioEvents<3>::WriteHealthEvaluationInfo(a1);
  if ( *(_QWORD *)(a1 + 192) >= 8uLL )
    operator delete(*(void **)(a1 + 168));
  *(_QWORD *)(a1 + 192) = 7LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_WORD *)(a1 + 168) = 0;
}
