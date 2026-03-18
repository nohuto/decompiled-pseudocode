/*
 * XREFs of ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x18004FAD4
 * Callers:
 *     ?Release@CVisual@@UEAAKXZ @ 0x18004ED80 (-Release@CVisual@@UEAAKXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180051DA4 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800ACB14 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetInteractionInternal(CVisual *this, struct CInteraction *a2)
{
  struct CInteraction *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == (struct CInteraction *)`CVisual::SetInteractionInternal'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 34) + 4LL) &= ~0x2000000u;
  else
    CSparseStorage::SetData((CVisual *)((char *)this + 272), 7u, 8u, &v2);
}
