/*
 * XREFs of ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z @ 0x18004FB6C
 * Callers:
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x180052288 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800ACB14 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetRelativeLayoutSizeInternal(CVisual *this, struct D2D_SIZE_F a2)
{
  struct D2D_SIZE_F v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  if ( a2 == `CVisual::SetRelativeOffsetInternal'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 34) + 4LL) &= ~0x800000u;
  else
    CSparseStorage::SetData((CVisual *)((char *)this + 272), 9u, 8u, &v2);
}
