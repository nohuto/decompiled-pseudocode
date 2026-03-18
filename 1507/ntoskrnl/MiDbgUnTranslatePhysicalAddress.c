/*
 * XREFs of MiDbgUnTranslatePhysicalAddress @ 0x1402235E4
 * Callers:
 *     MiDbgCopyMemory @ 0x140222AD0 (MiDbgCopyMemory.c)
 *     MiDbgTranslatePhysicalAddress @ 0x14022311C (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KeFlushSingleCurrentTb @ 0x14014A648 (KeFlushSingleCurrentTb.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

unsigned __int8 __fastcall MiDbgUnTranslatePhysicalAddress(int *a1)
{
  unsigned __int64 v2; // rcx
  int v3; // eax
  __int64 *v4; // rdi
  __int64 v5; // rax
  bool v6; // zf
  unsigned __int8 result; // al
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (*a1 & 0x20) != 0 )
  {
    v2 = qword_14034F2C8 << 25 >> 16;
    _InterlockedExchange64((volatile __int64 *)qword_14034F2C8, 0LL);
    if ( (*a1 & 0x12) != 0 )
      KeFlushSingleTb(v2, 0, 1);
    else
      KeFlushSingleCurrentTb(v2, 0);
  }
  v3 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    if ( (v3 & 1) != 0 || (v3 & 2) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)a1 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_17;
    }
    if ( (v3 & 8) == 0 && (v3 & 0x10) == 0 )
      goto LABEL_17;
    v4 = (__int64 *)(a1 + 4);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)a1 + 2, retaddr);
      goto LABEL_17;
    }
    v5 = *v4;
    v6 = *v4 == 0;
    _m_prefetchw(v4);
    if ( v6 )
    {
      if ( v4 == (__int64 *)_InterlockedCompareExchange64(
                              *((volatile signed __int64 **)a1 + 3),
                              0LL,
                              (signed __int64)(a1 + 4)) )
        goto LABEL_17;
      v5 = KxWaitForLockChainValid((__int64 *)a1 + 2);
    }
    *v4 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v5 + 8), 1uLL);
  }
LABEL_17:
  result = *((_BYTE *)a1 + 4);
  if ( result != 17 )
    __writecr8(result);
  return result;
}
