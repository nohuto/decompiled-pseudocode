/*
 * XREFs of MiInitializeBootProcess @ 0x14076CFE4
 * Callers:
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     MiMarkPageActive @ 0x140018440 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x140018484 (MiInitializePfnForOtherProcess.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MmInitializeProcessAddressSpace @ 0x140462718 (MmInitializeProcessAddressSpace.c)
 */

__int64 __fastcall MiInitializeBootProcess(__int64 a1)
{
  unsigned int v1; // r14d
  ULONG_PTR Process; // rsi
  __int64 v4; // r9
  unsigned __int64 v5; // rbx
  _QWORD *v6; // r12
  __int64 v7; // rdi
  __int16 v8; // ax
  int v9; // ecx
  _WORD *v10; // r15
  __int64 Page; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 *v16; // rcx
  _QWORD *v17; // rdi
  unsigned __int64 *v18; // r15
  ULONG_PTR v19; // rsi
  __int64 **v20; // rcx
  int v22; // [rsp+38h] [rbp-29h] BYREF
  int v23; // [rsp+3Ch] [rbp-25h]
  _WORD *v24; // [rsp+40h] [rbp-21h] BYREF
  __int16 v25; // [rsp+48h] [rbp-19h]
  unsigned __int16 v26; // [rsp+4Ah] [rbp-17h]
  ULONG_PTR v27; // [rsp+50h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v29[4]; // [rsp+70h] [rbp+Fh] BYREF

  v1 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !qword_140381138 )
    qword_140381138 = 0x100000LL;
  if ( !qword_140381130 )
    qword_140381130 = 0x2000LL;
  if ( !qword_140381128 )
    qword_140381128 = 0x10000LL;
  if ( !qword_140381120 )
    qword_140381120 = 4096LL;
  Process = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
  v27 = Process;
  MiChargeWsles(Process + 1280, 50LL, 0LL);
  *(_QWORD *)(Process + 1376) = 50LL;
  *(_QWORD *)(Process + 1416) = 450LL;
  v5 = ~qword_140381310 & (MiMakeValidKernelPte(-1LL, 6, 0LL, v4) & 0xFFFFFFFFFFFFFEBDuLL | 0x42);
  v6 = 0LL;
  MI_INITIALIZE_COLOR_BASE(Process + 1280, 0, (__int64)&v24);
  v7 = 4LL;
  MiChargeResident(MiSystemPartition, 4uLL, 0LL);
  _InterlockedExchangeAdd64(&qword_1402FF568, 4uLL);
  MiChargeCommit((unsigned __int64)MiSystemPartition, 4uLL, 1uLL);
  v8 = v25;
  v9 = v26;
  v10 = v24;
  do
  {
    Page = MiGetPage((__int64)MiSystemPartition, v9 | (unsigned int)(unsigned __int16)(v8 & ++*v10), 0xC2u);
    v12 = Page;
    if ( Page == -1 )
      return 0LL;
    v13 = 3 * Page;
    v8 = v25;
    ++v1;
    v14 = (_QWORD *)(16 * v13 - 0x58000000000LL);
    *v14 = v6;
    v6 = v14;
    v9 = v26;
  }
  while ( v1 < 4 );
  v15 = 0xFFFFF6FAC0084020uLL;
  v23 = 4;
  v16 = v29;
  do
  {
    *v16++ = v15;
    v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v7;
  }
  while ( v7 );
  *(_QWORD *)(Process + 864) = v12;
  LODWORD(Process) = v23;
  do
  {
    v17 = v6;
    v6 = (_QWORD *)*v6;
    Process = (unsigned int)(Process - 1);
    v18 = (unsigned __int64 *)v29[Process];
    MiInitializePfnForOtherProcess((__int64)(v17 + 0xB000000000LL) / 48, (__int64)v18, a1, 0);
    *v17 = 0LL;
    MiMarkPageActive((__int64)v17);
    v5 ^= (v5 ^ (((__int64)(v17 + 0xB000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
    if ( !v6 )
      v5 = ~qword_140381310 & (v5 | 0x8000000000000100uLL) ^ ((unsigned __int16)~(_WORD)qword_140381310 ^ (unsigned __int16)(HIBYTE(word_1402FE760) << 8)) & 0x100;
    *v18 = v5;
    if ( MiPteInShadowRange((__int64)v18) )
      MiWritePteShadow((__int64)v18, v5);
    a1 = (__int64)(v17 + 0xB000000000LL) / 48;
  }
  while ( v6 );
  v19 = v27;
  *(_QWORD *)(48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) = v27;
  _InterlockedOr((volatile signed __int32 *)(v19 + 772), 0x800u);
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v20 = (__int64 **)qword_1402FE6A0;
  *(_QWORD *)(v19 + 1544) = qword_1402FE6A0;
  *(_QWORD *)(v19 + 1536) = &qword_1402FE698;
  if ( *v20 != &qword_1402FE698 )
    __fastfail(3u);
  *v20 = (__int64 *)(v19 + 1536);
  qword_1402FE6A0 = v19 + 1536;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v22 = 0;
  return MmInitializeProcessAddressSpace(v19, 0LL, 0LL, &v22, 0);
}
