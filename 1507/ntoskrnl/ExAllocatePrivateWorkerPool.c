/*
 * XREFs of ExAllocatePrivateWorkerPool @ 0x1405C660C
 * Callers:
 *     SmFirstTimeInit @ 0x1404F9AFC (SmFirstTimeInit.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeQueryNodeActiveAffinity @ 0x1400DBBC4 (KeQueryNodeActiveAffinity.c)
 *     KeInitializePriQueue @ 0x14016CF90 (KeInitializePriQueue.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExpCreateWorkerThread @ 0x1404FAE8C (ExpCreateWorkerThread.c)
 */

__int64 __fastcall ExAllocatePrivateWorkerPool(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v3; // r15
  unsigned int v4; // edx
  _KNODE *ParentNode; // rbp
  USHORT v6; // r14
  PVOID PoolWithTag; // rax
  __int64 v8; // rdi
  int WorkerThread; // ebx
  unsigned int v10; // eax
  unsigned __int16 v12; // di
  __int64 v13; // rbx
  __int64 v14; // rcx
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
                                                                               + 256
                                                                               * (unsigned __int64)ParentNode->Affinity.Reserved[0]) )
    ParentNode = 0LL;
  v6 = ParentNode->Affinity.Reserved[0];
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2D0uLL, 0x6C577845u);
  v8 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    WorkerThread = -1073741801;
LABEL_10:
    _interlockedbittestandset(&ExpInstanceAllocationMask, v16);
    return (unsigned int)WorkerThread;
  }
  memset(PoolWithTag, 0, 0x2D0uLL);
  v10 = *(_DWORD *)(v8 + 708) & 0x80000001;
  *(_QWORD *)(v8 + 688) = ParentNode;
  *(_DWORD *)(v8 + 712) = 16;
  *(_DWORD *)(v8 + 716) = v16;
  *(_DWORD *)(v8 + 708) = v10 | 1;
  KeQueryNodeActiveAffinity(v6, 0LL, (PUSHORT)&Count);
  KeInitializePriQueue(v8, (unsigned __int16)Count);
  WorkerThread = ExpCreateWorkerThread((__int64)ParentNode, v8);
  if ( WorkerThread < 0 )
  {
    ExFreePoolWithTag((PVOID)v8, 0);
    goto LABEL_10;
  }
  *(&ParentNode[1].IdleNonParkedCpuSet + v16) = v8;
  v12 = 0;
  v18 = (2 * (v6 & 0x7Fu)) | 1LL;
  if ( KeNumberNodes )
  {
    v13 = v18;
    do
    {
      if ( v12 != v6 )
      {
        v14 = KeNodeBlock[v12];
        if ( (_UNKNOWN *)v14 != (_UNKNOWN *)((char *)&KiNodeInit + 256 * (unsigned __int64)v12) )
        {
          if ( v14 )
          {
            if ( (*(_DWORD *)(v14 + 1308) & 1) != 0 )
            {
              *(_QWORD *)(v14 + 8LL * v16 + 256) = v13;
              KeSetEvent((PRKEVENT)(v14 + 1040), 0, 0);
            }
          }
        }
      }
      ++v12;
    }
    while ( v12 < (unsigned __int16)KeNumberNodes );
    v3 = a1;
  }
  *v3 = v16;
  return 0LL;
}
