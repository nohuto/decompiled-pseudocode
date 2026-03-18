/*
 * XREFs of ESM_WaitingForHaltedCompletionCode @ 0x1C0039B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ESM_WaitingForHaltedCompletionCode(__int64 a1)
{
  (*(void (__fastcall **)(_LIST_ENTRY *, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 1280LL),
    -20000000LL);
  return 1000LL;
}
