/*
 * XREFs of ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C000DFF4
 * Callers:
 *     VidMmTerminateAdapter @ 0x1C000E880 (VidMmTerminateAdapter.c)
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C00389F4 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C004B3E4 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 */

VIDMM_GLOBAL *__fastcall VIDMM_GLOBAL::`scalar deleting destructor'(VIDMM_GLOBAL *this)
{
  VIDMM_GLOBAL::~VIDMM_GLOBAL(this);
  operator delete(this);
  return this;
}
