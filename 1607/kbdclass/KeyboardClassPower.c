/*
 * XREFs of KeyboardClassPower @ 0x1C00014F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqsd @ 0x1C0001410 (WPP_RECORDER_SF_qqsd.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0001870 (WPP_RECORDER_SF_qq.c)
 *     KeyboardClassCheckWaitWakeEnabled @ 0x1C00046AC (KeyboardClassCheckWaitWakeEnabled.c)
 *     KeyboardClassCreateWaitWakeIrp @ 0x1C000D0A0 (KeyboardClassCreateWaitWakeIrp.c)
 */

__int64 __fastcall KeyboardClassPower(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v4; // rsi
  char v5; // r12
  __int64 LowPart; // rbx
  __int64 v7; // rdx
  NTSTATUS v8; // ebp
  __int64 v9; // r8
  __int64 v10; // r9
  UCHAR MinorFunction; // al
  int v12; // eax
  KIRQL v13; // al
  char v14; // bl
  char v15; // al
  struct _IO_STACK_LOCATION *v16; // rax
  struct _IO_STACK_LOCATION *v17; // rax
  int v19; // eax
  KIRQL v20; // al
  bool v21; // r14
  POWER_STATE v22; // r8d
  KIRQL v23; // al
  char v24; // bl
  KIRQL v25; // al
  int RemlockSize; // [rsp+20h] [rbp-58h]
  ULONG Options; // [rsp+80h] [rbp+8h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 1;
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( v4 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels || !*(_BYTE *)(v4 + 64) )
  {
    PoStartNextPowerIrp(a2);
    a2->IoStatus.Status = -1073741637;
    IofCompleteRequest(a2, 0);
    return 3221225659LL;
  }
  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, &File, 1u, 0x20u);
  if ( v8 < 0 )
  {
    PoStartNextPowerIrp(a2);
    a2->IoStatus.Status = v8;
    IofCompleteRequest(a2, 0);
    return (unsigned int)v8;
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction != 2 )
  {
    if ( !MinorFunction )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, v7, 5, 95);
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
      if ( *(_QWORD *)(v4 + 296) )
      {
        v5 = 0;
        *(_QWORD *)(v4 + 312) = a2;
        v14 = 0;
        v8 = -1073741436;
      }
      else
      {
        *(_QWORD *)(v4 + 296) = a2;
        *(_BYTE *)(v4 + 304) = 0;
        if ( (unsigned int)(_InterlockedExchange((volatile __int32 *)(v4 + 320), 0) - 1) <= 1 )
        {
          v8 = -1073741436;
          v14 = 0;
        }
        else
        {
          v8 = 0;
          v14 = 1;
        }
        v5 = 1;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v13);
      goto LABEL_15;
    }
    if ( MinorFunction == 3 )
    {
      if ( (int)LowPart < 5
        && (int)LowPart > *(_DWORD *)(v4 + 288)
        && ((v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72)), !*(_QWORD *)(v4 + 296)) || *(_BYTE *)(v4 + 304)
          ? (v24 = 0)
          : (v24 = 1),
            KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v23),
            v24) )
      {
        v8 = -1073741101;
      }
      else
      {
        v8 = 0;
      }
      a2->IoStatus.Status = v8;
    }
LABEL_34:
    v14 = 0;
LABEL_15:
    v15 = 0;
    goto LABEL_16;
  }
  WPP_RECORDER_SF_qqsd((__int64)WPP_GLOBAL_Control->DeviceExtension, v7, v9, v10, RemlockSize);
  if ( Options )
  {
    if ( Options == 1 )
    {
      a2->IoStatus.Status = 0;
      v19 = *(_DWORD *)(v4 + 188);
      if ( (int)LowPart > v19 )
      {
        PoSetPowerState(*(PDEVICE_OBJECT *)v4, DevicePowerState, (POWER_STATE)LowPart);
        *(_DWORD *)(v4 + 188) = LowPart;
      }
      else if ( (int)LowPart < v19 )
      {
        goto LABEL_18;
      }
LABEL_29:
      PoStartNextPowerIrp(a2);
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v8 = PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), a2);
      goto LABEL_19;
    }
    goto LABEL_34;
  }
  v12 = *(_DWORD *)(v4 + 192);
  if ( (int)LowPart <= v12 )
  {
    if ( (int)LowPart < v12 )
    {
      a2->IoStatus.Status = 0;
LABEL_18:
      IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, &File, 1u, 0x20u);
      v16 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v16[-1].MajorFunction = *(_OWORD *)&v16->MajorFunction;
      *(_OWORD *)&v16[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v16->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v16[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v16->Parameters.SetQuota + 6);
      v16[-1].FileObject = v16->FileObject;
      v16[-1].Control = 0;
      v17 = a2->Tail.Overlay.CurrentStackLocation;
      v17[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)KeyboardClassPowerComplete;
      v17[-1].Context = 0LL;
      v17[-1].Control = -32;
      a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), a2);
      v8 = 259;
      goto LABEL_19;
    }
    if ( (_DWORD)LowPart == 1 && *(int *)(v4 + 284) > 1 && *(int *)(v4 + 288) > 1 )
    {
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
      if ( !*(_QWORD *)(v4 + 296) || *(_BYTE *)(v4 + 304) )
        LOBYTE(LowPart) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v25);
      if ( !(_BYTE)LowPart && (unsigned __int8)KeyboardClassCheckWaitWakeEnabled(v4) )
        KeyboardClassCreateWaitWakeIrp((PVOID)v4);
    }
    a2->IoStatus.Status = 0;
    goto LABEL_29;
  }
  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, &File, 1u, 0x20u);
  if ( v8 < 0 )
  {
LABEL_58:
    a2->IoStatus.Status = v8;
    PoStartNextPowerIrp(a2);
    IofCompleteRequest(a2, 0);
LABEL_19:
    if ( v5 )
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
    return (unsigned int)v8;
  }
  v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
  v21 = *(_QWORD *)(v4 + 296) && !*(_BYTE *)(v4 + 304);
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v20);
  if ( v21 && (int)LowPart < 5 )
    v22.SystemState = *(SYSTEM_POWER_STATE *)(v4 + 4 * LowPart + 264);
  else
    v22.SystemState = PowerSystemSleeping3;
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v8 = PoRequestPowerIrp(
         *(PDEVICE_OBJECT *)v4,
         2u,
         v22,
         (PREQUEST_POWER_COMPLETE)KeyboardClassPoRequestComplete,
         a2,
         0LL);
  if ( v8 >= 0 )
  {
    v15 = 1;
    v14 = 0;
LABEL_16:
    if ( v8 >= 0 )
    {
      if ( v14 )
        goto LABEL_18;
      if ( v15 )
      {
        v8 = 259;
        goto LABEL_19;
      }
      goto LABEL_29;
    }
    goto LABEL_58;
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
  PoStartNextPowerIrp(a2);
  a2->IoStatus.Status = v8;
  IofCompleteRequest(a2, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
  return 259LL;
}
