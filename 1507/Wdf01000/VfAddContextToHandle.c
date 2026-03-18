/*
 * XREFs of VfAddContextToHandle @ 0x1C00CDBB4
 * Callers:
 *     AddEventHooksWdfDeviceCreate @ 0x1C00CD5E0 (AddEventHooksWdfDeviceCreate.c)
 *     AddEventHooksWdfIoQueueCreate @ 0x1C00CD960 (AddEventHooksWdfIoQueueCreate.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0015604 (-AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001F194 (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall VfAddContextToHandle(
        FxContextHeader *ContextHeader,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned __int64 Handle,
        void **Context)
{
  __int64 result; // rax
  FxObject *v9; // rbx
  __int64 v10; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned int v12; // ecx
  FxTagTracker *Flink; // rax
  int _a2; // eax
  int status; // [rsp+70h] [rbp+8h] BYREF

  status = 0;
  if ( !ContextHeader )
    return 3221225485LL;
  v9 = (FxObject *)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v10) = 0;
  if ( (Handle & 1) != 0 )
  {
    v10 = LOWORD(v9->__vftable);
    v9 = (FxObject *)((char *)v9 - v10);
  }
  m_Globals = v9->m_Globals;
  if ( (_WORD)v10 )
  {
    status = -1073741767;
    WPP_IFR_SF_qd(m_Globals, 3u, 0xBu, 0xCu, WPP_Verifier_cpp_Traceguids, (const void *)Handle, -1073741767);
  }
  else
  {
    v12 = _InterlockedIncrement(&v9->m_Refcnt);
    if ( SLOBYTE(v9->m_ObjectFlags) >= 0 )
      Flink = 0LL;
    else
      Flink = (FxTagTracker *)v9[-1].m_ChildEntry.Flink;
    if ( Flink )
      FxTagTracker::UpdateTagHistory(
        Flink,
        &status,
        622,
        "minkernel\\wdf\\framework\\shared\\enhancedverif\\verifier.cpp",
        TagAddRef,
        v12);
    FxContextHeaderInit(ContextHeader, v9, Attributes);
    _a2 = FxObject::AddContext(v9, ContextHeader, Context, Attributes);
    status = _a2;
    if ( _a2 )
      WPP_IFR_SF_qd(m_Globals, 3u, 0xBu, 0xDu, WPP_Verifier_cpp_Traceguids, (const void *)Handle, _a2);
    v9->Release(v9, &status, 639, "minkernel\\wdf\\framework\\shared\\enhancedverif\\verifier.cpp");
  }
  result = (unsigned int)status;
  if ( status )
  {
    FxPoolFree(ContextHeader);
    return (unsigned int)status;
  }
  return result;
}
