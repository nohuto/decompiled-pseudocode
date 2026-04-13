/*
 * XREFs of ?ReadPlacementReportedInfo@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002AA18
 * Callers:
 *     ?EvaluateStateFlags@?$BaseEventsWithEvaluation@$00$0BA@@details@Health@CreativeFramework@@MEAA?AW4HealthStateFlags@234@XZ @ 0x18002A5D0 (-EvaluateStateFlags@-$BaseEventsWithEvaluation@$00$0BA@@details@Health@CreativeFramework@@MEAA-A.c)
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
 *     ?Evaluate@?$BaseScenarioEvents@$0BA@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180030824 (-Evaluate@-$BaseScenarioEvents@$0BA@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0P@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180030AF0 (-Evaluate@-$BaseScenarioEvents@$0P@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0L@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180030DBC (-Evaluate@-$BaseScenarioEvents@$0L@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0M@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031088 (-Evaluate@-$BaseScenarioEvents@$0M@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031354 (-Evaluate@-$BaseScenarioEvents@$0O@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$0N@@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031620 (-Evaluate@-$BaseScenarioEvents@$0N@@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x1800318EC (-Evaluate@-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031BB8 (-Evaluate@-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$00@details@Health@CreativeFramework@@AEAAXXZ @ 0x180031E84 (-Evaluate@-$BaseScenarioEvents@$00@details@Health@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x180058F42 (memset_0.c)
 */

LSTATUS __fastcall CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo(__int64 a1)
{
  const WCHAR *v1; // rdx
  bool v2; // cf
  _DWORD *v3; // rdi
  LSTATUS result; // eax
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  v1 = (const WCHAR *)(a1 + 176);
  *(_WORD *)(a1 + 210) = 256;
  v2 = *(_QWORD *)(a1 + 200) < 8uLL;
  v3 = (_DWORD *)(a1 + 104);
  pcbData = 36;
  if ( !v2 )
    v1 = *(const WCHAR **)v1;
  result = RegGetValueW(HKEY_CURRENT_USER, v1, L"PlacementReported", 8u, 0LL, (PVOID)(a1 + 104), &pcbData);
  if ( result || pcbData <= 4 || *(_BYTE *)v3 != 3 )
  {
    *v3 = 0;
    *(_BYTE *)v3 = 3;
    return (unsigned int)memset_0((void *)(a1 + 112), 0, 0x20uLL);
  }
  return result;
}
