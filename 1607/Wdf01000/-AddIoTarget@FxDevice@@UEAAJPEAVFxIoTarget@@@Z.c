/*
 * XREFs of ?AddIoTarget@FxDevice@@UEAAJPEAVFxIoTarget@@@Z @ 0x1C001E960
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z @ 0x1C00229AC (-Add@FxTransactionedList@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAUFxTransactionedEntry@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxDevice::AddIoTarget(FxDevice *this, FxIoTarget *IoTarget)
{
  int v4; // edi
  unsigned int RefCount; // edx
  _DEVICE_OBJECT *m_TargetPdo; // rcx

  v4 = FxTransactionedList::Add(&this->m_IoTargetsList, this->m_Globals, &IoTarget->m_TransactionedEntry);
  if ( v4 >= 0 )
  {
    IoTarget->m_AddedToDeviceList = 1;
    RefCount = _InterlockedIncrement(&IoTarget->m_Refcnt);
    if ( SLOBYTE(IoTarget->m_ObjectFlags) < 0 )
      m_TargetPdo = IoTarget[-1].m_TargetPdo;
    else
      m_TargetPdo = 0LL;
    if ( m_TargetPdo )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)m_TargetPdo,
        this,
        1812,
        "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp",
        TagAddRef,
        RefCount);
  }
  return (unsigned int)v4;
}
