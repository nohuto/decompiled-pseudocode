/*
 * XREFs of ?CheckRenderTargetFormat@CD3DDeviceLevel1@@QEAAJW4DXGI_FORMAT@@@Z @ 0x1800195E4
 * Callers:
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x180001464 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?Create@CHwTextureRenderTarget@@SAJAEBVCResourceTag@@IIPEAVCD3DDeviceLevel1@@VDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800574FC (-Create@CHwTextureRenderTarget@@SAJAEBVCResourceTag@@IIPEAVCD3DDeviceLevel1@@VDisplayId@@AEBUPix.c)
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x18008E50C (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 *     ?Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x180127AA8 (-Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CheckRenderTargetFormat(CD3DDeviceLevel1 *this, unsigned int a2)
{
  int *v4; // r14
  int v5; // ebx
  int v6; // ebp
  CD3DDeviceLevel1 *v8; // [rsp+50h] [rbp+8h] BYREF

  ++*((_DWORD *)this + 128);
  v8 = this;
  *((_DWORD *)this + 129) = GetCurrentThreadId();
  switch ( a2 )
  {
    case 2u:
      v4 = (int *)((char *)this + 780);
      break;
    case 0xAu:
      v4 = (int *)((char *)this + 772);
      break;
    case 0xBu:
      v4 = (int *)((char *)this + 764);
      break;
    case 0x18u:
      v4 = (int *)((char *)this + 756);
      break;
    case 0x1Cu:
      v4 = (int *)((char *)this + 724);
      break;
    case 0x57u:
      v4 = (int *)((char *)this + 740);
      break;
    case 0x58u:
      v4 = (int *)((char *)this + 732);
      break;
    default:
      v5 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x5C7u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x5E9u);
      goto LABEL_10;
  }
  v5 = *v4;
  v6 = -2003292404;
  if ( *v4 == -2003292404 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 68) + 232LL))(
           *((_QWORD *)this + 68),
           a2,
           v4 + 1);
    if ( v5 >= 0 )
      v6 = 0;
    *v4 = v6;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x5F1u);
  }
  else if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x5EDu);
  }
LABEL_10:
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v8);
  return (unsigned int)v5;
}
