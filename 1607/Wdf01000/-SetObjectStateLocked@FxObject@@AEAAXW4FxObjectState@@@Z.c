/*
 * XREFs of ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001C2D0
 * Callers:
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00033A0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0004280 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C00066C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEAD@Z @ 0x1C00073B0 (-Release@FxRequest@@UEAAKPEAXJPEAD@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEAD@Z @ 0x1C0007B90 (-Release@FxObject@@UEAAKPEAXJPEAD@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0007E60 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0008E30 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     imp_WdfRegistryOpenKey @ 0x1C00091F0 (imp_WdfRegistryOpenKey.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000B380 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000BFD0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C000CFF0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?Release@FxMemoryObject@@UEAAKPEAXJPEAD@Z @ 0x1C000E720 (-Release@FxMemoryObject@@UEAAKPEAXJPEAD@Z.c)
 *     imp_WdfRegistryClose @ 0x1C000F230 (imp_WdfRegistryClose.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C000FF80 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00140F4 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C001C214 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C001C3D8 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C001C46C (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     FxIoTargetSendIoctl @ 0x1C0029020 (FxIoTargetSendIoctl.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C002A610 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     imp_WdfObjectDereferenceActual @ 0x1C0032AE0 (imp_WdfObjectDereferenceActual.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C003A718 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C003BE40 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C007DF48 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0023D30 (WPP_IFR_SF_qqLL.c)
 */

void __fastcall FxObject::SetObjectStateLocked(FxObject *this, FxObjectState NewState)
{
  unsigned __int16 v3; // di
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a2; // rcx

  v3 = NewState;
  if ( (this->m_ObjectFlags & 0x200) != 0 )
  {
    m_Globals = this->m_Globals;
    _a2 = 0LL;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qqLL(
        m_Globals,
        5u,
        0x14u,
        0xAu,
        WPP_FxObject_hpp_Traceguids,
        this,
        _a2,
        this->m_ObjectState,
        (unsigned __int16)NewState);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 16) = v3;
  }
  this->m_ObjectState = v3;
}
