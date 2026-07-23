/*
 * XREFs of PnprGetStackLimits @ 0x1401D02B8
 * Callers:
 *     PnprRecopyMirrorPages @ 0x1401D05CC (PnprRecopyMirrorPages.c)
 *     PnprQuiesceProcessorDpc @ 0x1403DC538 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x14004EF40 (KeQueryCurrentStackInformation.c)
 *     KeGetCurrentStackPointer @ 0x14015E0C0 (KeGetCurrentStackPointer.c)
 */

bool __fastcall PnprGetStackLimits(char **a1, unsigned __int64 *a2)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  *a1 = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformation(&v4, &v5, a2);
}
