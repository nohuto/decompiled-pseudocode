/*
 * XREFs of ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z @ 0x1800B9400
 * Callers:
 *     ?PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z @ 0x1800B9058 (-PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800807F4 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18009EC4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?CopyFromSurfaceToMem@@YAXPEAEIIPEBUtagRECT@@II0@Z @ 0x1800B97E4 (-CopyFromSurfaceToMem@@YAXPEAEIIPEBUtagRECT@@II0@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::CopyFromTexture(CDWMOffScreenSwapChain *this, const struct tagRECT *a2)
{
  unsigned int v2; // ebx
  struct ID3D11Texture2D **v5; // rsi
  CD3DDeviceLevel1 *v6; // rcx
  __int128 v7; // xmm1
  int Texture; // eax
  int v9; // eax
  unsigned __int8 PixelFormatSize; // al
  __int128 v12; // [rsp+40h] [rbp-29h]
  unsigned __int8 *v13; // [rsp+50h] [rbp-19h] BYREF
  unsigned int v14; // [rsp+58h] [rbp-11h]
  _OWORD v15[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+88h] [rbp+1Fh]
  __int128 v18; // [rsp+90h] [rbp+27h]

  v2 = 0;
  if ( *((_QWORD *)this + 48) )
  {
    v5 = (struct ID3D11Texture2D **)((char *)this + 392);
    if ( *((_QWORD *)this + 49) )
      goto LABEL_4;
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 36) + 80LL))(
      *((_QWORD *)this + 36),
      (char *)this + 400);
    *((_DWORD *)this + 108) = 0;
    *((_DWORD *)this + 110) = 0;
    v6 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 37);
    *((_DWORD *)this + 107) = 3;
    *((_DWORD *)this + 109) = 0x20000;
    v7 = *((_OWORD *)this + 26);
    *(_QWORD *)&v12 = "DWM Offscreen SwapChain Readback";
    DWORD2(v12) = 32;
    v17 = *((_DWORD *)this + 110);
    v15[1] = v7;
    v18 = v12;
    v15[0] = *((_OWORD *)this + 25);
    v16 = *((_QWORD *)this + 54);
    Texture = CD3DDeviceLevel1::CreateTexture(v6, (const struct DWM_TEXTURE2D_DESC *)v15, 0LL, v5);
    v2 = Texture;
    if ( Texture >= 0 )
    {
LABEL_4:
      (*(void (__fastcall **)(_QWORD, struct ID3D11Texture2D *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 37) + 576LL)
                                                                       + 376LL))(
        *(_QWORD *)(*((_QWORD *)this + 37) + 576LL),
        *v5,
        *((_QWORD *)this + 36));
      v9 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Texture2D *, _QWORD, __int64, _DWORD, unsigned __int8 **))(**(_QWORD **)(*((_QWORD *)this + 37) + 576LL) + 112LL))(
             *(_QWORD *)(*((_QWORD *)this + 37) + 576LL),
             *v5,
             0LL,
             1LL,
             0,
             &v13);
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1A5u);
      }
      else
      {
        PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 104));
        CopyFromSurfaceToMem(
          v13,
          PixelFormatSize >> 3,
          v14,
          a2,
          *((_DWORD *)this + 76),
          *((_DWORD *)this + 77),
          *((unsigned __int8 **)this + 48));
        (*(void (__fastcall **)(_QWORD, struct ID3D11Texture2D *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 37) + 576LL)
                                                                         + 120LL))(
          *(_QWORD *)(*((_QWORD *)this + 37) + 576LL),
          *v5,
          0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Texture, 0x196u);
    }
  }
  return v2;
}
