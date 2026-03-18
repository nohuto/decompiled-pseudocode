/*
 * XREFs of ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z @ 0x1C0066098
 * Callers:
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0065F48 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0010858 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     ??0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z @ 0x1C0064A50 (--0VIDMM_RECYCLE_BLOCK@@QEAA@PEAVVIDMM_RECYCLE_HEAP@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C0065034 (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 */

struct VIDMM_RECYCLE_BLOCK *__fastcall VIDMM_RECYCLE_HEAP::CreateBlockForType(
        VIDMM_RECYCLE_HEAP *this,
        ULONG_PTR a2,
        char a3)
{
  VIDMM_RECYCLE_BLOCK *v6; // rax
  __int64 v7; // rcx
  VIDMM_RECYCLE_BLOCK *v8; // rbx
  __int64 v9; // rax
  __int64 v11; // rcx
  __int64 v12; // rax

  v6 = (VIDMM_RECYCLE_BLOCK *)operator new(0x70uLL, 0x31316956u, PagedPool);
  if ( v6 )
    v8 = VIDMM_RECYCLE_BLOCK::VIDMM_RECYCLE_BLOCK(v6, this);
  else
    v8 = 0LL;
  if ( !v8 )
  {
    _InterlockedIncrement(&dword_1C0027530);
    v9 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v9 + 24) = 8410LL;
    WdLogEvent5_WdLowResource(v9);
    return 0LL;
  }
  if ( (int)VIDMM_RECYCLE_BLOCK::Allocate(v8, a2, a3) < 0 )
  {
    _InterlockedIncrement(&dword_1C0027530);
    v12 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v12 + 24) = 8420LL;
    WdLogEvent5_WdLowResource(v12);
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v8);
    return 0LL;
  }
  return v8;
}
