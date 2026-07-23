/*
 * XREFs of MiLeapPrefetch @ 0x1401E828C
 * Callers:
 *     MiResolvePageTablePage @ 0x14003F890 (MiResolvePageTablePage.c)
 *     MiPrefetchVirtualMemory @ 0x1400BDB30 (MiPrefetchVirtualMemory.c)
 *     MiPrefetchJumpVad @ 0x1401E85C4 (MiPrefetchJumpVad.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002B9E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     KeAbPostReleaseEx @ 0x1400C455C (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400C5AB8 (ExfTryAcquirePushLockShared.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiLeapPrefetch(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  char Queue; // al
  __int64 Process; // rsi
  unsigned __int64 v8; // r14
  LONG *SharedVm; // r14
  KIRQL v10; // r9
  LONG *v11; // rax
  KIRQL v12; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  LONG *v18; // rax
  KIRQL v19; // r9
  _QWORD *i; // rax
  __int64 j; // r8
  _QWORD *v22; // rax
  unsigned __int64 v23; // r8
  LONG *v24; // rax
  KIRQL v25; // r9
  LONG *v26; // rax
  KIRQL v27; // r9

  v2 = a2;
  if ( a2 )
  {
LABEL_45:
    v22 = (_QWORD *)(a1[1] + 16LL * a1[3]);
    v23 = *v22 & 0xFFFFFFFFFFFFF000uLL;
    if ( v2 < v23 || v2 >= v23 + (((*(_DWORD *)v22 & 0xFFF) + v22[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
    {
LABEL_51:
      ++a1[3];
      a1[4] = 0LL;
    }
    else
    {
      a1[4] = (v2 - v23) >> 12;
    }
    return 1LL;
  }
  v4 = *(_QWORD *)(a1[1] + 16LL * a1[3]) + (a1[4] << 12);
  if ( v4 > 0x7FFFFFFEFFFFLL )
    return 1LL;
  CurrentThread = KeGetCurrentThread();
  Queue = (char)CurrentThread[1].Queue;
  if ( Queue < 0 || (Queue & 3) != 0 )
    return 1LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(Process + 872, 0LL, 1);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(Process + 872), 17LL, 0LL)
    || ExfTryAcquirePushLockShared((signed __int64 *)(Process + 872)) )
  {
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    LOBYTE(CurrentThread[1].Queue) |= 2u;
    v10 = 17;
  }
  else
  {
    if ( v8 )
      KeAbPostReleaseEx(Process + 872, v8);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    SharedVm = MiGetSharedVm(Process + 1280);
    v10 = ExAcquireSpinLockShared(SharedVm);
    if ( SharedVm[1] )
      _InterlockedExchange(SharedVm + 1, 0);
  }
  if ( (*(_DWORD *)(Process + 772) & 0x20) == 0 && *(_QWORD *)(Process + 1592) )
  {
    v14 = *(_QWORD *)(Process + 1568);
    v15 = v4 >> 12;
    while ( 1 )
    {
      v16 = v14;
      if ( !v14 )
        goto LABEL_49;
      if ( v15 < (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) )
      {
        v17 = *(_QWORD *)v14;
      }
      else
      {
        if ( v15 <= (*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) )
        {
          if ( v10 == 17 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
          }
          else
          {
            v18 = MiGetSharedVm(Process + 1280);
            ExReleaseSpinLockShared(v18, v19);
          }
          return 1LL;
        }
        v17 = *(_QWORD *)(v14 + 8);
      }
      if ( !v17 )
      {
        if ( (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) >= v15 )
          goto LABEL_43;
        v16 = *(_QWORD *)(v14 + 8);
        if ( v16 )
        {
          for ( i = *(_QWORD **)v16; i; i = (_QWORD *)*i )
            v16 = (unsigned __int64)i;
        }
        else
        {
          for ( j = *(_QWORD *)(v14 + 16); ; j = *(_QWORD *)(v16 + 16) )
          {
            v16 = j & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v16 || *(_QWORD *)v16 == v14 )
              break;
            v14 = v16;
          }
        }
        if ( v16 )
        {
LABEL_43:
          v2 = (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32)) << 12;
          if ( v10 == 17 )
          {
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
          }
          else
          {
            v24 = MiGetSharedVm(Process + 1280);
            ExReleaseSpinLockShared(v24, v25);
          }
          goto LABEL_45;
        }
LABEL_49:
        if ( v10 == 17 )
        {
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
        }
        else
        {
          v26 = MiGetSharedVm(Process + 1280);
          ExReleaseSpinLockShared(v26, v27);
        }
        goto LABEL_51;
      }
      v14 = v17;
    }
  }
  if ( v10 == 17 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  }
  else
  {
    v11 = MiGetSharedVm(Process + 1280);
    ExReleaseSpinLockShared(v11, v12);
  }
  return 0LL;
}
