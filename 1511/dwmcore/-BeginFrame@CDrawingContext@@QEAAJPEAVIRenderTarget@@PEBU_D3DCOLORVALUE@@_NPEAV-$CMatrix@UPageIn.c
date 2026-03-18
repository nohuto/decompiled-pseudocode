/*
 * XREFs of ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180044090
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003E644 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x18005BC9C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007D178 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x1800A0C74 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B7D20 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180109210 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18010A4B4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x180136FD8 (-GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@.c)
 *     ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x18013C844 (-RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180044C40 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x180047060 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?InitializeDriversFromRegistry@CD3DRegistryDatabase@@CAJPEBVCDXGIEnumeration@@@Z @ 0x18006A5DC (-InitializeDriversFromRegistry@CD3DRegistryDatabase@@CAJPEBVCDXGIEnumeration@@@Z.c)
 *     ?GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x18006F794 (-GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?GetDeviceInfo@CSwRenderTargetGetBounds@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x180081DA0 (-GetDeviceInfo@CSwRenderTargetGetBounds@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x1800AAAB8 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800BC8C6 (memcpy_0.c)
 *     Template_ppffffcb @ 0x18010EC90 (Template_ppffffcb.c)
 */

__int64 __fastcall CDrawingContext::BeginFrame(
        CDrawingContext *this,
        struct IRenderTarget *a2,
        _OWORD *a3,
        char a4,
        struct D2DMatrix *a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 (__fastcall *v12)(CSwRenderTargetGetBounds *__hidden, struct _LUID *, struct DisplayId *); // rdi
  int DeviceInfo; // eax
  unsigned int v14; // edi
  int v15; // eax
  unsigned int v16; // ebx
  bool v17; // zf
  struct CDXGIEnumeration *v18; // rbx
  int v19; // r15d
  __int64 v20; // rax
  unsigned int v21; // eax
  unsigned __int64 v22; // rcx
  void (*v23)(WPF::ProcessHeapImpl *__hidden, void *); // rdi
  __int64 v24; // rax
  struct CDXGIEnumeration *v25; // rbx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  void (*v28)(WPF::ProcessHeapImpl *__hidden, void *); // rdi
  __int128 v29; // xmm1
  void (*v30)(WPF::ProcessHeapImpl *__hidden, void *); // rbx
  CDisplayManager *v31; // rcx
  unsigned int v32; // ecx
  unsigned int v33; // r8d
  __int64 v34; // rdx
  char v35; // bl
  unsigned int v37; // edi
  int v38; // eax
  unsigned __int64 v39; // rax
  struct CDXGIEnumeration *v40; // r14
  struct CDXGIEnumeration *v41; // rcx
  unsigned int v42; // edi
  int v43; // eax
  unsigned __int64 v44; // rax
  struct CDXGIEnumeration *v45; // rbx
  void (*v46)(WPF::ProcessHeapImpl *__hidden, void *); // rcx
  bool v47; // r15
  int v48; // ecx
  int DXGIEnumeration; // eax
  CDXGIEnumeration *v50; // r12
  int v51; // r14d
  int v52; // eax
  void **v53; // [rsp+20h] [rbp-69h]
  struct CDXGIEnumeration *v54; // [rsp+50h] [rbp-39h] BYREF
  char v55; // [rsp+58h] [rbp-31h]
  void (*v56)(WPF::ProcessHeapImpl *__hidden, void *); // [rsp+60h] [rbp-29h]
  __int128 v57; // [rsp+68h] [rbp-21h]
  int v58; // [rsp+78h] [rbp-11h] BYREF
  int v59; // [rsp+7Ch] [rbp-Dh]
  int v60; // [rsp+80h] [rbp-9h]
  int v61; // [rsp+84h] [rbp-5h]

  v8 = *(_QWORD *)a2;
  v55 = a4;
  v12 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *__hidden, struct _LUID *, struct DisplayId *))(v8 + 104);
  *(_QWORD *)&v57 = 0LL;
  BYTE8(v57) = 1;
  if ( v12 == CSwRenderTargetGetBounds::GetDeviceInfo )
    DeviceInfo = CSwRenderTargetGetBounds::GetDeviceInfo(a2, (struct _LUID *)this + 48, 0LL);
  else
    DeviceInfo = v12(a2, (struct _LUID *)this + 48, 0LL);
  v14 = DeviceInfo;
  if ( DeviceInfo < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DeviceInfo, 0x150u);
    return v14;
  }
  else
  {
    v15 = CDrawingContext::PushRenderTarget(this, a2);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v17 = *((_BYTE *)this + 2616) == 0;
      *((_QWORD *)this + 46) = a8;
      if ( v17 && !*((_DWORD *)this + 1447) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
      {
        v47 = a5 && !(unsigned int)D2DMatrixIsIdentity(a5);
        (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 44) + 64LL))(*((_QWORD *)this + 44), &v58);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
          Template_ppffffcb(
            v48,
            (unsigned int)&EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Start,
            (_DWORD)this,
            *((_QWORD *)this + 44),
            v58,
            v59,
            v60,
            v61,
            v47 ? 0x40 : 0,
            (__int64)a5);
      }
      if ( a3 )
      {
        *(_OWORD *)((char *)this + 408) = *a3;
      }
      else
      {
        v17 = g_fUseDebugClearColorIfNoClear == 0;
        *((_QWORD *)this + 51) = 0LL;
        *((_QWORD *)this + 52) = 0LL;
        if ( !v17 )
        {
          *((_DWORD *)this + 102) = 1065353216;
          *((_DWORD *)this + 105) = 1065353216;
        }
      }
      v17 = v55 == 0;
      v18 = 0LL;
      *((_DWORD *)this + 61) = 1;
      v19 = 0;
      *((_QWORD *)this + 31) = 1LL;
      *((_BYTE *)this + 264) = v17;
      *((_QWORD *)this + 32) = 0LL;
      v20 = *((unsigned int *)this + 647);
      v54 = 0LL;
      if ( *((_DWORD *)this + 646) == (_DWORD)v20 )
      {
        v37 = 2 * v20;
        if ( (unsigned __int64)(2 * v20) > 0xFFFFFFFF )
        {
          v19 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
          goto LABEL_13;
        }
        if ( v37 <= 0x40 )
          v37 = 64;
        v38 = WPF::HrMalloc((WPF *)0xFFFFFFFFLL, 4LL, v37, (unsigned __int64)&v54, v53);
        v19 = v38;
        if ( v38 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x54u);
          v18 = v54;
          goto LABEL_13;
        }
        v39 = 4LL * *((unsigned int *)this + 646);
        if ( v39 > 0xFFFFFFFF )
        {
          v19 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
          v18 = v54;
          goto LABEL_13;
        }
        v19 = 0;
        v40 = v54;
        memcpy_0(v54, *((const void **)this + 325), (unsigned int)v39);
        v41 = (struct CDXGIEnumeration *)*((_QWORD *)this + 325);
        v54 = v41;
        v56 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v56 == WPF::ProcessHeapImpl::Free )
          WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v41);
        else
          ((void (__fastcall *)(WPF::ProcessHeapImpl *, struct CDXGIEnumeration *))v56)(WPF::g_pProcessHeap, v54);
        *((_QWORD *)this + 325) = v40;
        v18 = 0LL;
        *((_DWORD *)this + 647) = v37;
      }
      *(_DWORD *)(*((_QWORD *)this + 325) + 4LL * *((unsigned int *)this + 646)) = 1065353216;
      v21 = *((_DWORD *)this + 652);
      v22 = (unsigned int)++*((_DWORD *)this + 646);
      if ( v21 > (unsigned int)v22 )
        v22 = v21;
      *((_DWORD *)this + 652) = v22;
LABEL_13:
      v23 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v23 == WPF::ProcessHeapImpl::Free )
      {
        if ( v18 )
          HeapFree(g_hProcessHeap, 0, v18);
      }
      else
      {
        ((void (__fastcall *)(WPF::ProcessHeapImpl *, struct CDXGIEnumeration *))v23)(WPF::g_pProcessHeap, v18);
      }
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x19Cu);
        return (unsigned int)v19;
      }
      v24 = *((unsigned int *)this + 677);
      v25 = 0LL;
      v19 = 0;
      v54 = 0LL;
      if ( *((_DWORD *)this + 676) == (_DWORD)v24 )
      {
        v42 = 2 * v24;
        if ( (unsigned __int64)(2 * v24) > 0xFFFFFFFF )
        {
          v19 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
          goto LABEL_21;
        }
        if ( v42 <= 0x40 )
          v42 = 64;
        v43 = WPF::HrMalloc((WPF *)v22, 16LL, v42, (unsigned __int64)&v54, v53);
        v19 = v43;
        if ( v43 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x54u);
          v25 = v54;
          goto LABEL_21;
        }
        v44 = 16LL * *((unsigned int *)this + 676);
        if ( v44 > 0xFFFFFFFF )
        {
          v19 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
          v25 = v54;
          goto LABEL_21;
        }
        v45 = v54;
        v19 = 0;
        memcpy_0(v54, *((const void **)this + 340), (unsigned int)v44);
        v46 = (void (*)(WPF::ProcessHeapImpl *__hidden, void *))*((_QWORD *)this + 340);
        v56 = v46;
        v54 = *(struct CDXGIEnumeration **)(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v54 == (struct CDXGIEnumeration *)WPF::ProcessHeapImpl::Free )
          WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v46);
        else
          ((void (__fastcall *)(WPF::ProcessHeapImpl *, void (*)(WPF::ProcessHeapImpl *__hidden, void *)))v54)(
            WPF::g_pProcessHeap,
            v56);
        *((_QWORD *)this + 340) = v45;
        v25 = 0LL;
        *((_DWORD *)this + 677) = v42;
      }
      *(_OWORD *)(*((_QWORD *)this + 340) + 16LL * *((unsigned int *)this + 676)) = v57;
      v26 = *((_DWORD *)this + 682);
      v27 = ++*((_DWORD *)this + 676);
      if ( v26 > v27 )
        v27 = v26;
      *((_DWORD *)this + 682) = v27;
LABEL_21:
      v28 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v28 == WPF::ProcessHeapImpl::Free )
      {
        if ( v25 )
          HeapFree(g_hProcessHeap, 0, v25);
      }
      else
      {
        ((void (__fastcall *)(WPF::ProcessHeapImpl *, struct CDXGIEnumeration *))v28)(WPF::g_pProcessHeap, v25);
      }
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x19Eu);
        return (unsigned int)v19;
      }
      *((_QWORD *)this + 351) = a6;
      if ( a6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a6 + 8LL))(a6);
      *((_BYTE *)this + 5968) = a7;
      if ( a5 )
      {
        *(_OWORD *)((char *)this + 2744) = *(_OWORD *)a5;
        *(_OWORD *)((char *)this + 2760) = *((_OWORD *)a5 + 1);
        *(_OWORD *)((char *)this + 2776) = *((_OWORD *)a5 + 2);
        v29 = *((_OWORD *)a5 + 3);
      }
      else
      {
        *(_OWORD *)((char *)this + 2744) = IdentityMatrix;
        *(_OWORD *)((char *)this + 2760) = xmmword_18019E9C0;
        *(_OWORD *)((char *)this + 2776) = xmmword_18019E9D0;
        v29 = xmmword_18019E9E0;
      }
      *(_OWORD *)((char *)this + 2792) = v29;
      *((_WORD *)this + 2985) = 0;
      *((_BYTE *)this + 5972) = 0;
      v30 = (void (*)(WPF::ProcessHeapImpl *__hidden, void *))*((_QWORD *)this + 48);
      v56 = v30;
      EnterCriticalSection(&stru_1801A3D88);
      v54 = 0LL;
      if ( qword_1801A3DB8 )
      {
LABEL_30:
        v32 = 0;
        v33 = *((_DWORD *)qword_1801A3DB8 + 22);
        if ( v33 )
        {
          while ( 1 )
          {
            v34 = *(_QWORD *)(*((_QWORD *)qword_1801A3DB8 + 8) + 8LL * v32);
            if ( __PAIR64__(HIDWORD(v56), (unsigned int)v30) == *(_QWORD *)(v34 + 336)
              && *(_DWORD *)(v34 + 296) == 5140
              && *(_DWORD *)(v34 + 300) == 140 )
            {
              break;
            }
            if ( ++v32 >= v33 )
              goto LABEL_33;
          }
          v35 = 1;
          goto LABEL_34;
        }
LABEL_33:
        v35 = 0;
LABEL_34:
        LeaveCriticalSection(&stru_1801A3D88);
        *((_BYTE *)this + 5973) = v35;
        *((_QWORD *)this + 342) = 0LL;
        return (unsigned int)v19;
      }
      DXGIEnumeration = CDisplayManager::GetDXGIEnumeration(v31, &v54);
      v50 = v54;
      v51 = DXGIEnumeration;
      if ( DXGIEnumeration >= 0 )
      {
        v52 = CD3DRegistryDatabase::InitializeDriversFromRegistry(v54);
        v51 = v52;
        if ( v52 >= 0 )
        {
          CD3DRegistryDatabase::m_fInitialized = 1;
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0xD2u);
          CD3DRegistryDatabase::m_fInitialized = 0;
        }
        if ( v51 >= 0 )
        {
          qword_1801A3DB8 = v50;
          HIBYTE(word_1801A3E04) = 1;
          goto LABEL_90;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x131u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIEnumeration, 0x12Cu);
      }
      if ( v50 )
        (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)v50 + 8LL))(v50);
LABEL_90:
      if ( v51 < 0 )
        goto LABEL_33;
      goto LABEL_30;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x158u);
    return v16;
  }
}
