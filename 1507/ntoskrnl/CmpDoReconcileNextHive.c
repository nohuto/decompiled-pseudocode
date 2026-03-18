/*
 * XREFs of CmpDoReconcileNextHive @ 0x1404EB558
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CmpGetNextFailedUnloadHive @ 0x1400D26EC (CmpGetNextFailedUnloadHive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     CmpGetNextActiveHive @ 0x140445EE8 (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x14044D690 (HvGetEffectiveLogSizeCapForHive.c)
 *     HvFreeHive @ 0x1404A06B4 (HvFreeHive.c)
 *     CmpDoFileSetSizeEx @ 0x1404AF608 (CmpDoFileSetSizeEx.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404C8650 (CmpDereferenceKeyControlBlock.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x1404EB69C (CmpIsHiveEligibleForLazyReconcile.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x1404EE670 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpCmdHiveClose @ 0x1404EE6E8 (CmpCmdHiveClose.c)
 */

char __fastcall CmpDoReconcileNextHive(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  unsigned __int64 v5; // r14
  _QWORD *v6; // r12
  __int64 *NextActiveHive; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 NextFailedUnloadHive; // rbx
  unsigned __int64 v16; // rcx
  unsigned int v17; // r10d
  __int64 v18; // rsi
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r9
  signed __int8 v22; // cf
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 *v25; // rcx
  signed __int64 v26; // rcx
  ULONG_PTR v27; // rtt
  unsigned int v28; // edi
  __int64 v29; // r8

  v4 = 0;
  v5 = 10000000LL * (unsigned int)dword_1403165F4;
  v6 = (_QWORD *)a2;
  if ( !CmpNoWrite )
  {
    NextActiveHive = CmpGetNextActiveHive(0LL, a2, a3, a4);
    if ( NextActiveHive )
    {
      do
      {
        v9 = -1LL;
        v10 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
        if ( (unsigned __int8)CmpIsHiveEligibleForLazyReconcile(NextActiveHive) )
        {
          if ( *((_DWORD *)NextActiveHive + 40) < (unsigned int)HvGetEffectiveLogSizeCapForHive((__int64)NextActiveHive) )
            v17 += 16;
          if ( (int)CmpFlushHive((ULONG_PTR)NextActiveHive, v17) < 0 )
          {
            *a1 = 1;
            v9 = v10 + 10000000LL * (unsigned int)dword_1403165FC;
          }
        }
        else if ( *((_DWORD *)NextActiveHive + 28) )
        {
          v4 = 1;
          v16 = NextActiveHive[674] + 10000000LL * (unsigned int)dword_1403165F0;
          if ( v10 < v16 )
            v9 = v16 - v10;
        }
        if ( v9 < v5 )
          v5 = v9;
        NextActiveHive = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)NextActiveHive, v11, v12, v13);
      }
      while ( NextActiveHive );
      v6 = (_QWORD *)a2;
    }
    NextFailedUnloadHive = CmpGetNextFailedUnloadHive(0LL);
    if ( NextFailedUnloadHive )
    {
      do
      {
        v18 = CmpGetNextFailedUnloadHive(NextFailedUnloadHive);
        if ( (int)CmpFlushHive(NextFailedUnloadHive, 0xCu) >= 0 )
        {
          v20 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, v19);
          v22 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
          v23 = v20;
          if ( v22 )
            ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v20, (ULONG_PTR)&CmpHiveListHeadLock, v21);
          if ( v23 )
            *(_BYTE *)(v23 + 26) |= 1u;
          v24 = *(_QWORD *)(NextFailedUnloadHive + 2760);
          v25 = *(__int64 **)(NextFailedUnloadHive + 2768);
          if ( *(_QWORD *)(v24 + 8) != NextFailedUnloadHive + 2760 || *v25 != NextFailedUnloadHive + 2760 )
            __fastfail(3u);
          *v25 = v24;
          *(_QWORD *)(v24 + 8) = v25;
          _m_prefetchw(&CmpHiveListHeadLock);
          if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v26 = 0LL;
          else
            v26 = CmpHiveListHeadLock - 16;
          if ( (CmpHiveListHeadLock & 2) != 0
            || (v27 = CmpHiveListHeadLock,
                v27 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpHiveListHeadLock,
                         v26,
                         CmpHiveListHeadLock)) )
          {
            ExfReleasePushLock(&CmpHiveListHeadLock, v24);
          }
          KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
          v28 = *(_DWORD *)(NextFailedUnloadHive + 1400) + 4096;
          HvFreeHive(NextFailedUnloadHive, 1, v29);
          if ( (*(_DWORD *)(NextFailedUnloadHive + 144) & 0x8000) == 0
            && (__int64)(*(_QWORD *)(NextFailedUnloadHive + 2968) - v28) > 0x100000 )
          {
            CmpDoFileSetSizeEx(NextFailedUnloadHive, 0, v28, 0);
          }
          CmpCmdHiveClose(NextFailedUnloadHive);
          CmpSignalUnloadEventArrayForHive(NextFailedUnloadHive);
          CmpLockRegistry();
          CmpDereferenceKeyControlBlock(*(_QWORD *)(NextFailedUnloadHive + 4104));
          CmpUnlockRegistry();
        }
        else
        {
          v4 = 1;
        }
        NextFailedUnloadHive = v18;
      }
      while ( v18 );
    }
    if ( v4 )
      *v6 = v5;
  }
  return v4;
}
