/*
 * XREFs of KeTransitionProcessorParkState @ 0x1401DBAA4
 * Callers:
 *     PpmParkReportParkedCore @ 0x14020DE44 (PpmParkReportParkedCore.c)
 *     PpmParkReportUnparkedCore @ 0x14020DEC4 (PpmParkReportUnparkedCore.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiUpdateThreadPriority @ 0x140091508 (KiUpdateThreadPriority.c)
 *     KiSetProcessorIdle @ 0x1400ACFA8 (KiSetProcessorIdle.c)
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D0340 (KiGroupSchedulingGenerationEnd.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     KiRequestSoftwareInterrupt @ 0x1400D60D0 (KiRequestSoftwareInterrupt.c)
 *     KiFlushReadyLists @ 0x1401DBE00 (KiFlushReadyLists.c)
 */

__int64 __fastcall KeTransitionProcessorParkState(__int64 a1)
{
  char v1; // r13
  __int64 v2; // rdi
  char v3; // r15
  unsigned __int64 v4; // rbp
  char v5; // r12
  bool v7; // r14
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // rcx
  char v11; // al
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // eax
  int v17; // eax
  char v18; // r9
  __int64 result; // rax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  char v23; // di
  char EffectivePriorityThread; // al
  volatile signed __int32 *v25; // rdi
  int v26; // [rsp+70h] [rbp+8h] BYREF
  int v27; // [rsp+78h] [rbp+10h] BYREF
  int v28; // [rsp+80h] [rbp+18h]
  __int64 v29; // [rsp+88h] [rbp+20h] BYREF

  v29 = 0LL;
  v1 = 0;
  v2 = *(_QWORD *)(a1 + 1600);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 1608);
  v5 = 0;
  _m_prefetchw((const void *)(v2 + 80));
  v7 = (v4 & *(_QWORD *)(v2 + 80)) != 0;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 88));
  v26 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v26);
    while ( *(_QWORD *)(a1 + 48) );
  }
  _InterlockedXor64((volatile signed __int64 *)(v2 + 80), v4);
  v8 = *(_QWORD *)(a1 + 24896);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 24904);
    v10 = v8 & *(_QWORD *)(v2 + 80);
    if ( !v10 )
    {
      v5 = 1;
      goto LABEL_14;
    }
    if ( v10 == v4 )
    {
      *(_DWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 1616)
                                                                      + *(unsigned __int8 *)(v9 + 596)]]
                + 24912) = 0;
      v11 = *(_BYTE *)(a1 + 1617);
      *(_DWORD *)(a1 + 24912) = 1;
LABEL_13:
      *(_BYTE *)(v9 + 596) = v11;
      goto LABEL_14;
    }
    if ( *(_DWORD *)(a1 + 24912) && v7 )
    {
      _BitScanReverse64(&v12, v10);
      v13 = (unsigned int)v12 + (*(unsigned __int8 *)(a1 + 1616) << 6);
      v28 = v12;
      v14 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v13]];
      *(_DWORD *)(a1 + 24912) = 0;
      *(_DWORD *)(v14 + 24912) = 1;
      v11 = *(_BYTE *)(v14 + 1617);
      goto LABEL_13;
    }
  }
LABEL_14:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 88));
  v15 = *(_QWORD *)(a1 + 24);
  v16 = *(unsigned __int8 *)(a1 + 35);
  if ( v7 )
  {
    if ( (v16 & 2) != 0 )
      __fastfail(0x21u);
    v20 = v16 + 2;
    *(_BYTE *)(a1 + 35) = v20;
    if ( v20 == 2 )
      _InterlockedXor64((volatile signed __int64 *)v2, v4);
    v21 = *(_QWORD *)(a1 + 16);
    if ( v21 && v21 != v15 )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      v3 = 1;
      *(_BYTE *)(v21 + 388) = 7;
      v29 = v21 + 216;
      *(_QWORD *)(v21 + 216) = 0LL;
      v21 = 0LL;
    }
    v22 = *(_QWORD *)(a1 + 8);
    v23 = 1;
    if ( v22 == v15 )
    {
      if ( v3 )
        KiSetProcessorIdle(a1, 1, 0);
    }
    else if ( !v21 )
    {
      if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
      {
        v23 = 0;
      }
      else
      {
        *(_BYTE *)(v22 + 565) = 1;
        _interlockedbittestandset((volatile signed __int32 *)(v22 + 120), 0xBu);
        *(_QWORD *)(a1 + 16) = v15;
        KiSetProcessorIdle(a1, 1, 0);
        if ( (*(_BYTE *)(a1 + 11756) & 1) == 0 )
          v1 = 1;
      }
    }
    KiUpdateThreadPriority(a1, v15, 127, 0);
    if ( v23 )
    {
      if ( (*(_BYTE *)(v15 + 2) & 4) != 0 )
        EffectivePriorityThread = KiQueryEffectivePriorityThread(v15, a1);
      else
        EffectivePriorityThread = *(_BYTE *)(v15 + 195);
      **(_BYTE **)(a1 + 56) = EffectivePriorityThread;
    }
    if ( KiGroupSchedulingEnabled )
      KiGroupSchedulingGenerationEnd(a1, MEMORY[0xFFFFF78000000320], 1u);
    KiFlushReadyLists(a1 + 22784, a1 + 22680, &v29);
    if ( v5 )
    {
      v25 = *(volatile signed __int32 **)(a1 + 24904);
      v27 = 0;
      while ( _interlockedbittestandset64(v25, 0LL) )
      {
        do
          KeYieldProcessorEx(&v27);
        while ( *(_QWORD *)v25 );
      }
      KiFlushReadyLists(v25 + 4, v25 + 2, &v29);
      _InterlockedAnd64((volatile signed __int64 *)v25, 0LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    KiProcessDeferredReadyList(a1, (__int64)&v29, 2u);
    result = 0xFFFFF7800000036AuLL;
    _InterlockedDecrement16((volatile signed __int16 *)0xFFFFF7800000036ALL);
    if ( v1 )
      return KiRequestSoftwareInterrupt((struct _KPRCB *)a1, 2u);
  }
  else
  {
    if ( (v16 & 2) == 0 )
      __fastfail(0x21u);
    v17 = v16 - 2;
    *(_BYTE *)(a1 + 35) = v17;
    if ( !v17 )
      _InterlockedXor64((volatile signed __int64 *)v2, v4);
    v18 = 0;
    if ( !v17 )
    {
      *(_BYTE *)(a1 + 11755) = 1;
      v18 = 1;
    }
    KiUpdateThreadPriority(a1, v15, 0, v18);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    result = 0xFFFFF7800000036AuLL;
    _InterlockedAdd16((volatile signed __int16 *)0xFFFFF7800000036ALL, 1u);
  }
  return result;
}
