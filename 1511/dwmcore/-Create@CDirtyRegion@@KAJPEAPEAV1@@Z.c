/*
 * XREFs of ?Create@CDirtyRegion@@KAJPEAPEAV1@@Z @ 0x180076BC0
 * Callers:
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800750F0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076884 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800769A0 (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDirtyRegion::Create(struct CDirtyRegion **a1)
{
  LPVOID (__fastcall *v2)(WPF::ProcessHeapImpl *, SIZE_T); // rsi
  _DWORD *v3; // rax

  v2 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v2 == WPF::ProcessHeapImpl::Alloc )
    v3 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x3F8uLL);
  else
    v3 = (_DWORD *)v2(WPF::g_pProcessHeap, 1016LL);
  if ( v3 )
  {
    *(_QWORD *)v3 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v3 = &CDirtyRegion::`vftable';
    v3[2] = 0;
    *((_QWORD *)v3 + 56) = v3 + 112;
    *((_QWORD *)v3 + 57) = v3 + 112;
    *((_QWORD *)v3 + 59) = v3 + 116;
    *((_QWORD *)v3 + 58) = v3 + 116;
    *((_QWORD *)v3 + 61) = v3 + 120;
    *((_QWORD *)v3 + 60) = v3 + 120;
    *((_QWORD *)v3 + 63) = v3 + 124;
    *((_QWORD *)v3 + 62) = v3 + 124;
    *((_QWORD *)v3 + 65) = v3 + 128;
    *((_QWORD *)v3 + 64) = v3 + 128;
    *((_QWORD *)v3 + 67) = v3 + 132;
    *((_QWORD *)v3 + 66) = v3 + 132;
    *((_QWORD *)v3 + 69) = v3 + 136;
    *((_QWORD *)v3 + 68) = v3 + 136;
    *((_QWORD *)v3 + 71) = v3 + 140;
    *((_QWORD *)v3 + 70) = v3 + 140;
  }
  *a1 = (struct CDirtyRegion *)v3;
  if ( v3 )
  {
    (**(void (__fastcall ***)(LPVOID))v3)(v3);
    return 0LL;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xBDu);
    return 2147942414LL;
  }
}
