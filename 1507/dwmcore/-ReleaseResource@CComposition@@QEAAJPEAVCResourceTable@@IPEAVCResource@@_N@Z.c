/*
 * XREFs of ?ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z @ 0x1800680F0
 * Callers:
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@@Z @ 0x18006CE60 (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@@Z.c)
 * Callees:
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180035BA0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x180049EC4 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18006CF24 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x18007DC50 (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
  int v13; // eax
  unsigned int v14; // ebx
  int v16; // eax

  if ( a5
    && ((v9 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a4 + 48LL), v9 == CVisual::IsOfType)
      ? (v10 = CVisual::IsOfType((__int64)a4, 32))
      : (v10 = v9((__int64)a4, 32)),
        v10 && (v16 = CWindowNode::Detach(a4), v14 = v16, v16 < 0)) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x10F0u);
  }
  else
  {
    v11 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)a4 + 48LL);
    if ( v11 == CVisual::IsOfType )
      v12 = CVisual::IsOfType((__int64)a4, 40);
    else
      v12 = v11((__int64)a4, 40);
    if ( v12 )
    {
      (*(void (__fastcall **)(char *))(*((_QWORD *)a4 + 5) + 144LL))((char *)a4 + 40);
      CRenderTargetManager::RemoveRenderTarget(this[4], a4);
    }
    v13 = CResourceTable::DeleteHandle(a2, a3);
    v14 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1103u);
  }
  return v14;
}
