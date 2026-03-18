/*
 * XREFs of ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18007C290
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x180075420 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXPEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007BD68 (-CalculateMonitorTransform@CHwndRenderTarget@@AEAAXPEAU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitiali.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@Z @ 0x1800B3994 (-Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@.c)
 *     ?SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z @ 0x180104140 (-SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
 */

__int64 __fastcall CHwndRenderTarget::EnsureRenderTarget(CHwndRenderTarget *this)
{
  int v1; // ebp
  CMILCOMBase *v2; // r15
  unsigned int v5; // ebx
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  CoRenderHost *v9; // r12
  int v10; // eax
  struct CD3DSurface *v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rdi
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0LL;
  *((_BYTE *)this + 563) = 0;
  if ( *((_BYTE *)this + 556) )
    return (unsigned int)v1;
  if ( !*((_QWORD *)this + 11) )
  {
    v5 = *((_DWORD *)this + 55);
    v16 = v5;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_x(this, &EVTDESC_ETWGUID_DESKTOPRTCREATE_Start, 0LL);
    v6 = *((_QWORD *)this + 2);
    CBitmapOfDeviceBitmaps::AddRef(*(CBitmapOfDeviceBitmaps **)(v6 + 16));
    v2 = *(CMILCOMBase **)(v6 + 16);
    if ( (v5 & 0x10) != 0 )
    {
      CHwndRenderTarget::CalculateMonitorTransform((__int64 *)this, &v16);
      if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 136LL))(this) )
      {
        v5 = v16 | 0x4000;
      }
      else if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 10) + 16LL) + 544LL)
             && *(_DWORD *)(*((_QWORD *)this + 2) + 212LL) )
      {
        v5 = v16 | 0x2000;
      }
      else
      {
        v5 = v16;
      }
    }
    v7 = (*(__int64 (__fastcall **)(CHwndRenderTarget *, CMILCOMBase *, _QWORD))(*(_QWORD *)this + 232LL))(this, v2, v5);
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x95Cu);
    }
    else
    {
      v9 = *(CoRenderHost **)(*((_QWORD *)this + 2) + 512LL);
      if ( !v9
        || (v11 = (struct CD3DSurface *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 120LL))(*((_QWORD *)this + 11)),
            v12 = CoRenderHost::SetDeviceFromSurface(v9, v11),
            v1 = v12,
            v12 >= 0) )
      {
        if ( (v5 & 0x2000) != 0 )
          (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 11))(
            *((_QWORD *)this + 11),
            &GUID_ce9b2f4f_bd49_4551_83ee_78f4d7b06d31,
            (char *)this + 96);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_x(v8, &EVTDESC_ETWGUID_DESKTOPRTCREATE_Stop, 0LL);
        goto LABEL_21;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x965u);
    }
LABEL_5:
    if ( v1 < 0 )
    {
      v14 = *((_QWORD *)this + 12);
      if ( v14 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 16LL))(*((_QWORD *)this + 12));
        *((_QWORD *)this + 12) = 0LL;
      }
      v15 = *((_QWORD *)this + 11);
      if ( v15 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 16LL))(*((_QWORD *)this + 11));
        *((_QWORD *)this + 11) = 0LL;
      }
    }
    goto LABEL_6;
  }
  if ( !*((_BYTE *)this + 568) )
    goto LABEL_4;
  v16 = *((_DWORD *)this + 55);
  CHwndRenderTarget::CalculateMonitorTransform((__int64 *)this, &v16);
  LOBYTE(v13) = (v16 & 0x10000000) != 0;
  (*(void (__fastcall **)(CHwndRenderTarget *, __int64))(*(_QWORD *)this + 248LL))(this, v13);
LABEL_21:
  *((_BYTE *)this + 554) = 1;
LABEL_4:
  *((_BYTE *)this + 568) = 0;
  if ( *((_QWORD *)this + 68) )
    goto LABEL_5;
  v10 = COverlayContext::Create(
          *((struct IRenderTargetDisplay **)this + 11),
          *((struct CDisplay **)this + 10),
          *((struct CComposition **)this + 2),
          (struct COverlayContext **)this + 68);
  v1 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x991u);
    goto LABEL_5;
  }
LABEL_6:
  if ( v2 )
    CMILCOMBase::InternalRelease(v2);
  return (unsigned int)v1;
}
