/*
 * XREFs of Endpoint_UcxEvtEndpointOkToCancelTransfers @ 0x1C001B260
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointOkToCancelTransfers(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1,
         off_1C0040108);
  return ESM_AddEvent((PVOID)(v1 + 272));
}
