/*
 * XREFs of MiInitializePartition @ 0x1405201DC
 * Callers:
 *     MiCreatePartition @ 0x140624224 (MiCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x14074882C (MiCreatePfnDatabase.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeInitializeGate @ 0x1400EF318 (KeInitializeGate.c)
 *     InitializeSListHead @ 0x1400F8DC8 (InitializeSListHead.c)
 *     MiInitializeLargePageNodeLists @ 0x140131F70 (MiInitializeLargePageNodeLists.c)
 *     MiInitializePfnListHead @ 0x140131FC4 (MiInitializePfnListHead.c)
 *     MiInitializeCombining @ 0x140131FE4 (MiInitializeCombining.c)
 *     MiInitializeCommitment @ 0x14013A1E4 (MiInitializeCommitment.c)
 *     MiInitializeSections @ 0x140520684 (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x140520784 (MiInitializeNuma.c)
 */

__int64 __fastcall MiInitializePartition(unsigned __int64 a1, __int16 a2)
{
  int v3; // r8d
  __int64 *v4; // rdx
  int i; // ecx
  __int64 v6; // rax
  unsigned int v7; // edi
  int v8; // r11d
  int v9; // r11d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // r9
  unsigned int v15; // ecx
  unsigned int v16; // edi
  __int64 j; // rbx
  signed int v18; // eax
  __int64 v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _KEVENT *v24; // rbx
  __int64 v25; // rbp
  __int64 v26; // rcx
  struct _KEVENT *v27; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v29; // rax
  signed __int8 v30; // cf
  __int64 v31; // rbx

  *(_WORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 4224) = 0LL;
  *(_QWORD *)(a1 + 8) = 1LL;
  KeInitializeEvent((PRKEVENT)(a1 + 136), NotificationEvent, 0);
  v3 = dword_1402FE70C;
  v4 = (__int64 *)(a1 + 1600);
  for ( i = 0; i <= 1; ++i )
  {
    v6 = *v4;
    v7 = 0;
    if ( v3 )
    {
      do
      {
        *(_DWORD *)(v6 + 8) = i;
        ++v7;
        *(_QWORD *)(v6 + 16) = 0xFFFFFFFFFLL;
        *(_QWORD *)(v6 + 24) = 0xFFFFFFFFFLL;
        *(_QWORD *)v6 = 0LL;
        *(_QWORD *)(v6 + 32) = 0LL;
        v6 += 40LL;
        v3 = dword_1402FE70C;
      }
      while ( v7 < dword_1402FE70C );
    }
    ++v4;
  }
  MiInitializePfnListHead(a1 + 1664, 0);
  MiInitializePfnListHead(a1 + 1728, 1);
  MiInitializePfnListHead(a1 + 1792, 2);
  MiInitializePfnListHead(a1 + 3584, v8 + 3);
  v10 = a1 + 1856;
  do
  {
    MiInitializePfnListHead(v10, v9);
    v10 = v13 + 40;
  }
  while ( v14 != 1 );
  *(_QWORD *)(a1 + 3624) = a1 + 1664;
  *(_QWORD *)(a1 + 3632) = v11;
  *(_QWORD *)(a1 + 3640) = v12;
  MiInitializeLargePageNodeLists(a1);
  v15 = dword_1402FE70C;
  v16 = 0;
  for ( j = *(_QWORD *)(a1 + 1616); v16 < 2 * dword_1402FE70C; ++v16 )
  {
    InitializeSListHead((PSLIST_HEADER)(j + 16LL * v16));
    v15 = dword_1402FE70C;
  }
  v18 = (unsigned int)(*(_QWORD *)(a1 + 5712) >> 10) / v15;
  v19 = 16LL;
  if ( !v18 )
    v18 = 1;
  v20 = 3LL;
  if ( v18 > 16 )
    v18 = 16;
  *(_DWORD *)(a1 + 5148) = v18;
  MiInitializePfnListHead(a1 + 6016, 3);
  MiInitializePfnListHead(a1 + 6080, 4);
  MiInitializePfnListHead(a1 + 2176, 3);
  v21 = a1 + 2240;
  do
  {
    MiInitializePfnListHead(v21, 3);
    v21 = v22 + 40;
  }
  while ( v23 != 1 );
  v24 = (struct _KEVENT *)(a1 + 3720);
  v25 = a1 + 2880;
  do
  {
    MiInitializePfnListHead(v25, 3);
    KeInitializeEvent(v24, SynchronizationEvent, 0);
    v25 += 40LL;
    ++v24;
    --v19;
  }
  while ( v19 );
  MiInitializePfnListHead(a1 + 3520, 5);
  *(_QWORD *)(a1 + 3664) = v26;
  *(_QWORD *)(a1 + 3648) = a1 + 6016;
  *(_QWORD *)(a1 + 3656) = a1 + 6080;
  *(_QWORD *)(a1 + 4104) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4112) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4120) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 4128) = 0xFFFFFFFEFFFFFFFEuLL;
  KeInitializeEvent((PRKEVENT)(a1 + 5120), NotificationEvent, 0);
  v27 = (struct _KEVENT *)(a1 + 4232);
  do
  {
    KeInitializeEvent(v27, NotificationEvent, 1u);
    v27 = (struct _KEVENT *)((char *)v27 + 32);
    --v20;
  }
  while ( v20 );
  *(_QWORD *)(a1 + 216) = 0LL;
  KeInitializeEvent((PRKEVENT)(a1 + 232), NotificationEvent, 0);
  memset64((void *)(a1 + 256), a1 + 232, 0xBuLL);
  *(_QWORD *)(a1 + 4928) = a1 + 4920;
  *(_QWORD *)(a1 + 4920) = a1 + 4920;
  *(_QWORD *)(a1 + 5632) = a1 + 5624;
  *(_QWORD *)(a1 + 5624) = a1 + 5624;
  KeInitializeEvent((PRKEVENT)(a1 + 712), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 656), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 680), NotificationEvent, 0);
  *(_DWORD *)(a1 + 640) = 18;
  KeInitializeEvent((PRKEVENT)(a1 + 616), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 800), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 928), NotificationEvent, 0);
  KeInitializeGate(a1 + 568);
  *(_QWORD *)(a1 + 560) = a1 + 552;
  *(_QWORD *)(a1 + 552) = a1 + 552;
  KeInitializeEvent((PRKEVENT)(a1 + 840), SynchronizationEvent, 0);
  *(_QWORD *)(a1 + 832) = a1 + 824;
  *(_QWORD *)(a1 + 824) = a1 + 824;
  if ( (int *)a1 != MiSystemPartition )
    MiInitializeCommitment(a1);
  MiInitializeNuma(a1);
  *(_QWORD *)(a1 + 1048) = 0LL;
  *(_QWORD *)(a1 + 1024) = MiContractWsSwapPageFileWorker;
  *(_QWORD *)(a1 + 1032) = a1;
  *(_QWORD *)(a1 + 1008) = 0LL;
  *(_DWORD *)(a1 + 1076) = -1;
  KeInitializeEvent((PRKEVENT)(a1 + 1112), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1136), NotificationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)(a1 + 1168));
  MiInitializeSections(a1);
  MiInitializeCombining(a1, (_QWORD *)(a1 + 5224));
  if ( (int *)a1 == MiSystemPartition )
    MiInitializeCombining(a1, qword_1402FEA58);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v29 = KeAbPreAcquire((ULONG_PTR)&qword_1402FEBE8, 0LL, 0LL);
  v30 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FEBE8, 0LL);
  v31 = v29;
  if ( v30 )
    ExfAcquirePushLockExclusiveEx(&qword_1402FEBE8, v29, (ULONG_PTR)&qword_1402FEBE8);
  if ( v31 )
    *(_BYTE *)(v31 + 26) |= 1u;
  *(_DWORD *)(a1 + 4) |= 4u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FEBE8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FEBE8);
  KeAbPostRelease((ULONG_PTR)&qword_1402FEBE8);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
