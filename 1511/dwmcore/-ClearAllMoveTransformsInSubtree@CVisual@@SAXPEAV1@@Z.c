/*
 * XREFs of ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800B6058
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x18003CFD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x18004D180 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800B6058 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800B6058 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 */

void __fastcall CVisual::ClearAllMoveTransformsInSubtree(struct CVisual *a1)
{
  __int64 *v1; // r8
  __int64 v2; // rax
  unsigned __int64 v3; // rbp
  struct CVisual *v4; // rax
  struct CVisual *v5; // rdi
  _QWORD *v6; // rax
  _QWORD *i; // rsi
  __int64 v8; // [rsp+50h] [rbp+8h]
  __int64 v9; // [rsp+58h] [rbp+10h]
  __int64 *v10; // [rsp+68h] [rbp+20h]

  v1 = (__int64 *)((char *)a1 + 56);
  v2 = *((_QWORD *)a1 + 7);
  v10 = (__int64 *)((char *)a1 + 56);
  if ( (v2 & 2) != 0 )
    v2 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v2) = v2 & 1;
  if ( (_DWORD)v2 )
  {
    v3 = 0LL;
    v8 = (unsigned int)v2;
    do
    {
      v4 = (struct CVisual *)CPtrArrayBase::operator[](v1, v3);
      v5 = v4;
      if ( v4 )
      {
        CVisual::ClearAllMoveTransformsInSubtree(v4);
        if ( (*(unsigned __int8 (__fastcall **)(struct CVisual *))(*(_QWORD *)v5 + 216LL))(v5) )
        {
          v6 = (_QWORD *)((char *)v5 + 312);
          for ( i = (_QWORD *)*((_QWORD *)v5 + 39); i != v6; i = (_QWORD *)*i )
          {
            v9 = *(i - 6);
            if ( v9 )
            {
              (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                WPF::g_pProcessHeap,
                v9);
              *(i - 6) = 0LL;
              v6 = (_QWORD *)((char *)v5 + 312);
            }
          }
        }
      }
      v1 = v10;
      ++v3;
      --v8;
    }
    while ( v8 );
  }
}
