/*
 * XREFs of ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180074110
 * Callers:
 *     ?PreRender@CHwndRenderTarget@@QEAAJ_N@Z @ 0x180075548 (-PreRender@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x1800769A0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?IsStereoEnabled@CDisplaySet@@QEBA_NXZ @ 0x180036510 (-IsStereoEnabled@CDisplaySet@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetDisplayRect@CHwndRenderTarget@@AEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x180073B48 (-GetDisplayRect@CHwndRenderTarget@@AEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfa.c)
 *     ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180073DA8 (-CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRE.c)
 *     ?EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800B1754 (-EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 *     ?Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@Z @ 0x1800B6CFC (-Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 *     ?SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z @ 0x18011A1B4 (-SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureRenderTarget(CHwndRenderTarget *this)
{
  int v1; // edi
  CMILCOMBase *v2; // r14
  unsigned int v5; // ebx
  __int64 v6; // rdi
  _DWORD *v7; // rax
  int v8; // edx
  __int64 *v9; // rcx
  unsigned int *v10; // r8
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  CoRenderHost *v15; // rbp
  int v16; // eax
  struct CD3DSurface *v17; // rax
  int v18; // eax
  _DWORD *DisplayRect; // rax
  int v20; // edx
  __int64 *v21; // rcx
  unsigned int *v22; // r8
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0LL;
  *((_BYTE *)this + 756) = 0;
  if ( *((_BYTE *)this + 749) )
    return (unsigned int)v1;
  if ( *((_QWORD *)this + 20) )
  {
    if ( *((_BYTE *)this + 761) )
    {
      v27 = *((_DWORD *)this + 91);
      DisplayRect = (_DWORD *)CHwndRenderTarget::GetDisplayRect((__int64)this);
      CHwndRenderTarget::CalculateMonitorTransform(v21, v20, v22, DisplayRect, &v27);
      v24 = v27;
      if ( *(_BYTE *)(*((_QWORD *)this + 19) + 301LL) )
        v24 = v27 | 0x20000000;
      LOBYTE(v23) = (v24 & 0x10000000) != 0;
      (*(void (__fastcall **)(CHwndRenderTarget *, __int64))(*(_QWORD *)this + 264LL))(this, v23);
      *((_BYTE *)this + 747) = 1;
    }
    goto LABEL_4;
  }
  v5 = *((_DWORD *)this + 91);
  v27 = v5;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_x(this, &EVTDESC_ETWGUID_DESKTOPRTCREATE_Start, 0LL);
  v6 = *((_QWORD *)this + 2);
  CBitmapOfDeviceBitmaps::AddRef(*(CBitmapOfDeviceBitmaps **)(v6 + 16));
  v2 = *(CMILCOMBase **)(v6 + 16);
  if ( (v5 & 0x10) != 0 )
  {
    v7 = (_DWORD *)CHwndRenderTarget::GetDisplayRect((__int64)this);
    CHwndRenderTarget::CalculateMonitorTransform(v9, v8, v10, v7, &v27);
    v11 = v27;
    if ( *(_BYTE *)(*((_QWORD *)this + 19) + 301LL) )
      v11 = v27 | 0x20000000;
    v5 = v11 | 0x800;
    if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 144LL))(this) )
    {
      v5 |= 0x4000u;
    }
    else if ( CDisplaySet::IsStereoEnabled(*(CDisplaySet **)(*((_QWORD *)this + 19) + 16LL))
           && *(_DWORD *)(*((_QWORD *)this + 2) + 212LL) )
    {
      v5 |= 0x2000u;
    }
  }
  v12 = (*(__int64 (__fastcall **)(CHwndRenderTarget *, CMILCOMBase *, _QWORD))(*(_QWORD *)this + 248LL))(this, v2, v5);
  v1 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x9BBu);
LABEL_5:
    if ( v1 < 0 )
    {
      (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 280LL))(this);
      v25 = *((_QWORD *)this + 21);
      if ( v25 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        *((_QWORD *)this + 21) = 0LL;
      }
      v26 = *((_QWORD *)this + 20);
      if ( v26 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        *((_QWORD *)this + 20) = 0LL;
      }
    }
    goto LABEL_6;
  }
  v13 = CLogicalSurfaceHandleMap::EnsureTextures((CLogicalSurfaceHandleMap *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL)
                                                                            + 96LL));
  v1 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x9C6u);
    goto LABEL_5;
  }
  v15 = *(CoRenderHost **)(*((_QWORD *)this + 2) + 520LL);
  if ( v15 )
  {
    v17 = (struct CD3DSurface *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 120LL))(*((_QWORD *)this + 20));
    v18 = CoRenderHost::SetDeviceFromSurface(v15, v17);
    v1 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x9CFu);
      goto LABEL_5;
    }
  }
  if ( (v5 & 0x2000) != 0 )
    (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 20))(
      *((_QWORD *)this + 20),
      &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
      (char *)this + 168);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_x(v14, &EVTDESC_ETWGUID_DESKTOPRTCREATE_Stop, 0LL);
  *(_WORD *)((char *)this + 747) = 257;
LABEL_4:
  *((_BYTE *)this + 761) = 0;
  if ( *((_QWORD *)this + 92) )
    goto LABEL_5;
  v16 = COverlayContext::Create(
          *((struct IRenderTargetDisplay **)this + 20),
          *((struct CDisplay **)this + 19),
          *((struct CComposition **)this + 2),
          (struct COverlayContext **)this + 92);
  v1 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xA14u);
    goto LABEL_5;
  }
LABEL_6:
  if ( v2 )
    CMILCOMBase::InternalRelease(v2);
  return (unsigned int)v1;
}
