/*
 * XREFs of KeyboardClassPowerComplete @ 0x1C0001060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00018D0 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall KeyboardClassPowerComplete(__int64 a1, IRP *a2)
{
  __int64 v2; // r14
  unsigned int v3; // esi
  char v5; // r12
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  UCHAR MinorFunction; // al
  ULONG Options; // edx
  POWER_STATE v10; // ebx
  struct _DEVICE_OBJECT *v11; // rcx
  NTSTATUS v12; // eax
  PIRP Irp; // rax
  IRP *v15; // rbx
  struct _FILE_OBJECT *FileObject; // r8
  __int64 v17; // rdx
  struct _IO_STACK_LOCATION *v18; // rax
  struct _IO_STACK_LOCATION *v19; // rax
  IRP *v20; // r15
  int Context; // [rsp+20h] [rbp-48h]
  int Contexta; // [rsp+20h] [rbp-48h]
  int Contextb; // [rsp+20h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v5 = 1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v10.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  if ( MinorFunction )
  {
    if ( MinorFunction == 2 )
    {
      if ( Options )
      {
        if ( Options == 1 )
        {
          PoSetPowerState(*(PDEVICE_OBJECT *)v2, DevicePowerState, v10);
          *(POWER_STATE *)(v2 + 188) = v10;
          Irp = IoAllocateIrp(*(_BYTE *)(a1 + 76), 0);
          v15 = Irp;
          if ( Irp )
          {
            if ( IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 32), Irp, &File, 1u, 0x20u) < 0 )
            {
              IoFreeIrp(v15);
            }
            else
            {
              WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 4, 4, 98, Context, a1, (char)v15);
              if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
              {
                v17 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 156LL;
                FileObject = (struct _FILE_OBJECT *)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine
                                                    + 3 * *(unsigned int *)(v2 + 196));
              }
              else
              {
                FileObject = CurrentStackLocation->FileObject;
                v17 = v2 + 156;
              }
              v18 = v15->Tail.Overlay.CurrentStackLocation;
              v18[-1].MajorFunction = 15;
              v18[-1].Parameters.Read.ByteOffset.LowPart = 720904;
              v18[-1].Parameters.Create.Options = 4;
              v18[-1].Parameters.Read.Length = 0;
              v18[-1].FileObject = FileObject;
              v19 = v15->Tail.Overlay.CurrentStackLocation;
              v19[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&KeyboardClassSetLedsComplete;
              v19[-1].Context = (PVOID)v2;
              v19[-1].Control = -32;
              v15->AssociatedIrp.MasterIrp = (struct _IRP *)v17;
              v20 = (IRP *)_InterlockedExchange64((volatile __int64 *)(v2 + 368), 0LL);
              if ( v20 )
              {
                WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 4, 4, 87, Contexta, *(_QWORD *)v2, (char)v20);
                IoCancelIrp(v20);
                if ( _InterlockedExchange((volatile __int32 *)(v2 + 376), 2) == 3 )
                {
                  WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, 4, 4, 88, Contextb, *(_QWORD *)v2, (char)v20);
                  IoFreeIrp(v20);
                }
              }
              _InterlockedExchange64((volatile __int64 *)(v2 + 368), (__int64)v15);
              _InterlockedExchange((volatile __int32 *)(v2 + 376), 1);
              IofCallDriver(*(PDEVICE_OBJECT *)(v2 + 16), v15);
            }
          }
        }
      }
      else
      {
        PoSetPowerState(*(PDEVICE_OBJECT *)v2, SystemPowerState, v10);
        v11 = *(struct _DEVICE_OBJECT **)v2;
        *(POWER_STATE *)(v2 + 192) = v10;
        v12 = PoRequestPowerIrp(v11, 2u, (POWER_STATE)1, KeyboardClassPoRequestComplete, 0LL, 0LL);
        if ( v12 < 0 )
          a2->IoStatus.Status = v12;
      }
    }
  }
  else
  {
    v5 = 0;
    if ( a2 == *(IRP **)(v2 + 296) && _InterlockedExchange((volatile __int32 *)(v2 + 320), 3) == 1 )
      v3 = -1073741802;
  }
  PoStartNextPowerIrp(a2);
  if ( v5 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 32), a2, 0x20u);
  return v3;
}
