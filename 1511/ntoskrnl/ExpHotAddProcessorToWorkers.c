/*
 * XREFs of ExpHotAddProcessorToWorkers @ 0x140214C74
 * Callers:
 *     ExInitializeProcessor @ 0x140134140 (ExInitializeProcessor.c)
 * Callees:
 *     ExQueueWorkItemEx @ 0x140100640 (ExQueueWorkItemEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

ULONG_PTR __fastcall ExpHotAddProcessorToWorkers(__int64 a1)
{
  __int64 v1; // rbx
  ULONG_PTR result; // rax

  v1 = *(_QWORD *)(a1 + 1600);
  if ( (_UNKNOWN *)KeNodeBlock[*(unsigned __int16 *)(v1 + 146)] == (_UNKNOWN *)((char *)&KiNodeInit
                                                                              + 256
                                                                              * (unsigned __int64)*(unsigned __int16 *)(v1 + 146)) )
    v1 = 0LL;
  result = *(unsigned int *)(v1 + 1308);
  if ( (result & 1) == 0 )
  {
    result = (ULONG_PTR)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6C577845u);
    if ( result )
    {
      *(_QWORD *)(result + 24) = result;
      *(_QWORD *)(result + 16) = ExpWorkerHotAddProcessor;
      *(_QWORD *)result = 0LL;
      *(_QWORD *)(result + 32) = v1;
      return ExQueueWorkItemEx(result, 1u, 0);
    }
  }
  return result;
}
