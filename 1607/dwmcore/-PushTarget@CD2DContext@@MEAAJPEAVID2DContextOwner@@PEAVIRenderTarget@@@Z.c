/*
 * XREFs of ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x18007DE20
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18006D260 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetCurrentStereoContext@CDrawingContext@@EEBA?AW4StereoContext@@XZ @ 0x180064100 (-GetCurrentStereoContext@CDrawingContext@@EEBA-AW4StereoContext@@XZ.c)
 *     ?GetCurrentDisplayId@CDrawingContext@@EEBA?AVDisplayId@@XZ @ 0x18006F260 (-GetCurrentDisplayId@CDrawingContext@@EEBA-AVDisplayId@@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIRenderTarget@@PEAUID2D1Bitmap1@@PEAUID2D1PrivateDepthBuffer@@@Z @ 0x1800AD6C0 (--0CD2DTarget@@QEAA@PEAVID2DContextOwner@@PEAVCD2DFactory@@PEAVIRenderTarget@@PEAUID2D1Bitmap1@@.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x1800AD74C (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x1800AD78C (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::PushTarget(
        struct ID2D1PrivateCompositorRenderer **this,
        struct ID2DContextOwner *a2,
        struct IRenderTarget *a3)
{
  _QWORD *v6; // rsi
  CD2DTarget *v7; // r15
  int v8; // eax
  __int64 v9; // r13
  _DWORD *(__fastcall *v10)(__int64, CD2DTarget **); // rax
  _DWORD *CurrentDisplayId; // rax
  __int64 (__fastcall *v12)(__int64); // rax
  int CurrentStereoContext; // eax
  int v14; // eax
  int v15; // ebx
  unsigned int v16; // edx
  struct ID2D1Bitmap1 **v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // edx
  LPVOID (__fastcall *v21)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  CD2DTarget *v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // esi
  unsigned int v28; // edx
  CD2DTarget *v29; // [rsp+70h] [rbp+40h] BYREF
  struct ID2D1Bitmap1 *v30; // [rsp+78h] [rbp+48h] BYREF
  struct ID2D1PrivateDepthBuffer *v31; // [rsp+80h] [rbp+50h] BYREF

  CD2DContext::FlushDrawList(this);
  v30 = 0LL;
  v6 = this + 24;
  v31 = 0LL;
  v7 = 0LL;
  v8 = *((_DWORD *)this + 54);
  v9 = 0LL;
  if ( v8 )
    v9 = *(_QWORD *)(*v6 + 8LL * (unsigned int)(v8 - 1));
  v10 = *(_DWORD *(__fastcall **)(__int64, CD2DTarget **))(*(_QWORD *)a2 + 48LL);
  if ( (char *)v10 == (char *)CDrawingContext::GetCurrentDisplayId )
    CurrentDisplayId = CDrawingContext::GetCurrentDisplayId((__int64)a2, &v29);
  else
    CurrentDisplayId = v10((__int64)a2, &v29);
  *((_DWORD *)this + 78) = *CurrentDisplayId;
  v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL);
  if ( v12 == CDrawingContext::GetCurrentStereoContext )
    CurrentStereoContext = CDrawingContext::GetCurrentStereoContext((__int64)a2);
  else
    CurrentStereoContext = v12((__int64)a2);
  *((_DWORD *)this + 79) = CurrentStereoContext;
  v14 = (*(__int64 (__fastcall **)(struct IRenderTarget *, struct ID2D1Bitmap1 **))(*(_QWORD *)a3 + 112LL))(a3, &v30);
  LODWORD(v29) = v14;
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x428u);
    goto LABEL_49;
  }
  (*(void (__fastcall **)(struct IRenderTarget *, struct ID2D1PrivateDepthBuffer **))(*(_QWORD *)a3 + 128LL))(a3, &v31);
  if ( v9 || (v17 = (struct ID2D1Bitmap1 **)this[36]) == 0LL )
  {
LABEL_22:
    v21 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v21 == WPF::ProcessHeapImpl::Alloc )
      v22 = (CD2DTarget *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x50uLL);
    else
      v22 = (CD2DTarget *)v21(WPF::g_pProcessHeap, 80LL);
    if ( v22 )
      v7 = CD2DTarget::CD2DTarget(v22, a2, this[2], a3, v30, v31);
    if ( !v7 )
    {
      v15 = -2147024882;
      LODWORD(v29) = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x44Eu);
      goto LABEL_16;
    }
    v23 = *((_DWORD *)this + 54);
    v29 = v7;
    v24 = v23 + 1;
    if ( v23 + 1 < v23 )
    {
      v27 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      v15 = 0;
      if ( v24 <= *((_DWORD *)this + 53) )
      {
        *(_QWORD *)(*v6 + 8LL * v23) = v29;
        *((_DWORD *)this + 54) = v24;
        LODWORD(v29) = 0;
        goto LABEL_30;
      }
      v26 = DynArrayImpl<0>::AddMultipleAndSet(this + 24, 8LL, 1LL, &v29);
      v27 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xC0u);
    }
    v15 = v27;
    LODWORD(v29) = v27;
    if ( v27 >= 0 )
    {
LABEL_30:
      if ( *((_BYTE *)this + 400) )
      {
        if ( v9 )
          *(_BYTE *)(v9 + 48) = 0;
        CD2DTarget::ApplyState(v7, (struct CD2DContext *)this);
      }
      goto LABEL_16;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x453u);
LABEL_49:
    if ( v7 )
      CD2DTarget::`scalar deleting destructor'(v7, v28);
    goto LABEL_16;
  }
  if ( v30 != v17[4] || v31 != v17[5] )
  {
    CD2DTarget::`scalar deleting destructor'((CD2DTarget *)v17, v16);
    this[36] = 0LL;
    goto LABEL_22;
  }
  *v17 = a2;
  v29 = this[36];
  v18 = *((_DWORD *)this + 54);
  v19 = v18 + 1;
  if ( v18 + 1 < v18 )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v15 = 0;
    if ( v19 <= *((_DWORD *)this + 53) )
    {
      *(_QWORD *)(*v6 + 8LL * v18) = v29;
      *((_DWORD *)this + 54) = v19;
      LODWORD(v29) = 0;
LABEL_15:
      this[36] = 0LL;
      goto LABEL_16;
    }
    v25 = DynArrayImpl<0>::AddMultipleAndSet(this + 24, 8LL, 1LL, &v29);
    v15 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
  }
  LODWORD(v29) = v15;
  if ( v15 >= 0 )
    goto LABEL_15;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x43Au);
LABEL_16:
  if ( v30 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v31 )
    (*(void (__fastcall **)(struct ID2D1PrivateDepthBuffer *))(*(_QWORD *)v31 + 16LL))(v31);
  TranslateDXGIorD3DErrorInContext(v15, 0, (int *)&v29);
  return (unsigned int)v29;
}
