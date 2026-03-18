/*
 * XREFs of ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B17DC
 * Callers:
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x18006D184 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800774A0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18005C138 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ??0COcclusionContext@@AEAA@PEAVCComposition@@@Z @ 0x18005C2F0 (--0COcclusionContext@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x18005F8DC (-Initialize@COcclusionContext@@AEAAJXZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::Create(struct CComposition *a1, struct COcclusionContext **a2)
{
  LPVOID (__fastcall *v4)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  COcclusionContext *v5; // rax
  COcclusionContext *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  __int64 v10; // rdx
  __int64 v11; // r8

  v4 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v4 == WPF::ProcessHeapImpl::Alloc )
    v5 = (COcclusionContext *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x3F0uLL);
  else
    v5 = (COcclusionContext *)v4(WPF::g_pProcessHeap, 1008LL);
  if ( v5 )
    v6 = COcclusionContext::COcclusionContext(v5, a1);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = COcclusionContext::Initialize(v6);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x4Bu);
      COcclusionContext::`scalar deleting destructor'(v6, v10, v11);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x49u);
  }
  return v8;
}
