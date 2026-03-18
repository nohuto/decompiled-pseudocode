/*
 * XREFs of Controller_AddControllerToGlobalControllerList @ 0x1C0009540
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C004E2E0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Controller_AddControllerToGlobalControllerList(_SINGLE_LIST_ENTRY *a1)
{
  KIRQL v2; // al
  _SINGLE_LIST_ENTRY *Next; // rcx
  _SINGLE_LIST_ENTRY *v4; // rbx
  _SINGLE_LIST_ENTRY *v5; // rdx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _SINGLE_LIST_ENTRY *, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01015 + 1640))(
    WdfDriverGlobals,
    a1[1].Next,
    Controller_AddControllerToGlobalControllerList,
    6505LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[2]);
  Next = WPP_MAIN_CB.Dpc.DpcListEntry.Next;
  v4 = a1 + 2;
  v5 = WPP_MAIN_CB.Dpc.DpcListEntry.Next[1].Next;
  if ( v5->Next != WPP_MAIN_CB.Dpc.DpcListEntry.Next )
    __fastfail(3u);
  v4->Next = (_SINGLE_LIST_ENTRY *)WPP_MAIN_CB.Dpc.DpcListEntry;
  v4[1].Next = v5;
  v5->Next = v4;
  Next[1].Next = v4;
  ++LODWORD(Next[3].Next);
  KeReleaseSpinLock((PKSPIN_LOCK)&Next[2], v2);
}
