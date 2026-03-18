/*
 * XREFs of ?PageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C0050D04
 * Callers:
 *     ?VidMmPageInDevice@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@@Z @ 0x1C000E2F0 (-VidMmPageInDevice@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@@Z.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C003B628 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInDevice(VIDMM_GLOBAL *this, struct VIDMM_DEVICE *a2)
{
  _QWORD v5[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( *((_QWORD *)a2 + 21) )
    return 0LL;
  memset(v5, 0, 0x50uLL);
  v5[3] = a2;
  v5[0] = -4294967180LL;
  return VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v5);
}
