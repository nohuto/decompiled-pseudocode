/*
 * XREFs of MmMapViewInSystemSpaceEx @ 0x1403C7C94
 * Callers:
 *     MiMapImageInSystemSpace @ 0x1403C72D4 (MiMapImageInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140416800 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1403C7CC0 (MiMapViewInSystemSpace.c)
 */

__int64 __fastcall MmMapViewInSystemSpaceEx(int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  return MiMapViewInSystemSpace(a1, (unsigned int)&unk_1402FE5C0, a2, a3, a4, a5);
}
