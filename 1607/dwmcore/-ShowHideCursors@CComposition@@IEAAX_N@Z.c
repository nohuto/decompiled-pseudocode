/*
 * XREFs of ?ShowHideCursors@CComposition@@IEAAX_N@Z @ 0x18000CDD0
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800095B8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800BB910 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180120B7C (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z @ 0x1800B70B0 (-RemoveAt@-$DynArray@PEAVCCursorVisual@@$0A@@@QEAAJI@Z.c)
 *     ??_GCCursorVisual@@QEAAPEAXI@Z @ 0x1800B71EC (--_GCCursorVisual@@QEAAPEAXI@Z.c)
 *     ?Show@CCursorVisual@@QEAAXXZ @ 0x18012128C (-Show@CCursorVisual@@QEAAXXZ.c)
 */

void __fastcall CComposition::ShowHideCursors(CComposition *this, char a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned int v7; // edx
  bool v8; // al

  LODWORD(v2) = *((_DWORD *)this + 224);
  if ( (int)v2 > 0 )
  {
    v4 = (_QWORD *)((char *)this + 872);
    do
    {
      v2 = (unsigned int)(v2 - 1);
      v5 = *(_QWORD *)(*v4 + 8 * v2);
      v6 = **(_QWORD **)(v5 + 8);
      if ( v6 )
      {
        if ( a2 )
        {
          CCursorVisual::Show(*(CCursorVisual **)(*v4 + 8 * v2));
        }
        else
        {
          v8 = (*(_BYTE *)(v6 + 154) & 0x10) != 0;
          *(_BYTE *)(v6 + 154) |= 0x10u;
          *(_BYTE *)(v5 + 24) = v8;
          *(_DWORD *)(v5 + 28) = 2;
        }
      }
      else
      {
        DynArray<CCursorVisual *,0>::RemoveAt(v4, (unsigned int)v2);
        CCursorVisual::`scalar deleting destructor'((CCursorVisual *)v5, v7);
      }
    }
    while ( (int)v2 > 0 );
  }
}
