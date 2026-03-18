/*
 * XREFs of ACPIBusIrpStartDeviceCompletion @ 0x1C00292C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPICheckModuleStarted @ 0x1C0051108 (ACPICheckModuleStarted.c)
 */

void __fastcall ACPIBusIrpStartDeviceCompletion(__int64 a1, IRP *a2, int a3)
{
  struct _WORK_QUEUE_ITEM *v4; // rdi
  unsigned __int8 MinorFunction; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  KIRQL v10; // al
  _QWORD *i; // r8
  __int64 v12; // rax
  const char *v13; // rdx
  const char *v14; // r8
  int v15; // ecx

  v4 = (struct _WORK_QUEUE_ITEM *)(a1 + 32);
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  a2->IoStatus.Status = a3;
  if ( a3 >= 0 )
  {
    *(_QWORD *)(a1 + 912) |= 0x80000uLL;
    *(_DWORD *)(a1 + 320) = 2;
  }
  if ( (*(_QWORD *)(a1 + 8) & 0x2000000000LL) != 0 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    if ( !*(_BYTE *)(a1 + 185) )
    {
      for ( i = *(_QWORD **)(a1 + 752); i != (_QWORD *)(a1 + 752); i = (_QWORD *)*i )
      {
        if ( (*(i - 95) & 0x2000000000LL) != 0 )
          *((_BYTE *)i - 583) = 0;
      }
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
    v9 = (unsigned int)a3;
    v8 = a1;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 744);
    if ( (*(_QWORD *)(v8 + 8) & 0x2000000000LL) == 0 )
      goto LABEL_5;
    v9 = (unsigned int)a3;
  }
  ACPICheckModuleStarted(v8, v9);
LABEL_5:
  if ( a3 < 0 )
  {
    IofCompleteRequest(a2, 0);
    v12 = *(_QWORD *)(a1 + 8);
    v13 = (const char *)qword_1C002C340;
    v14 = (const char *)qword_1C002C340;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v13 = *(const char **)(a1 + 560);
      if ( (v12 & 0x400000000000LL) != 0 )
        v14 = *(const char **)(a1 + 568);
    }
    v15 = 26;
    if ( MinorFunction < 0x1Au )
      v15 = MinorFunction;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x3Bu,
      (__int64)&WPP_f1ea6fabc66d31ba7ef65020ec90bb72_Traceguids,
      (char)a2,
      ACPIDispatchPnpTableNames[v15],
      a3,
      a1,
      v13,
      v14);
  }
  else
  {
    v4->List.Flink = 0LL;
    v4->WorkerRoutine = (void (__fastcall *)(void *))ACPIBusIrpStartDeviceWorker;
    v4->Parameter = v4;
    v4[1].List.Flink = *(_LIST_ENTRY **)(a1 + 720);
    v4[1].List.Blink = (_LIST_ENTRY *)a2;
    ExQueueWorkItem(v4, DelayedWorkQueue);
  }
}
