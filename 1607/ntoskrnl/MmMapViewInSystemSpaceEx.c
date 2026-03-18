/*
 * XREFs of MmMapViewInSystemSpaceEx @ 0x140525EA8
 * Callers:
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14042F650 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapImageInSystemSpace @ 0x140525CC8 (MiMapImageInSystemSpace.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x140525ED4 (MiMapViewInSystemSpace.c)
 */

__int64 __fastcall MmMapViewInSystemSpaceEx(int a1, int a2, int a3, __int64 a4, __int64 a5)
{
  return MiMapViewInSystemSpace(a1, (unsigned int)&unk_140326880, a2, a3, a4, a5);
}
