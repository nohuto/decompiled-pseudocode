/*
 * XREFs of MiSessionCreateInternal @ 0x1404FF8F8
 * Callers:
 *     MiSessionCreate @ 0x1404FE8CC (MiSessionCreate.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x140006F80 (RtlFindClearBitsAndSet.c)
 *     MiGetPdeAddress @ 0x14001A3B4 (MiGetPdeAddress.c)
 *     RtlClearAllBits @ 0x14001ABDC (RtlClearAllBits.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsGetCurrentServerSilo @ 0x1400436F0 (PsGetCurrentServerSilo.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     MiMarkSessionMasterProcess @ 0x14011F6A4 (MiMarkSessionMasterProcess.c)
 *     MiGetTopPteAddress @ 0x14011F70C (MiGetTopPteAddress.c)
 *     KeQueryInterruptTimePrecise @ 0x14011F744 (KeQueryInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiMapNewSession @ 0x1404FFD90 (MiMapNewSession.c)
 */

__int64 __fastcall MiSessionCreateInternal(unsigned int *a1)
{
  LARGE_INTEGER *v1; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rax
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // rsi
  ULONG ClearBitsAndSet; // eax
  int v9; // ecx
  unsigned int v10; // esi
  _RTL_BITMAP *PoolWithTag; // rax
  _RTL_BITMAP *v12; // r14
  unsigned __int64 v13; // r8
  ULONG_PTR v14; // rax
  _QWORD *v15; // r14
  __int64 v16; // rsi
  __int64 v17; // r15
  unsigned __int64 v18; // r13
  __int16 v19; // di
  __int64 *PdeAddress; // rax
  unsigned __int64 v21; // rax
  __int64 *TopPteAddress; // rax
  __int64 v23; // rax
  _QWORD *CurrentServerSilo; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  _BYTE v28[64]; // [rsp+90h] [rbp+90h] BYREF

  v1 = (LARGE_INTEGER *)((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL);
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = Process;
  v5 = KeAbPreAcquire((ULONG_PTR)&qword_1402FE610, 0LL, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE610, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_1402FE610, v5, (ULONG_PTR)&qword_1402FE610);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_1402FF760, 1u, 0);
  *a1 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1 )
  {
    v9 = 0;
    v10 = qword_1402FF760->SizeOfBitMap + 128;
    if ( v10 > 0x7FFFF )
      v10 = 0x7FFFF;
    LOBYTE(v9) = (v10 & 0x3F) != 0;
    PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(PagedPool, 8 * (v9 + (v10 >> 6)) + 16, 0x20206D4Du);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_27;
    PoolWithTag->SizeOfBitMap = v10;
    PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
    RtlClearAllBits(PoolWithTag);
    memmove(
      v12->Buffer,
      qword_1402FF760->Buffer,
      8 * (((qword_1402FF760->SizeOfBitMap & 0x3F) != 0) + ((unsigned __int64)qword_1402FF760->SizeOfBitMap >> 6)));
    ExFreePoolWithTag(qword_1402FF760, 0);
    qword_1402FF760 = v12;
    *a1 = RtlFindClearBitsAndSet(v12, 1u, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE610, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE610);
  KeAbPostRelease((ULONG_PTR)&qword_1402FE610);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( (unsigned int)MiChargeCommit((unsigned __int64)MiSystemPartition, 7uLL, 0LL) )
  {
    v14 = MiReservePtes((__int64)&qword_1402FF7B0, 2u, v13);
    v15 = (_QWORD *)v14;
    if ( v14 )
    {
      v16 = (__int64)(v14 << 25) >> 16;
      v17 = *a1 != 0 ? 1024LL : 20LL;
      v18 = *a1 != 0 ? 1031LL : 27LL;
      if ( (unsigned int)MiChargeResident(MiSystemPartition, v18, 0LL) )
      {
        _InterlockedExchangeAdd64(&qword_1402FF400, v18);
        v19 = MiMapNewSession(v16);
        *(_QWORD *)v16 = 1LL;
        *(_DWORD *)(v16 + 8) = *a1;
        *(_DWORD *)(v16 + 112) = PsDefaultSystemLocaleId;
        *(LARGE_INTEGER *)(v16 + 7992) = KeQueryInterruptTimePrecise(v1 + 2);
        PdeAddress = (__int64 *)MiGetPdeAddress(0xFFFFF90000000000uLL);
        v1->QuadPart = MI_READ_PTE_LOCK_FREE(PdeAddress);
        v21 = MI_READ_PTE_LOCK_FREE((__int64 *)((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL));
        *(_QWORD *)(v16 + 3064) = v17;
        *(_WORD *)(v16 + 3160) = v19;
        *(_QWORD *)(v16 + 32) = (v21 >> 12) & 0xFFFFFFFFFLL;
        *(_QWORD *)(v16 + 40) = 7LL;
        *(_QWORD *)(v16 + 48) = 7LL;
        TopPteAddress = (__int64 *)MiGetTopPteAddress(0xFFFFF90000000000uLL);
        v23 = MI_READ_PTE_LOCK_FREE(TopPteAddress);
        *(_QWORD *)(v16 + 7680) = v23;
        *(_QWORD *)(v16 + 7688) = 0LL;
        *(_QWORD *)(v16 + 104) = 0LL;
        *(_QWORD *)(v16 + 7800) = 0LL;
        v1->QuadPart = v23;
        *(_QWORD *)(v16 + 24) = v16 + 16;
        *(_QWORD *)(v16 + 16) = v16 + 16;
        *(_DWORD *)(v16 + 12) = 1;
        CurrentServerSilo = PsGetCurrentServerSilo();
        *(_QWORD *)(v16 + 7984) = CurrentServerSilo;
        if ( CurrentServerSilo )
          _InterlockedCompareExchange(
            (volatile signed __int32 *)PsGetServerSiloGlobals(CurrentServerSilo),
            *(_DWORD *)(v16 + 8),
            -1);
        MiMarkSessionMasterProcess(*(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL) + 8), v16);
        *(_DWORD *)(v16 + 7848) = 4;
        *(_QWORD *)(v16 + 7840) = MiGetPteAddress(0xFFFFF90000000000uLL);
        *(_QWORD *)(v16 + 7856) = 0xFFFFF90000000B5CuLL;
        *(_QWORD *)(v16 + 7880) = v16 + 2968;
        *(_DWORD *)(v16 + 7852) = 1;
        *(_QWORD *)(v16 + 7872) = v16 + 7800;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
        {
          *(_DWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = *(_DWORD *)(v16 + 8);
          *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v16;
          *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = ((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                              + 40;
          *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 12LL;
          EtwTraceKernelEvent((_DWORD)v1 + 24, 1, 0x20400000u, 0x24Bu, 4200451);
        }
        return 0LL;
      }
    }
    MiReturnCommit((__int64)MiSystemPartition, 7uLL);
    if ( v15 )
      MiReleasePtes((__int64)&qword_1402FF7B0, v15, 2u);
  }
  --CurrentThread->SpecialApcDisable;
  v26 = KeAbPreAcquire((ULONG_PTR)&qword_1402FE610, 0LL, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE610, 0LL);
  v27 = v26;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_1402FE610, v26, (ULONG_PTR)&qword_1402FE610);
  if ( v27 )
    *(_BYTE *)(v27 + 26) |= 1u;
  _bittestandreset((signed __int32 *)qword_1402FF760->Buffer, *a1);
LABEL_27:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE610, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE610);
  KeAbPostRelease((ULONG_PTR)&qword_1402FE610);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 3221225495LL;
}
