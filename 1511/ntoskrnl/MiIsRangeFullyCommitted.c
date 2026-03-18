/*
 * XREFs of MiIsRangeFullyCommitted @ 0x14047B9EC
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14047B7F8 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiIsRangeFullyCommitted(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 *ProtoPteAddress; // rdi
  __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v8; // r14d
  __int64 v9; // rsi
  unsigned __int64 *v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rbx
  unsigned __int64 v13; // rbp
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  ProtoPteAddress = (__int64 *)MiGetProtoPteAddress(a1, a2 >> 12, 5u, &v16);
  if ( !ProtoPteAddress )
    return 0LL;
  v6 = MiGetProtoPteAddress(a1, a3 >> 12, 5u, &v15);
  if ( !v6 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 1;
  v9 = ***(_QWORD ***)(a1 + 72);
  --CurrentThread->SpecialApcDisable;
  v10 = (unsigned __int64 *)(v9 + 40);
  v11 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, v11, (ULONG_PTR)v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = v16;
  while ( 1 )
  {
    v13 = v12 == v15 ? v6 : *(_QWORD *)(v12 + 8) + 8LL * (unsigned int)(*(_DWORD *)(v12 + 44) - 1);
    while ( (unsigned __int64)ProtoPteAddress <= v13 )
    {
      if ( !MI_READ_PTE_LOCK_FREE(ProtoPteAddress) )
      {
        v8 = 0;
        break;
      }
      ++ProtoPteAddress;
    }
    if ( v12 == v15 )
      break;
    v12 = *(_QWORD *)(v12 + 16);
    v16 = v12;
    ProtoPteAddress = *(__int64 **)(v12 + 8);
    if ( !ProtoPteAddress )
    {
      v8 = 0;
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v8;
}
