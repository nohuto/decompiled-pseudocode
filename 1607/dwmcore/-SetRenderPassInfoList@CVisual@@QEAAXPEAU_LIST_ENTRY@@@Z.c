/*
 * XREFs of ?SetRenderPassInfoList@CVisual@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x180138DA8
 * Callers:
 *     ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x180138058 (-CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInf.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800ACB14 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetRenderPassInfoList(CVisual *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == (struct _LIST_ENTRY *)`CVisual::SetRenderPassInfoList'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 34) + 4LL) &= ~0x40000u;
  else
    CSparseStorage::SetData((char **)this + 34, 14, 8u, &v2);
}
