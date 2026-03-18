/*
 * XREFs of SmWdProcessStore @ 0x1402586CC
 * Callers:
 *     SmWdDPC @ 0x140258450 (SmWdDPC.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14000CF3C (KeInsertQueueApc.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     StEtaIoTimeout @ 0x140256DD0 (StEtaIoTimeout.c)
 *     ?SmWdCompleteWorkItems@@YAXPEAU_PF_QUEUE@@PEAXJK@Z @ 0x1402570EC (-SmWdCompleteWorkItems@@YAXPEAU_PF_QUEUE@@PEAXJK@Z.c)
 *     ?SmWdRemoveWorkItems@@YAXPEAU_SMKM_STORE_QUEUE@@PEAU_PF_QUEUE@@K@Z @ 0x140257160 (-SmWdRemoveWorkItems@@YAXPEAU_SMKM_STORE_QUEUE@@PEAU_PF_QUEUE@@K@Z.c)
 */

void __fastcall SmWdProcessStore(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  struct _EX_RUNDOWN_REF *v4; // rdi
  int v5; // ebp
  __int64 v6; // rdx
  unsigned __int64 v7; // rtt
  BOOLEAN v8; // al
  int v9; // r15d
  __int64 v10; // r13
  __int64 v11; // r14
  union _LARGE_INTEGER v12; // rbx
  unsigned __int64 v13; // rtt
  _QWORD v14[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = (struct _EX_RUNDOWN_REF *)(a1 + 4);
  v14[1] = v14;
  v14[0] = 0LL;
  v5 = 0;
  _m_prefetchw((const void *)(a1 + 4));
  v6 = 1LL;
  v7 = *((_QWORD *)a1 + 2) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v7 == _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 2, v7 + 2, v7) )
    v8 = 1;
  else
    v8 = ExfAcquireRundownProtection(v4);
  v9 = v8;
  if ( v8 )
  {
    v10 = *(_QWORD *)a1;
    v11 = *(_QWORD *)a1 + 4504LL;
    if ( *(_DWORD *)(*(_QWORD *)a1 + 4560LL) || *(_DWORD *)(*(_QWORD *)a1 + 4564LL) )
    {
      v12.QuadPart = KeMaximumIncrement * (MEMORY[0xFFFFF78000000320] - *(_QWORD *)(*(_QWORD *)a1 + 4576LL));
      if ( *(_DWORD *)(*(_QWORD *)a1 + 4560LL) && v12.QuadPart >= WatchdogReadsQueueTimeout.QuadPart )
      {
        v5 = 4;
        SmWdRemoveWorkItems((struct _SMKM_STORE_QUEUE *)(*(_QWORD *)a1 + 4504LL), (struct _PF_QUEUE *)v14, 2);
        SmWdCompleteWorkItems((__int64)v14, v10, 0xC00000B5);
      }
      if ( *(_DWORD *)(v11 + 60) && v12.QuadPart >= WatchdogWritesQueueTimeout.QuadPart )
        v5 |= 1u;
      if ( v5 )
        StEtaIoTimeout(*(_QWORD *)(*(_QWORD *)a1 + 2448LL), v6, a3, 0x989680uLL);
      if ( (v5 & 1) != 0 && !*((_DWORD *)a1 + 40) && !_InterlockedCompareExchange(a1 + 40, 1, 0) )
      {
        KeInsertQueueApc((__int64)(a1 + 18), (__int64)a1, 0LL, 0);
        v9 = 0;
      }
    }
    if ( v9 )
    {
      _m_prefetchw(v4);
      v13 = v4->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v13 != _InterlockedCompareExchange64((volatile signed __int64 *)v4, v13 - 2, v13) )
        ExfReleaseRundownProtection(v4);
    }
  }
}
