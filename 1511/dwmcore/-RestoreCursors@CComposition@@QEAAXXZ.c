/*
 * XREFs of ?RestoreCursors@CComposition@@QEAAXXZ @ 0x1800947D4
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007D178 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B7D20 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18010A4B4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1801009F4 (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z @ 0x180105A70 (-RemoveAt@-$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z.c)
 *     ?Restore@CCursorVisual@@QEAAXXZ @ 0x18010ADE4 (-Restore@CCursorVisual@@QEAAXXZ.c)
 */

void __fastcall CComposition::RestoreCursors(CComposition *this)
{
  int v1; // ebx
  _QWORD *v2; // r14
  __int64 v3; // rdi
  CCursorVisual *v4; // rsi
  unsigned int v5; // edx

  v1 = *((_DWORD *)this + 222);
  if ( v1 > 0 )
  {
    v2 = (_QWORD *)((char *)this + 864);
    v3 = (unsigned int)(v1 - 1);
    do
    {
      v4 = *(CCursorVisual **)(*v2 + 8 * v3);
      CCursorVisual::Restore(v4);
      if ( !**((_QWORD **)v4 + 1) )
      {
        DynArray<CWARPCallbackRenderer *,0>::RemoveAt(v2, (unsigned int)v3);
        CCursorVisual::`scalar deleting destructor'(v4, v5);
      }
      --v1;
      v3 = (unsigned int)(v3 - 1);
    }
    while ( v1 > 0 );
  }
}
