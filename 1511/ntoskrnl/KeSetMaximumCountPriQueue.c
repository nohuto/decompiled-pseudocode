/*
 * XREFs of KeSetMaximumCountPriQueue @ 0x1401CB618
 * Callers:
 *     ExpWorkerThreadBalanceManager @ 0x140536444 (ExpWorkerThreadBalanceManager.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetMaximumCountPriQueue(__int64 a1, int a2)
{
  if ( !a2 )
    a2 = KeNumberProcessors_0;
  *(_DWORD *)(a1 + 664) = a2;
}
