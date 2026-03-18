/*
 * XREFs of ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x180058F80
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800206D0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x18002976C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 */

__int64 __fastcall CBaseClipStack::Push(CBaseClipStack *this, const struct MilRectF *a2)
{
  CBaseClipStack *v2; // r14
  int v3; // eax
  float v4; // xmm3_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm5_4
  float v9; // xmm6_4
  float v10; // xmm4_4
  __int64 v11; // rax
  void *v12; // r15
  int v13; // r12d
  unsigned int v14; // eax
  void (__fastcall *v15)(WPF::ProcessHeapImpl *, void *); // rdi
  unsigned int v17; // r13d
  int v18; // eax
  unsigned __int64 v19; // rax
  void *v20; // rsi
  void **v21; // [rsp+28h] [rbp-29h]
  void *v22; // [rsp+38h] [rbp-19h] BYREF
  __int128 v23; // [rsp+40h] [rbp-11h]

  v2 = this;
  if ( *((_DWORD *)this + 2) )
  {
    v3 = *((_DWORD *)this + 2);
    if ( v3 )
    {
      this = (CBaseClipStack *)(2LL * (unsigned int)(v3 - 1));
      v23 = *(_OWORD *)(*((_QWORD *)v2 + 3) + 16LL * (unsigned int)(v3 - 1));
    }
    v4 = *(float *)&v23;
    v5 = *((float *)&v23 + 1);
    v6 = *((float *)&v23 + 2);
    v7 = *((float *)&v23 + 3);
  }
  else
  {
    v4 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v5 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v6 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v7 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v23 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  v8 = *((float *)a2 + 1);
  v9 = *((float *)a2 + 2);
  v10 = *((float *)a2 + 3);
  if ( *(float *)a2 > v4 )
  {
    v4 = *(float *)a2;
    LODWORD(v23) = *(_DWORD *)a2;
  }
  if ( v8 > v5 )
  {
    v5 = v8;
    *((float *)&v23 + 1) = v8;
  }
  if ( v6 > v9 )
  {
    v6 = v9;
    *((float *)&v23 + 2) = v9;
  }
  if ( v7 > v10 )
  {
    v7 = v10;
    *((float *)&v23 + 3) = v10;
  }
  if ( v6 <= v4 || v7 <= v5 )
    v23 = 0uLL;
  v11 = *((unsigned int *)v2 + 3);
  v12 = 0LL;
  v13 = 0;
  v22 = 0LL;
  if ( *((_DWORD *)v2 + 2) == (_DWORD)v11 )
  {
    v17 = 2 * v11;
    if ( (unsigned __int64)(2 * v11) > 0xFFFFFFFF )
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      goto LABEL_19;
    }
    if ( v17 <= 8 )
      v17 = 8;
    v18 = WPF::HrMalloc(this, 16LL, v17, (unsigned __int64)&v22, v21);
    v13 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x54u);
      v12 = v22;
      goto LABEL_19;
    }
    v19 = 16LL * *((unsigned int *)v2 + 2);
    if ( v19 > 0xFFFFFFFF )
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
      v12 = v22;
      goto LABEL_19;
    }
    v13 = 0;
    v20 = v22;
    memcpy_0(v22, *((const void **)v2 + 3), (unsigned int)v19);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)v2 + 3));
    *((_QWORD *)v2 + 3) = v20;
    *((_DWORD *)v2 + 3) = v17;
  }
  *(_OWORD *)(*((_QWORD *)v2 + 3) + 16LL * (unsigned int)(*((_DWORD *)v2 + 2))++) = v23;
  v14 = *((_DWORD *)v2 + 8);
  if ( v14 <= *((_DWORD *)v2 + 2) )
    v14 = *((_DWORD *)v2 + 2);
  *((_DWORD *)v2 + 8) = v14;
LABEL_19:
  v15 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v15 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v12);
  else
    v15(WPF::g_pProcessHeap, v12);
  if ( v13 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x40u);
  return (unsigned int)v13;
}
