/*
 * XREFs of MiSessionCreateInternal @ 0x140536A48
 * Callers:
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400131A0 (PsGetCurrentServerSilo.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     RtlFindClearBitsAndSet @ 0x14007CB88 (RtlFindClearBitsAndSet.c)
 *     RtlClearAllBits @ 0x1400829DC (RtlClearAllBits.c)
 *     MiGetPdeAddress @ 0x1400847A4 (MiGetPdeAddress.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     MiChargeResident @ 0x1401011D0 (MiChargeResident.c)
 *     MiMarkSessionMasterProcess @ 0x14012A8E0 (MiMarkSessionMasterProcess.c)
 *     MiGetTopPteAddress @ 0x14012A960 (MiGetTopPteAddress.c)
 *     KeQueryInterruptTimePrecise @ 0x14012A9A0 (KeQueryInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiMapNewSession @ 0x140536ED4 (MiMapNewSession.c)
 */

__int64 __fastcall MiSessionCreateInternal(unsigned int *a1)
{
  LARGE_INTEGER *v1; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v4; // r13
  _KPROCESS *Process; // rax
  _BYTE *v6; // rax
  signed __int8 v7; // cf
  _BYTE *v8; // rsi
  ULONG ClearBitsAndSet; // eax
  int v10; // ecx
  unsigned int v11; // esi
  _RTL_BITMAP *PoolWithTag; // rax
  _RTL_BITMAP *v13; // r14
  unsigned __int64 v14; // r8
  ULONG_PTR v15; // rax
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r15
  __int16 v19; // ax
  __int16 v20; // di
  unsigned __int64 PdeAddress; // rax
  unsigned __int64 TopPteAddress; // rax
  __int64 v23; // rax
  void *CurrentServerSilo; // rax
  _BYTE *v26; // rax
  _BYTE *v27; // rsi
  _BYTE v28[64]; // [rsp+90h] [rbp+90h] BYREF

  v1 = (LARGE_INTEGER *)((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL);
  CurrentThread = KeGetCurrentThread();
  v4 = qword_140326958;
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = Process;
  v6 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326918, 0LL, 0);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140326918, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&qword_140326918, v6, (ULONG_PTR)&qword_140326918);
  if ( v8 )
    v8[26] |= 1u;
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_140327860, 1u, 0);
  *a1 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1 )
  {
    v10 = 0;
    v11 = qword_140327860->SizeOfBitMap + 128;
    if ( v11 > 0x7FFFF )
      v11 = 0x7FFFF;
    LOBYTE(v10) = (v11 & 0x3F) != 0;
    PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(PagedPool, 8 * (v10 + (v11 >> 6)) + 16, 0x20206D4Du);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_27;
    PoolWithTag->SizeOfBitMap = v11;
    PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
    RtlClearAllBits(PoolWithTag);
    memmove(
      v13->Buffer,
      qword_140327860->Buffer,
      8 * (((qword_140327860->SizeOfBitMap & 0x3F) != 0) + ((unsigned __int64)qword_140327860->SizeOfBitMap >> 6)));
    ExFreePoolWithTag(qword_140327860, 0);
    qword_140327860 = v13;
    *a1 = RtlFindClearBitsAndSet(v13, 1u, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326918, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326918);
  KeAbPostRelease((ULONG_PTR)&qword_140326918);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( (unsigned int)MiChargeCommit((__int64)MiSystemPartition, 7uLL, 0) )
  {
    v15 = MiReservePtes((__int64)&qword_1403278B0, 2uLL, v14);
    v16 = v15;
    if ( v15 )
    {
      v17 = (__int64)(v15 << 25) >> 16;
      v18 = *a1 != 0 ? 1024LL : 20LL;
      if ( (unsigned int)MiChargeResident(MiSystemPartition, *a1 != 0 ? 1031LL : 27LL, 0LL) )
      {
        v19 = MiMapNewSession(v17);
        *(_DWORD *)(v17 + 4) = 0;
        v20 = v19;
        *(_DWORD *)v17 = 1;
        *(_DWORD *)(v17 + 8) = *a1;
        *(_DWORD *)(v17 + 112) = PsDefaultSystemLocaleId;
        *(LARGE_INTEGER *)(v17 + 8128) = KeQueryInterruptTimePrecise(v1 + 2);
        PdeAddress = MiGetPdeAddress(v4);
        v1->QuadPart = MI_READ_PTE_LOCK_FREE(PdeAddress);
        *(_QWORD *)(v17 + 32) = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL);
        *(_QWORD *)(v17 + 3112) = v18;
        *(_WORD *)(v17 + 3008) = v20;
        *(_QWORD *)(v17 + 40) = 7LL;
        *(_QWORD *)(v17 + 48) = 7LL;
        TopPteAddress = MiGetTopPteAddress(v4);
        v23 = MI_READ_PTE_LOCK_FREE(TopPteAddress);
        *(_QWORD *)(v17 + 7808) = v23;
        *(_QWORD *)(v17 + 7816) = 0LL;
        *(_QWORD *)(v17 + 104) = 0LL;
        *(_QWORD *)(v17 + 7928) = 0LL;
        v1->QuadPart = v23;
        *(_QWORD *)(v17 + 24) = v17 + 16;
        *(_QWORD *)(v17 + 16) = v17 + 16;
        *(_DWORD *)(v17 + 12) = 1;
        CurrentServerSilo = (void *)PsGetCurrentServerSilo();
        *(_QWORD *)(v17 + 8120) = CurrentServerSilo;
        if ( CurrentServerSilo )
        {
          ObfReferenceObjectWithTag(CurrentServerSilo, 0x73536D4Du);
          _InterlockedCompareExchange(
            (volatile signed __int32 *)PsGetServerSiloGlobals(*(_QWORD *)(v17 + 8120)) + 252,
            *(_DWORD *)(v17 + 8),
            -1);
        }
        MiMarkSessionMasterProcess(*(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL) + 8), v17);
        *(_DWORD *)(v17 + 7976) = 4;
        *(_QWORD *)(v17 + 7968) = MiGetPteAddress(qword_140326900);
        *(_QWORD *)(v17 + 7984) = v4 + 2908;
        *(_DWORD *)(v17 + 7980) = 1;
        *(_QWORD *)(v17 + 8000) = v17 + 7928;
        *(_QWORD *)(v17 + 8008) = v17 + 3008;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
        {
          *(_DWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = *(_DWORD *)(v17 + 8);
          *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v17;
          *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = ((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                              + 40;
          *(_QWORD *)(((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 12LL;
          EtwTraceKernelEvent((_DWORD)v1 + 24, 1, 0x20400000u, 587, 4200451);
        }
        return 0LL;
      }
    }
    MiReturnCommit((__int64)MiSystemPartition, 7uLL);
    if ( v16 )
      MiReleasePtes((__int64)&qword_1403278B0, v16, 2u);
  }
  --CurrentThread->SpecialApcDisable;
  v26 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326918, 0LL, 0);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140326918, 0LL);
  v27 = v26;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&qword_140326918, v26, (ULONG_PTR)&qword_140326918);
  if ( v27 )
    v27[26] |= 1u;
  _bittestandreset((signed __int32 *)qword_140327860->Buffer, *a1);
LABEL_27:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326918, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326918);
  KeAbPostRelease((ULONG_PTR)&qword_140326918);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 3221225495LL;
}
