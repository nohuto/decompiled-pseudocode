/*
 * XREFs of ?CheckRenderTargetFormat@CD3DDeviceLevel1@@QEAAJW4DXGI_FORMAT@@@Z @ 0x180022838
 * Callers:
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x18001D2A8 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?Create@CHwTextureRenderTarget@@SAJAEBVCResourceTag@@IIPEAVCD3DDeviceLevel1@@VDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800B1164 (-Create@CHwTextureRenderTarget@@SAJAEBVCResourceTag@@IIPEAVCD3DDeviceLevel1@@VDisplayId@@AEBUPix.c)
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800B23F8 (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 *     ?Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAV1@@Z @ 0x18013DACC (-Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CheckRenderTargetFormat(CD3DDeviceLevel1 *this, unsigned int a2)
{
  int *v4; // r14
  int v5; // ebx
  int v6; // ebp
  CD3DDeviceLevel1 *v8; // [rsp+50h] [rbp+8h] BYREF

  ++*((_DWORD *)this + 126);
  v8 = this;
  *((_DWORD *)this + 127) = GetCurrentThreadId();
  switch ( a2 )
  {
    case 2u:
      v4 = (int *)((char *)this + 756);
      break;
    case 0xAu:
      v4 = (int *)((char *)this + 748);
      break;
    case 0xBu:
      v4 = (int *)((char *)this + 740);
      break;
    case 0x18u:
      v4 = (int *)((char *)this + 732);
      break;
    case 0x1Cu:
      v4 = (int *)((char *)this + 700);
      break;
    case 0x57u:
      v4 = (int *)((char *)this + 716);
      break;
    case 0x58u:
      v4 = (int *)((char *)this + 708);
      break;
    default:
      v5 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x5A3u);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x5C5u);
      goto LABEL_10;
  }
  v5 = *v4;
  v6 = -2003292404;
  if ( *v4 == -2003292404 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 69) + 232LL))(
           *((_QWORD *)this + 69),
           a2,
           v4 + 1);
    if ( v5 >= 0 )
      v6 = 0;
    *v4 = v6;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x5CDu);
  }
  else if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x5C9u);
  }
LABEL_10:
  CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v8);
  return (unsigned int)v5;
}
