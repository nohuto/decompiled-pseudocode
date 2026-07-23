/*
 * XREFs of MiSessionCreateInternal @ 0x14057A1FC
 * Callers:
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     RtlClearAllBits @ 0x14001B168 (RtlClearAllBits.c)
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     RtlFindClearBitsAndSet @ 0x14002D488 (RtlFindClearBitsAndSet.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     PsGetCurrentServerSilo @ 0x1400CE990 (PsGetCurrentServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiMarkSessionMasterProcess @ 0x140154808 (MiMarkSessionMasterProcess.c)
 *     KeQueryInterruptTimePrecise @ 0x140154870 (KeQueryInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetTopPteAddress @ 0x140225B6C (MiGetTopPteAddress.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiMapNewSession @ 0x14057A744 (MiMapNewSession.c)
 */

__int64 __fastcall MiSessionCreateInternal(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  LARGE_INTEGER *v4; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rax
  __int64 v8; // rax
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rsi
  ULONG ClearBitsAndSet; // eax
  int v13; // ecx
  unsigned int v14; // esi
  _RTL_BITMAP *PoolWithTag; // rax
  _RTL_BITMAP *v16; // r14
  __int16 v17; // ax
  unsigned __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // rax
  __int64 v21; // r9
  _QWORD *v22; // r14
  __int64 v23; // rsi
  __int64 v24; // r15
  unsigned __int64 v25; // r13
  __int16 v26; // ax
  __int16 v27; // r14
  unsigned __int64 PteShadow; // rdi
  __int64 *TopPteAddress; // r14
  __int64 v30; // rdi
  _QWORD *CurrentServerSilo; // rax
  __int16 v33; // ax
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // rsi
  __int16 v37; // ax
  _BYTE v38[64]; // [rsp+90h] [rbp+90h] BYREF

  v4 = (LARGE_INTEGER *)((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL);
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = Process;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_14034EAC0, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14034EAC0, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&qword_14034EAC0, v8, (ULONG_PTR)&qword_14034EAC0, v9);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  ClearBitsAndSet = RtlFindClearBitsAndSet(qword_14034FC20, 1u, 0);
  *a1 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1 )
  {
    v13 = 0;
    v14 = qword_14034FC20->SizeOfBitMap + 128;
    if ( v14 > 0x7FFFF )
      v14 = 0x7FFFF;
    LOBYTE(v13) = (v14 & 0x3F) != 0;
    PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(PagedPool, 8 * (v13 + (v14 >> 6)) + 16, 0x20206D4Du);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034EAC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034EAC0);
      KeAbPostRelease((ULONG_PTR)&qword_14034EAC0);
      v33 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v33;
      if ( v33 )
        return 3221225495LL;
LABEL_42:
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        KiCheckForKernelApcDelivery();
      return 3221225495LL;
    }
    PoolWithTag->SizeOfBitMap = v14;
    PoolWithTag->Buffer = &PoolWithTag[1].SizeOfBitMap;
    RtlClearAllBits(PoolWithTag);
    memmove(
      v16->Buffer,
      qword_14034FC20->Buffer,
      8 * (((qword_14034FC20->SizeOfBitMap & 0x3F) != 0) + ((unsigned __int64)qword_14034FC20->SizeOfBitMap >> 6)));
    ExFreePoolWithTag(qword_14034FC20, 0);
    qword_14034FC20 = v16;
    *a1 = RtlFindClearBitsAndSet(v16, 1u, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034EAC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034EAC0);
  KeAbPostRelease((ULONG_PTR)&qword_14034EAC0);
  v17 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v17;
  if ( !v17 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, 7uLL, 0) )
  {
LABEL_35:
    --CurrentThread->SpecialApcDisable;
    v34 = KeAbPreAcquire((ULONG_PTR)&qword_14034EAC0, 0LL, 0LL, v19);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14034EAC0, 0LL);
    v36 = v34;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&qword_14034EAC0, v34, (ULONG_PTR)&qword_14034EAC0, v35);
    if ( v36 )
      *(_BYTE *)(v36 + 26) |= 1u;
    _bittestandreset((signed __int32 *)qword_14034FC20->Buffer, *a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034EAC0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034EAC0);
    KeAbPostRelease((ULONG_PTR)&qword_14034EAC0);
    v37 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v37;
    if ( v37 )
      return 3221225495LL;
    goto LABEL_42;
  }
  v20 = MiReservePtes((__int64)&qword_14034FC70, 2u, v18);
  v22 = v20;
  if ( !v20
    || (v23 = (__int64)((_QWORD)v20 << 25) >> 16,
        v24 = *a1 != 0 ? 1024LL : 20LL,
        v25 = *a1 != 0 ? 1031LL : 27LL,
        !(unsigned int)MiChargeResident(MiSystemPartition, v25, 0LL, v21)) )
  {
    MiReturnCommit((__int64)MiSystemPartition, 7LL);
    if ( v22 )
      MiReleasePtes((__int64)&qword_14034FC70, v22, 2u);
    goto LABEL_35;
  }
  _InterlockedExchangeAdd64(&qword_14034F880, v25);
  v26 = MiMapNewSession(v23);
  *(_QWORD *)v23 = 1LL;
  v27 = v26;
  *(_DWORD *)(v23 + 8) = *a1;
  *(_DWORD *)(v23 + 112) = PsDefaultSystemLocaleId;
  *(LARGE_INTEGER *)(v23 + 7992) = KeQueryInterruptTimePrecise(v4 + 2);
  PteShadow = MEMORY[0xFFFFF6FB7E400000];
  if ( MiPteInShadowRange(0xFFFFF6FB7E400000uLL) )
    PteShadow = MiReadPteShadow(0xFFFFF6FB7E400000uLL, PteShadow);
  v4->QuadPart = PteShadow;
  if ( MiPteInShadowRange((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) )
    PteShadow = MiReadPteShadow((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL, PteShadow);
  *(_QWORD *)(v23 + 3064) = v24;
  *(_WORD *)(v23 + 3160) = v27;
  *(_QWORD *)(v23 + 32) = (PteShadow >> 12) & 0xFFFFFFFFFLL;
  *(_QWORD *)(v23 + 40) = 7LL;
  *(_QWORD *)(v23 + 48) = 7LL;
  TopPteAddress = (__int64 *)MiGetTopPteAddress(0xFFFFF90000000000uLL);
  v30 = *TopPteAddress;
  if ( MiPteInShadowRange((__int64)TopPteAddress) )
    v30 = MiReadPteShadow((__int64)TopPteAddress, v30);
  *(_QWORD *)(v23 + 7680) = v30;
  *(_QWORD *)(v23 + 7688) = 0LL;
  *(_QWORD *)(v23 + 7800) = 0LL;
  *(_QWORD *)(v23 + 104) = 0LL;
  *(_QWORD *)(v23 + 24) = v23 + 16;
  *(_QWORD *)(v23 + 16) = v23 + 16;
  *(_DWORD *)(v23 + 12) = 1;
  CurrentServerSilo = (_QWORD *)PsGetCurrentServerSilo();
  *(_QWORD *)(v23 + 7984) = CurrentServerSilo;
  if ( CurrentServerSilo )
    _InterlockedCompareExchange(
      (volatile signed __int32 *)PsGetServerSiloGlobals(CurrentServerSilo),
      *(_DWORD *)(v23 + 8),
      -1);
  MiMarkSessionMasterProcess(*(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 8), v23);
  *(_DWORD *)(v23 + 7848) = 4;
  *(_QWORD *)(v23 + 7840) = 0xFFFFF6FC80000000uLL;
  *(_QWORD *)(v23 + 7856) = 0xFFFFF90000000B5CuLL;
  *(_QWORD *)(v23 + 7880) = v23 + 2968;
  *(_DWORD *)(v23 + 7852) = 1;
  *(_QWORD *)(v23 + 7872) = v23 + 7800;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x400000) != 0 )
  {
    *(_DWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = *(_DWORD *)(v23 + 8);
    *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v23;
    *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = ((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                        + 40;
    *(_QWORD *)(((unsigned __int64)v38 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 12LL;
    EtwTraceKernelEvent((_DWORD)v4 + 24, 1, 0x20400000u, 0x24Bu, 4200451);
  }
  return 0LL;
}
