/*
 * XREFs of ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C001C3B8
 * Callers:
 *     VidMmTerminateAdapter @ 0x1C001C7B0 (VidMmTerminateAdapter.c)
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C00647D4 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C007A210 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 */

VIDMM_GLOBAL *__fastcall VIDMM_GLOBAL::`scalar deleting destructor'(VIDMM_GLOBAL *this)
{
  VIDMM_GLOBAL::~VIDMM_GLOBAL(this);
  operator delete(this);
  return this;
}
