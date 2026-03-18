/*
 * XREFs of ?SetDelayableTimer@@YAXKK@Z @ 0x1C007A79C
 * Callers:
 *     InternalSetTimer @ 0x1C007A390 (InternalSetTimer.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDelayableTimer(int a1, int a2)
{
  __int64 v3; // rdx

  v3 = -10000LL * a1;
  if ( a1 == a2 )
    KeSetTimer(gptmrMaster, (LARGE_INTEGER)v3, 0LL);
  else
    KeSetCoalescableTimer(gptmrMaster, (LARGE_INTEGER)v3, 0, a2 - a1, 0LL);
}
