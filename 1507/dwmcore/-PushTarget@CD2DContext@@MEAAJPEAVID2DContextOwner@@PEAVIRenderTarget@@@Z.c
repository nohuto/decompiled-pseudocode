/*
 * XREFs of ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800729A0
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18002F420 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?GetCurrentAdapterLuid@CDrawingContext@@EEBA?AU_LUID@@XZ @ 0x180022E30 (-GetCurrentAdapterLuid@CDrawingContext@@EEBA-AU_LUID@@XZ.c)
 *     ?GetCurrentDisplayId@CDrawingContext@@EEBA?AVDisplayId@@XZ @ 0x180022E50 (-GetCurrentDisplayId@CDrawingContext@@EEBA-AVDisplayId@@XZ.c)
 *     ?GetCurrentStereoContext@CDrawingContext@@EEBA?AW4StereoContext@@XZ @ 0x180022E70 (-GetCurrentStereoContext@CDrawingContext@@EEBA-AW4StereoContext@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIRenderTarget@@PEAUID2D1Bitmap1@@PEAUID2D1PrivateDepthBuffer@@@Z @ 0x18005D874 (--0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIRenderTarget@@PEAUID2D1Bitmap1@@.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x18005D92C (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x18005D96C (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180071660 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DContext::PushTarget(
        struct CD2DFactory **this,
        struct ID2DContextOwner *a2,
        struct IRenderTarget *a3)
{
  _QWORD *v6; // r15
  __int64 v7; // r13
  int v8; // eax
  __int64 (__fastcall *v9)(struct ID2DContextOwner *, CD2DTarget **); // rbx
  struct CD2DFactory **CurrentAdapterLuid; // rax
  _DWORD *(__fastcall *v11)(__int64, CD2DTarget **); // rbx
  _DWORD *CurrentDisplayId; // rax
  __int64 (__fastcall *v13)(__int64); // rbx
  int CurrentStereoContext; // eax
  int v15; // eax
  int v16; // edi
  struct ID2D1Bitmap1 **v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // edx
  CD2DTarget *v21; // rax
  CD2DTarget *v22; // rsi
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // ebx
  int v26; // eax
  int v27; // ebx
  int v28; // eax
  CD2DTarget *v29; // [rsp+70h] [rbp+40h] BYREF
  struct ID2D1Bitmap1 *v30; // [rsp+78h] [rbp+48h] BYREF
  struct ID2D1PrivateDepthBuffer *v31; // [rsp+80h] [rbp+50h] BYREF

  CD2DContext::FlushDrawList((CD2DContext *)this);
  v30 = 0LL;
  v6 = this + 21;
  v31 = 0LL;
  v7 = 0LL;
  v8 = *((_DWORD *)this + 48);
  if ( v8 )
    v7 = *(_QWORD *)(*v6 + 8LL * (unsigned int)(v8 - 1));
  v9 = *(__int64 (__fastcall **)(struct ID2DContextOwner *, CD2DTarget **))(*(_QWORD *)a2 + 40LL);
  if ( (char *)v9 == (char *)CDrawingContext::GetCurrentAdapterLuid )
    CurrentAdapterLuid = (struct CD2DFactory **)CDrawingContext::GetCurrentAdapterLuid(a2, &v29);
  else
    CurrentAdapterLuid = (struct CD2DFactory **)v9(a2, &v29);
  this[37] = *CurrentAdapterLuid;
  v11 = *(_DWORD *(__fastcall **)(__int64, CD2DTarget **))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v11 == (char *)CDrawingContext::GetCurrentDisplayId )
    CurrentDisplayId = CDrawingContext::GetCurrentDisplayId((__int64)a2, &v29);
  else
    CurrentDisplayId = v11((__int64)a2, &v29);
  *((_DWORD *)this + 76) = *CurrentDisplayId;
  v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL);
  if ( v13 == CDrawingContext::GetCurrentStereoContext )
    CurrentStereoContext = CDrawingContext::GetCurrentStereoContext((__int64)a2);
  else
    CurrentStereoContext = v13((__int64)a2);
  *((_DWORD *)this + 77) = CurrentStereoContext;
  v15 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct ID2D1Bitmap1 **))(*(_QWORD *)a3 + 112LL))(a3, &v30);
  LODWORD(v29) = v15;
  v16 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x2B4u);
    goto LABEL_18;
  }
  (*(void (__fastcall **)(struct IRenderTarget *, struct ID2D1PrivateDepthBuffer **))(*(_QWORD *)a3 + 128LL))(a3, &v31);
  if ( v7 || (v17 = (struct ID2D1Bitmap1 **)this[34]) == 0LL )
  {
LABEL_24:
    v21 = (CD2DTarget *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          80LL);
    if ( v21 )
      v22 = CD2DTarget::CD2DTarget(v21, a2, this[2], a3, v30, v31);
    else
      v22 = 0LL;
    if ( !v22 )
    {
      v16 = -2147024882;
      LODWORD(v29) = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2DAu);
      goto LABEL_18;
    }
    v23 = *((_DWORD *)this + 48);
    v29 = v22;
    v24 = v23 + 1;
    if ( v23 + 1 < v23 )
    {
      v27 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v16 = -2147024362;
      LODWORD(v29) = -2147024362;
    }
    else
    {
      v16 = 0;
      if ( v24 <= *((_DWORD *)this + 47) )
      {
        *(_QWORD *)(*v6 + 8LL * v23) = v29;
        *((_DWORD *)this + 48) = v24;
        LODWORD(v29) = 0;
LABEL_30:
        if ( *((_BYTE *)this + 232) )
        {
          if ( v7 )
            *(_BYTE *)(v7 + 48) = 0;
          CD2DTarget::ApplyState(v22, (struct CD2DContext *)this);
        }
        v22 = 0LL;
        goto LABEL_35;
      }
      v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 21), 8u, 1, &v29);
      v27 = v28;
      if ( v28 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC0u);
      LODWORD(v29) = v27;
      v16 = v27;
      if ( v27 >= 0 )
        goto LABEL_30;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x2DFu);
LABEL_35:
    if ( v22 )
      CD2DTarget::`scalar deleting destructor'(v22);
    goto LABEL_18;
  }
  if ( v30 != v17[4] || v31 != v17[5] )
  {
    CD2DTarget::`scalar deleting destructor'((CD2DTarget *)v17);
    this[34] = 0LL;
    goto LABEL_24;
  }
  *v17 = a2;
  v29 = this[34];
  v18 = *((_DWORD *)this + 48);
  v19 = v18 + 1;
  if ( v18 + 1 < v18 )
  {
    v25 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v16 = -2147024362;
    LODWORD(v29) = -2147024362;
  }
  else
  {
    v16 = 0;
    if ( v19 <= *((_DWORD *)this + 47) )
    {
      *(_QWORD *)(*v6 + 8LL * v18) = v29;
      *((_DWORD *)this + 48) = v19;
      LODWORD(v29) = 0;
LABEL_17:
      this[34] = 0LL;
      goto LABEL_18;
    }
    v26 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(this + 21), 8u, 1, &v29);
    v25 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xC0u);
    LODWORD(v29) = v25;
    v16 = v25;
    if ( v25 >= 0 )
      goto LABEL_17;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x2C6u);
LABEL_18:
  if ( v30 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v31 )
    (*(void (__fastcall **)(struct ID2D1PrivateDepthBuffer *))(*(_QWORD *)v31 + 16LL))(v31);
  TranslateDXGIorD3DErrorInContext(v16, 0, &v29);
  return (unsigned int)v29;
}
