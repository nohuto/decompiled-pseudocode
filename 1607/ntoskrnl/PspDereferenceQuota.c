/*
 * XREFs of PspDereferenceQuota @ 0x14067D038
 * Callers:
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 * Callees:
 *     <none>
 */

void __fastcall PspDereferenceQuota(volatile signed __int32 *P, __int64 a2, __int64 a3, _BOOL8 a4)
{
  _InterlockedDecrement(P + 129);
  PspDereferenceQuotaBlock(P, a2, a3, a4);
}
