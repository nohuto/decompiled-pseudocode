/*
 * XREFs of Controller_EvtPrePoFxUnregisterDevice @ 0x1C0014E10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_EvtPrePoFxUnregisterDevice(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
             WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
             a1,
             off_1C0040270);
  *(_QWORD *)(*(_QWORD *)(result + 8) + 392LL) = 0LL;
  return result;
}
