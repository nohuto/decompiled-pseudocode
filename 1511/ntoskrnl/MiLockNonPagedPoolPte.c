/*
 * XREFs of MiLockNonPagedPoolPte @ 0x1400DCB30
 * Callers:
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x140089B90 (MiInsertNonPagedPoolOnSlist.c)
 *     MiProbeLockFrame @ 0x1400A7C30 (MiProbeLockFrame.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiLockNonPagedPoolPte(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  __int64 v6; // r8
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rax
  int v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  while ( 1 )
  {
    v11 = MI_READ_PTE_LOCK_FREE(a1);
    v5 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v11) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v10, v4, v6);
      while ( (*(_QWORD *)(v5 + 24) & 0x8000000000000000uLL) != 0 );
    }
    *a2 = CurrentIrql;
    v8 = MI_READ_PTE_LOCK_FREE(a1);
    if ( v11 == v8 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
  }
  return v5;
}
