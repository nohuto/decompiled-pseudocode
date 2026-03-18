/*
 * XREFs of KeSetMaximumCountPriQueue @ 0x1401DB0FC
 * Callers:
 *     ExpWorkerThreadBalanceManager @ 0x140566108 (ExpWorkerThreadBalanceManager.c)
 * Callees:
 *     <none>
 */

void __fastcall KeSetMaximumCountPriQueue(__int64 a1, int a2)
{
  if ( !a2 )
    a2 = KeNumberProcessors_0;
  *(_DWORD *)(a1 + 664) = a2;
}
