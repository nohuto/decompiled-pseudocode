/*
 * XREFs of ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x1800A2670
 * Callers:
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x180045C70 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180050490 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180056500 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036E20 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 */

__int64 __fastcall CBaseClipStack::Push(CBaseClipStack *this, const struct MilRectF *a2)
{
  __int128 v3; // xmm0
  int v4; // eax
  WPF *v5; // rcx
  unsigned int v6; // eax
  void *v7; // r12
  int v8; // r14d
  unsigned __int64 v9; // r15
  int v10; // eax
  unsigned __int64 v11; // rax
  void *v12; // rsi
  unsigned int v13; // ecx
  void **v15; // [rsp+20h] [rbp-68h]
  void *v16[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v17; // [rsp+40h] [rbp-48h] BYREF

  if ( *((_DWORD *)this + 2) )
  {
    v4 = *((_DWORD *)this + 2);
    if ( !v4 )
      goto LABEL_6;
    v3 = *(_OWORD *)(*((_QWORD *)this + 3) + 16LL * (unsigned int)(v4 - 1));
  }
  else
  {
    v3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  v17 = v3;
LABEL_6:
  *(_OWORD *)v16 = *(_OWORD *)a2;
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)&v17, (__int64)v16);
  v6 = *((_DWORD *)this + 3);
  v7 = 0LL;
  v8 = 0;
  v16[0] = 0LL;
  if ( *((_DWORD *)this + 2) == v6 )
  {
    v9 = 2LL * v6;
    if ( v9 > 0xFFFFFFFF )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      goto LABEL_17;
    }
    if ( (unsigned int)v9 <= 8 )
      LODWORD(v9) = 8;
    v10 = WPF::HrMalloc(v5, 16LL, (unsigned int)v9, (unsigned __int64)v16, v15);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x54u);
      v7 = v16[0];
      goto LABEL_17;
    }
    v11 = 16LL * *((unsigned int *)this + 2);
    if ( v11 > 0xFFFFFFFF )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
      v7 = v16[0];
      goto LABEL_17;
    }
    v8 = 0;
    v12 = v16[0];
    memcpy_0(v16[0], *((const void **)this + 3), (unsigned int)v11);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 3));
    *((_QWORD *)this + 3) = v12;
    *((_DWORD *)this + 3) = v9;
  }
  *(_OWORD *)(*((_QWORD *)this + 3) + 16LL * (unsigned int)(*((_DWORD *)this + 2))++) = v17;
  v13 = *((_DWORD *)this + 2);
  if ( *((_DWORD *)this + 8) > v13 )
    v13 = *((_DWORD *)this + 8);
  *((_DWORD *)this + 8) = v13;
LABEL_17:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v7);
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x40u);
  return (unsigned int)v8;
}
