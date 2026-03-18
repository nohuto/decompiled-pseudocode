/*
 * XREFs of ?SetRelativeOffsetInternal@CVisual@@QEAAXUD2D_VECTOR_2F@@@Z @ 0x18000C188
 * Callers:
 *     ?SetRelativeOffset@CVisual@@QEAAXMM@Z @ 0x18000C3C8 (-SetRelativeOffset@CVisual@@QEAAXMM@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800ACB14 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetRelativeOffsetInternal(CVisual *this, struct D2D_VECTOR_2F a2)
{
  struct D2D_VECTOR_2F v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  if ( a2 == `CVisual::SetRelativeOffsetInternal'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 34) + 4LL) &= ~0x400000u;
  else
    CSparseStorage::SetData((CVisual *)((char *)this + 272), 0xAu, 8u, &v2);
}
