/*
 * XREFs of ?AddResourceNotifier@CHwTextureRenderTarget@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18002C7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddResourceNotifier@CD3DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180027DB0 (-AddResourceNotifier@CD3DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::AddResourceNotifier(
        CHwTextureRenderTarget *this,
        struct IDeviceResourceNotify *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = CD3DResource::AddResourceNotifier((CD3DResource *)(v2 + 24), a2);
    v4 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2FAu);
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x2FEu);
  }
  return v4;
}
