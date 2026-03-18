/*
 * XREFs of MiInitializeBootProcess @ 0x1407E2258
 * Callers:
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 * Callees:
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiMarkPageActive @ 0x14006A8A0 (MiMarkPageActive.c)
 *     MiInitializePfnForOtherProcess @ 0x14006A908 (MiInitializePfnForOtherProcess.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MmInitializeProcessAddressSpace @ 0x140467860 (MmInitializeProcessAddressSpace.c)
 */

__int64 __fastcall MiInitializeBootProcess(__int64 a1)
{
  unsigned int v1; // r14d
  ULONG_PTR Process; // rsi
  __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  _QWORD *v6; // r12
  __int64 v7; // rdi
  __int64 v8; // r9
  __int16 v9; // ax
  int v10; // ecx
  _WORD *v11; // r15
  __int64 Page; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 *v17; // rcx
  _QWORD *v18; // rdi
  unsigned __int64 *v19; // r14
  ULONG_PTR v20; // rsi
  __int64 **v21; // rcx
  int v23; // [rsp+38h] [rbp-29h] BYREF
  int v24; // [rsp+3Ch] [rbp-25h]
  _WORD *v25; // [rsp+40h] [rbp-21h] BYREF
  __int16 v26; // [rsp+48h] [rbp-19h]
  unsigned __int16 v27; // [rsp+4Ah] [rbp-17h]
  ULONG_PTR v28; // [rsp+50h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v30[4]; // [rsp+70h] [rbp+Fh] BYREF

  v1 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !qword_1403D0128 )
    qword_1403D0128 = 0x100000LL;
  if ( !qword_1403D0120 )
    qword_1403D0120 = 0x2000LL;
  if ( !qword_1403D0118 )
    qword_1403D0118 = 0x10000LL;
  if ( !qword_1403D0110 )
    qword_1403D0110 = 4096LL;
  Process = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
  v28 = Process;
  MiChargeWsles(Process + 1272, 50LL, 0);
  *(_QWORD *)(Process + 1368) = 50LL;
  v4 = qword_1403D0240 | 0xFFFFFFFFF021LL;
  *(_QWORD *)(Process + 1408) = 450LL;
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
    v4 |= 0x100uLL;
  v5 = ~qword_1403D0220 & (v4 & 0xFFFFFFFFFFFFFE3DuLL | 0x42);
  v6 = 0LL;
  MI_INITIALIZE_COLOR_BASE(Process + 1272, 0, (__int64)&v25);
  v7 = 4LL;
  MiChargeResident(MiSystemPartition, 4uLL, 0LL, v8);
  _InterlockedExchangeAdd64(&qword_14034FA08, 4uLL);
  MiChargeCommit((__int64)MiSystemPartition, 4uLL, 1);
  v9 = v26;
  v10 = v27;
  v11 = v25;
  do
  {
    Page = MiGetPage((__int64)MiSystemPartition, v10 | (unsigned int)(unsigned __int16)(v9 & ++*v11), 0xC2u);
    v13 = Page;
    if ( Page == -1 )
      return 0LL;
    v14 = 3 * Page;
    v9 = v26;
    ++v1;
    v15 = (_QWORD *)(16 * v14 - 0x58000000000LL);
    *v15 = v6;
    v6 = v15;
    v10 = v27;
  }
  while ( v1 < 4 );
  v16 = 0xFFFFF6FAC0084020uLL;
  v24 = 4;
  v17 = v30;
  do
  {
    *v17++ = v16;
    v16 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v7;
  }
  while ( v7 );
  *(_QWORD *)(Process + 864) = v13;
  LODWORD(Process) = v24;
  do
  {
    v18 = v6;
    v6 = (_QWORD *)*v6;
    Process = (unsigned int)(Process - 1);
    v19 = (unsigned __int64 *)v30[Process];
    MiInitializePfnForOtherProcess((__int64)(v18 + 0xB000000000LL) / 48, (__int64)v19, a1, 0);
    *v18 = 0LL;
    MiMarkPageActive((__int64)v18);
    v5 ^= (v5 ^ (((__int64)(v18 + 0xB000000000LL) / 48) << 12)) & 0xFFFFFFFFF000LL;
    if ( !v6 )
      v5 = ~qword_1403D0220 & (v5 | 0x8000000000000100uLL) ^ ((unsigned __int16)~(_WORD)qword_1403D0220 ^ (unsigned __int16)(HIBYTE(word_14034EC18) << 8)) & 0x100;
    *v19 = v5;
    if ( (unsigned __int64)(v19 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow((__int64)v19, v5);
    a1 = (__int64)(v18 + 0xB000000000LL) / 48;
  }
  while ( v6 );
  v20 = v28;
  *(_QWORD *)(48 * ((MEMORY[0xFFFFF6FB7DBEDF68] >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) = v28;
  _InterlockedOr((volatile signed __int32 *)(v20 + 772), 0x800u);
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v21 = (__int64 **)qword_14034EB50;
  *(_QWORD *)(v20 + 1536) = qword_14034EB50;
  *(_QWORD *)(v20 + 1528) = &qword_14034EB48;
  if ( *v21 != &qword_14034EB48 )
    __fastfail(3u);
  *v21 = (__int64 *)(v20 + 1528);
  qword_14034EB50 = v20 + 1528;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v23 = 0;
  return MmInitializeProcessAddressSpace(v20, 0LL, 0LL, &v23, 0);
}
