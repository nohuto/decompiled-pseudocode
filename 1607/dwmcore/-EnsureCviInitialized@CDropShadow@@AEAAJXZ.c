/*
 * XREFs of ?EnsureCviInitialized@CDropShadow@@AEAAJXZ @ 0x18014F690
 * Callers:
 *     ?Draw@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014F0B4 (-Draw@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x180033F08 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Release@CVisualTree@@UEAAKXZ @ 0x180038B80 (-Release@CVisualTree@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18004F7EC (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004FE84 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::EnsureCviInitialized(struct CComposition **this)
{
  unsigned int v1; // edi
  CCachedVisualImage *v3; // rax
  CCachedVisualImage *v4; // rbp
  CVisual *v5; // rax
  CVisual *v6; // rbx
  int VisualTree; // eax
  unsigned int v9; // [rsp+20h] [rbp-28h]
  struct CVisualTree *v10; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v10 = 0LL;
  if ( !this[25] )
  {
    v3 = (CCachedVisualImage *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 16LL))(
                                 WPF::g_pProcessHeap,
                                 408LL);
    if ( v3 )
      v4 = CCachedVisualImage::CCachedVisualImage(v3, this[2]);
    else
      v4 = 0LL;
    if ( v4 )
    {
      CBitmapOfDeviceBitmaps::AddRef((CCachedVisualImage *)((char *)v4 + 16));
      v5 = (CVisual *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        552LL);
      if ( v5 )
        v6 = CVisual::CVisual(v5, this[2]);
      else
        v6 = 0LL;
      if ( v6 )
      {
        (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v6 + 8LL))(v6);
        VisualTree = (*(__int64 (__fastcall **)(CVisual *, struct CComposition *))(*(_QWORD *)v6 + 232LL))(v6, this[24]);
        v1 = VisualTree;
        if ( VisualTree < 0 )
        {
          v9 = 574;
        }
        else
        {
          VisualTree = CVisual::GetVisualTree(v6, &v10);
          v1 = VisualTree;
          if ( VisualTree >= 0 )
          {
            this[27] = v10;
            this[25] = v4;
            this[26] = v6;
            return v1;
          }
          v9 = 579;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, VisualTree, v9);
      }
      else
      {
        v1 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x23Cu);
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 6, 0xFFFFFFFF) == 1 )
      {
        --*((_DWORD *)v4 + 6);
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v4 + 2) + 24LL))((__int64)v4 + 16, 1LL);
      }
      if ( v6 )
        (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v6 + 16LL))(v6);
      if ( v10 )
        CVisualTree::Release(v10);
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x235u);
    }
  }
  return v1;
}
