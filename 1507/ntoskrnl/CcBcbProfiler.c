/*
 * XREFs of CcBcbProfiler @ 0x14017B2D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140028FE0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     CcAdjustBcbDepth @ 0x14018CF10 (CcAdjustBcbDepth.c)
 */

void __fastcall CcBcbProfiler(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r8
  char v4; // r11
  __int64 v5; // rdi
  _QWORD *v6; // rbp
  unsigned __int64 v7; // rdx
  _QWORD *v8; // r9
  const char *v9; // rax
  unsigned __int64 v10; // r10
  __int64 v11; // rax
  const char *v12; // rax
  __int64 v13; // rdi
  int v14; // edx
  unsigned __int8 *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned int v18; // eax
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *DpcStack; // rbx
  _QWORD v22[3]; // [rsp+48h] [rbp-20h] BYREF

  if ( *(_DWORD *)(a2 + 172) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 176), DelayedWorkQueue);
  }
  else
  {
    v3 = *(_QWORD **)(a2 + 128);
    v4 = *(_BYTE *)(a2 + 168);
    v5 = *(_QWORD *)(a2 + 160);
    v22[0] = a2;
    v6 = (_QWORD *)(*(_QWORD *)(a2 + 136) + *(unsigned int *)v3);
    v7 = *(unsigned int *)(a2 + 144);
    v8 = v6;
    v9 = (const char *)v6;
    if ( v6 < (_QWORD *)((char *)v6 + v7) )
    {
      do
      {
        _mm_prefetch(v9, 0);
        v9 += 64;
      }
      while ( v9 < (const char *)v6 + v7 );
    }
    if ( (unsigned int)v7 >= 8 )
    {
      v10 = v7 >> 3;
      do
      {
        LODWORD(v7) = v7 - 8;
        v5 = __ROL8__(*v8++ ^ v5, v4);
        --v10;
      }
      while ( v10 );
    }
    for ( ; (_DWORD)v7; LODWORD(v7) = v7 - 1 )
    {
      v11 = *(unsigned __int8 *)v8;
      v8 = (_QWORD *)((char *)v8 + 1);
      v5 = __ROL8__(v11 ^ v5, v4);
    }
    v12 = (const char *)v3;
    if ( v3 < (_QWORD *)((char *)v3 + 12) )
    {
      do
      {
        _mm_prefetch(v12, 0);
        v12 += 64;
      }
      while ( v12 < (const char *)v3 + 12 );
    }
    v13 = __ROL8__(*v3 ^ v5, v4);
    v14 = 4;
    v15 = (unsigned __int8 *)(v3 + 1);
    do
    {
      v16 = *v15++;
      v13 = __ROL8__(v16 ^ v13, v4);
      --v14;
    }
    while ( v14 );
    v17 = -1200000000 - (unsigned int)ExGenRandom(1) % 100000000LL;
    v18 = ExGenRandom(1);
    KeSetCoalescableTimer((PKTIMER)(a2 + 64), (LARGE_INTEGER)v17, 0, v18 % 0x2710, (PKDPC)a2);
    if ( v13 != *(_QWORD *)(a2 + 152) )
    {
      _disable();
      CurrentPrcb = KeGetCurrentPrcb();
      CurrentThread = KeGetCurrentThread();
      DpcStack = CurrentPrcb->DpcStack;
      if ( !CurrentPrcb->DpcRoutineActive || v22 > DpcStack || v22 < DpcStack - 3072 )
        DpcStack = CurrentThread->InitialStack;
      CurrentThread[1].InitialStack = 0LL;
      CurrentThread[1].ApcState.ApcListHead[1].Flink = 0LL;
      ExTryAcquireSpinLockExclusiveAtDpcLevel(&PsLoadedModuleSpinLock);
      v22[1] = 0x5891C8B4E8A3CAB9LL;
      CcAdjustBcbDepth(
        __ROR4__(8480, 133),
        __ROR8__(0x5891C8B4E8A3A03FLL, 152),
        0,
        (_DWORD)v6,
        (unsigned int)__ROR4__(524, 161),
        (__int64)KeBugCheckEx,
        (__int64)DpcStack);
      JUMPOUT(0x14017B519LL);
    }
  }
}
