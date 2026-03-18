/*
 * XREFs of ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z @ 0x18007F0F4
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x18007F914 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?CheckTextureFormatSupported@CD3DDeviceLevel1@@AEAA_NPEAUID3D11Device1@@W4DXGI_FORMAT@@@Z @ 0x18007F0A0 (-CheckTextureFormatSupported@CD3DDeviceLevel1@@AEAA_NPEAUID3D11Device1@@W4DXGI_FORMAT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GatherSupportedTextureFormats(CD3DDeviceLevel1 *this, struct ID3D11Device1 *a2)
{
  unsigned int v2; // ebp
  CD3DDeviceLevel1 *v5; // rcx
  CD3DDeviceLevel1 *v6; // rcx
  CD3DDeviceLevel1 *v7; // rcx
  CD3DDeviceLevel1 *v8; // rcx
  CD3DDeviceLevel1 *v9; // rcx
  bool v10; // si
  CD3DDeviceLevel1 *v11; // rcx
  CD3DDeviceLevel1 *v12; // rcx
  CD3DDeviceLevel1 *v13; // rcx
  int v15; // eax
  int v16; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(this, a2, 0x3Du) )
    *((_DWORD *)this + 181) = 61;
  v6 = (CD3DDeviceLevel1 *)(CD3DDeviceLevel1::CheckTextureFormatSupported(v5, a2, 0x41u) != 0 ? 65 : 87);
  *((_DWORD *)this + 182) = (_DWORD)v6;
  if ( CD3DDeviceLevel1::CheckTextureFormatSupported(v6, a2, 0x1Cu) )
  {
    *((_DWORD *)this + 183) = 28;
    if ( CD3DDeviceLevel1::CheckTextureFormatSupported(v7, a2, 0x57u) )
    {
      *((_DWORD *)this + 185) = 87;
      if ( CD3DDeviceLevel1::CheckTextureFormatSupported(v8, a2, 0x58u) )
      {
        *((_DWORD *)this + 186) = 88;
        v10 = ((int (__fastcall *)(struct ID3D11Device1 *, __int64, int *, __int64))a2->lpVtbl->CheckFeatureSupport)(
                a2,
                7LL,
                &v16,
                4LL) >= 0
           && v16;
        if ( CD3DDeviceLevel1::CheckTextureFormatSupported(v9, a2, 2u) && v10 )
          *((_DWORD *)this + 190) = 2;
        if ( CD3DDeviceLevel1::CheckTextureFormatSupported(v11, a2, 0xAu) && v10 )
        {
          *((_DWORD *)this + 188) = 10;
          if ( !*((_DWORD *)this + 190) )
            *((_DWORD *)this + 190) = 10;
        }
        else
        {
          v15 = *((_DWORD *)this + 190);
          if ( v15 )
          {
            *((_DWORD *)this + 188) = v15;
          }
          else
          {
            *((_DWORD *)this + 190) = 87;
            *((_DWORD *)this + 188) = 87;
          }
        }
        if ( CD3DDeviceLevel1::CheckTextureFormatSupported(v12, a2, 0xBu) )
          *((_DWORD *)this + 189) = 11;
        else
          *((_DWORD *)this + 189) = *((_DWORD *)this + 190);
        if ( CD3DDeviceLevel1::CheckTextureFormatSupported(v13, a2, 0x18u) )
          *((_DWORD *)this + 187) = 24;
        else
          *((_DWORD *)this + 187) = *((_DWORD *)this + 188);
      }
      else
      {
        v2 = -2003292288;
        if ( IsOOM(-2003292288) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292288, 0x3F8u);
      }
    }
    else
    {
      v2 = -2003292288;
      if ( IsOOM(-2003292288) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292288, 0x3E5u);
    }
  }
  else
  {
    v2 = -2003292288;
    if ( IsOOM(-2003292288) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292288, 0x3DBu);
  }
  return v2;
}
