/*
 * XREFs of ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x180094814
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007D178 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B7D20 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18010A4B4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1801009F4 (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z @ 0x180105A70 (-RemoveAt@-$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z.c)
 *     ?Show@CCursorVisual@@QEAAXXZ @ 0x18010AE48 (-Show@CCursorVisual@@QEAAXXZ.c)
 */

void __fastcall CComposition::ShowHideCursors(CComposition *this, char a2)
{
  int v2; // ebx
  _QWORD *v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool v8; // al
  unsigned int v9; // edx

  v2 = *((_DWORD *)this + 222);
  if ( v2 > 0 )
  {
    v4 = (_QWORD *)((char *)this + 864);
    v5 = (unsigned int)(v2 - 1);
    do
    {
      v6 = *(_QWORD *)(*v4 + 8 * v5);
      v7 = **(_QWORD **)(v6 + 8);
      if ( v7 )
      {
        if ( a2 )
        {
          CCursorVisual::Show(*(CCursorVisual **)(*v4 + 8 * v5));
        }
        else
        {
          v8 = (*(_BYTE *)(v7 + 74) & 0x10) != 0;
          *(_BYTE *)(v7 + 74) |= 0x10u;
          *(_BYTE *)(v6 + 24) = v8;
          *(_DWORD *)(v6 + 28) = 2;
        }
      }
      else
      {
        DynArray<CWARPCallbackRenderer *,0>::RemoveAt(v4, (unsigned int)v5);
        CCursorVisual::`scalar deleting destructor'((CCursorVisual *)v6, v9);
      }
      --v2;
      v5 = (unsigned int)(v5 - 1);
    }
    while ( v2 > 0 );
  }
}
