/*
 * XREFs of TtmpPublishDeviceEvent @ 0x140677528
 * Callers:
 *     TtmiAssignDevice @ 0x140677018 (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x140677120 (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSessionDeviceListWorker @ 0x1406771AC (TtmiSessionDeviceListWorker.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14010B1EC (RtlStringCchCopyW.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     TtmiWriteEventToAllQueues @ 0x140678ED4 (TtmiWriteEventToAllQueues.c)
 *     TtmiWriteEventToSingleQueue @ 0x14067A210 (TtmiWriteEventToSingleQueue.c)
 */

__int64 __fastcall TtmpPublishDeviceEvent(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v8; // esi
  _DWORD v10[136]; // [rsp+28h] [rbp-E0h] BYREF

  memset(v10, 0, 0x21CuLL);
  v8 = 0;
  v10[0] = a4;
  switch ( a4 )
  {
    case 0:
    case 3:
      v10[1] = *(_DWORD *)(a3 + 32);
      v10[2] = *(_DWORD *)(a3 + 596);
      v10[3] = *(_DWORD *)(a3 + 16);
      v10[4] = *(_DWORD *)(a3 + 72);
      RtlStringCchCopyW((NTSTRSAFE_PWSTR)&v10[5], 0x104uLL, (NTSTRSAFE_PCWSTR)(a3 + 76));
      break;
    case 4:
      v10[1] = *(_DWORD *)(a3 + 32);
      v10[2] = *(_DWORD *)(a3 + 596);
      break;
    case 5:
      v10[1] = *(_DWORD *)(a3 + 32);
      break;
  }
  if ( a2 )
    return (unsigned int)TtmiWriteEventToSingleQueue(a2, v10);
  else
    TtmiWriteEventToAllQueues(a1, v10);
  return v8;
}
