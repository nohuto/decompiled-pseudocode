/*
 * XREFs of ?InitializeDriversFromRegistry@CD3DRegistryDatabase@@CAJPEBVCDXGIEnumeration@@@Z @ 0x1800BA1DC
 * Callers:
 *     ?EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ @ 0x180035C84 (-EnsureDXGIEnumeration@CD3DDeviceManager@@AEAAJXZ.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DF@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006C640 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEAV-$CMatrix@UPageIn.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
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
  if ( !*((_DWORD *)a1 + 22) )
    return v2;
  v4 = dword_1801F0140;
  while ( 1 )
  {
    v5 = v4 + 1;
    v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 8) + 8LL * v3) + 336LL);
    v12 = 0;
    if ( v4 + 1 < v4 )
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      goto LABEL_12;
    }
    v6 = 0;
    if ( v5 > HIDWORD(qword_1801F0138) )
      break;
    v7 = CD3DRegistryDatabase::m_rgAdapterErrorCounts;
    v2 = 0;
    v8 = 3LL * v4;
    *(_QWORD *)(CD3DRegistryDatabase::m_rgAdapterErrorCounts + 4 * v8) = v11;
    *(_DWORD *)(v7 + 4 * v8 + 8) = v12;
    v4 = v5;
    dword_1801F0140 = v5;
LABEL_6:
    if ( ++v3 >= *((_DWORD *)a1 + 22) )
      goto LABEL_7;
  }
  v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&CD3DRegistryDatabase::m_rgAdapterErrorCounts, 0xCu, 1, &v11);
  v6 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
LABEL_12:
  v2 = v6;
  if ( v6 >= 0 )
  {
    v4 = dword_1801F0140;
    goto LABEL_6;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xF2u);
  v4 = dword_1801F0140;
LABEL_7:
  if ( v6 < 0 )
    v4 = 0;
  dword_1801F0140 = v4;
  return v2;
}
