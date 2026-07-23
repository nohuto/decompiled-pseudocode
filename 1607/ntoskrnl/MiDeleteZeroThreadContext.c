/*
 * XREFs of MiDeleteZeroThreadContext @ 0x14013F75C
 * Callers:
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x14013ADA0 (MiZeroNodePages.c)
 *     MiCreateZeroThreadContext @ 0x14013B070 (MiCreateZeroThreadContext.c)
 *     MiInitializePageZeroing @ 0x14013B3E0 (MiInitializePageZeroing.c)
 *     MiZeroLargePageThread @ 0x14013F700 (MiZeroLargePageThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     KeSignalGate @ 0x1400A6E1C (KeSignalGate.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiGetUltraMapping @ 0x14013FD54 (MiGetUltraMapping.c)
 *     MiDecrementHugeContext @ 0x1401413EC (MiDecrementHugeContext.c)
 */

void __fastcall MiDeleteZeroThreadContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_BYTE *)(a1 + 106) == 1 )
  {
    v5 = *(_QWORD *)(a1 + 112);
    if ( v5 )
    {
      KeAcquireInStackQueuedSpinLock(
        (PKSPIN_LOCK)(qword_1403235B0 + 2152 + 2184LL * *(unsigned int *)(v5 + 184)),
        &LockHandle);
      MiDecrementHugeContext(a1);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    MiGetUltraMapping(a1, 0xFFFFFFFFLL, a3, a4);
    MiReleaseFreshPage(48LL * *(_QWORD *)(a1 + 96) - 0x58000000000LL);
  }
  v6 = 0;
  v7 = MiLargePageSizes;
  do
  {
    v8 = *(__int64 *)((char *)v7 + a1 - (_QWORD)MiLargePageSizes + 120);
    if ( v8 )
    {
      v11 = v8 << 25 >> 16;
      v12 = 2 - v6;
      do
      {
        v11 = (__int64)(v11 << 25) >> 16;
        --v12;
      }
      while ( v12 );
      MiReturnSystemVa(v11, v11 + (*v7 << 12), 15, 0LL);
    }
    ++v6;
    ++v7;
  }
  while ( v6 <= 1 );
  v9 = *(_QWORD *)(a1 + 136);
  if ( v9 )
    MiReleasePtes((__int64)&qword_1403278B0, v9, 0x100u);
  v10 = *(_QWORD *)(a1 + 144);
  if ( v10 && *(_DWORD *)(v10 + 84) && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 84), 0xFFFFFFFF) == 1 )
    KeSignalGate(v10 + 88, 1u);
}
