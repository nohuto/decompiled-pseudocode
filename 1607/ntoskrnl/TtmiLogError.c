/*
 * XREFs of TtmiLogError @ 0x140546BCC
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x140546A1C (TtmNotifyDeviceArrival.c)
 *     TtmiAcquireCurrentSession @ 0x140546B38 (TtmiAcquireCurrentSession.c)
 *     TtmpAcquireSessionById @ 0x140546B74 (TtmpAcquireSessionById.c)
 *     TtmpDisplayBurstPowerSettingCallback @ 0x1405811F4 (TtmpDisplayBurstPowerSettingCallback.c)
 *     TtmNotifyDeviceDeparture @ 0x140676D1C (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x140676DD4 (TtmNotifyDeviceInput.c)
 *     TtmiAssignDevice @ 0x140676F34 (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x14067703C (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSessionDeviceListWorker @ 0x1406770C8 (TtmiSessionDeviceListWorker.c)
 *     TtmpCallSetDisplayState @ 0x140677314 (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x140677390 (TtmpCallSetInputMode.c)
 *     TtmpPushTerminalState @ 0x140677528 (TtmpPushTerminalState.c)
 *     TtmiCreateTerminal @ 0x140677760 (TtmiCreateTerminal.c)
 *     TtmiOpenDefaultTerminal @ 0x140677A24 (TtmiOpenDefaultTerminal.c)
 *     TtmiTerminalMonitorControl @ 0x140677DD4 (TtmiTerminalMonitorControl.c)
 *     TtmGetSessionDisplayRequiredCount @ 0x14067865C (TtmGetSessionDisplayRequiredCount.c)
 *     TtmInitCurrentSession @ 0x1406786B8 (TtmInitCurrentSession.c)
 *     TtmNotifyConsoleUserPresent @ 0x1406788B4 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyCsStateExited @ 0x140678944 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x1406789B4 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140678A30 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x140678B38 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x140678BC4 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x140678C58 (TtmSessionMonitorControl.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x140678D70 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x140678DF0 (TtmiWriteEventToAllQueues.c)
 *     TtmpSessionWorker @ 0x14067904C (TtmpSessionWorker.c)
 *     TtmDispatchApi @ 0x14067937C (TtmDispatchApi.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1406795CC (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDispatchAssignDevice @ 0x140679700 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x1406797AC (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x140679910 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x1406799F8 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x140679AA8 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x140679B64 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x140679C00 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayState @ 0x140679CB0 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x140679D68 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmiCreateEventQueue @ 0x140679E9C (TtmiCreateEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140679FDC (TtmiRetrieveEventFromQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x14067A12C (TtmiWriteEventToSingleQueue.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1401CDF00 (_TlgCreateSz.c)
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
      TlgWrite(&stru_1407478B0, &unk_14027DBCB, 0LL, 0LL, 7u, &pData);
    }
  }
}
