/*
 * XREFs of NewGlobalHeap @ 0x1C00059D0
 * Callers:
 *     AsyncEvalObject @ 0x1C0001AD0 (AsyncEvalObject.c)
 *     ReadField @ 0x1C0015220 (ReadField.c)
 *     ParseField @ 0x1C0015710 (ParseField.c)
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     CreateNameSpaceObject @ 0x1C00175D0 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     NewObjData @ 0x1C0018C10 (NewObjData.c)
 *     ParseCall @ 0x1C0019F80 (ParseCall.c)
 *     ParseScope @ 0x1C001F120 (ParseScope.c)
 *     AMLIInitialize @ 0x1C00A6000 (AMLIInitialize.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall NewGlobalHeap(_QWORD *a1)
{
  unsigned int v2; // esi
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rbx

  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)gdwGlobalHeapBlkSize, 0x486C6D41u);
  *a1 = PoolWithTag;
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    v5 = (unsigned int)gdwGlobalHeapBlkSize;
    memset(PoolWithTag, 0, (unsigned int)gdwGlobalHeapBlkSize);
    *(_DWORD *)v4 = 1346454856;
    v4[1] = (char *)v4 + v5;
    v4[4] = v4 + 7;
    v4[6] = v4 + 5;
    v4[5] = v4 + 5;
  }
  else
  {
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(110, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v2;
}
