/*
 * XREFs of ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z @ 0x1800B5A6C
 * Callers:
 *     ?PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z @ 0x1800B5638 (-PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x180024850 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800A1878 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?CopyFromSurfaceToMem@@YAXPEAEIIPEBUtagRECT@@II0@Z @ 0x1800B5EA4 (-CopyFromSurfaceToMem@@YAXPEAEIIPEBUtagRECT@@II0@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::CopyFromTexture(CDWMOffScreenSwapChain *this, const struct tagRECT *a2)
{
  unsigned int v2; // esi
  struct ID3D11Texture2D **v5; // r15
  char *v6; // rsi
  CD3DDeviceLevel1 *v7; // rcx
  __int128 v8; // xmm1
  int v9; // eax
  int Texture; // eax
  int v11; // eax
  unsigned __int8 PixelFormatSize; // al
  unsigned __int8 *v14; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-31h]
  __int128 v16; // [rsp+50h] [rbp-29h]
  _OWORD v17[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  __int128 v20; // [rsp+90h] [rbp+17h]

  v2 = 0;
  if ( *((_QWORD *)this + 48) )
  {
    v5 = (struct ID3D11Texture2D **)((char *)this + 392);
    if ( *((_QWORD *)this + 49) )
      goto LABEL_4;
    v6 = (char *)this + 400;
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 36) + 80LL))(
      *((_QWORD *)this + 36),
      (char *)this + 400);
    *((_DWORD *)this + 108) = 0;
    *((_DWORD *)this + 110) = 0;
    v7 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 37);
    *((_DWORD *)this + 107) = 3;
    *((_DWORD *)this + 109) = 0x20000;
    v8 = *((_OWORD *)v6 + 1);
    *(_QWORD *)&v16 = "DWM Offscreen SwapChain Readback";
    v9 = *((_DWORD *)v6 + 10);
    DWORD2(v16) = 32;
    v19 = v9;
    v17[1] = v8;
    v20 = v16;
    v17[0] = *(_OWORD *)v6;
    v18 = *((_QWORD *)v6 + 4);
    Texture = CD3DDeviceLevel1::CreateTexture(v7, (const struct DWM_TEXTURE2D_DESC *)v17, 0LL, v5);
    v2 = Texture;
    if ( Texture >= 0 )
    {
LABEL_4:
      (*(void (__fastcall **)(_QWORD, struct ID3D11Texture2D *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 37) + 560LL)
                                                                       + 376LL))(
        *(_QWORD *)(*((_QWORD *)this + 37) + 560LL),
        *v5,
        *((_QWORD *)this + 36));
      v11 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Texture2D *, _QWORD, __int64, _DWORD, unsigned __int8 **))(**(_QWORD **)(*((_QWORD *)this + 37) + 560LL) + 112LL))(
              *(_QWORD *)(*((_QWORD *)this + 37) + 560LL),
              *v5,
              0LL,
              1LL,
              0,
              &v14);
      v2 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1A2u);
      }
      else
      {
        PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 104));
        CopyFromSurfaceToMem(
          v14,
          PixelFormatSize >> 3,
          v15,
          a2,
          *((_DWORD *)this + 76),
          *((_DWORD *)this + 77),
          *((unsigned __int8 **)this + 48));
        (*(void (__fastcall **)(_QWORD, struct ID3D11Texture2D *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 37) + 560LL)
                                                                         + 120LL))(
          *(_QWORD *)(*((_QWORD *)this + 37) + 560LL),
          *v5,
          0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Texture, 0x193u);
    }
  }
  return v2;
}
