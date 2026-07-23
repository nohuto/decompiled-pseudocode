/*
 * XREFs of TtmDispatchApi @ 0x140679460
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmpDispatchAssignDevice @ 0x1406797E4 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x140679890 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x1406799F4 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x140679ADC (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x140679B8C (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x140679C48 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x140679CE4 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayState @ 0x140679D94 (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x140679E4C (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmiLogDispatchApiStart @ 0x14067AD98 (TtmiLogDispatchApiStart.c)
 *     TtmiLogDispatchApiStop @ 0x14067AE60 (TtmiLogDispatchApiStop.c)
 */

__int64 __fastcall TtmDispatchApi(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        unsigned int *a7,
        _BYTE *a8)
{
  PVOID PoolWithTag; // rbx
  int v13; // edi
  int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // esi
  int v17; // edx
  int Terminal; // eax

  TtmiLogDispatchApiStart();
  PoolWithTag = 0LL;
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( TtmpEnabled != 1 )
  {
    v13 = -1073741637;
    v14 = 895;
LABEL_3:
    TtmiLogError("TtmDispatchApi", v14, -1, v13);
    goto LABEL_54;
  }
  switch ( a1 )
  {
    case 9u:
      v15 = 12;
      goto LABEL_20;
    case 0xAu:
      v15 = 24;
      v16 = 16;
      goto LABEL_21;
    case 0xBu:
      v15 = 16;
LABEL_14:
      v16 = 0;
      goto LABEL_21;
    case 0xCu:
      v15 = 16;
LABEL_20:
      v16 = 8;
      goto LABEL_21;
  }
  if ( a1 != 13 )
  {
    if ( a1 != 14 && a1 != 15 && a1 - 16 >= 2 )
    {
      v13 = -1073741811;
      v14 = 951;
      goto LABEL_3;
    }
    v15 = 24;
    goto LABEL_14;
  }
  v15 = 16;
  v16 = 540;
LABEL_21:
  if ( a3 < v15 || !a4 && v16 || a5 < v16 )
  {
    v13 = -1073741789;
    v17 = 962;
    goto LABEL_49;
  }
  if ( v16 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x206D654Du);
    if ( !PoolWithTag )
    {
      v13 = -1073741801;
      v14 = 977;
      goto LABEL_3;
    }
  }
  switch ( a1 )
  {
    case 9u:
      Terminal = TtmpDispatchOpenTerminal(a2, PoolWithTag);
      goto LABEL_47;
    case 0xAu:
      Terminal = TtmpDispatchCreateTerminal(a2, PoolWithTag);
      goto LABEL_47;
    case 0xBu:
      Terminal = TtmpDispatchEvacuateDevices(a2);
      goto LABEL_47;
    case 0xCu:
      Terminal = TtmpDispatchCreateEventQueue(a2, PoolWithTag);
      goto LABEL_47;
    case 0xDu:
      Terminal = TtmpDispatchGetTerminalEvent(a2, PoolWithTag);
      goto LABEL_47;
    case 0xEu:
      Terminal = TtmpDispatchSetDefaultDeviceAssignment(a2);
      goto LABEL_47;
    case 0xFu:
      Terminal = TtmpDispatchAssignDevice(a2);
      goto LABEL_47;
    case 0x10u:
      Terminal = TtmpDispatchSetDisplayState(a2);
      goto LABEL_47;
    case 0x11u:
      Terminal = TtmpDispatchSetDisplayTimeouts(a2);
LABEL_47:
      v13 = Terminal;
      goto LABEL_50;
  }
  v13 = -1073741811;
  v17 = 1034;
LABEL_49:
  TtmiLogError("TtmDispatchApi", v17, -1, v13);
LABEL_50:
  if ( PoolWithTag )
  {
    if ( v13 < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0x206D654Du);
    }
    else
    {
      *a6 = PoolWithTag;
      *a7 = v16;
      *a8 = 1;
    }
  }
LABEL_54:
  TtmiLogDispatchApiStop(a1, (unsigned int)v13);
  return (unsigned int)v13;
}
