/*
 * XREFs of MiLockNonPagedPoolPte @ 0x1400242D0
 * Callers:
 *     MiInsertNonPagedPoolOnSlist @ 0x140011050 (MiInsertNonPagedPoolOnSlist.c)
 *     MiClearNonPagedPtes @ 0x1400240A0 (MiClearNonPagedPtes.c)
 *     MiProbeLockFrame @ 0x14002F2B0 (MiProbeLockFrame.c)
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiLockNonPagedPoolPte(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v8; // r10
  __int64 v9; // rax
  int v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  while ( 1 )
  {
    v12 = MI_READ_PTE_LOCK_FREE(a1);
    v4 = MI_READ_PTE_LOCK_FREE(&v12);
    v6 = 48 * (v5 & (v4 >> 12)) - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v8);
    v11 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v11);
      while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0 );
    }
    *a2 = CurrentIrql;
    v9 = MI_READ_PTE_LOCK_FREE(a1);
    if ( v12 == v9 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
  }
  return v6;
}
