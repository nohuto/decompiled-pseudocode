/*
 * XREFs of ?ClearMoveData@CDwmMetaRegion@@QEAAXXZ @ 0x1800649E0
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800640B0 (--1CWindowNode@@MEAA@XZ.c)
 *     ?IntersectDirtyRectWithMoveData@CDwmMetaRegion@@AEAAJPEAUtagRECT@@@Z @ 0x1800B8318 (-IntersectDirtyRectWithMoveData@CDwmMetaRegion@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z @ 0x1801162E8 (-AddMoveRegion@CDwmMetaRegion@@QEAAJPEAPEAUHRGN__@@PEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CDwmMetaRegion::ClearMoveData(CDwmMetaRegion *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    DeleteObject(v2);
    *((_QWORD *)this + 3) = 0LL;
  }
  if ( *((_QWORD *)this + 4) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    DeleteObject(v3);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_BYTE *)this + 40) = 0;
}
