/*
 * XREFs of MiDeleteSessionPoolRange @ 0x1401DBB98
 * Callers:
 *     MiDeleteLeakedSessionPool @ 0x1404F3AE0 (MiDeleteLeakedSessionPool.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiDeleteSessionPoolRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  volatile LONG *v4; // rsi
  __int64 *v6; // rdi
  __int64 *v7; // r14
  __int64 v8; // rdx
  KIRQL v9; // bp
  __int64 v10; // r8
  __int64 v11; // rax

  v4 = (volatile LONG *)(a1 + 2968);
  v6 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = &v6[a3 >> 12];
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2968));
  while ( v6 < v7 )
  {
    v11 = MI_READ_PTE_LOCK_FREE(v6);
    if ( (v11 & 0xC01) != 0 || (v11 & 0x3E0) != 0 )
    {
      LOBYTE(v8) = v9;
      MiUnlockWorkingSetExclusive((__int64)v4, v8, v10);
      MiDeleteSystemPagableVm(v4, 0LL, (ULONG_PTR)v6, 1LL, 0, a4);
      v9 = ExAcquireSpinLockExclusive(v4);
    }
    else if ( !v11 )
    {
      goto LABEL_9;
    }
    *v6 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v6) )
      MiWritePteShadow(v6, 0LL);
LABEL_9:
    ++v6;
  }
  LOBYTE(v8) = v9;
  return MiUnlockWorkingSetExclusive((__int64)v4, v8, v10);
}
