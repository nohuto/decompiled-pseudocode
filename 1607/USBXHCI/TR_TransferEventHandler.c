/*
 * XREFs of TR_TransferEventHandler @ 0x1C0001974
 * Callers:
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C000A2D0 (Interrupter_WdfEvtInterruptDpc.c)
 *     Endpoint_TransferEventHandler @ 0x1C000EED0 (Endpoint_TransferEventHandler.c)
 * Callees:
 *     <none>
 */

char __fastcall TR_TransferEventHandler(_DWORD *a1, __int64 a2)
{
  if ( a2 )
    return (*(__int64 (**)(void))(*(_QWORD *)(a2 + 32) + 80LL))();
  if ( (*a1 & 3) == 0 )
    return Control_EP_TransferEventHandler(a1, 0LL);
  if ( (unsigned __int64)(*a1 & 3) - 2 > 1 )
    return 0;
  return Bulk_EP_TransferEventHandler(a1, 0LL);
}
