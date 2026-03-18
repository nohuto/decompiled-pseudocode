/*
 * XREFs of ?ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z @ 0x1800949E0
 * Callers:
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@@Z @ 0x180094424 (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180048660 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x18005E8E8 (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x18007AF38 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1800944E8 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x18013B3E4 (-DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 *     ?ReleaseSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x18013B928 (-ReleaseSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 *     ?UnregisterExclusiveView@CAnalogCompositorClient@@QEAAXPEAVCAnalogExclusiveView@@@Z @ 0x18013D7C4 (-UnregisterExclusiveView@CAnalogCompositorClient@@QEAAXPEAVCAnalogExclusiveView@@@Z.c)
 */

__int64 __fastcall CComposition::ReleaseResource(
        CRenderTargetManager **this,
        struct CResourceTable *a2,
        unsigned int a3,
        struct CResource *a4,
        bool a5)
{
  bool (__fastcall *v9)(__int64, int); // rbx
  bool v10; // al
  bool (__fastcall *v11)(__int64, int); // rbx
  bool v12; // al
  bool (__fastcall *v13)(__int64, int); // rbx
  bool v14; // al
  int v15; // eax
  unsigned int v16; // ebx
  int v18; // eax
  CAnalogCompositorClient *v19; // rcx
  void *v20; // rcx

  if ( a5
    && ((v9 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a4 + 48LL), v9 == CVisual::IsOfType)
      ? (v10 = CVisual::IsOfType((__int64)a4, 33))
      : (v10 = v9((__int64)a4, 33)),
        v10 && (v18 = CWindowNode::Detach(a4), v16 = v18, v18 < 0)) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1116u);
  }
  else
  {
    v11 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a4 + 48LL);
    if ( v11 == CVisual::IsOfType )
      v12 = CVisual::IsOfType((__int64)a4, 44);
    else
      v12 = v11((__int64)a4, 44);
    if ( v12 )
    {
      (*(void (__fastcall **)(char *))(*((_QWORD *)a4 + 5) + 144LL))((char *)a4 + 40);
      CRenderTargetManager::RemoveRenderTarget(this[4], a4);
    }
    else
    {
      v13 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a4 + 48LL);
      if ( v13 == CVisual::IsOfType )
        v14 = CVisual::IsOfType((__int64)a4, 43);
      else
        v14 = v13((__int64)a4, 43);
      if ( v14 )
      {
        CAnalogExclusiveView::DeactivateSwapChain(a4);
        CAnalogExclusiveView::ReleaseSwapChain(a4);
        CAnalogCompositorClient::UnregisterExclusiveView(v19, a4);
        v20 = (void *)*((_QWORD *)a4 + 11);
        if ( v20 )
        {
          CloseHandle(v20);
          *((_QWORD *)a4 + 11) = 0LL;
        }
      }
    }
    v15 = CResourceTable::DeleteHandle(a2, a3);
    v16 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x112Eu);
  }
  return v16;
}
