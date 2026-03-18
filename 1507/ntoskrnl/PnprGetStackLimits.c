/*
 * XREFs of PnprGetStackLimits @ 0x1401FCB00
 * Callers:
 *     PnprRecopyMirrorPages @ 0x1401FCDFC (PnprRecopyMirrorPages.c)
 *     PnprQuiesceProcessorDpc @ 0x140400A08 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x14001D5D0 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x140182D80 (KeGetCurrentStackPointer.c)
 */

bool __fastcall PnprGetStackLimits(char **a1, unsigned __int64 *a2)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  *a1 = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformation(&v4, &v5, a2);
}
