/*
 * XREFs of MiMakeSpecialPoolPaged @ 0x1401CEE78
 * Callers:
 *     MmAllocateSpecialPool @ 0x1401DAD04 (MmAllocateSpecialPool.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMakeSpecialPoolPaged(KSPIN_LOCK *a1, __int64 *a2)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  volatile LONG *v6; // r14
  KIRQL v7; // di
  ULONG_PTR Wsle; // rax
  __int64 v9; // rdx
  ULONG_PTR v10; // rbx
  __int64 v11; // r8
  unsigned __int8 v12; // al
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = MI_READ_PTE_LOCK_FREE(a2);
  v4 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v14) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( a1 == &qword_1402FF700 )
  {
    v5 = 0LL;
    v6 = &dword_1402FF980;
  }
  else
  {
    v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v6 = (volatile LONG *)(v5 + 2968);
  }
  v7 = ExAcquireSpinLockExclusive(v6);
  Wsle = MiAllocateWsle((ULONG_PTR)v6, (unsigned __int64 *)a2, v4, 0LL, ZeroPte, 0LL);
  LOBYTE(v9) = v7;
  v10 = Wsle;
  MiUnlockWorkingSetExclusive((__int64)v6, v9, v11);
  if ( v10 )
    return 1LL;
  v12 = MiLockPageInline(v4);
  *(_BYTE *)(v4 + 35) |= 8u;
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v12);
  if ( v5 )
    _InterlockedIncrement64((volatile signed __int64 *)(v5 + 40));
  return 0LL;
}
