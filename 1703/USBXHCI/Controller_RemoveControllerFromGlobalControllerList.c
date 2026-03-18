/*
 * XREFs of Controller_RemoveControllerFromGlobalControllerList @ 0x1C001B714
 * Callers:
 *     Controller_WdfEvtCleanupCallback @ 0x1C001C220 (Controller_WdfEvtCleanupCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_RemoveControllerFromGlobalControllerList(_QWORD *a1)
{
  KIRQL v2; // al
  __int64 v3; // r9
  _QWORD *v4; // r8
  _SINGLE_LIST_ENTRY *Next; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[2]);
  v3 = a1[2];
  v4 = (_QWORD *)a1[3];
  if ( *(_QWORD **)(v3 + 8) != a1 + 2 || (_QWORD *)*v4 != a1 + 2 )
    __fastfail(3u);
  Next = WPP_MAIN_CB.Dpc.DpcListEntry.Next;
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  --LODWORD(Next[3].Next);
  KeReleaseSpinLock((PKSPIN_LOCK)&Next[2], v2);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void (__fastcall *)(_SINGLE_LIST_ENTRY *), __int64, const char *))(WdfFunctions_01015 + 1648))(
           WdfDriverGlobals,
           a1[1],
           Controller_AddControllerToGlobalControllerList,
           6471LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
}
