/*
 * XREFs of ?CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C00661E8
 * Callers:
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0065F48 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0068270 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z @ 0x1C006A234 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C0066E90 (-Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 */

struct VIDMM_RECYCLE_RANGE *__fastcall VIDMM_RECYCLE_HEAP_MGR::CreateRange(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_BLOCK *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // rdi
  VIDMM_RECYCLE_RANGE *v8; // rbx
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64); // rax
  __int64 v11; // r8
  __int64 v12; // rcx

  v4 = *((_QWORD *)this + 50);
  ++*(_DWORD *)(v4 + 20);
  v8 = (VIDMM_RECYCLE_RANGE *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v4);
  if ( v8
    || (v9 = *(unsigned int *)(v4 + 44),
        v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v4 + 48),
        v11 = *(unsigned int *)(v4 + 40),
        v12 = *(unsigned int *)(v4 + 36),
        ++*(_DWORD *)(v4 + 24),
        (v8 = (VIDMM_RECYCLE_RANGE *)v10(v12, v9, v11, v4)) != 0LL) )
  {
    VIDMM_RECYCLE_RANGE::Init(v8, a2, a3, a4);
  }
  return v8;
}
