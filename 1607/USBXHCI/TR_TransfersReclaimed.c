/*
 * XREFs of TR_TransfersReclaimed @ 0x1C0028FCC
 * Callers:
 *     Control_EP_ReclaimTransfers @ 0x1C0029640 (Control_EP_ReclaimTransfers.c)
 *     Control_WdfEvtDpcForTransferCompletion @ 0x1C002A2D0 (Control_WdfEvtDpcForTransferCompletion.c)
 *     Isoch_WdfEvtDpcForTransferCompletion @ 0x1C002C5D0 (Isoch_WdfEvtDpcForTransferCompletion.c)
 *     Bulk_WdfEvtDpcForTransferCompletion @ 0x1C002EEF0 (Bulk_WdfEvtDpcForTransferCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     ESM_AddEvent @ 0x1C0039978 (ESM_AddEvent.c)
 */

__int64 __fastcall TR_TransfersReclaimed(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 56);
  if ( !*(_BYTE *)(v2 + 37)
    || (v3 = *(_QWORD *)(v2 + 136), _InterlockedIncrement((volatile signed __int32 *)(v3 + 20)) == *(_DWORD *)(v3 + 8)) )
  {
    ESM_AddEvent((PVOID)(v2 + 272));
  }
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 56));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
           WdfDriverGlobals,
           v4,
           "Transfer Ring Tag",
           1112LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c");
}
