/*
 * XREFs of ?ndisInitializeNsiInitFn@@YAKPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1C00AE2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C001CC6C (-ndisInitializeNsiHelper@@YAJXZ.c)
 */

_BOOL8 __fastcall ndisInitializeNsiInitFn(__int64 a1, __int64 a2, PVOID *a3)
{
  return (int)ndisInitializeNsiHelper(a1, a2, (__int64)a3) >= 0;
}
