/*
 * XREFs of ?ReadTrackingInfo@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x180019880
 * Callers:
 *     ?EvaluateStateFlags@?$BaseEventsWithEvaluation@$00$00@details@Health@CreativeFramework@@MEAA?AW4HealthStateFlags@234@XZ @ 0x1800194E0 (-EvaluateStateFlags@-$BaseEventsWithEvaluation@$00$00@details@Health@CreativeFramework@@MEAA-AW4.c)
 *     ?Evaluate@?$BaseScenarioEvents@$00@details@Health@CreativeFramework@@AEAAXXZ @ 0x180020464 (-Evaluate@-$BaseScenarioEvents@$00@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ @ 0x180020708 (-Evaluate@-$BaseScenarioEvents@$01@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?Evaluate@?$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ @ 0x1800209B0 (-Evaluate@-$BaseScenarioEvents@$02@details@Health@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x1800280CC (memset_0.c)
 */

LSTATUS __fastcall CreativeFramework::Health::details::BaseScenarioEvents<3>::ReadTrackingInfo(__int64 a1)
{
  const WCHAR *v1; // rdx
  bool v2; // cf
  _DWORD *v3; // rdi
  LSTATUS result; // eax
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF

  v1 = (const WCHAR *)(a1 + 168);
  *(_WORD *)(a1 + 200) = 256;
  v2 = *(_QWORD *)(a1 + 192) < 8uLL;
  v3 = (_DWORD *)(a1 + 8);
  pcbData = 84;
  if ( !v2 )
    v1 = *(const WCHAR **)v1;
  result = RegGetValueW(HKEY_CURRENT_USER, v1, 0LL, 8u, 0LL, (PVOID)(a1 + 8), &pcbData);
  if ( result || pcbData <= 4 || *(_BYTE *)v3 != 1 )
  {
    *v3 = 0;
    *(_BYTE *)v3 = 1;
    return (unsigned int)memset_0((void *)(a1 + 16), 0, 0x50uLL);
  }
  return result;
}
