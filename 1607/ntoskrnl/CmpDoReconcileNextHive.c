/*
 * XREFs of CmpDoReconcileNextHive @ 0x14047F42C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     CmpGetNextFailedUnloadHive @ 0x140081E5C (CmpGetNextFailedUnloadHive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x1403FA590 (CmpGetNextActiveHive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140403660 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x14047C220 (CmpFlushUnsupportedOperationTelemetry.c)
 *     CmpDoFileSetSizeEx @ 0x14047D650 (CmpDoFileSetSizeEx.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x14047F550 (CmpIsHiveEligibleForLazyReconcile.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x14047FADC (HvGetEffectiveLogSizeCapForHive.c)
 *     HvFreeHive @ 0x1404F76B4 (HvFreeHive.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x140518034 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpCmdHiveClose @ 0x1405180AC (CmpCmdHiveClose.c)
 */

char __fastcall CmpDoReconcileNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  char v2; // si
  unsigned __int64 v3; // r14
  struct _EX_RUNDOWN_REF *v6; // rcx
  __int64 *NextActiveHive; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 UnbiasedInterruptTime; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned int v13; // r10d
  __int64 NextFailedUnloadHive; // rbx
  __int64 v16; // rbp
  _BYTE *v17; // rax
  signed __int8 v18; // cf
  _BYTE *v19; // rdi
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  signed __int64 v22; // rcx
  ULONG_PTR v23; // rtt
  __int64 v24; // rdx
  unsigned int v25; // edi

  v2 = 0;
  v3 = 10000000LL * (unsigned int)dword_1402F28F4;
  if ( !CmpNoWrite )
  {
    v6 = 0LL;
    while ( 1 )
    {
      NextActiveHive = CmpGetNextActiveHive(v6);
      if ( !NextActiveHive )
        break;
      v8 = -1LL;
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      if ( (unsigned __int8)CmpIsHiveEligibleForLazyReconcile(NextActiveHive) )
      {
        if ( *((_DWORD *)NextActiveHive + 40) < (unsigned int)HvGetEffectiveLogSizeCapForHive(NextActiveHive, v10, v11) )
          v13 += 16;
        if ( (int)CmpFlushHive((ULONG_PTR)NextActiveHive, v13) < 0 )
        {
          *a1 = 1;
          v8 = UnbiasedInterruptTime + 10000000LL * (unsigned int)dword_1402F28FC;
        }
      }
      else if ( *((_DWORD *)NextActiveHive + 28) )
      {
        if ( (NextActiveHive[18] & 0x8001) == 0 )
        {
          v2 = 1;
          v12 = NextActiveHive[674] + 10000000LL * (unsigned int)dword_1402F28F0;
          if ( UnbiasedInterruptTime < v12 )
            v8 = v12 - UnbiasedInterruptTime;
        }
      }
      v6 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( v8 < v3 )
        v3 = v8;
    }
    NextFailedUnloadHive = CmpGetNextFailedUnloadHive(0LL);
    if ( NextFailedUnloadHive )
    {
      do
      {
        v16 = CmpGetNextFailedUnloadHive(NextFailedUnloadHive);
        if ( (int)CmpFlushHive(NextFailedUnloadHive, 0xCu) >= 0 )
        {
          v17 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0);
          v18 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
          v19 = v17;
          if ( v18 )
            ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v17, (ULONG_PTR)&CmpHiveListHeadLock);
          if ( v19 )
            v19[26] |= 1u;
          v20 = *(_QWORD *)(NextFailedUnloadHive + 2760);
          v21 = *(_QWORD **)(NextFailedUnloadHive + 2768);
          if ( *(_QWORD *)(v20 + 8) != NextFailedUnloadHive + 2760 || *v21 != NextFailedUnloadHive + 2760 )
            __fastfail(3u);
          *v21 = v20;
          *(_QWORD *)(v20 + 8) = v21;
          _m_prefetchw(&CmpHiveListHeadLock);
          if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v22 = 0LL;
          else
            v22 = CmpHiveListHeadLock - 16;
          if ( (CmpHiveListHeadLock & 2) != 0
            || (v23 = CmpHiveListHeadLock,
                v23 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpHiveListHeadLock,
                         v22,
                         CmpHiveListHeadLock)) )
          {
            ExfReleasePushLock(&CmpHiveListHeadLock);
          }
          KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
          LOBYTE(v24) = 1;
          v25 = *(_DWORD *)(NextFailedUnloadHive + 1400) + 4096;
          HvFreeHive(NextFailedUnloadHive, v24);
          if ( (*(_DWORD *)(NextFailedUnloadHive + 144) & 0x8000) == 0
            && (__int64)(*(_QWORD *)(NextFailedUnloadHive + 2968) - v25) > 0x100000 )
          {
            CmpDoFileSetSizeEx(NextFailedUnloadHive, 0, v25, 0);
          }
          CmpCmdHiveClose(NextFailedUnloadHive);
          CmpSignalUnloadEventArrayForHive(NextFailedUnloadHive);
          CmpLockRegistry();
          CmpDereferenceKeyControlBlock(*(_QWORD *)(NextFailedUnloadHive + 4104));
          CmpUnlockRegistry();
        }
        else
        {
          v2 = 1;
        }
        NextFailedUnloadHive = v16;
      }
      while ( v16 );
    }
    CmpFlushUnsupportedOperationTelemetry();
    if ( v2 )
      *a2 = v3;
  }
  return v2;
}
