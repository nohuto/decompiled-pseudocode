/*
 * XREFs of MiMakeSpecialPoolPaged @ 0x1401EB5FC
 * Callers:
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMakeSpecialPoolPaged(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // rsi
  KSPIN_LOCK *v4; // r9
  unsigned __int64 v5; // rbp
  char *AnyMultiplexedVm; // r14
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  KIRQL v9; // di
  ULONG_PTR Wsle; // rax
  __int64 v11; // rdx
  ULONG_PTR v12; // rbx
  unsigned __int8 v13; // al
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = MI_READ_PTE_LOCK_FREE(a2);
  v3 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v15) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( v4 == &qword_140327800 )
  {
    v5 = 0LL;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  }
  else
  {
    v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    AnyMultiplexedVm = (char *)(v5 + 3008);
  }
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v8;
  Wsle = MiAllocateWsle((__int64)AnyMultiplexedVm, a2, v3, 0LL, ZeroPte, 0LL);
  LOBYTE(v11) = v9;
  v12 = Wsle;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v11);
  if ( v12 )
    return 1LL;
  v13 = MiLockPageInline(v3);
  *(_BYTE *)(v3 + 35) |= 8u;
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v13);
  if ( v5 )
    _InterlockedIncrement64((volatile signed __int64 *)(v5 + 40));
  return 0LL;
}
