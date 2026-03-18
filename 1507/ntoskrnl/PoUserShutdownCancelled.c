/*
 * XREFs of PoUserShutdownCancelled @ 0x140566C1C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PoUserShutdownCancelled(__int64 a1)
{
  LOBYTE(a1) = 1;
  return PopUserShutdownCancelled(a1);
}
