/*
 * XREFs of MouseClassPower @ 0x1C0001CD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqsd @ 0x1C0001990 (WPP_RECORDER_SF_qqsd.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0002050 (WPP_RECORDER_SF_qq.c)
 *     MouseClassCheckWaitWakeEnabled @ 0x1C00042B0 (MouseClassCheckWaitWakeEnabled.c)
 *     MouseClassCreateWaitWakeIrp @ 0x1C000BCF4 (MouseClassCreateWaitWakeIrp.c)
 */

__int64 __fastcall MouseClassPower(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v4; // rsi
  char v5; // r13
  char v6; // r12
  __int64 LowPart; // rbx
  __int64 v8; // rdx
  NTSTATUS v9; // ebp
  __int64 v10; // r8
  __int64 v11; // r9
  UCHAR MinorFunction; // al
  int v13; // eax
  KIRQL v14; // al
  char v15; // bl
  char v16; // al
  struct _IO_STACK_LOCATION *v17; // rax
  struct _IO_STACK_LOCATION *v18; // rax
  int v20; // eax
  KIRQL v21; // al
  bool v22; // r14
  POWER_STATE v23; // r8d
  KIRQL v24; // al
  char v25; // bl
  KIRQL v26; // al
  int RemlockSize; // [rsp+20h] [rbp-58h]
  ULONG Options; // [rsp+80h] [rbp+8h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = a1;
  v6 = 1;
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( v4 == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels || !*(_BYTE *)(v4 + 64) )
  {
    PoStartNextPowerIrp(a2);
    a2->IoStatus.Status = -1073741637;
    IofCompleteRequest(a2, 0);
    return 3221225659LL;
  }
  v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, &File, 1u, 0x20u);
  if ( v9 < 0 )
  {
    PoStartNextPowerIrp(a2);
    a2->IoStatus.Status = v9;
    IofCompleteRequest(a2, 0);
    return (unsigned int)v9;
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction != 2 )
  {
    if ( !MinorFunction )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, v8, 5, 90, RemlockSize, v5, (char)a2);
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
      if ( *(_QWORD *)(v4 + 280) )
      {
        v6 = 0;
        *(_QWORD *)(v4 + 296) = a2;
        v15 = 0;
        v9 = -1073741436;
      }
      else
      {
        *(_QWORD *)(v4 + 280) = a2;
        *(_BYTE *)(v4 + 288) = 0;
        if ( (unsigned int)(_InterlockedExchange((volatile __int32 *)(v4 + 304), 0) - 1) <= 1 )
        {
          v9 = -1073741436;
          v15 = 0;
        }
        else
        {
          v9 = 0;
          v15 = 1;
        }
        v6 = 1;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v14);
      goto LABEL_15;
    }
    if ( MinorFunction == 3 )
    {
      if ( (int)LowPart < 5
        && (int)LowPart > *(_DWORD *)(v4 + 272)
        && ((v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72)), !*(_QWORD *)(v4 + 280)) || *(_BYTE *)(v4 + 288)
          ? (v25 = 0)
          : (v25 = 1),
            KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v24),
            v25) )
      {
        v9 = -1073741101;
      }
      else
      {
        v9 = 0;
      }
      a2->IoStatus.Status = v9;
    }
LABEL_34:
    v15 = 0;
LABEL_15:
    v16 = 0;
    goto LABEL_16;
  }
  WPP_RECORDER_SF_qqsd((__int64)WPP_GLOBAL_Control->DeviceExtension, v8, v10, v11, RemlockSize);
  if ( Options )
  {
    if ( Options == 1 )
    {
      a2->IoStatus.Status = 0;
      v20 = *(_DWORD *)(v4 + 172);
      if ( (int)LowPart > v20 )
      {
        PoSetPowerState(*(PDEVICE_OBJECT *)v4, DevicePowerState, (POWER_STATE)LowPart);
        *(_DWORD *)(v4 + 172) = LowPart;
      }
      else if ( (int)LowPart < v20 )
      {
        goto LABEL_18;
      }
LABEL_29:
      PoStartNextPowerIrp(a2);
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v9 = PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), a2);
      goto LABEL_19;
    }
    goto LABEL_34;
  }
  v13 = *(_DWORD *)(v4 + 176);
  if ( (int)LowPart <= v13 )
  {
    if ( (int)LowPart < v13 )
    {
      a2->IoStatus.Status = 0;
LABEL_18:
      IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, &File, 1u, 0x20u);
      v17 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v17[-1].MajorFunction = *(_OWORD *)&v17->MajorFunction;
      *(_OWORD *)&v17[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v17->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v17[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v17->Parameters.SetQuota + 6);
      v17[-1].FileObject = v17->FileObject;
      v17[-1].Control = 0;
      v18 = a2->Tail.Overlay.CurrentStackLocation;
      v18[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)MouseClassPowerComplete;
      v18[-1].Context = 0LL;
      v18[-1].Control = -32;
      a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 16), a2);
      v9 = 259;
      goto LABEL_19;
    }
    if ( (_DWORD)LowPart == 1 && *(int *)(v4 + 268) > 1 && *(int *)(v4 + 272) > 1 )
    {
      v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
      if ( !*(_QWORD *)(v4 + 280) || *(_BYTE *)(v4 + 288) )
        LOBYTE(LowPart) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v26);
      if ( !(_BYTE)LowPart && (unsigned __int8)MouseClassCheckWaitWakeEnabled(v4) )
        MouseClassCreateWaitWakeIrp((PVOID)v4);
    }
    a2->IoStatus.Status = 0;
    goto LABEL_29;
  }
  v9 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, &File, 1u, 0x20u);
  if ( v9 < 0 )
  {
LABEL_58:
    a2->IoStatus.Status = v9;
    PoStartNextPowerIrp(a2);
    IofCompleteRequest(a2, 0);
LABEL_19:
    if ( v6 )
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
    return (unsigned int)v9;
  }
  v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 72));
  v22 = *(_QWORD *)(v4 + 280) && !*(_BYTE *)(v4 + 288);
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 72), v21);
  if ( v22 && (int)LowPart < 5 )
    v23.SystemState = *(SYSTEM_POWER_STATE *)(v4 + 4 * LowPart + 248);
  else
    v23.SystemState = PowerSystemSleeping3;
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  v9 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)v4, 2u, v23, (PREQUEST_POWER_COMPLETE)MouseClassPoRequestComplete, a2, 0LL);
  if ( v9 >= 0 )
  {
    v16 = 1;
    v15 = 0;
LABEL_16:
    if ( v9 >= 0 )
    {
      if ( v15 )
        goto LABEL_18;
      if ( v16 )
      {
        v9 = 259;
        goto LABEL_19;
      }
      goto LABEL_29;
    }
    goto LABEL_58;
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
  PoStartNextPowerIrp(a2);
  a2->IoStatus.Status = v9;
  IofCompleteRequest(a2, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 32), a2, 0x20u);
  return 259LL;
}
