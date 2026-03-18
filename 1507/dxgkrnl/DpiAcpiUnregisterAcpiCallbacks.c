/*
 * XREFs of DpiAcpiUnregisterAcpiCallbacks @ 0x1C016D90C
 * Callers:
 *     DpiAddDevice @ 0x1C00C5300 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C0167A10 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

LONG __fastcall DpiAcpiUnregisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 64);
  AcquireMiniportListMutex();
  if ( dword_1C0046DD0 )
  {
    (*(void (__fastcall **)(_QWORD, void (__fastcall *)(PDEVICE_OBJECT, unsigned int, __int64)))(v1 + 904))(
      *(_QWORD *)(v1 + 832),
      DpiAcpiEventCallback);
    if ( !--dword_1C0046DD0 )
    {
      IoUnregisterPlugPlayNotification(NotificationEntry);
      NotificationEntry = 0LL;
      ExUnregisterCallback(CallbackRegistration);
      CallbackRegistration = 0LL;
    }
  }
  _InterlockedExchange64(&qword_1C0046C88, 0LL);
  return KeReleaseMutex((PRKMUTEX)Mutex, 0);
}
