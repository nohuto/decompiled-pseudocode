/*
 * XREFs of _lambda_403eb64f09a73babfd6e65f383c20483_::operator() @ 0x18000A894
 * Callers:
 *     ??$_Call@AEAV_lambda_403eb64f09a73babfd6e65f383c20483_@@AEBUParsedTaskbarLayout@@@_Invoker_functor@std@@SA?AUSelectionData@StartLayout@@AEAV_lambda_403eb64f09a73babfd6e65f383c20483_@@AEBUParsedTaskbarLayout@@@Z @ 0x18000C860 (--$_Call@AEAV_lambda_403eb64f09a73babfd6e65f383c20483_@@AEBUParsedTaskbarLayout@@@_Invoker_funct.c)
 * Callees:
 *     ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x180009F48 (-Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_403eb64f09a73babfd6e65f383c20483_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  *(_DWORD *)a2 = 0;
  *(_WORD *)(a2 + 4) = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_WORD *)(a2 + 60) = 0;
  *(_DWORD *)(a2 + 64) = 0;
  StartLayout::SelectionData::Copy(
    (StartLayout::SelectionData *)a2,
    (const struct StartLayout::SelectionData *)(a3 + 32));
  return a2;
}
