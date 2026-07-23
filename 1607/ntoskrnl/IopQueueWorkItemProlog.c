/*
 * XREFs of IopQueueWorkItemProlog @ 0x1400CF2A8
 * Callers:
 *     IoQueueWorkItemEx @ 0x1400CEFF4 (IoQueueWorkItemEx.c)
 *     IoTryQueueWorkItem @ 0x14010DC14 (IoTryQueueWorkItem.c)
 *     IoQueueWorkItemToNode @ 0x1401C9918 (IoQueueWorkItemToNode.c)
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x14005E3F4 (PsGetWorkOnBehalfThread.c)
 *     EtwActivityIdControlKernel @ 0x140086AF0 (EtwActivityIdControlKernel.c)
 *     ObpIncrPointerCount @ 0x1400CF570 (ObpIncrPointerCount.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 */

__int64 __fastcall IopQueueWorkItemProlog(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  PVOID WorkOnBehalfThread; // rax
  int v10; // [rsp+40h] [rbp+8h] BYREF
  _OWORD *v11; // [rsp+48h] [rbp+10h] BYREF

  if ( (IopIrpExtensionStatus & 1) != 0 && (IopFunctionPointerMask & 4) != 0 && KeGetCurrentIrql() < 2u )
  {
    EtwActivityIdControlKernel(1, (PVOID *)&v11);
    if ( v11 )
    {
      *(_OWORD *)(a1 + 68) = *v11;
    }
    else
    {
      *(_QWORD *)(a1 + 68) = 0LL;
      *(_QWORD *)(a1 + 76) = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 68) = 0LL;
    *(_QWORD *)(a1 + 76) = 0LL;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v10);
    *(_QWORD *)(a1 + 56) = WorkOnBehalfThread;
    if ( WorkOnBehalfThread )
    {
      if ( !v10 )
        ObfReferenceObjectWithTag(WorkOnBehalfThread, 0x746C6644u);
    }
    else if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[16] )
    {
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *(_QWORD *)(a1 + 56) = CurrentThread;
    }
  }
  v6 = *(_QWORD *)(a1 + 40);
  if ( ObpTraceFlags )
    ObpPushStackInfo(v6 - 48);
  ObpIncrPointerCount(v6 - 48);
  result = a1;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 48) = a3;
  return result;
}
