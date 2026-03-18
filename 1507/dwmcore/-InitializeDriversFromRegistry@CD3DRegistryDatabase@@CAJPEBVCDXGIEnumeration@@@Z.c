/*
 * XREFs of ?InitializeDriversFromRegistry@CD3DRegistryDatabase@@CAJPEBVCDXGIEnumeration@@@Z @ 0x180096A78
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DA@@@2PEAVCHwndRenderTarget@@@Z @ 0x18002EA00 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEAU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 *     ?EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ @ 0x180055F6C (-EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ.c)
 *     ?InitializeFromRegistry@CD3DRegistryDatabase@@SAJPEBVCDXGIEnumeration@@@Z @ 0x180096A4C (-InitializeFromRegistry@CD3DRegistryDatabase@@SAJPEBVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DRegistryDatabase::InitializeDriversFromRegistry(const struct CDXGIEnumeration *a1)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  unsigned int v4; // edx
  unsigned int v5; // r8d
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v10; // eax
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+38h] [rbp-30h]

  v2 = 0;
  v3 = 0;
  if ( *((_DWORD *)a1 + 22) )
  {
    v4 = dword_180195E38;
    while ( 1 )
    {
      v5 = v4 + 1;
      v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 8) + 8LL * v3) + 336LL);
      v12 = 0;
      if ( v4 + 1 < v4 )
        break;
      v6 = 0;
      if ( v5 > dword_180195E34 )
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&CD3DRegistryDatabase::m_rgAdapterErrorCounts, 0xCu, 1, &v11);
        v6 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
        v2 = v6;
        if ( v6 < 0 )
          goto LABEL_16;
        v4 = dword_180195E38;
      }
      else
      {
        v7 = CD3DRegistryDatabase::m_rgAdapterErrorCounts;
        v2 = 0;
        v8 = 3LL * v4;
        *(_QWORD *)(CD3DRegistryDatabase::m_rgAdapterErrorCounts + 4 * v8) = v11;
        *(_DWORD *)(v7 + 4 * v8 + 8) = v12;
        v4 = v5;
        dword_180195E38 = v5;
      }
      if ( ++v3 >= *((_DWORD *)a1 + 22) )
        goto LABEL_7;
    }
    v6 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v2 = -2147024362;
LABEL_16:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xF2u);
    v4 = dword_180195E38;
LABEL_7:
    if ( v6 < 0 )
      v4 = 0;
    dword_180195E38 = v4;
  }
  return v2;
}
