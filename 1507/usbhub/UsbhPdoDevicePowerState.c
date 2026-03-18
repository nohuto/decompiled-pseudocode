/*
 * XREFs of UsbhPdoDevicePowerState @ 0x1C001D9C0
 * Callers:
 *     UsbhPdoPower_SetPower @ 0x1C0021390 (UsbhPdoPower_SetPower.c)
 * Callees:
 *     UsbhIncPdoIoCount @ 0x1C0007B30 (UsbhIncPdoIoCount.c)
 *     UsbhDecPdoIoCount @ 0x1C00139E0 (UsbhDecPdoIoCount.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     GET_FDO_POWER_STATE @ 0x1C0015DA0 (GET_FDO_POWER_STATE.c)
 *     UsbhSet_Pdo_Dx @ 0x1C00179CC (UsbhSet_Pdo_Dx.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C001BF04 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhClearPdoIdleReady @ 0x1C001F1D8 (UsbhClearPdoIdleReady.c)
 *     UsbhSetPdoIdleReady @ 0x1C001FA4C (UsbhSetPdoIdleReady.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0021180 (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetPdoPowerState @ 0x1C0021280 (UsbhSetPdoPowerState.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00212F0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhPdoSetDx @ 0x1C002208C (UsbhPdoSetDx.c)
 *     UsbhSet_D0_wQueued_Action @ 0x1C0024930 (UsbhSet_D0_wQueued_Action.c)
 *     UsbhQueueWorkItemEx @ 0x1C0024A80 (UsbhQueueWorkItemEx.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C0024D1C (UsbhPoStartNextPowerIrp_Pdo.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003CF38 (WPP_RECORDER_SF_dd.c)
 *     UsbhPCE_BusDisconnect @ 0x1C00409E4 (UsbhPCE_BusDisconnect.c)
 */

__int64 __fastcall UsbhPdoDevicePowerState(__int64 a1, struct _DEVICE_OBJECT *a2, IRP *a3, __int64 a4)
{
  _DWORD *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rbx
  unsigned int LowPart; // r12d
  int v16; // eax
  __int64 v17; // r15
  KIRQL v18; // al
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  bool v22; // zf
  KIRQL v23; // dl
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r15d
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // r15d
  int v35; // edx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  _DWORD *v41; // rax
  const EVENT_DESCRIPTOR *v42; // r8
  __int64 v43; // r8
  __int64 v44; // r9
  int v46; // r8d
  int v47; // r8d
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // r15d
  int v52; // eax
  int v53; // r8d
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  _DWORD *v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // eax
  int v64; // ecx
  BOOLEAN v65; // r9
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-48h]
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+80h] [rbp+18h]

  v7 = PdoExt((__int64)a2, (__int64)a2, (__int64)a3, a4);
  FdoExt(a1, v8, v9, v10);
  v14 = PdoExt((__int64)a2, v11, v12, v13) + 236;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Log(a1, 16, 1885622372, (__int64)a2, (__int64)a3);
  v16 = UsbhIncPdoIoCount((__int64)a2, (__int64)a3, 1884311383LL, 0LL);
  v17 = v16;
  if ( (v16 & 0xC0000000) != 0xC0000000 )
  {
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    v14[34] = 1;
    *((_BYTE *)v14 + 132) = v18;
    v14[22] = 2018460752;
    v14[23] = 12;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v14;
    *((_QWORD *)v14 + 3) = KeGetCurrentThread();
    v22 = PdoExt((__int64)a2, v19, v20, v21)[281] == 3;
    v14[34] = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    v14[22] = 1734964085;
    v23 = *((_BYTE *)v14 + 132);
    if ( !v22 )
    {
      v34 = -1073741810;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v23);
LABEL_13:
      if ( (unsigned __int8)Usb_Disconnected(v34) )
        UsbhPCE_BusDisconnect(a1, v14, *((unsigned __int16 *)v7 + 710));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v35,
          1,
          22,
          (__int64)&WPP_37c6835c01158ea489aacca15d43b0a5_Traceguids,
          *((_WORD *)v7 + 710),
          LowPart);
      UsbhSet_Pdo_Dx(a2, CurrentStackLocation->Parameters.Read.ByteOffset.LowPart, v36, v37);
      *((_QWORD *)v7 + 316) = MEMORY[0xFFFFF78000000014];
      v41 = PdoExt((__int64)a2, v38, v39, v40);
      UsbhPoStartNextPowerIrp_Pdo(*((_QWORD *)v41 + 147), a2, a3, 2101LL);
      LODWORD(Timeout) = 0;
      v42 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE;
      if ( LowPart != 1 )
        v42 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_COMPLETE;
      UsbhEtwLogDevicePowerEvent(
        (__int64)v7,
        (__int64)a3,
        v42,
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
        Timeout);
      a3->IoStatus.Status = v34;
      IofCompleteRequest(a3, 0);
      UsbhDecPdoIoCount((ULONG_PTR)a2, (ULONG_PTR)a3, v43, v44);
      return v34;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v23);
    UsbhAcquireFdoPwrLock(a1, v14, 126LL, 1986356304LL);
    v27 = PdoExt((__int64)a2, v24, v25, v26)[282];
    if ( LowPart != 1 )
    {
      if ( LowPart - 2 > 2 )
      {
        v34 = -1073741811;
      }
      else
      {
        LODWORD(Timeout) = 0;
        UsbhEtwLogDevicePowerEvent(
          (__int64)v7,
          (__int64)a3,
          &USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_DISPATCH,
          CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
          Timeout);
        if ( PdoExt((__int64)a2, v28, v29, v30)[197] == LowPart )
        {
          v34 = 0;
        }
        else
        {
          if ( v7[286] == 2 )
          {
            if ( !CurrentStackLocation->Parameters.Create.EaLength )
            {
              if ( !*((_BYTE *)v7 + 2701) )
              {
                *((_BYTE *)v7 + 2701) = 1;
                UsbhQueueWorkItemEx(
                  a1,
                  1,
                  (unsigned int)&UsbhSetPdoSelectiveSuspendedKey,
                  (_DWORD)a2,
                  0,
                  2001228627,
                  0LL);
              }
              if ( LowPart == 4
                && (PdoExt((__int64)a2, v31, v32, v33)[293] & 0x10) != 0
                && (v7[353] & 0xC00000) == 0xC00000 )
              {
                KeSetEvent((PRKEVENT)v7 + 120, 0, 0);
                v7[353] = v7[353] & 0xFAFFFFFF | 0x4000000;
              }
            }
            v34 = UsbhPdoSetDx(v14, a2, a3);
            goto LABEL_13;
          }
          v34 = -1073741130;
        }
      }
      goto LABEL_43;
    }
    LODWORD(Timeout) = 0;
    UsbhEtwLogDevicePowerEvent(
      (__int64)v7,
      (__int64)a3,
      &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_DISPATCH,
      CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
      Timeout);
    *((_QWORD *)v7 + 315) = MEMORY[0xFFFFF78000000014];
    v51 = v27 - 1;
    if ( !v51 )
    {
      UsbhSetPdoPowerState((_DWORD)v14, (_DWORD)a2, v49, 1, 2);
      goto LABEL_49;
    }
    if ( v51 == 6 )
    {
      UsbhSetPdoPowerState((_DWORD)v14, (_DWORD)a2, v49, 7, 13);
      UsbhReleaseFdoPwrLock(a1, v14);
      Log(a1, 16, 2003059760, 0LL, *((unsigned __int16 *)v7 + 710));
      KeWaitForSingleObject(v7 + 588, Executive, 0, v65, 0LL);
LABEL_50:
      v34 = 0;
      goto LABEL_13;
    }
    v52 = GET_FDO_POWER_STATE((__int64)v14, v48, v49, v50);
    if ( v52 == 201 || v52 == 206 )
      goto LABEL_20;
    if ( v52 <= 208 )
    {
LABEL_46:
      UsbhSetPdoPowerState((_DWORD)v14, (_DWORD)a2, v46, 6, 3);
LABEL_49:
      UsbhReleaseFdoPwrLock(a1, v14);
      goto LABEL_50;
    }
    if ( v52 <= 211 )
    {
LABEL_20:
      if ( (int)UsbhSet_D0_wQueued_Action(a1, v14, a2, a3) >= 0 )
      {
        KeResetEvent((PRKEVENT)v7 + 98);
        UsbhSetPdoPowerState((_DWORD)v14, (_DWORD)a2, v47, 2, 6);
        UsbhReleaseFdoPwrLock(a1, v14);
        return 259LL;
      }
    }
    else if ( v52 > 213 )
    {
      goto LABEL_46;
    }
    UsbhSetPdoPowerState((_DWORD)v14, (_DWORD)a2, v46, 6, 3);
    v63 = GET_FDO_POWER_STATE((__int64)v14, v60, v61, v62);
    v64 = 0;
    if ( v63 == 213 )
      v64 = -1073741810;
    v34 = v64;
LABEL_43:
    UsbhReleaseFdoPwrLock(a1, v14);
    goto LABEL_13;
  }
  if ( *((_BYTE *)v7 + 2708) )
  {
    UsbhAcquireFdoPwrLock(a1, v14, 126LL, 1986356304LL);
    if ( LowPart == 1 )
    {
      UsbhSetPdoPowerState((_DWORD)v14, (_DWORD)a2, v53, 1, 2);
      UsbhReleaseFdoPwrLock(a1, v14);
      UsbhClearPdoIdleReady(a1, a2, a3);
    }
    else
    {
      UsbhSetPdoPowerState((_DWORD)v14, (_DWORD)a2, v53, 4, 4);
      UsbhReleaseFdoPwrLock(a1, v14);
      UsbhSetPdoIdleReady(a1, a2, a3);
    }
    UsbhSet_Pdo_Dx(a2, LowPart, v54, v55);
  }
  Log(a1, 16, 1886545441, v17, (__int64)a3);
  *((_QWORD *)v7 + 316) = MEMORY[0xFFFFF78000000014];
  v59 = PdoExt((__int64)a2, v56, v57, v58);
  UsbhPoStartNextPowerIrp_Pdo(*((_QWORD *)v59 + 147), a2, a3, 1910LL);
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 0);
  return 0LL;
}
