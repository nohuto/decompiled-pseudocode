/*
 * XREFs of MiMakeSystemCacheRangeValid @ 0x140031410
 * Callers:
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiGetSystemCacheReverseMap @ 0x140019690 (MiGetSystemCacheReverseMap.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExpAcquireSpinLockExclusive @ 0x14002E7B0 (ExpAcquireSpinLockExclusive.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     ObReferenceObjectExWithTag @ 0x140095D40 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1400A652C (ObpDeferObjectDeletion.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     PfSnCheckLoggingForThread @ 0x1400E9B50 (PfSnCheckLoggingForThread.c)
 *     PfSnLogPageFaultCommon @ 0x1400ED3E0 (PfSnLogPageFaultCommon.c)
 *     PfSnReferenceProcessTrace @ 0x1400EE760 (PfSnReferenceProcessTrace.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMakeSystemCacheRangeValid(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // r13d
  __int64 v5; // rbp
  LONG *v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // r12
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  int *v13; // rax
  __int64 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 result; // rax
  _QWORD *v23; // rsi
  __int64 *v24; // r12
  __int64 v25; // r14
  __int64 v26; // rbx
  unsigned __int64 v27; // rdi
  _QWORD *PrototypePteDirect; // r15
  __int64 v29; // rdi
  signed __int64 *v30; // rsi
  signed __int64 v31; // rdx
  signed __int64 v32; // rax
  signed __int64 v33; // rbp
  unsigned int v34; // edx
  ULONG_PTR v35; // rbp
  signed __int64 v36; // rax
  signed __int64 v37; // rtt
  signed __int64 BugCheckParameter4; // rax
  KIRQL v39; // bl
  int v40; // r14d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v42; // rax
  struct _EX_RUNDOWN_REF *v43; // rbx
  int v44; // r8d
  signed __int64 v45; // rax
  signed __int64 v46; // rtt
  _QWORD *v48; // [rsp+38h] [rbp-170h]
  __int64 v49; // [rsp+40h] [rbp-168h] BYREF
  __int64 v50; // [rsp+48h] [rbp-160h]
  _QWORD v51[16]; // [rsp+50h] [rbp-158h] BYREF
  _QWORD v52[16]; // [rsp+D0h] [rbp-D8h]

  v4 = 0;
  v50 = a4;
  v52[0] = 0LL;
  v5 = a4;
  v8 = &dword_140327CC0;
  v9 = a1 << 25 >> 16;
  if ( (byte_140324FF8 & 7) != 2 )
    v8 = (LONG *)&unk_140325000;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v8, CurrentIrql);
  v8[1] = 0;
  v11 = *(_QWORD *)(MiGetSystemCacheReverseMap(v9) + 24);
  if ( (v11 & 1) != 0 )
    v11 &= ~1uLL;
  v12 = *(_WORD *)(*(_QWORD *)v11 + 60LL) & 0x3FF;
  if ( v12 == 1023 )
    v13 = MiSystemPartition;
  else
    v13 = *(int **)(qword_140327038 + 8LL * v12);
  v14 = (__int64)(v13 + 1648);
  if ( a3 )
  {
    v15 = 0LL;
    v16 = a1 - (_QWORD)a2;
    v17 = a3;
    do
    {
      v51[v15] = 0LL;
      v18 = MI_READ_PTE_LOCK_FREE(a2);
      v49 = v18;
      if ( v18 )
      {
        if ( (v18 & 1) != 0 )
        {
          if ( (*((_BYTE *)a2 + v16) & 1) != 0 )
          {
            v51[v15] = 1LL;
          }
          else
          {
            v19 = MI_GET_PFN_FROM_PTE(&v49);
            v52[v15] = *(_QWORD *)(v19 + 16);
            if ( MiAllocateWsle(v14, v21, v19, 0LL, v20, 0LL) )
            {
              if ( (v52[v15] & 0x400LL) != 0 && PfSnNumActiveTraces )
                v51[v15] = *(_QWORD *)(v19 + 8) | 0x8000000000000000uLL;
            }
            else
            {
              v51[v15] = 1LL;
            }
          }
        }
        else
        {
          *a2 |= 1uLL;
          v51[v15] = 1LL;
        }
      }
      ++v15;
      ++a2;
      --v17;
    }
    while ( v17 );
    v5 = v50;
  }
  MiUnlockWorkingSetExclusive(v14, CurrentIrql);
  result = -(__int64)a3;
  v23 = &a2[-a3];
  v48 = v23;
  if ( a3 )
  {
    result = a3;
    v24 = v51;
    while ( 1 )
    {
      v25 = *v24;
      if ( *v24 != 1 )
        break;
      v49 = MI_READ_PTE_LOCK_FREE(v23);
      v26 = MI_GET_PFN_FROM_PTE(&v49);
      v27 = (unsigned __int8)MiLockPageInline(v26);
      MiDecrementShareCount(v26);
      _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiLockPageAtDpcInline(v5);
      MiDecrementShareCount(v5);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v27);
LABEL_56:
      result = a3;
LABEL_57:
      ++v23;
      ++v4;
      ++v24;
      v48 = v23;
      if ( v4 >= (unsigned int)result )
        return result;
      v5 = v50;
    }
    if ( !v25 )
      goto LABEL_57;
    PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(v52[v4]);
    v29 = *PrototypePteDirect;
    v30 = (signed __int64 *)(*PrototypePteDirect + 64LL);
    _m_prefetchw(v30);
    v31 = *v30;
    if ( (*v30 & 0xF) != 0 )
    {
      do
      {
        v32 = _InterlockedCompareExchange64(v30, v31 - 1, v31);
        if ( v31 == v32 )
          break;
        v31 = v32;
      }
      while ( (v32 & 0xF) != 0 );
    }
    v33 = v31;
    v34 = v31 & 0xF;
    v35 = v33 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v34 <= 1 )
    {
      if ( !v34 )
      {
LABEL_45:
        v39 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v29 + 72));
        v35 = ObFastReferenceObjectLocked(v30);
        ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v29 + 72), v39);
LABEL_46:
        v40 = MiStartingOffset(PrototypePteDirect, v25, 0xFFFFFFFFLL);
        if ( !*(_QWORD *)(v35 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          v42 = PfSnReferenceProcessTrace(CurrentThread->ApcState.Process);
          v43 = (struct _EX_RUNDOWN_REF *)v42;
          if ( v42 )
          {
            if ( (unsigned int)PfSnCheckLoggingForThread(CurrentThread, v42, 4LL) )
              PfSnLogPageFaultCommon((_DWORD)v43, v35, *(_QWORD *)(v35 + 24), v40, v44);
            ExReleaseRundownProtection(v43 + 45);
          }
        }
        _m_prefetchw(v30);
        v45 = *v30;
        if ( (v35 ^ *v30) >= 0xF )
        {
LABEL_54:
          ObDereferenceObjectDeferDelete((PVOID)v35);
        }
        else
        {
          while ( 1 )
          {
            v46 = v45;
            v45 = _InterlockedCompareExchange64(v30, v45 + 1, v45);
            if ( v46 == v45 )
              break;
            if ( (v35 ^ v45) >= 0xF )
              goto LABEL_54;
          }
        }
        v23 = v48;
        goto LABEL_56;
      }
      ObReferenceObjectExWithTag(v35, 15LL);
      _m_prefetchw(v30);
      v36 = *v30;
      while ( (v36 & 0xF) == 0 )
      {
        if ( v35 != (v36 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v37 = v36;
        v36 = _InterlockedCompareExchange64(v30, v36 + 15, v36);
        if ( v37 == v36 )
          goto LABEL_44;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v35 - 48);
      BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 - 48), 0xFFFFFFFFFFFFFFF1uLL) - 15;
      if ( BugCheckParameter4 <= 0 )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, v35, 5uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(v35 - 48);
      }
    }
LABEL_44:
    if ( v35 )
      goto LABEL_46;
    goto LABEL_45;
  }
  return result;
}
