/*
 * XREFs of ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C001C200
 * Callers:
 *     imp_WdfRequestCompleteWithInformation @ 0x1C00031C0 (imp_WdfRequestCompleteWithInformation.c)
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00033A0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000BFD0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall FxObject::GetObjectHandleUnchecked(FxObject *this)
{
  if ( this->m_ObjectSize )
    return (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    return 0LL;
}
