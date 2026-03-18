/*
 * XREFs of ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006C640
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180004184 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800095B8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x18004AF38 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180075780 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800BB910 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18011FA60 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180120B7C (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z @ 0x180144498 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z.c)
 *     ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18015CC48 (-GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@.c)
 *     ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x180166898 (-RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800386BC (-GetDXGIEnumeration@CDisplayManager@@IEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058CF0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18006D260 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?GetDeviceInfo@CSwRenderTargetGetBounds@@UEAAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z @ 0x18008FDA0 (-GetDeviceInfo@CSwRenderTargetGetBounds@@UEAAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z.c)
 *     ?InitializeDriversFromRegistry@CD3DRegistryDatabase@@CAJPEBVCDXGIEnumeration@@@Z @ 0x1800BA1DC (-InitializeDriversFromRegistry@CD3DRegistryDatabase@@CAJPEBVCDXGIEnumeration@@@Z.c)
 *     ?RemoveDevicesNotInCurrentEnumeration@CD3DDeviceManager@@AEAAXXZ @ 0x1800BA2E8 (-RemoveDevicesNotInCurrentEnumeration@CD3DDeviceManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_ppffffcb @ 0x1801252D8 (Template_ppffffcb.c)
 */

__int64 __fastcall CDrawingContext::BeginFrame(
        CDrawingContext *this,
        struct IRenderTarget *a2,
        __int128 *a3,
        char a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 (__fastcall *v12)(CSwRenderTargetGetBounds *__hidden, struct _LUID *, struct DisplayId *, struct _GUID *); // rax
  struct _LUID *v13; // rdx
  int DeviceInfo; // eax
  int v16; // esi
  int v17; // eax
  __int64 v18; // r8
  unsigned int v19; // ebx
  bool v20; // zf
  LPVOID (__fastcall *v21)(WPF::ProcessHeapImpl *, SIZE_T); // r9
  __int64 v22; // rax
  void *v23; // rbx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  void (__fastcall *v26)(WPF::ProcessHeapImpl *, void *); // rax
  __int64 v27; // rax
  void *v28; // rbx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  void (__fastcall *v31)(WPF::ProcessHeapImpl *, void *); // rdx
  void (__fastcall *v32)(WPF::ProcessHeapImpl *, void *); // rax
  int v33; // eax
  bool v34; // si
  __int64 v35; // rbx
  CDisplayManager *v36; // rcx
  CDXGIEnumeration *v37; // rdx
  unsigned int v38; // r8d
  unsigned int v39; // ecx
  __int64 v40; // rdx
  __int64 result; // rax
  __int64 v42; // r8
  __int128 v43; // xmm0
  unsigned int v44; // ebp
  SIZE_T v45; // rdx
  LPVOID (__fastcall *v46)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  LPVOID v47; // rax
  unsigned __int64 v48; // rax
  void *v49; // rdx
  void (__fastcall *v50)(WPF::ProcessHeapImpl *, void *); // rax
  unsigned int v51; // esi
  LPVOID (__fastcall *v52)(WPF::ProcessHeapImpl *, SIZE_T); // rax
  SIZE_T v53; // rdx
  LPVOID v54; // rax
  unsigned __int64 v55; // rax
  void *v56; // rdx
  void (__fastcall *v57)(WPF::ProcessHeapImpl *, void *); // rax
  bool v58; // bl
  int v59; // ecx
  int DXGIEnumeration; // eax
  CDXGIEnumeration *v61; // r15
  int v62; // r14d
  int v63; // eax
  unsigned int v64; // [rsp+20h] [rbp-98h]
  unsigned int v65; // [rsp+20h] [rbp-98h]
  struct CDXGIEnumeration *v66[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v67; // [rsp+60h] [rbp-58h] BYREF
  int v68; // [rsp+68h] [rbp-50h]
  int v69; // [rsp+6Ch] [rbp-4Ch]

  v8 = *(_QWORD *)a2;
  v66[0] = 0LL;
  v12 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *__hidden, struct _LUID *, struct DisplayId *, struct _GUID *))(v8 + 104);
  v13 = (struct _LUID *)((char *)this + 464);
  LOBYTE(v66[1]) = 1;
  if ( v12 == CSwRenderTargetGetBounds::GetDeviceInfo )
    DeviceInfo = CSwRenderTargetGetBounds::GetDeviceInfo(a2, v13, 0LL, 0LL);
  else
    DeviceInfo = v12(a2, v13, 0LL, 0LL);
  v16 = DeviceInfo;
  if ( DeviceInfo < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DeviceInfo, 0x159u);
    return (unsigned int)v16;
  }
  v17 = CDrawingContext::PushRenderTarget(this, a2);
  v19 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x161u);
    return v19;
  }
  v20 = *((_BYTE *)this + 3048) == 0;
  *((_QWORD *)this + 56) = a8;
  if ( v20 && !*((_DWORD *)this + 1621) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
  {
    v58 = a5 && !CMILMatrix::IsIdentity<0>(a5);
    (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 54) + 64LL))(*((_QWORD *)this + 54), &v67);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
      Template_ppffffcb(
        v59,
        (unsigned int)&EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Start,
        (_DWORD)this,
        *((_QWORD *)this + 54),
        v67,
        SBYTE4(v67),
        v68,
        v69,
        v58 ? 0x44 : 0,
        a5);
  }
  if ( a3 )
  {
    v43 = *a3;
    LODWORD(a3) = 0;
    *(_OWORD *)((char *)this + 488) = v43;
  }
  else
  {
    v20 = g_fUseDebugClearColorIfNoClear == 0;
    *((_QWORD *)this + 61) = 0LL;
    *((_QWORD *)this + 62) = 0LL;
    if ( !v20 )
    {
      *((_DWORD *)this + 122) = 1065353216;
      *((_DWORD *)this + 125) = 1065353216;
    }
  }
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 81) = 1;
  *((_QWORD *)this + 41) = 1LL;
  v21 = WPF::ProcessHeapImpl::Alloc;
  *((_BYTE *)this + 344) = a4 == 0;
  v16 = 0;
  v22 = *((unsigned int *)this + 755);
  v23 = 0LL;
  if ( *((_DWORD *)this + 754) != (_DWORD)v22 )
    goto LABEL_10;
  v44 = 2 * v22;
  if ( (unsigned __int64)(2 * v22) > 0xFFFFFFFF )
  {
    v64 = 76;
    goto LABEL_85;
  }
  if ( v44 <= 0x40 )
    v44 = 64;
  v16 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v44 <= 4 )
  {
    v16 = -2147024809;
  }
  else
  {
    v45 = 4LL * v44;
    v46 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    if ( v46 == WPF::ProcessHeapImpl::Alloc )
      v47 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v45);
    else
      v47 = (LPVOID)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T, _QWORD, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v46)(
                      WPF::g_pProcessHeap,
                      v45,
                      v44,
                      WPF::ProcessHeapImpl::Alloc);
    v23 = v47;
    if ( !v47 )
      v16 = -2147024882;
  }
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x54u);
LABEL_86:
    LODWORD(a3) = 0;
    goto LABEL_13;
  }
  v48 = 4LL * *((unsigned int *)this + 754);
  if ( v48 > 0xFFFFFFFF )
  {
    v64 = 86;
LABEL_85:
    v16 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v64);
    goto LABEL_86;
  }
  v16 = 0;
  memcpy_0(v23, *((const void **)this + 379), (unsigned int)v48);
  v49 = (void *)*((_QWORD *)this + 379);
  v50 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v50 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v49);
  else
    v50(WPF::g_pProcessHeap, v49);
  *((_DWORD *)this + 755) = v44;
  LODWORD(a3) = 0;
  *((_QWORD *)this + 379) = v23;
  v23 = 0LL;
LABEL_10:
  *(_DWORD *)(*((_QWORD *)this + 379) + 4LL * *((unsigned int *)this + 754)) = 1065353216;
  v24 = *((_DWORD *)this + 760);
  v25 = ++*((_DWORD *)this + 754);
  if ( v24 > v25 )
    v25 = v24;
  *((_DWORD *)this + 760) = v25;
LABEL_13:
  v26 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v26 == WPF::ProcessHeapImpl::Free )
  {
    if ( v23 )
      HeapFree(g_hProcessHeap, 0, v23);
  }
  else
  {
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *, __int64, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v26)(
      WPF::g_pProcessHeap,
      v23,
      v18,
      v21);
  }
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1A5u);
    return (unsigned int)v16;
  }
  v27 = *((unsigned int *)this + 787);
  v28 = 0LL;
  if ( *((_DWORD *)this + 786) != (_DWORD)v27 )
  {
LABEL_18:
    *(_OWORD *)(*((_QWORD *)this + 395) + 16LL * *((unsigned int *)this + 786)) = *(_OWORD *)v66;
    v29 = *((_DWORD *)this + 792);
    v30 = ++*((_DWORD *)this + 786);
    if ( v29 > v30 )
      v30 = v29;
    *((_DWORD *)this + 792) = v30;
    goto LABEL_21;
  }
  v51 = 2 * v27;
  if ( (unsigned __int64)(2 * v27) > 0xFFFFFFFF )
  {
    v65 = 76;
LABEL_91:
    LODWORD(a3) = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, v65);
    goto LABEL_21;
  }
  if ( v51 <= 0x40 )
    v51 = 64;
  LODWORD(a3) = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v51 <= 0x10 )
  {
    LODWORD(a3) = -2147024809;
  }
  else
  {
    v52 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
    v53 = 16LL * v51;
    if ( v52 == WPF::ProcessHeapImpl::Alloc )
      v54 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v53);
    else
      v54 = v52(WPF::g_pProcessHeap, v53);
    v28 = v54;
    if ( !v54 )
      LODWORD(a3) = -2147024882;
  }
  if ( (int)a3 >= 0 )
  {
    v55 = 16LL * *((unsigned int *)this + 786);
    if ( v55 <= 0xFFFFFFFF )
    {
      LODWORD(a3) = 0;
      memcpy_0(v28, *((const void **)this + 395), (unsigned int)v55);
      v56 = (void *)*((_QWORD *)this + 395);
      v57 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( v57 == WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v56);
      else
        v57(WPF::g_pProcessHeap, v56);
      *((_QWORD *)this + 395) = v28;
      v28 = 0LL;
      *((_DWORD *)this + 787) = v51;
      goto LABEL_18;
    }
    v65 = 86;
    goto LABEL_91;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, (int)a3, 0x54u);
LABEL_21:
  v31 = WPF::ProcessHeapImpl::Free;
  v32 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v32 == WPF::ProcessHeapImpl::Free )
  {
    if ( v28 )
      HeapFree(g_hProcessHeap, 0, v28);
  }
  else
  {
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *, __int64, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))v32)(
      WPF::g_pProcessHeap,
      v28,
      v18,
      v21);
  }
  if ( (int)a3 >= 0 )
  {
    *((_QWORD *)this + 407) = a6;
    if ( a6 )
      (*(void (__fastcall **)(__int64, void (__fastcall *)(WPF::ProcessHeapImpl *, void *), __int64, LPVOID (__fastcall *)(WPF::ProcessHeapImpl *, SIZE_T)))(*(_QWORD *)a6 + 8LL))(
        a6,
        v31,
        v18,
        v21);
    *((_BYTE *)this + 6532) = a7;
    if ( a5 )
    {
      *((_OWORD *)this + 199) = *(_OWORD *)a5;
      *((_OWORD *)this + 200) = *(_OWORD *)(a5 + 16);
      *((_OWORD *)this + 201) = *(_OWORD *)(a5 + 32);
      *((_OWORD *)this + 202) = *(_OWORD *)(a5 + 48);
      v33 = *(_DWORD *)(a5 + 64);
    }
    else
    {
      *((_OWORD *)this + 199) = CMILMatrix::Identity;
      *((_OWORD *)this + 200) = xmmword_1801EAD20;
      *((_OWORD *)this + 201) = xmmword_1801EAD30;
      *((_OWORD *)this + 202) = xmmword_1801EAD40;
      v33 = dword_1801EAD50;
    }
    *((_DWORD *)this + 812) = v33;
    *((_WORD *)this + 3267) = 0;
    v34 = 0;
    *((_BYTE *)this + 6536) = 0;
    v35 = *((_QWORD *)this + 58);
    v67 = v35;
    EnterCriticalSection(&stru_1801F0028);
    v37 = qword_1801F0058;
    v66[0] = 0LL;
    if ( qword_1801F0058 )
      goto LABEL_30;
    DXGIEnumeration = CDisplayManager::GetDXGIEnumeration(v36, v66);
    v61 = v66[0];
    v62 = DXGIEnumeration;
    if ( DXGIEnumeration < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIEnumeration, 0x164u);
    }
    else
    {
      v63 = CD3DRegistryDatabase::InitializeDriversFromRegistry(v66[0]);
      v62 = v63;
      if ( v63 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0xD2u);
      if ( v62 >= 0 )
      {
        qword_1801F0058 = v61;
        byte_1801F0124 = 1;
        CD3DDeviceManager::RemoveDevicesNotInCurrentEnumeration((CD3DDeviceManager *)&g_D3DDeviceManager);
LABEL_101:
        if ( v62 < 0 )
        {
LABEL_34:
          LeaveCriticalSection(&stru_1801F0028);
          result = (unsigned int)a3;
          *((_BYTE *)this + 6537) = v34;
          *((_QWORD *)this + 397) = 0LL;
          return result;
        }
        v37 = qword_1801F0058;
LABEL_30:
        v38 = *((_DWORD *)v37 + 22);
        v34 = 0;
        v39 = 0;
        if ( v38 )
        {
          v40 = *((_QWORD *)v37 + 8);
          while ( __PAIR64__(HIDWORD(v67), v35) != *(_QWORD *)(*(_QWORD *)(v40 + 8LL * v39) + 336LL) )
          {
            if ( ++v39 >= v38 )
              goto LABEL_34;
          }
          v42 = *(_QWORD *)(v40 + 8LL * v39);
          if ( *(_DWORD *)(v42 + 296) == 5140 )
            v34 = *(_DWORD *)(v42 + 300) == 140;
        }
        goto LABEL_34;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v62, 0x169u);
    }
    if ( v61 )
      (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)v61 + 8LL))(v61);
    goto LABEL_101;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, (int)a3, 0x1A7u);
  return (unsigned int)a3;
}
