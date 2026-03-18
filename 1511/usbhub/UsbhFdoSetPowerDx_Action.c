/*
 * XREFs of UsbhFdoSetPowerDx_Action @ 0x1C0001000
 * Callers:
 *     UsbhFdoDevicePowerState @ 0x1C000212C (UsbhFdoDevicePowerState.c)
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0001D30 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbdHubDisarmBusForWake @ 0x1C00025C0 (UsbdHubDisarmBusForWake.c)
 *     UsbhSyncBusPause @ 0x1C0002610 (UsbhSyncBusPause.c)
 *     UsbhRefPdo @ 0x1C00095D0 (UsbhRefPdo.c)
 *     UsbhCompletePdoWakeIrp @ 0x1C000A9A0 (UsbhCompletePdoWakeIrp.c)
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     UsbhLatchPdo @ 0x1C000C288 (UsbhLatchPdo.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0010858 (UsbhArmHubForWakeDetect.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001212C (UsbhDispatch_HardResetEvent.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDispatch_BusEvent @ 0x1C0021780 (UsbhDispatch_BusEvent.c)
 *     UsbhUnlatchPdo @ 0x1C0022600 (UsbhUnlatchPdo.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C0025B2C (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C0025B78 (UsbhDisarmHubForWakeDetect.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D354 (WPP_RECORDER_SF_dq.c)
 *     UsbdHubArmBusForWake @ 0x1C0045B8C (UsbdHubArmBusForWake.c)
 *     UsbhArmHubWakeOnConnect @ 0x1C0045BF8 (UsbhArmHubWakeOnConnect.c)
 *     UsbhPdoArmedForWake @ 0x1C004638C (UsbhPdoArmedForWake.c)
 */

__int64 __fastcall UsbhFdoSetPowerDx_Action(PDEVICE_OBJECT DeviceObject, __int64 a2, IRP *a3)
{
  int v6; // esi
  int v7; // r12d
  char v8; // r15
  __int64 v9; // r13
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v11; // r9d
  __int64 v12; // r10
  unsigned int LowPart; // ecx
  unsigned int v14; // ecx
  unsigned __int16 i; // si
  __int64 v16; // rbx
  KIRQL v17; // r14
  __int64 PortData; // rax
  __int64 v19; // rcx
  int v20; // r9d
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v24; // r14
  int v25; // edx
  int v26; // r8d
  int v27; // r10d
  unsigned int v28; // r8d
  unsigned __int16 v29; // r14
  int v30; // ebx
  __int64 v31; // rax
  __int64 v32; // rbx
  int v33; // [rsp+88h] [rbp+10h]
  __int64 v34; // [rsp+90h] [rbp+18h]
  __int64 v35; // [rsp+98h] [rbp+20h]

  v33 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v35 = FdoExt(DeviceObject);
  v9 = v35;
  Log((_DWORD)DeviceObject, 16, 1349731448, a2, (__int64)a3);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v34 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 64) = a3;
  Log((_DWORD)DeviceObject, 8, 1381192816, 0, 0LL);
  UsbhDispatch_HardResetEvent(DeviceObject, v12, (unsigned int)(v11 + 10));
  UsbhSyncBusPause(DeviceObject, v34, 3LL);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  *(_DWORD *)(a2 + 28) = LowPart;
  v14 = LowPart - 3;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      *(_DWORD *)(v35 + 4216) = 0;
      Log((_DWORD)DeviceObject, 16, 1349280819, 0, (__int64)a3);
      UsbhDisarmHubWakeOnConnect(DeviceObject);
      UsbhDisarmHubForWakeDetect(DeviceObject);
      UsbdHubDisarmBusForWake(DeviceObject);
      for ( i = 1; i <= *(unsigned __int8 *)(FdoExt(DeviceObject) + 2938); ++i )
      {
        v16 = 0LL;
        Log((_DWORD)DeviceObject, 256, 1817199695, i, 1180976179LL);
        v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        PortData = UsbhGetPortData(DeviceObject, i);
        if ( PortData )
        {
          v16 = *(_QWORD *)(PortData + 392);
          if ( v16 )
            v16 = UsbhRefPdo(v19, *(_QWORD *)(PortData + 392), a3, 1180976179LL);
        }
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v17);
        if ( v16 )
        {
          v24 = PdoExt(v16);
          if ( (unsigned __int8)UsbhCompletePdoWakeIrp(DeviceObject, v16, 3221225860LL) )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              WPP_RECORDER_SF_dq(
                WPP_GLOBAL_Control->DeviceExtension,
                v25,
                v26,
                29,
                (__int64)&WPP_8d36cf52eaaf9aa8dffc4ee2e11132d2_Traceguids,
                *(_WORD *)(v24 + 1420),
                v16);
          }
          UsbhUnlatchPdo(DeviceObject, v16, a3, 1180976179LL);
        }
      }
    }
    goto LABEL_10;
  }
  *(_DWORD *)(v35 + 4216) = *(_DWORD *)(a2 + 88);
  Log((_DWORD)DeviceObject, 16, 1349280818, 0, (__int64)a3);
  if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) )
  {
    if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) == v27 )
    {
      v6 = v27;
    }
    else
    {
      v28 = *(&WPP_MAIN_CB.AlignmentRequirement + 1) - v27 - v27;
      if ( v28 && v28 == v27 )
        v6 = (unsigned __int8)(v27 & *(_BYTE *)(v35 + 2563));
    }
  }
  v29 = v27;
  v30 = v27;
  while ( v29 <= *(unsigned __int8 *)(FdoExt(DeviceObject) + 2938) )
  {
    v31 = UsbhLatchPdo(DeviceObject, v29, a3, 1180976178LL);
    v32 = v31;
    if ( !v31 )
      goto LABEL_30;
    ++v7;
    if ( *(_BYTE *)(PdoExt(v31) + 2716) )
      v8 = 1;
    if ( !(unsigned __int8)UsbhPdoArmedForWake(v32) )
    {
      UsbhUnlatchPdo(DeviceObject, v32, a3, 1180976178LL);
LABEL_30:
      v30 = 1;
      goto LABEL_31;
    }
    UsbhUnlatchPdo(DeviceObject, v32, a3, 1180976178LL);
    v30 = 1;
    v33 = 1;
    if ( !*(&WPP_MAIN_CB.AlignmentRequirement + 1) )
      v6 = 1;
LABEL_31:
    ++v29;
  }
  v9 = v35;
  if ( v8 && (((unsigned __int8)*(_DWORD *)(v35 + 2560) & (unsigned __int8)v30) != 0 || v7 == v30) )
    v6 = v30;
  if ( v6 )
  {
    UsbhArmHubWakeOnConnect(DeviceObject);
    goto LABEL_38;
  }
  UsbhDisarmHubWakeOnConnect(DeviceObject);
  if ( v33 )
  {
LABEL_38:
    UsbhArmHubForWakeDetect(DeviceObject);
    UsbdHubArmBusForWake(DeviceObject);
  }
  else
  {
    UsbhDisarmHubForWakeDetect(DeviceObject);
    UsbdHubDisarmBusForWake(DeviceObject);
  }
LABEL_10:
  FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 2048, 1112756286, 0, 0LL);
  v21 = UsbhDispatch_BusEvent(DeviceObject, v34, (unsigned int)(v20 + 6));
  Log((_DWORD)DeviceObject, 2048, 1112756284, 0, v21);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, a3, 4498LL);
  ++a3->Tail.Overlay.CurrentStackLocation;
  ++a3->CurrentLocation;
  v22 = PoCallDriver(*(PDEVICE_OBJECT *)(v9 + 1208), a3);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 1224), a3, 0x20u);
  return v22;
}
