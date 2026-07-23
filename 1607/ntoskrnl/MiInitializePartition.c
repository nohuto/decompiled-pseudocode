/*
 * XREFs of MiInitializePartition @ 0x14054F230
 * Callers:
 *     MiCreatePartition @ 0x14066028C (MiCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x14078F270 (MiCreatePfnDatabase.c)
 * Callees:
 *     MiInitializeCommitment @ 0x1400019CC (MiInitializeCommitment.c)
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KeInitializeGate @ 0x1400ADD84 (KeInitializeGate.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiInitializePfnListHead @ 0x14013B7C4 (MiInitializePfnListHead.c)
 *     MiInitializeCombining @ 0x14013B7E4 (MiInitializeCombining.c)
 *     MiInitializeSections @ 0x14054F6D0 (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x14054F834 (MiInitializeNuma.c)
 *     MiInitializeLargePageNodeLists @ 0x14054FAD8 (MiInitializeLargePageNodeLists.c)
 */

__int64 __fastcall MiInitializePartition(__int64 a1, __int16 a2)
{
  int v3; // eax
  struct _KEVENT *v4; // rcx
  __int64 v5; // r14
  int v6; // r8d
  int v7; // ecx
  __int64 *v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // edx
  int v11; // r11d
  int v12; // r11d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // ecx
  unsigned int v19; // edi
  __int64 i; // rbx
  signed int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct _KEVENT *v26; // rbx
  __int64 v27; // rbp
  __int64 v28; // rcx
  struct _KEVENT *v29; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  _BYTE *v31; // rax
  signed __int8 v32; // cf
  _BYTE *v33; // rbx

  *(_WORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = 305535296;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 16) = 1LL;
  v3 = 0;
  *(_QWORD *)(a1 + 4352) = 0LL;
  v4 = (struct _KEVENT *)(a1 + 144);
  v5 = 16LL;
  if ( (int *)a1 != MiSystemPartition )
    v3 = 16;
  *(_DWORD *)(a1 + 4) = v3;
  KeInitializeEvent(v4, NotificationEvent, 0);
  v6 = dword_140326A3C;
  v7 = 0;
  v8 = (__int64 *)(a1 + 1728);
  do
  {
    v9 = *v8;
    v10 = 0;
    if ( v6 )
    {
      do
      {
        *(_DWORD *)(v9 + 8) = v7;
        ++v10;
        *(_QWORD *)(v9 + 16) = 0xFFFFFFFFFLL;
        *(_QWORD *)(v9 + 24) = 0xFFFFFFFFFLL;
        *(_QWORD *)v9 = 0LL;
        *(_QWORD *)(v9 + 32) = 0LL;
        v9 += 40LL;
        v6 = dword_140326A3C;
      }
      while ( v10 < dword_140326A3C );
    }
    ++v7;
    ++v8;
  }
  while ( v7 <= 1 );
  MiInitializePfnListHead(a1 + 1792, 0);
  MiInitializePfnListHead(a1 + 1856, 1);
  MiInitializePfnListHead(a1 + 1920, 2);
  MiInitializePfnListHead(a1 + 3712, v11 + 3);
  v13 = a1 + 1984;
  do
  {
    MiInitializePfnListHead(v13, v12);
    v13 = v16 + 40;
  }
  while ( v17 != 1 );
  *(_QWORD *)(a1 + 3752) = a1 + 1792;
  *(_QWORD *)(a1 + 3760) = v14;
  *(_QWORD *)(a1 + 3768) = v15;
  MiInitializeLargePageNodeLists(a1);
  v18 = dword_140326A3C;
  v19 = 0;
  for ( i = *(_QWORD *)(a1 + 1744); v19 < 2 * dword_140326A3C; ++v19 )
  {
    InitializeSListHead((PSLIST_HEADER)(i + 16LL * v19));
    v18 = dword_140326A3C;
  }
  v21 = (unsigned int)(*(_QWORD *)(a1 + 6288) >> 10) / v18;
  v22 = 3LL;
  if ( !v21 )
    v21 = 1;
  if ( v21 > 16 )
    v21 = 16;
  *(_DWORD *)(a1 + 5788) = v21;
  MiInitializePfnListHead(a1 + 7232, 3);
  MiInitializePfnListHead(a1 + 7296, 4);
  MiInitializePfnListHead(a1 + 2304, 3);
  v23 = a1 + 2368;
  do
  {
    MiInitializePfnListHead(v23, 3);
    v23 = v24 + 40;
  }
  while ( v25 != 1 );
  v26 = (struct _KEVENT *)(a1 + 3848);
  v27 = a1 + 3008;
  do
  {
    MiInitializePfnListHead(v27, 3);
    KeInitializeEvent(v26, SynchronizationEvent, 0);
    v27 += 40LL;
    ++v26;
    --v5;
  }
  while ( v5 );
  MiInitializePfnListHead(a1 + 3648, 5);
  *(_QWORD *)(a1 + 3792) = v28;
  *(_QWORD *)(a1 + 3776) = a1 + 7232;
  *(_QWORD *)(a1 + 3784) = a1 + 7296;
  *(_QWORD *)(a1 + 4232) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4240) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4248) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4256) = 0xFFFFFFFEFFFFFFFEuLL;
  KeInitializeEvent((PRKEVENT)(a1 + 5760), NotificationEvent, 0);
  v29 = (struct _KEVENT *)(a1 + 4360);
  do
  {
    KeInitializeEvent(v29, NotificationEvent, 1u);
    v29 = (struct _KEVENT *)((char *)v29 + 32);
    --v22;
  }
  while ( v22 );
  *(_QWORD *)(a1 + 224) = 0LL;
  KeInitializeEvent((PRKEVENT)(a1 + 240), NotificationEvent, 0);
  memset64((void *)(a1 + 264), a1 + 240, 0xBuLL);
  *(_QWORD *)(a1 + 6264) = a1 + 6256;
  *(_QWORD *)(a1 + 6256) = a1 + 6256;
  KeInitializeEvent((PRKEVENT)(a1 + 704), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 648), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 672), NotificationEvent, 0);
  *(_DWORD *)(a1 + 632) = 18;
  KeInitializeEvent((PRKEVENT)(a1 + 608), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 792), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 920), NotificationEvent, 0);
  KeInitializeGate(a1 + 560);
  *(_QWORD *)(a1 + 552) = a1 + 544;
  *(_QWORD *)(a1 + 544) = a1 + 544;
  KeInitializeEvent((PRKEVENT)(a1 + 832), SynchronizationEvent, 0);
  *(_QWORD *)(a1 + 824) = a1 + 816;
  *(_QWORD *)(a1 + 816) = a1 + 816;
  if ( (int *)a1 != MiSystemPartition )
    MiInitializeCommitment(a1);
  MiInitializeNuma(a1);
  *(_QWORD *)(a1 + 1040) = 0LL;
  *(_QWORD *)(a1 + 1016) = MiContractWsSwapPageFileWorker;
  *(_QWORD *)(a1 + 1024) = a1;
  *(_QWORD *)(a1 + 1000) = 0LL;
  *(_DWORD *)(a1 + 1060) = -1;
  KeInitializeEvent((PRKEVENT)(a1 + 1096), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1120), NotificationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)(a1 + 1152));
  MiInitializeSections(a1);
  MiInitializeCombining(a1, (_QWORD *)(a1 + 5856));
  if ( (int *)a1 == MiSystemPartition )
    MiInitializeCombining(a1, qword_140326E58);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v31 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326FF8, 0LL, 0);
  v32 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140326FF8, 0LL);
  v33 = v31;
  if ( v32 )
    ExfAcquirePushLockExclusiveEx(&qword_140326FF8, v31, (ULONG_PTR)&qword_140326FF8);
  if ( v33 )
    v33[26] |= 1u;
  *(_DWORD *)(a1 + 4) |= 4u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326FF8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326FF8);
  KeAbPostRelease((ULONG_PTR)&qword_140326FF8);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
