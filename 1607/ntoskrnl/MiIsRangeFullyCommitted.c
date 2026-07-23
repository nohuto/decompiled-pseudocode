/*
 * XREFs of MiIsRangeFullyCommitted @ 0x14040B41C
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14040B548 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiIsRangeFullyCommitted(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 ProtoPteAddress; // rbx
  __int64 v6; // r14
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v8; // ebp
  __int64 v9; // rdi
  unsigned __int64 *v10; // rdi
  __int64 v11; // rsi
  __int64 *v12; // r9
  unsigned __int64 v13; // r10
  __int64 *v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v16; // [rsp+68h] [rbp+10h] BYREF

  ProtoPteAddress = MiGetProtoPteAddress(a1, a2 >> 12, 5, &v16);
  if ( !ProtoPteAddress )
    return 0LL;
  v6 = MiGetProtoPteAddress(a1, a3 >> 12, 5, &v15);
  if ( !v6 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = 1;
  v9 = ***(_QWORD ***)(a1 + 72);
  --CurrentThread->SpecialApcDisable;
  v10 = (unsigned __int64 *)(v9 + 40);
  v11 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, v11, (ULONG_PTR)v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = v16;
  while ( 1 )
  {
    v13 = v12 == v15 ? v6 : v12[1] + 8LL * (unsigned int)(*((_DWORD *)v12 + 11) - 1);
    while ( ProtoPteAddress <= v13 )
    {
      if ( !MI_READ_PTE_LOCK_FREE(ProtoPteAddress) )
      {
        v8 = 0;
        break;
      }
      ProtoPteAddress += 8LL;
    }
    if ( v12 == v15 )
      break;
    v12 = (__int64 *)v12[2];
    v16 = v12;
    ProtoPteAddress = v12[1];
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
