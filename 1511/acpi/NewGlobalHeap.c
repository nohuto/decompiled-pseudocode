/*
 * XREFs of NewGlobalHeap @ 0x1C0006190
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     ParseField @ 0x1C000EF50 (ParseField.c)
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     CreateNameSpaceObject @ 0x1C0010A20 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C0011E70 (HeapAlloc.c)
 *     ParseScope @ 0x1C0012370 (ParseScope.c)
 *     ParseCall @ 0x1C0013900 (ParseCall.c)
 *     NewObjData @ 0x1C0015090 (NewObjData.c)
 *     ReadField @ 0x1C0016EB0 (ReadField.c)
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
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
    v4[4] = v4 + 6;
  }
  else
  {
    LogError(3221225626LL);
    PrintDebugMessage(110, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v2;
}
