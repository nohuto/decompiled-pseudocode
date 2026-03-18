/*
 * XREFs of MiLeapPrefetch @ 0x1401161B8
 * Callers:
 *     MiPrefetchVirtualMemory @ 0x140011F20 (MiPrefetchVirtualMemory.c)
 *     MiResolvePageTablePage @ 0x14004CC60 (MiResolvePageTablePage.c)
 *     MiPrefetchJumpVad @ 0x1401D6AD0 (MiPrefetchJumpVad.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ExfTryAcquirePushLockShared @ 0x1400209C4 (ExfTryAcquirePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x1400317E4 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14004AD10 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiLeapPrefetch(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  char v6; // al
  __int64 Process; // rdi
  ULONG_PTR v8; // r14
  KIRQL v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  _QWORD *v14; // rax
  unsigned __int64 v15; // r8
  __int64 j; // r8
  _QWORD *i; // rax

  v2 = a2;
  if ( a2 )
  {
LABEL_23:
    v14 = (_QWORD *)(a1[1] + 16LL * a1[3]);
    v15 = *v14 & 0xFFFFFFFFFFFFF000uLL;
    if ( v2 >= v15 && v2 < v15 + (((*(_DWORD *)v14 & 0xFFF) + v14[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
    {
      a1[4] = (v2 - v15) >> 12;
    }
    else
    {
LABEL_25:
      ++a1[3];
      a1[4] = 0LL;
    }
    return 1LL;
  }
  v4 = *(_QWORD *)(a1[1] + 16LL * a1[3]) + (a1[4] << 12);
  if ( v4 > (unsigned __int64)MmHighestUserAddress )
    return 1LL;
  CurrentThread = KeGetCurrentThread();
  v6 = BYTE4(CurrentThread[1].Queue);
  if ( v6 < 0 || (v6 & 3) != 0 )
    return 1LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(Process + 872, 0LL, 1LL);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(Process + 872), 17LL, 0LL)
    || ExfTryAcquirePushLockShared((signed __int64 *)(Process + 872)) )
  {
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    BYTE4(CurrentThread[1].Queue) |= 2u;
    v9 = 17;
  }
  else
  {
    if ( v8 )
      KeAbPostReleaseEx(Process + 872, v8);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(Process + 1280));
  }
  if ( (*(_DWORD *)(Process + 772) & 0x20) == 0 && *(_QWORD *)(Process + 1576) )
  {
    v10 = *(_QWORD *)(Process + 1552);
    v11 = v4 >> 12;
    while ( 1 )
    {
      v13 = v10;
      if ( !v10 )
        goto LABEL_50;
      if ( v11 < (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) )
      {
        v12 = *(_QWORD *)v10;
      }
      else
      {
        if ( v11 <= (*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) )
        {
          if ( v9 == 17 )
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
          else
            ExReleaseSpinLockShared((PEX_SPIN_LOCK)(Process + 1280), v9);
          return 1LL;
        }
        v12 = *(_QWORD *)(v10 + 8);
      }
      if ( !v12 )
        break;
      v10 = v12;
    }
    if ( (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) < v11 )
    {
      v13 = *(_QWORD *)(v10 + 8);
      if ( v13 )
      {
        for ( i = *(_QWORD **)v13; i; i = (_QWORD *)*i )
          v13 = (unsigned __int64)i;
      }
      else
      {
        for ( j = *(_QWORD *)(v10 + 16); ; j = *(_QWORD *)(v13 + 16) )
        {
          v13 = j & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v13 || *(_QWORD *)v13 == v10 )
            break;
          v10 = v13;
        }
      }
      if ( !v13 )
      {
LABEL_50:
        if ( v9 == 17 )
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
        else
          ExReleaseSpinLockShared((PEX_SPIN_LOCK)(Process + 1280), v9);
        goto LABEL_25;
      }
    }
    v2 = (*(unsigned int *)(v13 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 32) << 32)) << 12;
    if ( v9 == 17 )
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    else
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(Process + 1280), v9);
    goto LABEL_23;
  }
  if ( v9 == 17 )
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  else
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(Process + 1280), v9);
  return 0LL;
}
