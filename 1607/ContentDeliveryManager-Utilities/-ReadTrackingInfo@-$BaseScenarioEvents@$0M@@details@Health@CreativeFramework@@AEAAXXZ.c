/*
 * XREFs of ?ReadTrackingInfo@?$BaseScenarioEvents@$0M@@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002AAB4
 * Callers:
 *     ?EvaluateStateFlags@?$BaseEventsWithEvaluation@$00$0BA@@details@Health@CreativeFramework@@MEAA?AW4HealthStateFlags@234@XZ @ 0x18002A5D0 (-EvaluateStateFlags@-$BaseEventsWithEvaluation@$00$0BA@@details@Health@CreativeFramework@@MEAA-A.c)
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

LSTATUS __fastcall CreativeFramework::Health::details::BaseScenarioEvents<12>::ReadTrackingInfo(__int64 a1)
{
  const WCHAR *v1; // rdx
  bool v2; // cf
  _DWORD *v3; // rdi
  LSTATUS result; // eax
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  v1 = (const WCHAR *)(a1 + 176);
  *(_WORD *)(a1 + 208) = 256;
  v2 = *(_QWORD *)(a1 + 200) < 8uLL;
  v3 = (_DWORD *)(a1 + 8);
  pcbData = 92;
  if ( !v2 )
    v1 = *(const WCHAR **)v1;
  result = RegGetValueW(HKEY_CURRENT_USER, v1, 0LL, 8u, 0LL, (PVOID)(a1 + 8), &pcbData);
  if ( result || pcbData <= 4 || *(_BYTE *)v3 != 3 )
  {
    *v3 = 0;
    *(_BYTE *)v3 = 3;
    return (unsigned int)memset_0((void *)(a1 + 16), 0, 0x58uLL);
  }
  return result;
}
