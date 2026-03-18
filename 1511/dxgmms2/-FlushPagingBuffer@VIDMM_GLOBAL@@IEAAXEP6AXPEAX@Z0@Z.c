/*
 * XREFs of ?FlushPagingBuffer@VIDMM_GLOBAL@@IEAAXEP6AXPEAX@Z0@Z @ 0x1C0047E98
 * Callers:
 *     ?xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0047258 (-xWaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXE@Z @ 0x1C0049B54 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXE@Z.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C0062E54 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z @ 0x1C0085C50 (-ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z.c)
 * Callees:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FlushPagingBuffer(VIDMM_GLOBAL *this, char a2, void (*a3)(void *), void *a4)
{
  unsigned int v4; // ebx
  void (*i)(void *); // rbp

  v4 = 0;
  for ( i = a3; v4 < *((_DWORD *)this + 1604); ++v4 )
  {
    LOBYTE(a3) = a2;
    VIDMM_GLOBAL::FlushPagingBufferInternal(this, v4, (__int64)a3, i, a4, 0);
  }
}
