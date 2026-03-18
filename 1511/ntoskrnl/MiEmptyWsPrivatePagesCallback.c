/*
 * XREFs of MiEmptyWsPrivatePagesCallback @ 0x14012BE8C
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiEmptyWorkingSetHelper @ 0x14001F788 (MiEmptyWorkingSetHelper.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     KeShouldYieldProcessor @ 0x1400D54D0 (KeShouldYieldProcessor.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiEmptyWsPrivatePagesCallback(__int64 a1, unsigned __int64 a2, ULONG_PTR *a3)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR *v4; // rbp
  unsigned __int64 i; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int64 Wsle; // rax
  unsigned int *v10; // rdx
  LOGICAL ShouldYieldProcessor; // eax
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a1;
  v4 = a3;
  for ( i = a2; i <= (unsigned __int64)v4; i += 8LL )
  {
    v13 = MI_READ_PTE_LOCK_FREE(i);
    if ( (v13 & 1) != 0 )
    {
      v7 = MI_READ_PTE_LOCK_FREE(&v13);
      if ( MI_IS_PFN((v7 >> 12) & 0xFFFFFFFFFLL) )
      {
        a3 = (ULONG_PTR *)(48 * v8 - 0x58000000000LL);
        if ( (a3[5] & 0x200000000000000LL) == 0 && (a3[1] | 0x8000000000000000uLL) == i )
        {
          Wsle = MiLocateWsle((__int64)(i << 25) >> 16, v3, *a3);
          if ( Wsle >= *(_QWORD *)(*(_QWORD *)(v3 + 184) + 8LL) )
            MiEmptyWorkingSetHelper(v3, i, Wsle, *(_DWORD **)(a1 + 16));
        }
      }
    }
  }
  v10 = *(unsigned int **)(a1 + 16);
  if ( *v10 )
  {
    MiFreeWsleList(v3, v10, 0);
    **(_DWORD **)(a1 + 16) = 0;
  }
  if ( (*(_DWORD *)v3 & 0x40000000) != 0 || (ShouldYieldProcessor = KeShouldYieldProcessor()) != 0 )
  {
    LOBYTE(v10) = *(_BYTE *)(a1 + 8);
    MiUnlockWorkingSetExclusive(v3, (__int64)v10, (__int64)a3);
    LOBYTE(ShouldYieldProcessor) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v3);
  }
  return ShouldYieldProcessor;
}
