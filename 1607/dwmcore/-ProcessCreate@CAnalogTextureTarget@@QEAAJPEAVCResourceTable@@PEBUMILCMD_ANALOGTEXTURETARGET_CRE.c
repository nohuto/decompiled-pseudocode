/*
 * XREFs of ?ProcessCreate@CAnalogTextureTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGTEXTURETARGET_CREATE@@@Z @ 0x1801082DC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x180072DB8 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 */

__int64 __fastcall CAnalogTextureTarget::ProcessCreate(
        CAnalogTextureTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANALOGTEXTURETARGET_CREATE *a3)
{
  int v3; // r9d
  int v4; // edx
  unsigned int v5; // ebx
  int v6; // eax

  v3 = *((_DWORD *)a3 + 3);
  v4 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 68) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 42) = v4;
  *((_DWORD *)this + 43) = v3;
  if ( (_QWORD)xmmword_1801F03A0 )
  {
    v6 = CRenderTargetManager::AddRenderTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 2) + 32LL), this);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x76u);
  }
  else
  {
    v5 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x8Fu);
  }
  return v5;
}
