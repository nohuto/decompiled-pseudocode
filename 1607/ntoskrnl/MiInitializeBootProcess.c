/*
 * XREFs of MiInitializeBootProcess @ 0x1407B7300
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiMarkPageActive @ 0x1400214D4 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x140021708 (MiInitializePfnForOtherProcess.c)
 *     MiChargeCommit @ 0x14002B650 (MiChargeCommit.c)
 *     MiMakeValidKernelPte @ 0x140034D10 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x14003DA50 (MiGetPage.c)
 *     MiChargeWsles @ 0x1400E1B20 (MiChargeWsles.c)
 *     MiInitializePageColorBase @ 0x1400E60A0 (MiInitializePageColorBase.c)
 *     MiChargeResident @ 0x140103450 (MiChargeResident.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MmInitializeProcessAddressSpace @ 0x14046D378 (MmInitializeProcessAddressSpace.c)
 */

__int64 __fastcall MiInitializeBootProcess(__int64 a1)
{
  unsigned int v1; // r14d
  ULONG_PTR Process; // rsi
  unsigned __int64 v4; // rbx
  _QWORD *v5; // r12
  __int64 v6; // rdi
  __int16 v7; // ax
  int v8; // ecx
  _WORD *v9; // r15
  __int64 Page; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 *v15; // rdx
  _QWORD *v16; // rdi
  unsigned __int64 *v17; // r15
  __int64 v18; // rcx
  ULONG_PTR v19; // rsi
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  int v23; // [rsp+3Ch] [rbp-25h] BYREF
  _WORD *v24; // [rsp+40h] [rbp-21h] BYREF
  __int16 v25; // [rsp+48h] [rbp-19h]
  unsigned __int16 v26; // [rsp+4Ah] [rbp-17h]
  ULONG_PTR BugCheckParameter1; // [rsp+50h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v29[4]; // [rsp+70h] [rbp+Fh] BYREF

  v1 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !qword_1403A9180 )
    qword_1403A9180 = 0x100000LL;
  if ( !qword_1403A9178 )
    qword_1403A9178 = 0x2000LL;
  if ( !qword_1403A9170 )
    qword_1403A9170 = 0x10000LL;
  if ( !qword_1403A9168 )
    qword_1403A9168 = 4096LL;
  Process = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
  BugCheckParameter1 = Process;
  MiChargeWsles(Process + 1280, 50LL, 0);
  *(_QWORD *)(Process + 1384) = 50LL;
  *(_QWORD *)(Process + 1424) = 450LL;
  v4 = ~qword_1403A9350 & (MiMakeValidKernelPte(-1LL, 6, 0LL) & 0xFFFFFFFFFFFFFEBDuLL | 0x42);
  v5 = 0LL;
  MiInitializePageColorBase(Process + 1280, 0, (__int64)&v24);
  v6 = 4LL;
  MiChargeResident(MiSystemPartition, 4uLL, 0LL);
  MiChargeCommit((__int64)MiSystemPartition, 4uLL, 1);
  v7 = v25;
  v8 = v26;
  v9 = v24;
  do
  {
    Page = MiGetPage((__int64)MiSystemPartition, v8 | (unsigned int)(unsigned __int16)(v7 & ++*v9), 0xC2u);
    v11 = Page;
    if ( Page == -1 )
      return 0LL;
    v12 = 3 * Page;
    v7 = v25;
    v13 = (_QWORD *)(16 * v12 - 0x58000000000LL);
    v8 = v26;
    ++v1;
    *v13 = v5;
    v5 = v13;
  }
  while ( v1 < 4 );
  v14 = (((unsigned __int64)(qword_140327F90 + 276840816) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = v29;
  do
  {
    *v15 = v14;
    v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    ++v15;
    --v6;
  }
  while ( v6 );
  *(_QWORD *)(Process + 864) = v11;
  LODWORD(Process) = 4;
  do
  {
    v16 = v5;
    v5 = (_QWORD *)*v5;
    Process = (unsigned int)(Process - 1);
    v17 = (unsigned __int64 *)v29[Process];
    MiInitializePfnForOtherProcess((__int64)(v16 + 0xB000000000LL) / 48, (__int64)v17, a1, 0);
    *v16 = 0LL;
    MiMarkPageActive((__int64)v16);
    v4 ^= (v4 ^ (((__int64)(v16 + 0xB000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
    if ( !v5 )
      v4 = ~qword_1403A9350 & (v4 | 0x8000000000000100uLL) ^ ((unsigned __int16)~(_WORD)qword_1403A9350 ^ (unsigned __int16)(HIBYTE(word_140326AA8) << 8)) & 0x100;
    *v17 = v4;
    if ( MiPteInShadowRange((unsigned __int64)v17) )
      MiWritePteShadow(v18, v4);
    a1 = (__int64)(v16 + 0xB000000000LL) / 48;
  }
  while ( v5 );
  v19 = BugCheckParameter1;
  *(_QWORD *)(48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) = BugCheckParameter1;
  _InterlockedOr((volatile signed __int32 *)(v19 + 772), 0x800u);
  KeAcquireInStackQueuedSpinLock(&qword_140327740, &LockHandle);
  v20 = (_QWORD *)qword_140326980;
  v21 = (_QWORD *)(v19 + 1552);
  if ( *(__int64 **)qword_140326980 != &qword_140326978 )
    __fastfail(3u);
  *(_QWORD *)(v19 + 1560) = qword_140326980;
  *v21 = &qword_140326978;
  *v20 = v21;
  qword_140326980 = v19 + 1552;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v23 = 0;
  return MmInitializeProcessAddressSpace(v19, 0LL, 0LL, &v23, 0);
}
