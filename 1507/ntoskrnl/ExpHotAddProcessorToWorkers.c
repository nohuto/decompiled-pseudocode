/*
 * XREFs of ExpHotAddProcessorToWorkers @ 0x140264F14
 * Callers:
 *     ExInitializeProcessor @ 0x14015F3F0 (ExInitializeProcessor.c)
 * Callees:
 *     ExQueueWorkItemEx @ 0x14000CD94 (ExQueueWorkItemEx.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpHotAddProcessorToWorkers(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1600);
  if ( (_UNKNOWN *)KeNodeBlock[*(unsigned __int16 *)(v1 + 146)] == (_UNKNOWN *)((char *)&KiNodeInit
                                                                              + 256
                                                                              * (unsigned __int64)*(unsigned __int16 *)(v1 + 146)) )
    v1 = 0LL;
  result = *(unsigned int *)(v1 + 1308);
  if ( (result & 1) == 0 )
  {
    result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6C577845u);
    if ( result )
    {
      *(_QWORD *)(result + 24) = result;
      *(_QWORD *)(result + 16) = ExpWorkerHotAddProcessor;
      *(_QWORD *)result = 0LL;
      *(_QWORD *)(result + 32) = v1;
      return ExQueueWorkItemEx((_QWORD *)result, 1, 0LL);
    }
  }
  return result;
}
