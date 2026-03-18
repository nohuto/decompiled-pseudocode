/*
 * XREFs of IopQueueWorkItemProlog @ 0x14000DA70
 * Callers:
 *     IoQueueWorkItem @ 0x14000D2A4 (IoQueueWorkItem.c)
 *     IoQueueWorkItemEx @ 0x14000D2C8 (IoQueueWorkItemEx.c)
 *     IoTryQueueWorkItem @ 0x140132764 (IoTryQueueWorkItem.c)
 *     IoQueueWorkItemToNode @ 0x1401F71B8 (IoQueueWorkItemToNode.c)
 * Callees:
 *     EtwActivityIdControlKernel @ 0x140026D54 (EtwActivityIdControlKernel.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall IopQueueWorkItemProlog(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 CurrentThread; // rdi
  unsigned __int64 v7; // rcx
  ULONG_PTR v8; // rdi
  signed __int64 BugCheckParameter4; // rsi
  __int64 result; // rax
  _OWORD *v11; // [rsp+50h] [rbp+8h] BYREF

  if ( (IopIrpExtensionStatus & 1) != 0
    && (IopFunctionPointerMask & 4) != 0
    && KeGetCurrentIrql() < 2u
    && (EtwActivityIdControlKernel(1LL, &v11), v11) )
  {
    *(_OWORD *)(a1 + 68) = *v11;
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
  BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v8 - 48));
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, v8, 0x10uLL, BugCheckParameter4);
  *(_QWORD *)(a1 + 48) = a3;
  result = a1;
  *(_QWORD *)(a1 + 32) = a2;
  return result;
}
