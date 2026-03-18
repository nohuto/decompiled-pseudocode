/*
 * XREFs of MiInitializePartition @ 0x140596C34
 * Callers:
 *     MiCreatePartition @ 0x1406A3A54 (MiCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x1407C444C (MiCreatePfnDatabase.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x1400D9F4C (InitializeSListHead.c)
 *     KeInitializeGate @ 0x14012F290 (KeInitializeGate.c)
 *     MiInitializeLargePageNodeLists @ 0x14015F898 (MiInitializeLargePageNodeLists.c)
 *     MiInitializePfnListHead @ 0x14015F8EC (MiInitializePfnListHead.c)
 *     MiInitializeCombining @ 0x14015F90C (MiInitializeCombining.c)
 *     MiInitializeCommitment @ 0x14016BB7C (MiInitializeCommitment.c)
 *     MiInitializeSections @ 0x140597028 (MiInitializeSections.c)
 *     MiInitializeNuma @ 0x140597144 (MiInitializeNuma.c)
 */

_QWORD *__fastcall MiInitializePartition(__int64 a1, __int16 a2)
{
  int v3; // r8d
  __int64 *v4; // rdx
  int i; // ecx
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned int v14; // ecx
  unsigned int v15; // edi
  __int64 j; // rbp
  signed int v17; // eax
  __int64 v18; // r14
  int v19; // r8d
  int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rcx
  struct _KEVENT *v24; // rdi
  __int64 v25; // rbp
  __int64 v26; // rcx
  struct _KEVENT *v27; // rdi
  _QWORD *result; // rax

  *(_WORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 4032) = 0LL;
  *(_QWORD *)(a1 + 8) = 1LL;
  KeInitializeEvent((PRKEVENT)(a1 + 152), NotificationEvent, 0);
  v3 = dword_14034EBBC;
  v4 = (__int64 *)(a1 + 1472);
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
        v3 = dword_14034EBBC;
      }
      while ( v7 < dword_14034EBBC );
    }
    ++v4;
  }
  MiInitializePfnListHead(a1 + 1536, 0);
  MiInitializePfnListHead(a1 + 1600, 1);
  v8 = 2LL;
  MiInitializePfnListHead(a1 + 1664, 2);
  v9 = a1 + 1728;
  do
  {
    MiInitializePfnListHead(v9, 2);
    v9 = v12 + 40;
  }
  while ( v13 != 1 );
  *(_QWORD *)(a1 + 3432) = a1 + 1536;
  *(_QWORD *)(a1 + 3440) = v10;
  *(_QWORD *)(a1 + 3448) = v11;
  MiInitializeLargePageNodeLists(a1);
  v14 = dword_14034EBBC;
  v15 = 0;
  for ( j = *(_QWORD *)(a1 + 1488); v15 < 2 * dword_14034EBBC; ++v15 )
  {
    InitializeSListHead((PSLIST_HEADER)(j + 16LL * v15));
    v14 = dword_14034EBBC;
  }
  v17 = (unsigned int)(*(_QWORD *)(a1 + 5328) >> 10) / v14;
  v18 = 16LL;
  if ( !v17 )
    v17 = 1;
  if ( v17 > 16 )
    v17 = 16;
  *(_DWORD *)(a1 + 4820) = v17;
  MiInitializePfnListHead(a1 + 5632, 3);
  MiInitializePfnListHead(a1 + 5696, 4);
  MiInitializePfnListHead(a1 + 2048, v19);
  v21 = a1 + 2112;
  v22 = 16LL;
  do
  {
    MiInitializePfnListHead(v21, v20);
    v21 = v23 + 40;
    --v22;
  }
  while ( v22 );
  v24 = (struct _KEVENT *)(a1 + 3528);
  v25 = a1 + 2752;
  do
  {
    MiInitializePfnListHead(v25, v20);
    KeInitializeEvent(v24++, SynchronizationEvent, 0);
    v25 += 40LL;
    v20 = 3;
    --v18;
  }
  while ( v18 );
  MiInitializePfnListHead(a1 + 3392, 5);
  *(_QWORD *)(a1 + 3472) = v26;
  *(_QWORD *)(a1 + 3456) = a1 + 5632;
  *(_QWORD *)(a1 + 3464) = a1 + 5696;
  *(_QWORD *)(a1 + 3912) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 3920) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 3928) = 0xFFFFFFFEFFFFFFFEuLL;
  *(_QWORD *)(a1 + 3936) = 0xFFFFFFFEFFFFFFFEuLL;
  KeInitializeEvent((PRKEVENT)(a1 + 4792), NotificationEvent, 0);
  v27 = (struct _KEVENT *)(a1 + 4040);
  do
  {
    KeInitializeEvent(v27, NotificationEvent, 1u);
    v27 = (struct _KEVENT *)((char *)v27 + 32);
    --v8;
  }
  while ( v8 );
  *(_QWORD *)(a1 + 232) = 0LL;
  KeInitializeEvent((PRKEVENT)(a1 + 248), NotificationEvent, 0);
  memset64((void *)(a1 + 272), a1 + 248, 0xBuLL);
  *(_QWORD *)(a1 + 5272) = a1 + 5264;
  *(_QWORD *)(a1 + 5264) = a1 + 5264;
  KeInitializeEvent((PRKEVENT)(a1 + 704), SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 672), SynchronizationEvent, 0);
  *(_DWORD *)(a1 + 656) = 18;
  KeInitializeEvent((PRKEVENT)(a1 + 632), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 792), NotificationEvent, 0);
  KeInitializeGate(a1 + 584);
  *(_QWORD *)(a1 + 576) = a1 + 568;
  *(_QWORD *)(a1 + 568) = a1 + 568;
  KeInitializeEvent((PRKEVENT)(a1 + 832), SynchronizationEvent, 0);
  *(_QWORD *)(a1 + 824) = a1 + 816;
  *(_QWORD *)(a1 + 816) = a1 + 816;
  if ( (__int16 *)a1 != MiSystemPartition )
    MiInitializeCommitment(a1);
  MiInitializeNuma(a1);
  *(_QWORD *)(a1 + 1016) = 0LL;
  *(_QWORD *)(a1 + 992) = MiContractWsSwapPageFileWorker;
  *(_QWORD *)(a1 + 1000) = a1;
  *(_QWORD *)(a1 + 976) = 0LL;
  *(_DWORD *)(a1 + 1044) = -1;
  KeInitializeEvent((PRKEVENT)(a1 + 1080), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 1104), NotificationEvent, 0);
  InitializeSListHead((PSLIST_HEADER)(a1 + 1136));
  MiInitializeSections(a1);
  result = MiInitializeCombining(a1, (_QWORD *)(a1 + 4864));
  if ( (__int16 *)a1 == MiSystemPartition )
    return MiInitializeCombining(a1, qword_14034EF18);
  return result;
}
