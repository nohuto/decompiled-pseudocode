/*
 * XREFs of PerfSelectionFeedback @ 0x1C0004BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PerfSelectionFeedback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        _QWORD *a7)
{
  *a7 = 0LL;
  *a6 = *(_DWORD *)(a1 + 72);
  return 100LL;
}
