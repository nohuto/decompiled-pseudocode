/*
 * XREFs of IopQueueWorkItemProlog @ 0x140101A80
 * Callers:
 *     IoQueueWorkItem @ 0x1401013B4 (IoQueueWorkItem.c)
 *     IoQueueWorkItemEx @ 0x1401013D8 (IoQueueWorkItemEx.c)
 *     IoTryQueueWorkItem @ 0x14010372C (IoTryQueueWorkItem.c)
 *     IoQueueWorkItemToNode @ 0x1401BBC04 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ObpIncrPointerCount @ 0x140042B20 (ObpIncrPointerCount.c)
 *     EtwActivityIdControlKernel @ 0x1400FF658 (EtwActivityIdControlKernel.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 */

__int64 __fastcall IopQueueWorkItemProlog(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 CurrentThread; // rdi
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 result; // rax
  _OWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( (IopIrpExtensionStatus & 1) != 0
    && (IopFunctionPointerMask & 4) != 0
    && KeGetCurrentIrql() < 2u
    && (EtwActivityIdControlKernel(1, (PVOID *)&v10), v10) )
  {
    *(_OWORD *)(a1 + 68) = *v10;
  }
  else
  {
    *(_QWORD *)(a1 + 68) = 0LL;
    *(_QWORD *)(a1 + 76) = 0LL;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    CurrentThread = (unsigned __int64)KeGetCurrentThread();
    v7 = *(_QWORD *)(CurrentThread + 1896);
    if ( v7 )
    {
      ObfReferenceObjectWithTag((PVOID)(v7 & 0xFFFFFFFFFFFFFFFEuLL), 0x746C6644u);
      *(_QWORD *)(a1 + 56) = *(_QWORD *)(CurrentThread + 1896);
    }
    else if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[16] )
    {
      ObfReferenceObjectWithTag((PVOID)CurrentThread, 0x746C6644u);
      *(_QWORD *)(a1 + 56) = CurrentThread | 1;
    }
  }
  v8 = *(_QWORD *)(a1 + 40);
  if ( ObpTraceFlags )
    ObpPushStackInfo(v8 - 48);
  ObpIncrPointerCount((volatile signed __int64 *)(v8 - 48));
  *(_QWORD *)(a1 + 32) = a2;
  result = a1;
  *(_QWORD *)(a1 + 48) = a3;
  return result;
}
