/*
 * XREFs of TtmiWriteEnumerationEventsToQueue @ 0x140678E54
 * Callers:
 *     TtmpDispatchCreateEventQueue @ 0x140679890 (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x140677120 (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiWriteEventToSingleQueue @ 0x14067A210 (TtmiWriteEventToSingleQueue.c)
 */

__int64 __fastcall TtmiWriteEnumerationEventsToQueue(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // edx
  _DWORD v7[138]; // [rsp+20h] [rbp-228h] BYREF

  v3 = TtmiPublishDeviceEnumerationEvents(a1, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 1164;
LABEL_3:
    TtmiLogError("TtmiWriteEnumerationEventsToQueue", v5, v3, v3);
    return v4;
  }
  memset(v7, 0, 0x21CuLL);
  v7[0] = 1;
  v3 = TtmiWriteEventToSingleQueue(a2, v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 1175;
    goto LABEL_3;
  }
  return 0LL;
}
