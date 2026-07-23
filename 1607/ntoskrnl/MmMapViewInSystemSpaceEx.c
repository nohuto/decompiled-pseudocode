/*
 * XREFs of MmMapViewInSystemSpaceEx @ 0x140508F08
 * Callers:
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14042E520 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x140508D28 (MiMapImageInSystemSpace.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x140508F34 (MiMapViewInSystemSpace.c)
 */

__int64 __fastcall MmMapViewInSystemSpaceEx(int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  return MiMapViewInSystemSpace(a1, (unsigned int)&unk_1403268C0, a2, a3, a4, a5);
}
