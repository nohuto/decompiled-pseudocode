/*
 * XREFs of CmpInitializeIXLock @ 0x140581878
 * Callers:
 *     CmpCloneToUnbackedKcb @ 0x1401B484C (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpInitializeIXLock(__int64 a1)
{
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
}
