/*
 * XREFs of ?FlushHeapTransitions@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0052628
 * Callers:
 *     ?VidMmFlushHeapTransitions@@YAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00145D0 (-VidMmFlushHeapTransitions@@YAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00117CC (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FlushHeapTransitions(VIDMM_GLOBAL *this)
{
  __int64 v1; // rbx
  __int64 v2; // rcx

  v1 = 0LL;
  if ( DXGPROCESS::GetCurrent() )
  {
    v2 = *((_QWORD *)DXGPROCESS::GetCurrent() + 9);
    if ( v2 )
      v1 = *(_QWORD *)(v2 + 8);
  }
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 24) + 136LL))(*(_QWORD *)(v1 + 24));
}
