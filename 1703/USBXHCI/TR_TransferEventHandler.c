/*
 * XREFs of TR_TransferEventHandler @ 0x1C0001A20
 * Callers:
 *     Interrupter_WdfEvtInterruptDpc @ 0x1C000B190 (Interrupter_WdfEvtInterruptDpc.c)
 *     Endpoint_TransferEventHandler @ 0x1C000FB10 (Endpoint_TransferEventHandler.c)
 * Callees:
 *     <none>
 */

char __fastcall TR_TransferEventHandler(_DWORD *a1, __int64 a2)
{
  if ( a2 )
    return (*(__int64 (**)(void))(*(_QWORD *)(a2 + 32) + 80LL))();
  if ( (*a1 & 3) != 0 )
  {
    if ( (*a1 & 3u) <= 1uLL )
    {
      return 0;
    }
    else if ( (a1[3] & 4) != 0 )
    {
      return Bulk_ProcessTransferEventWithED1(a1, 0LL);
    }
    else
    {
      return Bulk_ProcessTransferEventWithED0(a1, 0LL);
    }
  }
  else if ( (a1[3] & 4) != 0 )
  {
    return Control_ProcessTransferEventWithED1(a1, 0LL);
  }
  else
  {
    return Control_ProcessTransferEventWithED0(a1, 0LL);
  }
}
