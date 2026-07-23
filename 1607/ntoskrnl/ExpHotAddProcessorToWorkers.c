/*
 * XREFs of ExpHotAddProcessorToWorkers @ 0x14022E828
 * Callers:
 *     ExInitializeProcessor @ 0x14013CA8C (ExInitializeProcessor.c)
 * Callees:
 *     ExQueueWorkItemEx @ 0x1400A6F80 (ExQueueWorkItemEx.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpHotAddProcessorToWorkers(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1600);
  if ( (_UNKNOWN *)KeNodeBlock[*(unsigned __int16 *)(v1 + 146)] == (_UNKNOWN *)((char *)&KiNodeInit
                                                                              + 320 * *(unsigned __int16 *)(v1 + 146)) )
    v1 = 0LL;
  result = *(unsigned int *)(v1 + 2092);
  if ( (result & 1) == 0 )
  {
    result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6C577845u);
    if ( result )
    {
      *(_QWORD *)(result + 24) = result;
      *(_QWORD *)(result + 16) = ExpWorkerHotAddProcessor;
      *(_QWORD *)result = 0LL;
      *(_QWORD *)(result + 32) = v1;
      return ExQueueWorkItemEx((_QWORD *)result, 1u, 0);
    }
  }
  return result;
}
