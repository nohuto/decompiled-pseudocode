/*
 * XREFs of ?PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M@Z @ 0x18003CD30
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x18003CFD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18010BF88 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18010D0B8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x180025250 (--_GCD2DLayer@@UEAAPEAXI@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18003CBE8 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x18003CF98 (-PushNoOpLayer@CDrawingContext@@AEAAJPEBVCVisual@@@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058FD8 (-GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_q @ 0x180111C90 (Template_q.c)
 */

__int64 __fastcall CDrawingContext::PushD2DLayer(
        CDrawingContext *this,
        struct CVisual *a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        float a6)
{
  int v6; // eax
  int v7; // esi
  __int64 v8; // rdi
  BOOL v12; // r13d
  int v13; // eax
  int v14; // ecx
  void *(__fastcall *v15)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  char *v16; // rax
  __int64 v17; // rcx
  CD2DLayer *v18; // rdi
  __int128 v19; // xmm0
  float v20; // xmm1_4
  unsigned int v21; // eax
  unsigned int v22; // edx
  char v23; // r9
  int v24; // eax
  int v26; // ebx
  int v27; // eax
  char v28; // [rsp+30h] [rbp-49h]
  CD2DLayer *v29; // [rsp+38h] [rbp-41h] BYREF
  int v30; // [rsp+40h] [rbp-39h]
  struct CVisual *v31; // [rsp+48h] [rbp-31h]
  __int128 v32; // [rsp+50h] [rbp-29h] BYREF

  v6 = *((_DWORD *)this + 62);
  v7 = 0;
  v8 = *((_QWORD *)this + 44);
  v29 = 0LL;
  v31 = a2;
  v28 = 0;
  v12 = v6 != 0;
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
  v14 = 0;
  if ( v13 == 3 )
    v14 = 3;
  v30 = v14;
  if ( a3 )
    v32 = *a3;
  else
    CScopedClipStack::GetTopClipBoundsInScope((char *)this + 680, &v32);
  if ( *((float *)&v32 + 2) <= *(float *)&v32 || *((float *)&v32 + 3) <= *((float *)&v32 + 1) )
  {
    CDrawingContext::PushNoOpLayer(this, v31);
    goto LABEL_25;
  }
  v15 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v15 == WPF::ProcessHeapImpl::Alloc )
    v16 = (char *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x50uLL);
  else
    v16 = (char *)v15(WPF::g_pProcessHeap, 80uLL);
  v18 = (CD2DLayer *)v16;
  if ( v16 )
  {
    v19 = v32;
    *((_DWORD *)v16 + 18) = 0;
    *(_QWORD *)v16 = &CD2DLayer::`vftable';
    *((_DWORD *)v16 + 17) = v30;
    *((float *)v16 + 15) = a6;
    v16[56] = 0;
    *((_DWORD *)v16 + 16) = v12;
    *((_QWORD *)v16 + 3) = a4;
    *(_OWORD *)(v16 + 8) = v19;
    if ( a4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
    if ( a5 )
    {
      *((_OWORD *)v18 + 2) = *(_OWORD *)a5;
      *((_QWORD *)v18 + 6) = *(_QWORD *)(a5 + 16);
      *((_BYTE *)v18 + 56) = 1;
    }
  }
  v29 = v18;
  if ( !v18 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x19u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x178Fu);
    goto LABEL_25;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    Template_q(v17, &EVTDESC_ETWGUID_D2DLAYERCREATEREASON, *((unsigned int *)this + 1494));
    v18 = v29;
  }
  if ( a4 )
  {
    v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a6 - 1.0)) & _xmm);
    if ( v20 < 0.0000011920929 )
    {
      v21 = *((_DWORD *)this + 152);
      v22 = v21 + 1;
      if ( v21 + 1 < v21 )
      {
        v26 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v7 = -2147024362;
      }
      else
      {
        if ( v22 <= *((_DWORD *)this + 151) )
        {
          *(_QWORD *)(*((_QWORD *)this + 73) + 8LL * v21) = v29;
          *((_DWORD *)this + 152) = v22;
LABEL_22:
          v18 = v29;
          v23 = 0;
          v28 = 1;
          goto LABEL_23;
        }
        v27 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 584, 8LL, 1LL, &v29);
        v26 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0xC0u);
        v7 = v26;
        if ( v26 >= 0 )
          goto LABEL_22;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x179Bu);
      goto LABEL_25;
    }
  }
  v23 = 1;
LABEL_23:
  v24 = CDrawingContext::PushLayer(this, v31, v18, v23, 1);
  v7 = v24;
  if ( v24 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x17A6u);
  else
    v29 = 0LL;
LABEL_25:
  if ( v7 < 0 )
  {
    if ( v28 )
      --*((_DWORD *)this + 152);
    if ( v29 )
      CD2DLayer::`scalar deleting destructor'(v29, 1);
  }
  return (unsigned int)v7;
}
