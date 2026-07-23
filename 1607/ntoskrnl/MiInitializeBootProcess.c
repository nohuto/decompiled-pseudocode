/*
 * XREFs of MiInitializeBootProcess @ 0x1407B7300
 * Callers:
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiMarkPageActive @ 0x140021054 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x140021288 (MiInitializePfnForOtherProcess.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MmInitializeProcessAddressSpace @ 0x14046C248 (MmInitializeProcessAddressSpace.c)
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
  v14 = (((unsigned __int64)(qword_140327FD0 + 276840816) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
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
      v4 = ~qword_1403A9350 & (v4 | 0x8000000000000100uLL) ^ ((unsigned __int16)~(_WORD)qword_1403A9350 ^ (unsigned __int16)(HIBYTE(word_140326AE8) << 8)) & 0x100;
    *v17 = v4;
    if ( MiPteInShadowRange((unsigned __int64)v17) )
      MiWritePteShadow(v18, v4);
    a1 = (__int64)(v16 + 0xB000000000LL) / 48;
  }
  while ( v5 );
  v19 = BugCheckParameter1;
  *(_QWORD *)(48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) = BugCheckParameter1;
  _InterlockedOr((volatile signed __int32 *)(v19 + 772), 0x800u);
  KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
  v20 = (_QWORD *)qword_1403269C0;
  v21 = (_QWORD *)(v19 + 1552);
  if ( *(__int64 **)qword_1403269C0 != &qword_1403269B8 )
    __fastfail(3u);
  *(_QWORD *)(v19 + 1560) = qword_1403269C0;
  *v21 = &qword_1403269B8;
  *v20 = v21;
  qword_1403269C0 = v19 + 1552;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v23 = 0;
  return MmInitializeProcessAddressSpace(v19, 0LL, 0LL, &v23, 0);
}
