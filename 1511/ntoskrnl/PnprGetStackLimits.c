/*
 * XREFs of PnprGetStackLimits @ 0x1401C0F3C
 * Callers:
 *     PnprRecopyMirrorPages @ 0x1401C125C (PnprRecopyMirrorPages.c)
 *     PnprQuiesceProcessorDpc @ 0x1403B041C (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x140028340 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x140154400 (KeGetCurrentStackPointer.c)
 */

bool __fastcall PnprGetStackLimits(char **a1, unsigned __int64 *a2)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  *a1 = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformation(&v4, &v5, a2);
}
