/*
 * XREFs of MiReturnDriverLoadPages @ 0x1407D106C
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiLockAndDecrementShareCount @ 0x140075E7C (MiLockAndDecrementShareCount.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiReturnDriverLoadPages(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v3; // rsi
  unsigned __int64 v4; // rbp
  char *v5; // r14
  LONG *SharedVm; // rdi
  KIRQL v7; // al
  __int64 v8; // rdx
  KIRQL v9; // r12
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rdi
  _KPROCESS *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // [rsp+20h] [rbp-F8h] BYREF
  char *AnyMultiplexedVm; // [rsp+28h] [rbp-F0h]
  int v18; // [rsp+30h] [rbp-E8h] BYREF
  __int16 v19; // [rsp+34h] [rbp-E4h]
  int v20; // [rsp+38h] [rbp-E0h]
  int v21; // [rsp+3Ch] [rbp-DCh]
  __int64 v22; // [rsp+40h] [rbp-D8h]
  __int64 v23; // [rsp+48h] [rbp-D0h]

  v21 = 0;
  v18 = 0;
  v19 = 0;
  v3 = a1;
  v22 = 0LL;
  v23 = 0LL;
  v20 = 20;
  v4 = (__int64)((_QWORD)a1 << 25) >> 16;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v5 = AnyMultiplexedVm;
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v7 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v7;
  if ( (unsigned __int64)v3 <= a2 )
  {
    do
    {
      v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v3);
      if ( (v16 & 1) != 0 )
      {
        MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v16);
        *v3 = 0LL;
        if ( MiPteInShadowRange((unsigned __int64)v3) )
          MiWritePteShadow(v10, 0LL);
        v12 = 48 * (*(_QWORD *)(v11 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        MiLockAndDecrementShareCount(v11, 1);
        MiLockAndDecrementShareCount(v12, 0);
        MiInsertTbFlushEntry((__int64)&v18, v4, 1LL, 0);
      }
      ++v3;
      v4 += 4096LL;
    }
    while ( (unsigned __int64)v3 <= a2 );
    v5 = AnyMultiplexedVm;
  }
  LOBYTE(v8) = v9;
  MiUnlockWorkingSetExclusive((__int64)v5, v8);
  MiFlushTbList((__int64)&v18, v13, v14, v15);
}
