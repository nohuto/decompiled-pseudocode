/*
 * XREFs of ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DA@@@2PEAVCHwndRenderTarget@@@Z @ 0x18002EA00
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800299D8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004BAA8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18004CCC0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x180050584 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x180053DA4 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z.c)
 *     ?Clear@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800E9CF8 (-Clear@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800ED270 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x1800EF214 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800F0774 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileBrush@@PEBUBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18012172C (-GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileBrush@@PEBUBrushContext@@PEBVCMILMatrix@@2.c)
 *     ?RenderSlate@CAnalogRenderTarget@@AEAAJPEA_N@Z @ 0x1801272F4 (-RenderSlate@CAnalogRenderTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18001EFF0 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18002F420 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?GetDeviceInfo@CSwRenderTargetGetBounds@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x180043E40 (-GetDeviceInfo@CSwRenderTargetGetBounds@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 *     ?GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x180054B38 (-GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InitializeDriversFromRegistry@CD3DRegistryDatabase@@CAJPEBVCDXGIEnumeration@@@Z @ 0x180096A78 (-InitializeDriversFromRegistry@CD3DRegistryDatabase@@CAJPEBVCDXGIEnumeration@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memcpy_0 @ 0x180099BBA (memcpy_0.c)
 *     Template_ppffffcb @ 0x1800F4FAC (Template_ppffffcb.c)
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
  __int64 (__fastcall *v12)(CSwRenderTargetGetBounds *__hidden, struct _LUID *, struct DisplayId *); // rdi
  int DeviceInfo; // eax
  unsigned int v14; // edi
  int v15; // eax
  WPF *v16; // rcx
  unsigned int v17; // ebx
  bool v18; // zf
  int v19; // r13d
  void *v20; // rdi
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // ecx
  void (*v24)(WPF::ProcessHeapImpl *__hidden, void *); // rsi
  __int128 v25; // xmm1
  void *v26; // rbx
  CDisplayManager *v27; // rcx
  unsigned int v28; // ecx
  unsigned int v29; // r8d
  __int64 v30; // rdx
  char v31; // bl
  struct CDXGIEnumeration *v33; // rax
  int v34; // eax
  unsigned __int64 v35; // rax
  void *v36; // rsi
  int DXGIEnumeration; // eax
  CDXGIEnumeration *v38; // r14
  int v39; // esi
  int v40; // eax
  void **v41; // [rsp+20h] [rbp-98h]
  bool v42; // [rsp+50h] [rbp-68h]
  void *v43; // [rsp+58h] [rbp-60h] BYREF
  struct CDXGIEnumeration *v44; // [rsp+60h] [rbp-58h] BYREF
  int v45; // [rsp+68h] [rbp-50h] BYREF
  int v46; // [rsp+6Ch] [rbp-4Ch]
  int v47; // [rsp+70h] [rbp-48h]
  int v48; // [rsp+74h] [rbp-44h]

  v12 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *__hidden, struct _LUID *, struct DisplayId *))(*(_QWORD *)a2 + 104LL);
  if ( v12 == CSwRenderTargetGetBounds::GetDeviceInfo )
    DeviceInfo = CSwRenderTargetGetBounds::GetDeviceInfo(a2, (struct _LUID *)this + 48, 0LL);
  else
    DeviceInfo = v12(a2, (struct _LUID *)this + 48, 0LL);
  v14 = DeviceInfo;
  if ( DeviceInfo < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DeviceInfo, 0x14Du);
    return v14;
  }
  else
  {
    v15 = CDrawingContext::PushRenderTarget(this, a2);
    v17 = v15;
    if ( v15 >= 0 )
    {
      v18 = *((_BYTE *)this + 2616) == 0;
      *((_QWORD *)this + 46) = a8;
      if ( v18 && !*((_DWORD *)this + 1439) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
      {
        v42 = a5 && !D2DMatrixIsIdentity(a5);
        (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 44) + 64LL))(*((_QWORD *)this + 44), &v45);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
          Template_ppffffcb(
            (_DWORD)v16,
            (unsigned int)&EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Start,
            (_DWORD)this,
            *((_QWORD *)this + 44),
            v45,
            v46,
            v47,
            v48,
            v42 ? 0x40 : 0,
            (__int64)a5);
      }
      if ( a3 )
      {
        *(_OWORD *)((char *)this + 408) = *a3;
      }
      else
      {
        v18 = g_fUseDebugClearColorIfNoClear == 0;
        *((_QWORD *)this + 51) = 0LL;
        *((_QWORD *)this + 52) = 0LL;
        if ( !v18 )
        {
          *((_DWORD *)this + 102) = 1065353216;
          *((_DWORD *)this + 105) = 1065353216;
        }
      }
      v18 = a4 == 0;
      *((_DWORD *)this + 61) = 1;
      *((_QWORD *)this + 31) = 1LL;
      v19 = 0;
      *((_QWORD *)this + 32) = 0LL;
      *((_BYTE *)this + 264) = v18;
      v20 = 0LL;
      v21 = *((unsigned int *)this + 647);
      v43 = 0LL;
      if ( *((_DWORD *)this + 646) == (_DWORD)v21 )
      {
        v33 = (struct CDXGIEnumeration *)(2 * v21);
        v44 = v33;
        if ( (unsigned __int64)v33 > 0xFFFFFFFF )
        {
          v19 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
          goto LABEL_13;
        }
        if ( (unsigned int)v33 <= 0x40 )
        {
          LODWORD(v33) = 64;
          v44 = (struct CDXGIEnumeration *)64;
        }
        v34 = WPF::HrMalloc(v16, 4LL, (unsigned int)v33, (unsigned __int64)&v43, v41);
        v19 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x54u);
          v20 = v43;
          goto LABEL_13;
        }
        v35 = 4LL * *((unsigned int *)this + 646);
        if ( v35 > 0xFFFFFFFF )
        {
          v19 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
          v20 = v43;
          goto LABEL_13;
        }
        v36 = v43;
        v19 = 0;
        memcpy_0(v43, *((const void **)this + 325), (unsigned int)v35);
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
          WPF::g_pProcessHeap,
          *((_QWORD *)this + 325));
        v20 = 0LL;
        *((_DWORD *)this + 647) = (_DWORD)v44;
        *((_QWORD *)this + 325) = v36;
      }
      *(_DWORD *)(*((_QWORD *)this + 325) + 4LL * *((unsigned int *)this + 646)) = 1065353216;
      v22 = *((_DWORD *)this + 652);
      v23 = ++*((_DWORD *)this + 646);
      if ( v22 > v23 )
        v23 = v22;
      *((_DWORD *)this + 652) = v23;
LABEL_13:
      v24 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v24 == WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v20);
      else
        ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v24)(WPF::g_pProcessHeap, v20);
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x199u);
        return (unsigned int)v19;
      }
      *((_QWORD *)this + 347) = a6;
      if ( a6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a6 + 8LL))(a6);
      *((_BYTE *)this + 5936) = a7;
      if ( a5 )
      {
        *(_OWORD *)((char *)this + 2712) = *(_OWORD *)a5;
        *(_OWORD *)((char *)this + 2728) = *((_OWORD *)a5 + 1);
        *(_OWORD *)((char *)this + 2744) = *((_OWORD *)a5 + 2);
        v25 = *((_OWORD *)a5 + 3);
      }
      else
      {
        *(_OWORD *)((char *)this + 2712) = IdentityMatrix;
        *(_OWORD *)((char *)this + 2728) = xmmword_180190B10;
        *(_OWORD *)((char *)this + 2744) = xmmword_180190B20;
        v25 = xmmword_180190B30;
      }
      v26 = (void *)*((_QWORD *)this + 48);
      v43 = v26;
      *(_OWORD *)((char *)this + 2760) = v25;
      *((_WORD *)this + 2969) = 0;
      *((_BYTE *)this + 5940) = 0;
      EnterCriticalSection(&CriticalSection);
      v44 = 0LL;
      if ( qword_180195DD0 )
      {
LABEL_21:
        v28 = 0;
        v29 = *((_DWORD *)qword_180195DD0 + 22);
        if ( v29 )
        {
          while ( 1 )
          {
            v30 = *(_QWORD *)(*((_QWORD *)qword_180195DD0 + 8) + 8LL * v28);
            if ( __PAIR64__(HIDWORD(v43), (unsigned int)v26) == *(_QWORD *)(v30 + 336)
              && *(_DWORD *)(v30 + 296) == 5140
              && *(_DWORD *)(v30 + 300) == 140 )
            {
              break;
            }
            if ( ++v28 >= v29 )
              goto LABEL_24;
          }
          v31 = 1;
          goto LABEL_25;
        }
LABEL_24:
        v31 = 0;
LABEL_25:
        LeaveCriticalSection(&CriticalSection);
        *((_BYTE *)this + 5941) = v31;
        *((_QWORD *)this + 338) = 0LL;
        return (unsigned int)v19;
      }
      DXGIEnumeration = CDisplayManager::GetDXGIEnumeration(v27, &v44);
      v38 = v44;
      v39 = DXGIEnumeration;
      if ( DXGIEnumeration >= 0 )
      {
        v40 = CD3DRegistryDatabase::InitializeDriversFromRegistry(v44);
        v39 = v40;
        if ( v40 >= 0 )
        {
          CD3DRegistryDatabase::m_fInitialized = 1;
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v40, 0xD2u);
          CD3DRegistryDatabase::m_fInitialized = 0;
        }
        if ( v39 >= 0 )
        {
          qword_180195DD0 = v38;
          byte_180195DC8 = 1;
          goto LABEL_64;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x135u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIEnumeration, 0x130u);
      }
      if ( v38 )
        (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)v38 + 8LL))(v38);
LABEL_64:
      if ( v39 < 0 )
        goto LABEL_24;
      goto LABEL_21;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x155u);
    return v17;
  }
}
