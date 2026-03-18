/*
 * XREFs of ReleaseWakeReference @ 0x1C01F0AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ReleaseWakeReference(__int64 a1)
{
  return PsReleaseProcessWakeCounter(a1, 0LL);
}
