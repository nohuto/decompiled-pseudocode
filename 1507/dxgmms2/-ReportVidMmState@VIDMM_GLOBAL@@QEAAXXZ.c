/*
 * XREFs of ?ReportVidMmState@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0052F34
 * Callers:
 *     VidMmReportVidMmState @ 0x1C000E7C0 (VidMmReportVidMmState.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C003B628 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ReportVidMmState(VIDMM_GLOBAL *this)
{
  _DWORD v2[22]; // [rsp+20h] [rbp-58h] BYREF

  memset(v2, 0, 0x50uLL);
  v2[0] = 106;
  VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v2);
}
