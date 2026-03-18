/*
 * XREFs of SmWdProcessStore @ 0x140209578
 * Callers:
 *     SmWdDPC @ 0x14020932C (SmWdDPC.c)
 * Callees:
 *     KeInsertQueueApc @ 0x1400313A0 (KeInsertQueueApc.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     StEtaIoTimeout @ 0x140207B74 (StEtaIoTimeout.c)
 *     ?SmWdCompleteWorkItems@@YAXPEAU_PF_QUEUE@@PEAXJK@Z @ 0x140207E90 (-SmWdCompleteWorkItems@@YAXPEAU_PF_QUEUE@@PEAXJK@Z.c)
 *     ?SmWdRemoveWorkItems@@YAXPEAU_SMKM_STORE_QUEUE@@PEAU_PF_QUEUE@@K@Z @ 0x140207F04 (-SmWdRemoveWorkItems@@YAXPEAU_SMKM_STORE_QUEUE@@PEAU_PF_QUEUE@@K@Z.c)
 */

void __fastcall SmWdProcessStore(struct _EX_RUNDOWN_REF *a1)
{
  int v2; // ebp
  BOOLEAN v3; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // r15d
  __int64 Count; // r13
  __int64 v8; // r14
  union _LARGE_INTEGER v9; // rbx
  _QWORD v10[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  v10[1] = v10;
  v10[0] = 0LL;
  v3 = ExAcquireRundownProtection(a1 + 2);
  v6 = v3;
  if ( v3 )
  {
    Count = a1->Count;
    v8 = a1->Count + 4504;
    if ( *(_DWORD *)(a1->Count + 4560) || *(_DWORD *)(a1->Count + 4564) )
    {
      v9.QuadPart = KeMaximumIncrement * (MEMORY[0xFFFFF78000000320] - *(_QWORD *)(a1->Count + 4576));
      if ( *(_DWORD *)(a1->Count + 4560) && v9.QuadPart >= WatchdogReadsQueueTimeout.QuadPart )
      {
        v2 = 4;
        SmWdRemoveWorkItems((KSPIN_LOCK *)(a1->Count + 4504), (struct _PF_QUEUE *)v10, 2);
        SmWdCompleteWorkItems((__int64)v10, Count, 0xC00000B5);
      }
      if ( *(_DWORD *)(v8 + 60) && v9.QuadPart >= WatchdogWritesQueueTimeout.QuadPart )
        v2 |= 1u;
      if ( v2 )
        StEtaIoTimeout(*(_QWORD *)(a1->Count + 2448), v4, v5, 0x989680uLL);
      if ( (v2 & 1) != 0
        && !LODWORD(a1[20].Count)
        && !_InterlockedCompareExchange((volatile signed __int32 *)&a1[20], 1, 0) )
      {
        KeInsertQueueApc((__int64)&a1[9], (__int64)a1, 0LL, 0);
        v6 = 0;
      }
    }
    if ( v6 )
      ExReleaseRundownProtection_0(a1 + 2);
  }
}
