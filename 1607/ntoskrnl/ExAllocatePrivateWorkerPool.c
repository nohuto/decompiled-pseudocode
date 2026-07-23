/*
 * XREFs of ExAllocatePrivateWorkerPool @ 0x140575A48
 * Callers:
 *     SmFirstTimeInit @ 0x1403E4E40 (SmFirstTimeInit.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x14000509C (KeQueryNodeActiveAffinity.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeInitializePriQueue @ 0x1401481A4 (KeInitializePriQueue.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExpCreateWorkerThread @ 0x1403E5BC4 (ExpCreateWorkerThread.c)
 */

__int64 __fastcall ExAllocatePrivateWorkerPool(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v3; // r15
  unsigned int v4; // edx
  _KNODE *ParentNode; // rbp
  USHORT v6; // r14
  PVOID PoolWithTag; // rax
  __int64 v8; // rdi
  unsigned int v9; // eax
  int WorkerThread; // ebx
  unsigned __int16 v11; // di
  __int64 v12; // rbx
  __int64 v14; // rdx
  signed int v16; // [rsp+78h] [rbp+10h]
  int Count; // [rsp+80h] [rbp+18h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h]

  Count = a3;
  v3 = a1;
  do
  {
    _BitScanForward(&v4, ExpInstanceAllocationMask);
    v16 = v4;
    if ( v4 >= 8 )
      return 3221225495LL;
  }
  while ( !_interlockedbittestandreset(&ExpInstanceAllocationMask, v4) );
  ParentNode = KeGetCurrentPrcb()->ParentNode;
  if ( (_UNKNOWN *)KeNodeBlock[ParentNode->Affinity.Reserved[0]] == (_UNKNOWN *)((char *)&KiNodeInit
                                                                               + 320 * ParentNode->Affinity.Reserved[0]) )
    ParentNode = 0LL;
  v6 = ParentNode->Affinity.Reserved[0];
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2D0uLL, 0x6C577845u);
  v8 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    WorkerThread = -1073741801;
LABEL_16:
    _interlockedbittestandset(&ExpInstanceAllocationMask, v16);
    return (unsigned int)WorkerThread;
  }
  memset(PoolWithTag, 0, 0x2D0uLL);
  v9 = *(_DWORD *)(v8 + 708) & 0x80000001;
  *(_QWORD *)(v8 + 688) = ParentNode;
  *(_DWORD *)(v8 + 712) = 16;
  *(_DWORD *)(v8 + 708) = v9 | 1;
  *(_DWORD *)(v8 + 716) = v16;
  KeQueryNodeActiveAffinity(v6, 0LL, (PUSHORT)&Count);
  KeInitializePriQueue(v8, (unsigned __int16)Count);
  WorkerThread = ExpCreateWorkerThread((__int64)ParentNode, v8);
  if ( WorkerThread < 0 )
  {
    ExFreePoolWithTag((PVOID)v8, 0);
    goto LABEL_16;
  }
  *(&ParentNode[1].IdleNonParkedCpuSet + v16) = v8;
  v11 = 0;
  v18 = (2 * (v6 & 0x7Fu)) | 1LL;
  if ( KeNumberNodes )
  {
    v12 = v18;
    do
    {
      if ( v11 != v6 )
      {
        v14 = KeNodeBlock[v11];
        if ( (_UNKNOWN *)v14 != (_UNKNOWN *)((char *)&KiNodeInit + 320 * v11) )
        {
          if ( v14 )
          {
            if ( (*(_DWORD *)(v14 + 2092) & 1) != 0 )
            {
              *(_QWORD *)(v14 + 8LL * v16 + 320) = v12;
              KeSetEvent((PRKEVENT)(v14 + 1824), 0, 0);
            }
          }
        }
      }
      ++v11;
    }
    while ( v11 < (unsigned __int16)KeNumberNodes );
    v3 = a1;
  }
  *v3 = v16;
  return 0LL;
}
