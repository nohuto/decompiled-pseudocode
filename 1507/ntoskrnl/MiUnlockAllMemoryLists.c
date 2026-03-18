/*
 * XREFs of MiUnlockAllMemoryLists @ 0x14014CD5C
 * Callers:
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall MiUnlockAllMemoryLists(struct _KLOCK_QUEUE_HANDLE *a1)
{
  unsigned int v1; // edi
  volatile signed __int64 **v3; // rbx
  __int64 v4; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = 1;
  if ( (unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_14034EBBC + 27 > 1 )
  {
    while ( 1 )
    {
      v3 = (volatile signed __int64 **)&a1[v1];
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&a1[v1], retaddr);
        goto LABEL_5;
      }
      _m_prefetchw(v3);
      v4 = (__int64)*v3;
      if ( *v3 )
        goto LABEL_8;
      if ( v3 != (volatile signed __int64 **)_InterlockedCompareExchange64(v3[1], 0LL, (signed __int64)v3) )
        break;
LABEL_5:
      if ( ++v1 >= (unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_14034EBBC + 27 )
        goto LABEL_6;
    }
    v4 = KxWaitForLockChainValid((__int64 *)&a1[v1]);
LABEL_8:
    *v3 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v4 + 8), 1uLL);
    goto LABEL_5;
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLock(a1);
}
