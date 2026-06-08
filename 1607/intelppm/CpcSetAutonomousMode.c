/*
 * XREFs of CpcSetAutonomousMode @ 0x1C00049B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CpcSetAutonomousMode(__int64 *a1, int a2)
{
  WriteGenAddrMaybeHidden(*a1, (_BYTE *)(a1[13] + 188), a2 != 0);
}
