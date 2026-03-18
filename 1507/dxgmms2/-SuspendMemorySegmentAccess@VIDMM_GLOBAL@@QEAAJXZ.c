/*
 * XREFs of ?SuspendMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00539AC
 * Callers:
 *     VidMmSuspendMemorySegmentAccess @ 0x1C000E860 (VidMmSuspendMemorySegmentAccess.c)
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C004CC98 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C003B628 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::SuspendMemorySegmentAccess(VIDMM_GLOBAL *this)
{
  _DWORD v3[22]; // [rsp+20h] [rbp-58h] BYREF

  memset(v3, 0, 0x50uLL);
  v3[1] = -1;
  v3[0] = 110;
  return VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v3);
}
