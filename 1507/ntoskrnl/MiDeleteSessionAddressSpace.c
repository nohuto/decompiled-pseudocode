/*
 * XREFs of MiDeleteSessionAddressSpace @ 0x1401495B0
 * Callers:
 *     MiDereferenceSessionFinal @ 0x14056797C (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     MiDeleteSystemPte @ 0x1401498C4 (MiDeleteSystemPte.c)
 *     MiIncrementPfn @ 0x14015A42C (MiIncrementPfn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiDeleteSessionAddressSpace(_KPROCESS *Process, _QWORD *a2)
{
  __int64 v2; // r13
  _KPROCESS *v4; // r14
  __int64 v5; // r12
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r9
  volatile signed __int32 *p_Blink; // rbx
  unsigned __int8 CurrentIrql; // r12
  unsigned int v16; // edi
  signed __int32 i; // edx
  _QWORD *DeepFreezeStartTime; // rcx
  unsigned __int64 *v19; // rsi
  unsigned __int64 NextPageTable; // rdi
  unsigned __int64 v21; // r14
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v25[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+70h] [rbp-90h] BYREF
  __int16 v27; // [rsp+74h] [rbp-8Ch]
  __int64 v28; // [rsp+78h] [rbp-88h]
  __int64 v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]

  v2 = 2LL;
  v4 = Process;
  v5 = 2LL;
  v6 = (((unsigned __int64)Process >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = v6 + 0x90482413000LL;
  do
  {
    v8 = *(_QWORD *)v6;
    if ( v7 <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, v8)
      && (v8 & 1) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v9 = *(_QWORD *)&Process[2].ProcessLock;
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 8 * ((v6 >> 3) & 0x1FF));
        if ( (v10 & 0x20) != 0 )
          v8 |= 0x20uLL;
        if ( (v10 & 0x42) != 0 )
          v8 |= 0x42uLL;
      }
    }
    v23 = v8;
    if ( (unsigned __int64)&STACK[0x90482413038] <= 0x7F8
      && (unsigned int)MiPteHasShadow(Process, v8)
      && (v8 & 1) != 0
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      v11 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 8 * (((unsigned __int64)&v23 >> 3) & 0x1FF));
        if ( (v12 & 0x20) != 0 )
          v8 |= 0x20uLL;
        if ( (v12 & 0x42) != 0 )
          v8 |= 0x42uLL;
      }
    }
    MiIncrementPfn(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v6 += 8LL;
    v7 += 8LL;
    --v5;
  }
  while ( v5 );
  p_Blink = (volatile signed __int32 *)&v4[4].ThreadListHead.Blink;
  v27 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v25[0] = _mm_load_si128((const __m128i *)&_xmm_fffff6fcbffffff8fffff6fc80000000);
  v28 = 20LL;
  v25[1] = _mm_load_si128((const __m128i *)&_xmm_fffff6fb7dbf2ff8fffff6fb7dbf2000);
  v26 = 2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&v4[4].ThreadListHead.Blink);
  }
  else
  {
    v16 = 0;
    if ( _interlockedbittestandset(p_Blink, 0x1Fu) )
      v16 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)&v4[4].ThreadListHead.Blink);
    for ( i = *p_Blink; (*p_Blink & 0xBFFFFFFF) != 0x80000000; i = *p_Blink )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(p_Blink, i | 0x40000000, i);
      if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v16);
    }
  }
  DeepFreezeStartTime = (_QWORD *)v4[4].DeepFreezeStartTime;
  if ( DeepFreezeStartTime )
  {
    MiEmptyPageAccessLog(DeepFreezeStartTime);
    v4[4].DeepFreezeStartTime = 0LL;
  }
  v4[4].Affinity.Bitmap[19] = 0LL;
  v19 = (unsigned __int64 *)v25 + 1;
  do
  {
    NextPageTable = *(v19 - 1);
    v21 = *v19;
    while ( NextPageTable <= v21 )
    {
      LOBYTE(v13) = CurrentIrql;
      NextPageTable = MiGetNextPageTable(NextPageTable, v21, 1uLL, v13, 1, &v24);
      if ( !NextPageTable )
        break;
      do
      {
        v22 = 0;
        MiDeleteSystemPte(NextPageTable, &v26, a2, &v22);
        NextPageTable += 8LL;
        if ( v22 == 1 )
          break;
        if ( NextPageTable > v21 )
          goto LABEL_44;
      }
      while ( (NextPageTable & 0xFFF) != 0 );
    }
LABEL_44:
    v19 += 2;
    --v2;
  }
  while ( v2 );
  a2[1] -= 2LL;
  a2[3] -= 2LL;
  *a2 -= 2LL;
  MiUnlockWorkingSetExclusive((__int64)p_Blink, CurrentIrql);
  MiFlushTbList((__int64)&v26);
}
