/*
 * XREFs of ?MetaBitmapRenderTarget_Create@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CREATE@@@Z @ 0x1800FAD40
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x18007AE38 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x180094250 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CREATE@@@Z @ 0x180108564 (-ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGE.c)
 */

__int64 __fastcall CComposition::MetaBitmapRenderTarget_Create(
        CRenderTargetManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_METABITMAPRENDERTARGET_CREATE *a4)
{
  CMagnifierRenderTarget *Resource; // rax
  struct CResourceTable *v7; // rdx
  struct CRenderTarget *v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  Resource = (CMagnifierRenderTarget *)CResourceTable::GetResource((__int64)a3, *((_DWORD *)a4 + 1), 0x35u);
  v8 = Resource;
  if ( Resource )
  {
    v10 = CMagnifierRenderTarget::ProcessCreate(Resource, v7, a4);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v10 = CRenderTargetManager::AddRenderTarget(this[4], v8);
      v9 = v10;
      if ( v10 >= 0 )
        return v9;
      v12 = 3189;
    }
    else
    {
      v12 = 3184;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v12);
    return v9;
  }
  v9 = -2003303421;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0xC6Du);
  return v9;
}
