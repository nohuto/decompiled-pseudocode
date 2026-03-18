/*
 * XREFs of PoSetFixedWakeSource @ 0x1403D2560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PoSetFixedWakeSource(int a1)
{
  PopFixedWakeSourceMask |= a1;
}
