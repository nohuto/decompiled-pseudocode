/*
 * XREFs of ACPIEcStartDeviceCompletion @ 0x1C004CD30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00049C0 (WPP_RECORDER_SF_qsLqss.c)
 */

void __fastcall ACPIEcStartDeviceCompletion(__int64 a1, IRP *a2, int a3)
{
  struct _WORK_QUEUE_ITEM *v4; // rcx
  char v5; // di
  char v6; // bp
  char v7; // si
  unsigned __int8 MinorFunction; // r14
  const char *v9; // rdx
  const char *v10; // r8
  __int64 v11; // rax
  int v12; // ecx

  v4 = (struct _WORK_QUEUE_ITEM *)(a1 + 32);
  v5 = 0;
  v6 = a3;
  v7 = (char)a2;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  a2->IoStatus.Status = a3;
  if ( a3 < 0 || (unsigned int)(*(_DWORD *)(a1 + 320) - 2) <= 1 )
  {
    IofCompleteRequest(a2, 0);
    v9 = (const char *)qword_1C002C340;
    v10 = (const char *)qword_1C002C340;
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      v5 = a1;
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v9 = *(const char **)(a1 + 560);
        if ( (v11 & 0x400000000000LL) != 0 )
          v10 = *(const char **)(a1 + 568);
      }
    }
    v12 = 26;
    if ( MinorFunction < 0x1Au )
      v12 = MinorFunction;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0xAu,
      (__int64)&WPP_950c9d8b1908379c1983fbd27d049028_Traceguids,
      v7,
      ACPIDispatchPnpTableNames[v12],
      v6,
      v5,
      v9,
      v10);
  }
  else
  {
    *(_DWORD *)(a1 + 320) = 2;
    v4->WorkerRoutine = (void (__fastcall *)(void *))ACPIEcStartDeviceWorker;
    v4->Parameter = v4;
    v4->List.Flink = 0LL;
    v4[1].List.Flink = *(_LIST_ENTRY **)(a1 + 720);
    v4[1].List.Blink = (_LIST_ENTRY *)a2;
    ExQueueWorkItem(v4, DelayedWorkQueue);
  }
}
