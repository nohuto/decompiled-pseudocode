/*
 * XREFs of ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x18002DEF0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18002B85C (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x18002E890 (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::ProcessUpdate(
        CCompositionSurfaceBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONSURFACEBITMAP *a3)
{
  void *v3; // rdi
  struct CCompositionSurfaceInfo *v4; // rbx
  int v7; // eax
  unsigned int v8; // edi
  int updated; // eax
  __int64 v10; // rcx
  unsigned int v12; // [rsp+60h] [rbp+18h] BYREF
  struct CCompositionSurfaceInfo *v13; // [rsp+68h] [rbp+20h] BYREF

  v3 = (void *)*((_QWORD *)a3 + 1);
  v4 = 0LL;
  v13 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(this, &PROCESS_COMPOSITION_SURFACE_UPDATE_EVENT_Start);
  if ( v3 )
  {
    v7 = CCompositionSurfaceManager::GetOrCreateCompositionSurfaceInfo(
           (CCompositionSurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 16LL),
           v3,
           &v13);
    v12 = v7;
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x309u);
      v4 = v13;
      goto LABEL_8;
    }
    v4 = v13;
  }
  updated = CCompositionSurfaceBitmap::UpdateSurfaceInfo(this, v4);
  v12 = updated;
  v8 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x30Fu);
  else
    *((_BYTE *)this + 458) = *((_DWORD *)a3 + 4) != 0;
LABEL_8:
  if ( v4 )
    CMILCOMBase::InternalRelease(v4);
  TranslateDXGIorD3DErrorInContext(v8, 17LL, &v12);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v10, &PROCESS_COMPOSITION_SURFACE_UPDATE_EVENT_Stop);
  return v12;
}
