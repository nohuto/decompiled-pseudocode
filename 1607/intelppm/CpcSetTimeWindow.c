/*
 * XREFs of CpcSetTimeWindow @ 0x1C0004A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CpcSetTimeWindow(__int64 *a1, unsigned int a2)
{
  WriteGenAddrMaybeHidden(*a1, (_BYTE *)(a1[13] + 116), a2);
}
