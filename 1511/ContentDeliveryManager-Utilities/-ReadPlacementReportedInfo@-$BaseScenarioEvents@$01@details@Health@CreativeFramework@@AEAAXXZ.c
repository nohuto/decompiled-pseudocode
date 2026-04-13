/*
 * XREFs of ?ReadPlacementReportedInfo@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x180019918
 * Callers:
 *     ?EvaluateStateFlags@?$BaseEventsWithEvaluation@$00$00@details@Health@CreativeFramework@@MEAA?AW4HealthStateFlags@234@XZ @ 0x1800194E0 (-EvaluateStateFlags@-$BaseEventsWithEvaluation@$00$00@details@Health@CreativeFramework@@MEAA-AW4.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x1800199B4 (--$HandleEvent@$09I_K@-$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x180019AF0 (--$HandleEvent@$09I_K@-$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$09I_K@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXI_K@Z @ 0x180019C2C (--$HandleEvent@$09I_K@-$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXI_K@Z.c)
 *     ??$HandleEvent@$08$$$V@PlacementHealth@?A0x15bf3041@@YAXPEBG@Z @ 0x180019D68 (--$HandleEvent@$08$$$V@PlacementHealth@-A0x15bf3041@@YAXPEBG@Z.c)
 *     ?Evaluate@?$BaseScenarioEvents@$00@details@Health@CreativeFramework@@AEAAXXZ @ 0x180020464 (-Evaluate@-$BaseScenarioEvents@$00@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x180020708 (-Evaluate@-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x1800209B0 (-Evaluate@-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x1800280CC (memset_0.c)
 */

LSTATUS __fastcall CreativeFramework::Health::details::BaseScenarioEvents<2>::ReadPlacementReportedInfo(__int64 a1)
{
  const WCHAR *v1; // rdx
  bool v2; // cf
  _DWORD *v3; // rdi
  LSTATUS result; // eax
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  v1 = (const WCHAR *)(a1 + 168);
  *(_WORD *)(a1 + 202) = 256;
  v2 = *(_QWORD *)(a1 + 192) < 8uLL;
  v3 = (_DWORD *)(a1 + 96);
  pcbData = 36;
  if ( !v2 )
    v1 = *(const WCHAR **)v1;
  result = RegGetValueW(HKEY_CURRENT_USER, v1, L"PlacementReported", 8u, 0LL, (PVOID)(a1 + 96), &pcbData);
  if ( result || pcbData <= 4 || *(_BYTE *)v3 != 1 )
  {
    *v3 = 0;
    *(_BYTE *)v3 = 1;
    return (unsigned int)memset_0((void *)(a1 + 104), 0, 0x20uLL);
  }
  return result;
}
