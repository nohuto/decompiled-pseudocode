/*
 * XREFs of ?AddResourceNotifier@CD3DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180015EB0
 * Callers:
 *     ?AddResourceNotifier@CHwBitmapColorSource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18001BE10 (-AddResourceNotifier@CHwBitmapColorSource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?AddResourceNotifier@CHwTextureRenderTarget@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180082C70 (-AddResourceNotifier@CHwTextureRenderTarget@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180112670 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDe.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ @ 0x180152210 (-EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DResource::AddResourceNotifier(CD3DResource *this, struct IDeviceResourceNotify *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ebx
  int v6; // eax
  struct IDeviceResourceNotify *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = *((_DWORD *)this + 20);
  v3 = v2 + 1;
  if ( v2 + 1 < v2 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v4 = 0;
    if ( v3 > *((_DWORD *)this + 19) )
    {
      v6 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 56, 8LL, 1LL, &v7);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 7) + 8LL * v2) = v7;
      *((_DWORD *)this + 20) = v3;
    }
  }
  return v4;
}
