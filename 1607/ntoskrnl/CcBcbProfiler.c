/*
 * XREFs of CcBcbProfiler @ 0x140156B50
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400C0DF0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetCoalescableTimer @ 0x1400EDA80 (KeSetCoalescableTimer.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     CcAdjustBcbDepth @ 0x140169420 (CcAdjustBcbDepth.c)
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
        v5 = __ROL8__(*v8++ ^ v5, v4);
        LODWORD(v7) = v7 - 8;
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
      v22[1] = 0xC48E45A7451D01FAuLL;
      CcAdjustBcbDepth(
        __ROL4__(16960, 90),
        __ROR8__(0xC48E45A7451D01FAuLL, 91),
        0,
        (_DWORD)v6,
        (unsigned int)__ROR4__(-2147483583, 94),
        (__int64)KeBugCheckEx,
        (__int64)DpcStack);
      JUMPOUT(0x140156D8ELL);
    }
  }
}
