/*
 * XREFs of ProcLibDeviceCreate @ 0x1C0011BC8
 * Callers:
 *     EvtDriverDeviceAdd @ 0x1C000F000 (EvtDriverDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006140 (memset.c)
 */

__int64 __fastcall ProcLibDeviceCreate(char *DeferredContext)
{
  int v2; // edi
  _QWORD v4[9]; // [rsp+20h] [rbp-48h] BYREF

  DeferredContext[65] = 0;
  *((_DWORD *)DeferredContext + 166) = 100;
  *((_DWORD *)DeferredContext + 167) = 100;
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
    KeInitializeTimerEx((PKTIMER)DeferredContext + 11, NotificationTimer);
    KeInitializeDpc((PRKDPC)DeferredContext + 12, (PKDEFERRED_ROUTINE)QuickCapTraceDpc, DeferredContext);
    KeInitializeTimerEx((PKTIMER)(DeferredContext + 856), NotificationTimer);
    KeInitializeDpc((PRKDPC)(DeferredContext + 920), (PKDEFERRED_ROUTINE)LongCapTraceDpc, DeferredContext);
  }
  return (unsigned int)v2;
}
