/*
 * XREFs of MmMapViewInSystemSpaceEx @ 0x14051BF38
 * Callers:
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404B8D20 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x14051BD60 (MiMapImageInSystemSpace.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x14051BF64 (MiMapViewInSystemSpace.c)
 */

__int64 __fastcall MmMapViewInSystemSpaceEx(int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  return MiMapViewInSystemSpace(a1, (unsigned int)&unk_14034EA70, a2, a3, a4, a5);
}
