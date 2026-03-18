/*
 * XREFs of CmpDoReconcileNextHive @ 0x1403D3EDC
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     CmpGetNextFailedUnloadHive @ 0x1400F24E8 (CmpGetNextFailedUnloadHive.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x1403D3FF0 (CmpIsHiveEligibleForLazyReconcile.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x1403D4388 (HvGetEffectiveLogSizeCapForHive.c)
 *     HvFreeHive @ 0x1403D8128 (HvFreeHive.c)
 *     CmpGetNextActiveHive @ 0x1403DE2DC (CmpGetNextActiveHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x140499190 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpCmdHiveClose @ 0x140499208 (CmpCmdHiveClose.c)
 *     CmpDoFileSetSizeEx @ 0x1404BC2A4 (CmpDoFileSetSizeEx.c)
 */

char __fastcall CmpDoReconcileNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  char v2; // si
  unsigned __int64 v3; // r14
  ULONG_PTR v6; // rcx
  ULONG_PTR NextActiveHive; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 UnbiasedInterruptTime; // rbp
  unsigned __int64 v10; // rcx
  __int64 NextFailedUnloadHive; // rbx
  __int64 v13; // rbp
  __int64 v14; // rax
  signed __int8 v15; // cf
  __int64 v16; // rdi
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  signed __int64 v19; // rcx
  ULONG_PTR v20; // rtt
  unsigned int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9

  v2 = 0;
  v3 = 10000000LL * (unsigned int)dword_1402C7514;
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
        HvGetEffectiveLogSizeCapForHive(NextActiveHive);
        if ( (int)CmpFlushHive(NextActiveHive) < 0 )
        {
          *a1 = 1;
          v8 = UnbiasedInterruptTime + 10000000LL * (unsigned int)dword_1402C751C;
        }
      }
      else if ( *(_DWORD *)(NextActiveHive + 112) )
      {
        v2 = 1;
        v10 = *(_QWORD *)(NextActiveHive + 5392) + 10000000LL * (unsigned int)dword_1402C7510;
        if ( UnbiasedInterruptTime < v10 )
          v8 = v10 - UnbiasedInterruptTime;
      }
      v6 = NextActiveHive;
      if ( v8 < v3 )
        v3 = v8;
    }
    NextFailedUnloadHive = CmpGetNextFailedUnloadHive(0LL);
    if ( NextFailedUnloadHive )
    {
      do
      {
        v13 = CmpGetNextFailedUnloadHive(NextFailedUnloadHive);
        if ( (int)CmpFlushHive(NextFailedUnloadHive) >= 0 )
        {
          v14 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
          v15 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
          v16 = v14;
          if ( v15 )
            ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v14, (ULONG_PTR)&CmpHiveListHeadLock);
          if ( v16 )
            *(_BYTE *)(v16 + 26) |= 1u;
          v17 = *(_QWORD *)(NextFailedUnloadHive + 2760);
          v18 = *(_QWORD **)(NextFailedUnloadHive + 2768);
          if ( *(_QWORD *)(v17 + 8) != NextFailedUnloadHive + 2760 || *v18 != NextFailedUnloadHive + 2760 )
            __fastfail(3u);
          *v18 = v17;
          *(_QWORD *)(v17 + 8) = v18;
          _m_prefetchw(&CmpHiveListHeadLock);
          if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v19 = 0LL;
          else
            v19 = CmpHiveListHeadLock - 16;
          if ( (CmpHiveListHeadLock & 2) != 0
            || (v20 = CmpHiveListHeadLock,
                v20 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpHiveListHeadLock,
                         v19,
                         CmpHiveListHeadLock)) )
          {
            ExfReleasePushLock(&CmpHiveListHeadLock);
          }
          KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
          v21 = *(_DWORD *)(NextFailedUnloadHive + 1400) + 4096;
          HvFreeHive(NextFailedUnloadHive);
          if ( (*(_DWORD *)(NextFailedUnloadHive + 144) & 0x8000) == 0
            && (__int64)(*(_QWORD *)(NextFailedUnloadHive + 2968) - v21) > 0x100000 )
          {
            CmpDoFileSetSizeEx(NextFailedUnloadHive, 0LL, v21, 0LL);
          }
          CmpCmdHiveClose(NextFailedUnloadHive);
          CmpSignalUnloadEventArrayForHive(NextFailedUnloadHive);
          CmpLockRegistry(v23, v22, v24, v25);
          CmpDereferenceKeyControlBlock(*(_QWORD *)(NextFailedUnloadHive + 4104));
          CmpUnlockRegistry();
        }
        else
        {
          v2 = 1;
        }
        NextFailedUnloadHive = v13;
      }
      while ( v13 );
    }
    if ( v2 )
      *a2 = v3;
  }
  return v2;
}
