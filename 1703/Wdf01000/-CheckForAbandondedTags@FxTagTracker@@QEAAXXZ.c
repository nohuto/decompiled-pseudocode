/*
 * XREFs of ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003F9DC
 * Callers:
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C00016B0 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     imp_WdfRegistryClose @ 0x1C0001F60 (imp_WdfRegistryClose.c)
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0006A40 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0007930 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009E80 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C000ABA0 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C000B310 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000B600 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C000C660 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     imp_WdfRegistryOpenKey @ 0x1C000C920 (imp_WdfRegistryOpenKey.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000E810 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000F470 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0010CF0 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     imp_WdfObjectDereferenceActual @ 0x1C0015F10 (imp_WdfObjectDereferenceActual.c)
 *     FxIoTargetSendIoctl @ 0x1C00287A0 (FxIoTargetSendIoctl.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0029E20 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x1C0082544 (--1FxTagTracker@@QEAA@XZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqsd @ 0x1C00826EC (WPP_IFR_SF_qqsd.c)
 */

void __fastcall FxTagTracker::CheckForAbandondedTags(FxTagTracker *this)
{
  FxObject *m_OwningObject; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  bool v4; // di
  KIRQL v5; // al
  unsigned int v6; // r8d
  FxTagTrackingBlock *m_Next; // rdx
  KIRQL v8; // r15
  FxTagTrackingBlock *Next; // rsi
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]

  m_OwningObject = this->m_OwningObject;
  m_Globals = this->m_Globals;
  v4 = (m_OwningObject->m_ObjectFlags & 8) != 0;
  if ( (m_OwningObject->m_ObjectFlags & 8) != 0 && (this->m_Next || this->m_FailedCount) )
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xBu, WPP_fxtagtracker_cpp_Traceguids, this);
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_Next = this->m_Next;
  v8 = v5;
  if ( m_Next )
  {
    do
    {
      Next = m_Next->Next;
      if ( v4 )
      {
        WPP_IFR_SF_qqsd(
          m_Globals,
          2u,
          v6,
          0xCu,
          traceGuid,
          this->m_OwningObject,
          m_Next->Tag,
          m_Next->File,
          m_Next->Line);
      }
      else
      {
        v4 = 1;
        WPP_IFR_SF_qqsd(
          m_Globals,
          3u,
          v6,
          0xDu,
          traceGuid,
          this->m_OwningObject,
          m_Next->Tag,
          m_Next->File,
          m_Next->Line);
      }
      m_Next = Next;
    }
    while ( Next );
  }
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v8);
}
