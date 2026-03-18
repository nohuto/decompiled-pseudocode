/*
 * XREFs of ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180087270
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x1800870F8 (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800896B4 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::ProcessUpdate(
        CCompositionSurfaceBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONSURFACEBITMAP *a3)
{
  void *v3; // rdi
  struct CCompositionSurfaceInfo *v4; // rbx
  int v7; // eax
  int v8; // edi
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x2BBu);
      v4 = v13;
      goto LABEL_8;
    }
    v4 = v13;
  }
  updated = CCompositionSurfaceBitmap::UpdateSurfaceInfo(this, v4);
  v12 = updated;
  v8 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x2C1u);
  else
    *((_BYTE *)this + 450) = *((_DWORD *)a3 + 4) != 0;
LABEL_8:
  if ( v4 )
    CMILCOMBase::InternalRelease(v4);
  TranslateDXGIorD3DErrorInContext(v8, 17, &v12);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v10, &PROCESS_COMPOSITION_SURFACE_UPDATE_EVENT_Stop);
  return v12;
}
