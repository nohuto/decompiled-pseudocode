/*
 * XREFs of KeTransitionProcessorParkState @ 0x1401CBFEC
 * Callers:
 *     PpmParkReportParkedCore @ 0x1401F4554 (PpmParkReportParkedCore.c)
 *     PpmParkReportUnparkedCore @ 0x1401F45D4 (PpmParkReportUnparkedCore.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     KiRequestSoftwareInterrupt @ 0x1400205A0 (KiRequestSoftwareInterrupt.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14007BB00 (KiGroupSchedulingGenerationEnd.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiUpdateThreadPriority @ 0x14007D120 (KiUpdateThreadPriority.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiSetProcessorIdle @ 0x1400EC330 (KiSetProcessorIdle.c)
 *     KiFlushReadyLists @ 0x1401CC348 (KiFlushReadyLists.c)
 */

__int64 __fastcall KeTransitionProcessorParkState(__int64 a1)
{
  char v1; // r13
  __int64 v2; // rdi
  char v3; // r15
  unsigned __int64 v4; // rbp
  char v5; // r12
  bool v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  char v13; // al
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // eax
  int v19; // eax
  char v20; // r9
  __int64 result; // rax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  char v25; // di
  char EffectivePriorityThread; // al
  __int64 v27; // rdx
  __int64 v28; // r8
  volatile signed __int32 *v29; // rdi
  int v30; // [rsp+70h] [rbp+8h] BYREF
  int v31; // [rsp+78h] [rbp+10h] BYREF
  int v32; // [rsp+80h] [rbp+18h]
  __int64 v33; // [rsp+88h] [rbp+20h] BYREF

  v33 = 0LL;
  v1 = 0;
  v2 = *(_QWORD *)(a1 + 1600);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 1608);
  v5 = 0;
  _m_prefetchw((const void *)(v2 + 80));
  v7 = (v4 & *(_QWORD *)(v2 + 80)) != 0;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 88));
  v30 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v30, v8, v9);
    while ( *(_QWORD *)(a1 + 48) );
  }
  _InterlockedXor64((volatile signed __int64 *)(v2 + 80), v4);
  v10 = *(_QWORD *)(a1 + 24768);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 24776);
    v12 = v10 & *(_QWORD *)(v2 + 80);
    if ( !v12 )
    {
      v5 = 1;
      goto LABEL_14;
    }
    if ( v12 == v4 )
    {
      *(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 1616)
                                                                      + *(unsigned __int8 *)(v11 + 596)]]
                + 24784) = 0;
      v13 = *(_BYTE *)(a1 + 1617);
      *(_DWORD *)(a1 + 24784) = 1;
LABEL_13:
      *(_BYTE *)(v11 + 596) = v13;
      goto LABEL_14;
    }
    if ( *(_DWORD *)(a1 + 24784) && v7 )
    {
      _BitScanReverse64(&v14, v12);
      v15 = (unsigned int)v14 + (*(unsigned __int8 *)(a1 + 1616) << 6);
      v32 = v14;
      v16 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v15]];
      *(_DWORD *)(a1 + 24784) = 0;
      *(_DWORD *)(v16 + 24784) = 1;
      v13 = *(_BYTE *)(v16 + 1617);
      goto LABEL_13;
    }
  }
LABEL_14:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 88));
  v17 = *(_QWORD *)(a1 + 24);
  v18 = *(unsigned __int8 *)(a1 + 35);
  if ( v7 )
  {
    if ( (v18 & 2) != 0 )
      __fastfail(0x21u);
    v22 = v18 + 2;
    *(_BYTE *)(a1 + 35) = v22;
    if ( v22 == 2 )
      _InterlockedXor64((volatile signed __int64 *)v2, v4);
    v23 = *(_QWORD *)(a1 + 16);
    if ( v23 && v23 != v17 )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      v3 = 1;
      *(_BYTE *)(v23 + 388) = 7;
      v33 = v23 + 216;
      *(_QWORD *)(v23 + 216) = 0LL;
      v23 = 0LL;
    }
    v24 = *(_QWORD *)(a1 + 8);
    v25 = 1;
    if ( v24 == v17 )
    {
      if ( v3 )
        KiSetProcessorIdle(a1, 1, 0);
    }
    else if ( !v23 )
    {
      if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
      {
        v25 = 0;
      }
      else
      {
        *(_BYTE *)(v24 + 565) = 1;
        _interlockedbittestandset((volatile signed __int32 *)(v24 + 120), 0xBu);
        *(_QWORD *)(a1 + 16) = v17;
        KiSetProcessorIdle(a1, 1, 0);
        if ( (*(_BYTE *)(a1 + 11756) & 1) == 0 )
          v1 = 1;
      }
    }
    KiUpdateThreadPriority(a1, v17, 127, 0);
    if ( v25 )
    {
      if ( (*(_BYTE *)(v17 + 2) & 4) != 0 )
        EffectivePriorityThread = KiQueryEffectivePriorityThread(v17, a1);
      else
        EffectivePriorityThread = *(_BYTE *)(v17 + 195);
      **(_BYTE **)(a1 + 56) = EffectivePriorityThread;
    }
    if ( KiGroupSchedulingEnabled )
      KiGroupSchedulingGenerationEnd(a1, MEMORY[0xFFFFF78000000320], 1);
    KiFlushReadyLists(a1 + 22784, a1 + 22680, &v33);
    if ( v5 )
    {
      v29 = *(volatile signed __int32 **)(a1 + 24776);
      v31 = 0;
      while ( _interlockedbittestandset64(v29, 0LL) )
      {
        do
          KeYieldProcessorEx(&v31, v27, v28);
        while ( *(_QWORD *)v29 );
      }
      KiFlushReadyLists(v29 + 4, v29 + 2, &v33);
      _InterlockedAnd64((volatile signed __int64 *)v29, 0LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    KiProcessDeferredReadyList(a1, (__int64)&v33, 2u);
    result = 0xFFFFF7800000036AuLL;
    _InterlockedDecrement16((volatile signed __int16 *)0xFFFFF7800000036ALL);
    if ( v1 )
      return KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2u);
  }
  else
  {
    if ( (v18 & 2) == 0 )
      __fastfail(0x21u);
    v19 = v18 - 2;
    *(_BYTE *)(a1 + 35) = v19;
    if ( !v19 )
      _InterlockedXor64((volatile signed __int64 *)v2, v4);
    v20 = 0;
    if ( !v19 )
    {
      *(_BYTE *)(a1 + 11755) = 1;
      v20 = 1;
    }
    KiUpdateThreadPriority(a1, v17, 0, v20);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    result = 0xFFFFF7800000036AuLL;
    _InterlockedAdd16((volatile signed __int16 *)0xFFFFF7800000036ALL, 1u);
  }
  return result;
}
