/*
 * XREFs of TtmiLogError @ 0x14054710C
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x140546F5C (TtmNotifyDeviceArrival.c)
 *     TtmiAcquireCurrentSession @ 0x140547078 (TtmiAcquireCurrentSession.c)
 *     TtmpAcquireSessionById @ 0x1405470B4 (TtmpAcquireSessionById.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1405816A0 (TtmpDisplayBurstPowerSettingCallback.c)
 *     TtmNotifyDeviceDeparture @ 0x140676E00 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x140676EB8 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x140677018 (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x140677120 (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSessionDeviceListWorker @ 0x1406771AC (TtmiSessionDeviceListWorker.c)
 *     TtmpCallSetDisplayState @ 0x1406773F8 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x140677474 (TtmpCallSetInputMode.c)
 *     TtmpPushTerminalState @ 0x14067760C (TtmpPushTerminalState.c)
 *     TtmiCreateTerminal @ 0x140677844 (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x140677B08 (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x140677EB8 (TtmiTerminalMonitorControl.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x140678740 (TtmGetSessionDisplayRequiredCount.c)
 *     TtmInitCurrentSession @ 0x14067879C (TtmInitCurrentSession.c)
 *     TtmNotifyConsoleUserPresent @ 0x140678998 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyCsStateExited @ 0x140678A28 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x140678A98 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140678B14 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x140678C1C (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140678CA8 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x140678D3C (TtmSessionMonitorControl.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x140678E54 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x140678ED4 (TtmiWriteEventToAllQueues.c)
 *     TtmpSessionWorker @ 0x140679130 (TtmpSessionWorker.c)
 *     TtmDispatchApi @ 0x140679460 (TtmDispatchApi.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1406796B0 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x1406797E4 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x140679890 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1406799F4 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x140679ADC (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x140679B8C (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x140679C48 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x140679CE4 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayState @ 0x140679D94 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x140679E4C (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmiCreateEventQueue @ 0x140679F80 (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x14067A0C0 (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x14067A210 (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401CDD4C (_TlgCreateSz.c)
 */

void __fastcall TtmiLogError(LPCSTR psz, int a2, int a3, int a4)
{
  int SessionId; // eax
  int v9; // r9d
  int v10; // [rsp+30h] [rbp-49h] BYREF
  int v11; // [rsp+34h] [rbp-45h] BYREF
  int v12; // [rsp+38h] [rbp-41h] BYREF
  int v13; // [rsp+3Ch] [rbp-3Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  int *v15; // [rsp+60h] [rbp-19h]
  int v16; // [rsp+68h] [rbp-11h]
  int v17; // [rsp+6Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-9h] BYREF
  int *v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  int *v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  int *v25; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]
  int v27; // [rsp+ACh] [rbp+33h]

  if ( TtmpBreakOnError
    && (!dword_14074722C || dword_14074722C == a2)
    && (!dword_140747230 || dword_140747230 == a3)
    && (!dword_140747234 || dword_140747234 == a4) )
  {
    __debugbreak();
  }
  if ( stru_1407478B0.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1407478B0, 2uLL) )
    {
      SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
      v17 = 0;
      v10 = SessionId;
      v11 = a2;
      v15 = &v10;
      v12 = a3;
      v13 = a4;
      v16 = 4;
      TlgCreateSz(&pDesc, psz);
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v22 = &v12;
      v25 = &v13;
      v19 = &v11;
      v20 = v9;
      v23 = v9;
      v26 = v9;
      TlgWrite(&stru_1407478B0, &unk_14027DCCB, 0LL, 0LL, 7u, &pData);
    }
  }
}
