/*
 * XREFs of ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180021CB0
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180044C40 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800207C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ??0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIRenderTarget@@PEAUID2D1Bitmap1@@PEAUID2D1PrivateDepthBuffer@@@Z @ 0x180024BB4 (--0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIRenderTarget@@PEAUID2D1Bitmap1@@.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180024C6C (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x180024F84 (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ?GetCurrentDisplayId@CDrawingContext@@EEBA?AVDisplayId@@XZ @ 0x180037170 (-GetCurrentDisplayId@CDrawingContext@@EEBA-AVDisplayId@@XZ.c)
 *     ?GetCurrentStereoContext@CDrawingContext@@EEBA?AW4StereoContext@@XZ @ 0x180037190 (-GetCurrentStereoContext@CDrawingContext@@EEBA-AW4StereoContext@@XZ.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DContext::PushTarget(
        struct ID2D1PrivateCompositorRenderer **this,
        struct ID2DContextOwner *a2,
        struct IRenderTarget *a3)
{
  _QWORD *v6; // r15
  __int64 v7; // r13
  int v8; // eax
  __int64 (__fastcall *v9)(struct ID2DContextOwner *, CD2DTarget **); // rbx
  _DWORD *CurrentDisplayId; // rax
  __int64 (__fastcall *v11)(struct ID2DContextOwner *); // rbx
  int CurrentStereoContext; // eax
  int v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // edx
  struct ID2D1Bitmap1 **v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // edx
  void *(__fastcall *v20)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  CD2DTarget *v21; // rax
  CD2DTarget *v22; // rsi
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // eax
  int v26; // ebx
  int v27; // ebx
  int v28; // eax
  CD2DTarget *v29; // [rsp+70h] [rbp+40h] BYREF
  struct ID2D1Bitmap1 *v30; // [rsp+78h] [rbp+48h] BYREF
  struct ID2D1PrivateDepthBuffer *v31; // [rsp+80h] [rbp+50h] BYREF

  CD2DContext::FlushDrawList(this);
  v30 = 0LL;
  v6 = this + 21;
  v31 = 0LL;
  v7 = 0LL;
  v8 = *((_DWORD *)this + 48);
  if ( v8 )
    v7 = *(_QWORD *)(*v6 + 8LL * (unsigned int)(v8 - 1));
  v9 = *(__int64 (__fastcall **)(struct ID2DContextOwner *, CD2DTarget **))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v9 == (char *)CDrawingContext::GetCurrentDisplayId )
    CurrentDisplayId = (_DWORD *)CDrawingContext::GetCurrentDisplayId(a2, &v29);
  else
    CurrentDisplayId = (_DWORD *)v9(a2, &v29);
  *((_DWORD *)this + 72) = *CurrentDisplayId;
  v11 = *(__int64 (__fastcall **)(struct ID2DContextOwner *))(*(_QWORD *)a2 + 56LL);
  if ( (char *)v11 == (char *)CDrawingContext::GetCurrentStereoContext )
    CurrentStereoContext = CDrawingContext::GetCurrentStereoContext(a2);
  else
    CurrentStereoContext = v11(a2);
  *((_DWORD *)this + 73) = CurrentStereoContext;
  v13 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct ID2D1Bitmap1 **))(*(_QWORD *)a3 + 112LL))(a3, &v30);
  LODWORD(v29) = v13;
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x2BDu);
    goto LABEL_16;
  }
  (*(void (__fastcall **)(struct IRenderTarget *, struct ID2D1PrivateDepthBuffer **))(*(_QWORD *)a3 + 128LL))(a3, &v31);
  if ( v7 || (v16 = (struct ID2D1Bitmap1 **)this[33]) == 0LL )
  {
LABEL_22:
    v20 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v20 == WPF::ProcessHeapImpl::Alloc )
      v21 = (CD2DTarget *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x50uLL);
    else
      v21 = (CD2DTarget *)v20(WPF::g_pProcessHeap, 80uLL);
    if ( v21 )
      v22 = CD2DTarget::CD2DTarget(v21, a2, this[2], a3, v30, v31);
    else
      v22 = 0LL;
    if ( !v22 )
    {
      v14 = -2147024882;
      LODWORD(v29) = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2E3u);
      goto LABEL_16;
    }
    v23 = *((_DWORD *)this + 48);
    v29 = v22;
    v24 = v23 + 1;
    if ( v23 + 1 < v23 )
    {
      v26 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v14 = -2147024362;
      LODWORD(v29) = -2147024362;
    }
    else
    {
      v14 = 0;
      if ( v24 <= *((_DWORD *)this + 47) )
      {
        *(_QWORD *)(*v6 + 8LL * v23) = v29;
        *((_DWORD *)this + 48) = v24;
        LODWORD(v29) = 0;
LABEL_30:
        if ( *((_BYTE *)this + 376) )
        {
          if ( v7 )
            *(_BYTE *)(v7 + 48) = 0;
          CD2DTarget::ApplyState(v22, (struct CD2DContext *)this);
        }
        v22 = 0LL;
        goto LABEL_35;
      }
      v25 = DynArrayImpl<0>::AddMultipleAndSet(this + 21, 8LL, 1LL, &v29);
      v26 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
      LODWORD(v29) = v26;
      v14 = v26;
      if ( v26 >= 0 )
        goto LABEL_30;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x2E8u);
LABEL_35:
    if ( v22 )
      CD2DTarget::`scalar deleting destructor'(v22, v24);
    goto LABEL_16;
  }
  if ( v30 != v16[4] || v31 != v16[5] )
  {
    CD2DTarget::`scalar deleting destructor'((CD2DTarget *)v16, v15);
    this[33] = 0LL;
    goto LABEL_22;
  }
  *v16 = a2;
  v29 = this[33];
  v17 = *((_DWORD *)this + 48);
  v18 = v17 + 1;
  if ( v17 + 1 < v17 )
  {
    v27 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v14 = -2147024362;
    LODWORD(v29) = -2147024362;
  }
  else
  {
    v14 = 0;
    if ( v18 <= *((_DWORD *)this + 47) )
    {
      *(_QWORD *)(*v6 + 8LL * v17) = v29;
      *((_DWORD *)this + 48) = v18;
      LODWORD(v29) = 0;
LABEL_15:
      this[33] = 0LL;
      goto LABEL_16;
    }
    v28 = DynArrayImpl<0>::AddMultipleAndSet(this + 21, 8LL, 1LL, &v29);
    v27 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC0u);
    LODWORD(v29) = v27;
    v14 = v27;
    if ( v27 >= 0 )
      goto LABEL_15;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x2CFu);
LABEL_16:
  if ( v30 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v31 )
    (*(void (__fastcall **)(struct ID2D1PrivateDepthBuffer *))(*(_QWORD *)v31 + 16LL))(v31);
  TranslateDXGIorD3DErrorInContext(v14, 0LL, &v29);
  return (unsigned int)v29;
}
