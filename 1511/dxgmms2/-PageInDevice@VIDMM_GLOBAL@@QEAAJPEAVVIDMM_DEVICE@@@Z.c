/*
 * XREFs of ?PageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C0063104
 * Callers:
 *     ?VidMmPageInDevice@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@@Z @ 0x1C0014E10 (-VidMmPageInDevice@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@@Z.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0067AF4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInDevice(VIDMM_GLOBAL *this, struct VIDMM_DEVICE *a2)
{
  bool v4; // r8
  _QWORD v6[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( *((_QWORD *)a2 + 21) )
    return 0LL;
  memset(v6, 0, 0x50uLL);
  v6[3] = a2;
  v6[0] = -4294967180LL;
  return VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v6, v4);
}
