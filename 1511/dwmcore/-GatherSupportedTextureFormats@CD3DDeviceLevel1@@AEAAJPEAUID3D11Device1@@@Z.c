/*
 * XREFs of ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z @ 0x1800235A0
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x180023CE8 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CheckTextureFormatSupported@CD3DDeviceLevel1@@AEAA_NPEAUID3D11Device1@@W4DXGI_FORMAT@@@Z @ 0x180023528 (-CheckTextureFormatSupported@CD3DDeviceLevel1@@AEAA_NPEAUID3D11Device1@@W4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GatherSupportedTextureFormats(CD3DDeviceLevel1 *this, struct ID3D11Device1 *a2)
{
  unsigned int v2; // esi
  CD3DDeviceLevel1 *v5; // rcx
  CD3DDeviceLevel1 *v6; // rcx
  CD3DDeviceLevel1 *v7; // rcx
  CD3DDeviceLevel1 *v8; // rcx
  CD3DDeviceLevel1 *v9; // rcx
  char v10; // bl
  CD3DDeviceLevel1 *v11; // rcx
  CD3DDeviceLevel1 *v12; // rcx
  CD3DDeviceLevel1 *v13; // rcx
  int v15; // eax
  unsigned int v16; // [rsp+20h] [rbp-18h]
  int v17; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(this, a2, 0x3Du) )
    *((_DWORD *)this + 165) = 61;
  v6 = (CD3DDeviceLevel1 *)(CD3DDeviceLevel1::CheckTextureFormatSupported(v5, a2, 0x41u) != 0 ? 65 : 87);
  *((_DWORD *)this + 166) = (_DWORD)v6;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(v6, a2, 0x1Cu) )
  {
    v16 = 723;
    goto LABEL_29;
  }
  *((_DWORD *)this + 167) = 28;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(v7, a2, 0x57u) )
  {
    v16 = 733;
    goto LABEL_29;
  }
  *((_DWORD *)this + 169) = 87;
  if ( !CD3DDeviceLevel1::CheckTextureFormatSupported(v8, a2, 0x58u) )
  {
    v16 = 752;
LABEL_29:
    v2 = -2003292288;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292288, v16);
    return v2;
  }
  *((_DWORD *)this + 170) = 88;
  if ( ((int (__fastcall *)(struct ID3D11Device1 *, __int64, int *))a2->lpVtbl->CheckFeatureSupport)(a2, 7LL, &v17) < 0
    || (v10 = 1, !v17) )
  {
    v10 = 0;
  }
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(v9, a2, 2u) && v10 )
    *((_DWORD *)this + 174) = 2;
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(v11, a2, 0xAu) && v10 )
  {
    *((_DWORD *)this + 172) = 10;
    if ( !*((_DWORD *)this + 174) )
      *((_DWORD *)this + 174) = 10;
  }
  else
  {
    v15 = *((_DWORD *)this + 174);
    if ( v15 )
    {
      *((_DWORD *)this + 172) = v15;
    }
    else
    {
      *((_DWORD *)this + 174) = 87;
      *((_DWORD *)this + 172) = 87;
    }
  }
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(v12, a2, 0xBu) )
    *((_DWORD *)this + 173) = 11;
  else
    *((_DWORD *)this + 173) = *((_DWORD *)this + 174);
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(v13, a2, 0x18u) )
    *((_DWORD *)this + 171) = 24;
  else
    *((_DWORD *)this + 171) = *((_DWORD *)this + 172);
  return v2;
}
