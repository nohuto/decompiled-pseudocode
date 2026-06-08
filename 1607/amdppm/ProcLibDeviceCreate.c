/*
 * XREFs of ProcLibDeviceCreate @ 0x1C0011E48
 * Callers:
 *     EvtDriverDeviceAdd @ 0x1C000F000 (EvtDriverDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00067E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006B40 (memset.c)
 */

__int64 __fastcall ProcLibDeviceCreate(char *DeferredContext)
{
  int v2; // edi
  _QWORD v4[9]; // [rsp+20h] [rbp-48h] BYREF

  DeferredContext[65] = 0;
  *((_DWORD *)DeferredContext + 170) = 100;
  *((_DWORD *)DeferredContext + 171) = 100;
  memset(v4, 0, 0x38uLL);
  v4[3] = 0x100000001LL;
  LODWORD(v4[0]) = 56;
  v4[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, char *))(WdfFunctions_01015 + 1632))(
            WdfDriverGlobals,
            DeferredContext);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, char *))(WdfFunctions_01015 + 2496))(
         WdfDriverGlobals,
         v4,
         DeferredContext + 192);
  if ( v2 >= 0 )
  {
    KeInitializeTimerEx((PKTIMER)(DeferredContext + 720), NotificationTimer);
    KeInitializeDpc((PRKDPC)(DeferredContext + 784), (PKDEFERRED_ROUTINE)QuickCapTraceDpc, DeferredContext);
    KeInitializeTimerEx((PKTIMER)(DeferredContext + 872), NotificationTimer);
    KeInitializeDpc((PRKDPC)(DeferredContext + 936), (PKDEFERRED_ROUTINE)LongCapTraceDpc, DeferredContext);
  }
  return (unsigned int)v2;
}
