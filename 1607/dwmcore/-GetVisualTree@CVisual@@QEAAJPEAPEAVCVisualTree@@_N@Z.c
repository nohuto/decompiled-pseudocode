/*
 * XREFs of ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18004F7EC
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180004184 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?EnsureVisualTree@CHwndBitmap@@AEAAJXZ @ 0x18000A400 (-EnsureVisualTree@CHwndBitmap@@AEAAJXZ.c)
 *     ?Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGET_CAPTUREBITS@@@Z @ 0x18000CE44 (-Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGE.c)
 *     ?EnsureVisualTree@CCachedVisualImage@@AEAAJXZ @ 0x1800337F4 (-EnsureVisualTree@CCachedVisualImage@@AEAAJXZ.c)
 *     ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1800B82C0 (-SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x18010FB0C (-Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCM.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18011FA60 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?EnsureCviInitialized@CDropShadow@@AEAAJXZ @ 0x18014F690 (-EnsureCviInitialized@CDropShadow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x18004FCF0 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x1800B8704 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::GetVisualTree(CVisual *this, struct CVisualTree **a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  struct CComposition *v6; // rdi
  CVisualTree *v7; // rax
  volatile signed __int32 *v8; // rdi
  __int64 i; // r8
  volatile signed __int32 *v11; // [rsp+40h] [rbp+8h]

  v2 = *((_QWORD *)this + 34);
  v3 = 0;
  if ( (*(_DWORD *)(v2 + 4) & 0x40000000) == 0 )
    goto LABEL_2;
  for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0x2000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  v11 = *(volatile signed __int32 **)(i + 4);
  if ( v11 )
  {
    _InterlockedIncrement(v11 + 2);
    *a2 = (struct CVisualTree *)v11;
  }
  else
  {
LABEL_2:
    v6 = (struct CComposition *)*((_QWORD *)this + 2);
    v7 = (CVisualTree *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                          WPF::g_pProcessHeap,
                          888LL);
    if ( v7 )
      v8 = (volatile signed __int32 *)CVisualTree::CVisualTree(v7, v6, this);
    else
      v8 = 0LL;
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      CVisual::SetVisualTreeNoRef(this, (struct CVisualTree *)v8);
      *a2 = (struct CVisualTree *)v8;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Du);
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, &dword_1801B0908, 1u, -2147024882, 0xC84u);
    }
  }
  return v3;
}
