/*
 * XREFs of MmReadProcessPageTables @ 0x1401DE458
 * Callers:
 *     KiMonitorCacheErrata @ 0x1401CA6B4 (KiMonitorCacheErrata.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeFlushSingleCurrentTb @ 0x140115120 (KeFlushSingleCurrentTb.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402142F8 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MmReadProcessPageTables(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 ValidKernelPte; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v6; // rdi
  __int64 result; // rax
  int v8; // ett
  int v9; // ebp
  unsigned __int64 v10; // r12
  volatile __int64 *v11; // rsi
  __int64 v12; // rbx
  _DWORD *v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r13
  _QWORD *v17; // r15
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _KPRCB *v24; // [rsp+68h] [rbp+10h]

  ValidKernelPte = MiMakeValidKernelPte(-1LL, 4, 0LL, a4);
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = ValidKernelPte | 0x42;
  v24 = CurrentPrcb;
  __wbinvd();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    result = ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented(dword_1402FFE20);
    CurrentPrcb = v24;
  }
  else
  {
    _m_prefetchw(dword_1402FFE20);
    v8 = dword_1402FFE20[0] & 0x7FFFFFFF;
    result = v8 == _InterlockedCompareExchange(
                     dword_1402FFE20,
                     (dword_1402FFE20[0] & 0x7FFFFFFF) + 1,
                     dword_1402FFE20[0] & 0x7FFFFFFF);
  }
  v9 = 0;
  if ( (_DWORD)result )
  {
    v10 = (unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL;
    v11 = (volatile __int64 *)(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v12 = _InterlockedExchange64(v11, 0LL);
    KeFlushSingleCurrentTb(v10, 0);
    v13 = MmPhysicalMemoryBlock;
    if ( *(_DWORD *)MmPhysicalMemoryBlock )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)&v13[4 * v9 + 4];
        v15 = 48 * v14 - 0x58000000000LL;
        v16 = 48 * (v14 + *(_QWORD *)&v13[4 * v9 + 6]) - 0x58000000000LL;
        if ( v15 < v16 )
          break;
LABEL_19:
        if ( (unsigned int)++v9 >= *v13 )
          goto LABEL_20;
      }
      v17 = (_QWORD *)(v15 + 40);
      while ( 1 )
      {
        if ( (*((_BYTE *)v17 - 6) & 7) == 6 )
        {
          v18 = *(v17 - 4) | 0x8000000000000000uLL;
          if ( v18 + 0x98000000000LL <= 0x7FFFFFFFFFLL
            && (unsigned __int64)(((__int64)(v18 << 25) >> 16) + 0x98000000000LL) <= 0x7FFFFFFFFFLL
            && ((*v17 >> 54) & 7) != 1
            && (*v17 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
            && (*((_BYTE *)v17 - 6) & 0xC0) == 0x40 )
          {
            v6 ^= (v6 ^ (((__int64)(v17 + 0xAFFFFFFFFBLL) / 48) << 12)) & 0xFFFFFFFFF000LL;
            _InterlockedExchange64(v11, v6);
            KeFlushSingleCurrentTb(v10, 0);
            v19 = v10;
            v20 = 64LL;
            do
            {
              v19 += 64LL;
              --v20;
            }
            while ( v20 );
            v21 = KiCacheErrataMonitor;
            v22 = v24->Number + 16LL;
            v24->ClockKeepAlive = 1;
            _InterlockedExchange64((volatile __int64 *)(v21 + 16 * v22), -1LL);
            if ( (*(_QWORD *)(v21 + 16 * (*(unsigned int *)(a1 + 36) + 16LL)) & v24->GroupSetMember) != 0 )
              break;
          }
        }
        v15 += 48LL;
        v17 += 6;
        if ( v15 >= v16 )
        {
          v13 = MmPhysicalMemoryBlock;
          goto LABEL_19;
        }
      }
    }
LABEL_20:
    _InterlockedExchange64(v11, v12);
    KeFlushSingleCurrentTb(v10, 0);
    ExReleaseSpinLockSharedFromDpcLevel(dword_1402FFE20);
    return 1LL;
  }
  return result;
}
