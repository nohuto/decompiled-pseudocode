/*
 * XREFs of ?RestoreCursors@CComposition@@QEAAXXZ @ 0x18000CD9C
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800095B8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800BB910 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180120B7C (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z @ 0x1800B70B0 (-RemoveAt@-$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1800B71EC (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 *     ?Restore@CCursorVisual@@QEAAXXZ @ 0x18012121C (-Restore@CCursorVisual@@QEAAXXZ.c)
 */

void __fastcall CComposition::RestoreCursors(CComposition *this)
{
  int v1; // ebx
  _QWORD *v2; // rdi
  CCursorVisual *v3; // rsi
  unsigned int v4; // edx

  v1 = *((_DWORD *)this + 224);
  if ( v1 > 0 )
  {
    v2 = (_QWORD *)((char *)this + 872);
    do
    {
      v3 = *(CCursorVisual **)(*v2 + 8LL * (unsigned int)--v1);
      CCursorVisual::Restore(v3);
      if ( !**((_QWORD **)v3 + 1) )
      {
        DynArray<CCursorVisual *,0>::RemoveAt(v2, (unsigned int)v1);
        CCursorVisual::`scalar deleting destructor'(v3, v4);
      }
    }
    while ( v1 > 0 );
  }
}
