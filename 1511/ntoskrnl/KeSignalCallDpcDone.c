/*
 * XREFs of KeSignalCallDpcDone @ 0x1400F08D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeSignalCallDpcDone(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1);
}
