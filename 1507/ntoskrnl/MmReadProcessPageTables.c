/*
 * XREFs of MmReadProcessPageTables @ 0x140224FB0
 * Callers:
 *     KiMonitorCacheErrata @ 0x14020A054 (KiMonitorCacheErrata.c)
 * Callees:
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     KeFlushSingleCurrentTb @ 0x14014A648 (KeFlushSingleCurrentTb.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402642DC (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MmReadProcessPageTables(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // ebp
  unsigned __int64 v3; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v5; // rbx
  __int64 result; // rax
  signed __int32 v7; // ett
  unsigned __int64 v8; // r12
  volatile __int64 *v9; // rsi
  __int64 v10; // rdi
  _DWORD *v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r13
  _QWORD *v15; // r15
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  struct _KPRCB *v23; // [rsp+68h] [rbp+10h]

  v2 = 0;
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
    v1 |= 0x100uLL;
  v3 = v1 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
  CurrentPrcb = KeGetCurrentPrcb();
  v23 = CurrentPrcb;
  v5 = v3 | 0x42;
  __wbinvd();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    result = ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented(dword_140353DF0);
    CurrentPrcb = v23;
  }
  else
  {
    _m_prefetchw(dword_140353DF0);
    v7 = dword_140353DF0[0] & 0x7FFFFFFF;
    result = v7 == _InterlockedCompareExchange(
                     dword_140353DF0,
                     (dword_140353DF0[0] & 0x7FFFFFFF) + 1,
                     dword_140353DF0[0] & 0x7FFFFFFF);
  }
  if ( (_DWORD)result )
  {
    v8 = (unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL;
    v9 = (volatile __int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v10 = _InterlockedExchange64(v9, 0LL);
    KeFlushSingleCurrentTb(v8, 0);
    v11 = MmPhysicalMemoryBlock;
    if ( *(_DWORD *)MmPhysicalMemoryBlock )
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)&v11[4 * v2 + 4];
        v13 = 48 * v12 - 0x58000000000LL;
        v14 = 48 * (v12 + *(_QWORD *)&v11[4 * v2 + 6]) - 0x58000000000LL;
        if ( v13 < v14 )
          break;
LABEL_21:
        if ( (unsigned int)++v2 >= *v11 )
          goto LABEL_22;
      }
      v15 = (_QWORD *)(v13 + 40);
      while ( 1 )
      {
        if ( (*((_BYTE *)v15 - 6) & 7) == 6 )
        {
          v16 = *(v15 - 4) | 0x8000000000000000uLL;
          if ( v16 + 0x98000000000LL <= 0x7FFFFFFFFFLL
            && (unsigned __int64)(((__int64)(v16 << 25) >> 16) + 0x98000000000LL) <= 0x7FFFFFFFFFLL
            && ((*v15 >> 54) & 7) != 1
            && (*v15 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
            && (*((_BYTE *)v15 - 6) & 0xC0) == 0x40 )
          {
            v5 ^= (v5 ^ (((__int64)(v15 + 0xAFFFFFFFFBLL) / 48) << 12)) & 0xFFFFFFFFF000LL;
            _InterlockedExchange64(v9, v5);
            KeFlushSingleCurrentTb(v8, 0);
            v17 = v8;
            v18 = 64LL;
            do
            {
              v17 += 64LL;
              --v18;
            }
            while ( v18 );
            v19 = KiCacheErrataMonitor;
            v20 = v23->Number + 16LL;
            v23->ClockKeepAlive = 1;
            _InterlockedExchange64((volatile __int64 *)(v19 + 16 * v20), -1LL);
            if ( (*(_QWORD *)(v19 + 16 * (*(unsigned int *)(a1 + 36) + 16LL)) & v23->GroupSetMember) != 0 )
              break;
          }
        }
        v13 += 48LL;
        v15 += 6;
        if ( v13 >= v14 )
        {
          v11 = MmPhysicalMemoryBlock;
          goto LABEL_21;
        }
      }
    }
LABEL_22:
    _InterlockedExchange64(v9, v10);
    KeFlushSingleCurrentTb(v8, 0);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(dword_140353DF0, retaddr);
    }
    else
    {
      _InterlockedAnd(dword_140353DF0, 0xBFFFFFFF);
      _InterlockedDecrement(dword_140353DF0);
    }
    return 1LL;
  }
  return result;
}
