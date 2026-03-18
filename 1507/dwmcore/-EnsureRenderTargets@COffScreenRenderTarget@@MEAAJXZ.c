/*
 * XREFs of ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1800EC190
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180054C34 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x180054CFC (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?GetDisplayPixelFormat@CDisplaySet@@QEBA?AW4DXGI_FORMAT@@VDisplayId@@@Z @ 0x180054DD0 (-GetDisplayPixelFormat@CDisplaySet@@QEBA-AW4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@4PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800558C0 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1800EDC24 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::EnsureRenderTargets(COffScreenRenderTarget *this)
{
  unsigned int v1; // esi
  struct CDisplay *v2; // r14
  int CurrentDisplaySet; // eax
  int PrimaryDisplay; // eax
  struct _LUID v6; // rdi
  unsigned int v7; // ebx
  enum DXGI_FORMAT DisplayPixelFormat; // eax
  int v9; // r9d
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // ebx
  int v14; // eax
  unsigned int v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+B0h] [rbp+38h] BYREF
  CDisplaySet *v17; // [rsp+B8h] [rbp+40h] BYREF
  struct CDisplay *v18; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+50h]

  v1 = 0;
  v2 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( *((_DWORD *)this + 56) )
    return v1;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v17);
  v1 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    v15 = 105;
LABEL_10:
    v9 = CurrentDisplaySet;
LABEL_29:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v15);
    goto LABEL_16;
  }
  PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v17, &v18);
  v1 = PrimaryDisplay;
  if ( PrimaryDisplay >= 0 )
  {
    v2 = v18;
    v19 = 1LL;
    v6 = (struct _LUID)*((_QWORD *)v18 + 104);
    v7 = *(_DWORD *)(*((_QWORD *)v18 + 19) + 852LL);
    DisplayPixelFormat = (unsigned int)CDisplaySet::GetDisplayPixelFormat((__int64)v17, v7);
    CurrentDisplaySet = COffScreenRenderTarget::UpdatePixelFormatInfo(this, DisplayPixelFormat);
    v1 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      v15 = 115;
      goto LABEL_10;
    }
    CurrentDisplaySet = CD3DDeviceManager::CreateRenderTargetBitmap(
                          (__int64)&qword_180195D88,
                          (__int64)this + 336,
                          *((_DWORD *)this + 74),
                          *((_DWORD *)this + 75),
                          v19,
                          0,
                          (__int64)this + 304,
                          1,
                          (struct _GUID *)(*((_QWORD *)this + 2) + 252LL),
                          v6,
                          v7,
                          0,
                          (struct CD3DDeviceLevel1 *)&v16);
    v1 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      v15 = 129;
      goto LABEL_10;
    }
    v10 = *((_DWORD *)this + 56);
    v11 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v1 = -2147024362;
LABEL_28:
      v15 = 131;
      v9 = v12;
      goto LABEL_29;
    }
    v1 = 0;
    if ( v11 > *((_DWORD *)this + 55) )
    {
      v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 200, 8u, 1, &v16);
      v12 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
      v1 = v12;
      if ( v12 < 0 )
        goto LABEL_28;
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 25) + 8LL * *((unsigned int *)this + 56)) = v16;
      *((_DWORD *)this + 56) = v11;
    }
    v16 = 0LL;
    goto LABEL_16;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, PrimaryDisplay, 0x6Au);
  v2 = v18;
LABEL_16:
  if ( v16 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v16 = 0LL;
  }
  if ( v17 )
    CDisplaySet::Release(v17);
  if ( v2 )
    CMILRefCountBase::Release(v2);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return v1;
}
