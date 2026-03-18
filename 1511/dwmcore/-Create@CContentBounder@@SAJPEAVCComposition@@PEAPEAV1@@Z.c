/*
 * XREFs of ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800ACB9C
 * Callers:
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x1800437C0 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18004ECA0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x180058074 (-Initialize@COcclusionContext@@AEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CContentBounder::Create(struct CComposition *a1, struct CContentBounder **a2)
{
  unsigned int v2; // ebx
  LPVOID (__fastcall *v5)(WPF::ProcessHeapImpl *, SIZE_T); // rbp
  struct CContentBounder *v6; // rax

  v2 = 0;
  *a2 = 0LL;
  v5 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v5 == WPF::ProcessHeapImpl::Alloc )
    v6 = (struct CContentBounder *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x18uLL);
  else
    v6 = (struct CContentBounder *)v5(WPF::g_pProcessHeap, 24LL);
  if ( v6 )
  {
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 1) = 0LL;
    *(_QWORD *)v6 = a1;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    *a2 = v6;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x4Du);
  }
  return v2;
}
