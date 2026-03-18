/*
 * XREFs of NtGetWriteWatch @ 0x14003C8B0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     MiLockPageAndSetDirty @ 0x14003C7B8 (MiLockPageAndSetDirty.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 *     MiLocateVadEvent @ 0x140122918 (MiLocateVadEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExSystemExceptionFilter @ 0x14040A5E8 (ExSystemExceptionFilter.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtGetWriteWatch(
        HANDLE ProcessHandle,
        ULONG Flags,
        PVOID BaseAddress,
        SIZE_T RegionSize,
        PVOID *UserAddressArray,
        PULONG_PTR EntriesInUserAddressArray,
        PULONG Granularity)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r14
  KPROCESSOR_MODE PreviousMode; // di
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rdx
  _DWORD *v16; // rcx
  unsigned __int64 v17; // rax
  _BYTE *PoolWithQuotaTag; // rcx
  __int64 *v19; // r13
  int v20; // ebx
  _KPROCESS *v21; // rax
  int v22; // edi
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // r14
  volatile signed __int32 *v29; // r15
  unsigned __int64 v30; // r15
  signed __int32 i; // edx
  __int64 v32; // rcx
  unsigned __int64 v33; // r11
  char v34; // si
  __int64 NextPageTable; // rdx
  __int64 PteShadow; // r9
  unsigned __int64 v37; // r10
  bool v38; // zf
  unsigned __int64 v39; // rcx
  __int64 v40; // rsi
  unsigned __int64 v41; // r9
  _BYTE *v42; // rbx
  char v43; // [rsp+40h] [rbp-9C8h]
  int v44; // [rsp+44h] [rbp-9C4h]
  _BYTE *Src; // [rsp+48h] [rbp-9C0h]
  volatile signed __int32 *p_Lock; // [rsp+50h] [rbp-9B8h]
  int v47; // [rsp+58h] [rbp-9B0h] BYREF
  unsigned __int64 v48; // [rsp+60h] [rbp-9A8h]
  PVOID Object; // [rsp+68h] [rbp-9A0h] BYREF
  unsigned __int64 v50; // [rsp+70h] [rbp-998h]
  __int64 VadEvent; // [rsp+78h] [rbp-990h]
  __int64 v52; // [rsp+80h] [rbp-988h] BYREF
  __int64 CurrentIrql; // [rsp+88h] [rbp-980h]
  unsigned __int64 v54; // [rsp+90h] [rbp-978h]
  PVOID P; // [rsp+98h] [rbp-970h]
  HANDLE v56; // [rsp+A0h] [rbp-968h]
  PULONG_PTR v57; // [rsp+A8h] [rbp-960h]
  PULONG v58; // [rsp+B0h] [rbp-958h]
  int v59; // [rsp+B8h] [rbp-950h] BYREF
  void *v60; // [rsp+C0h] [rbp-948h]
  char *v61; // [rsp+C8h] [rbp-940h]
  int v62; // [rsp+D0h] [rbp-938h] BYREF
  __int16 v63; // [rsp+D4h] [rbp-934h]
  __int64 v64; // [rsp+D8h] [rbp-930h]
  __int64 v65; // [rsp+E0h] [rbp-928h]
  __int64 v66; // [rsp+E8h] [rbp-920h]
  _BYTE v67[48]; // [rsp+190h] [rbp-878h] BYREF
  _BYTE v68[2048]; // [rsp+1C0h] [rbp-848h] BYREF

  v43 = Flags;
  v56 = ProcessHandle;
  v60 = UserAddressArray;
  v57 = EntriesInUserAddressArray;
  v58 = Granularity;
  v64 = 20LL;
  v62 = 1;
  v63 = 0;
  v65 = 0LL;
  v66 = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  v48 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( BaseAddress > (char *)MmHighestUserAddress - 0x10000 )
      return -1073741583;
    if ( (_BYTE *)MmHighestUserAddress - (_BYTE *)BaseAddress - 0xFFFF < RegionSize )
      return -1073741582;
    v14 = EntriesInUserAddressArray;
    if ( (unsigned __int64)EntriesInUserAddressArray >= MmUserProbeAddress )
      v14 = (_QWORD *)MmUserProbeAddress;
    *v14 = *v14;
    v15 = *EntriesInUserAddressArray;
    v48 = v15;
    if ( !v15 )
      return -1073741581;
    if ( v15 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741581;
    ProbeForWrite(UserAddressArray, 8 * v15, 8u);
    v16 = Granularity;
    if ( (unsigned __int64)Granularity >= MmUserProbeAddress )
      v16 = (_DWORD *)MmUserProbeAddress;
    *v16 = *v16;
    v17 = v48;
  }
  else
  {
    v17 = *EntriesInUserAddressArray;
    v48 = *EntriesInUserAddressArray;
  }
  v54 = v17;
  PoolWithQuotaTag = v68;
  Src = v68;
  if ( v17 > 0x100 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 8 * v17, 0x63476D4Du);
    Src = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      return -1073741670;
  }
  v19 = (__int64 *)PoolWithQuotaTag;
  P = 0LL;
  v20 = 0;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    v21 = Process;
    Object = Process;
  }
  else
  {
    v22 = ObReferenceObjectByHandleWithTag(
            ProcessHandle,
            8u,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x77576D4Du,
            &Object,
            0LL);
    v47 = v22;
    if ( v22 < 0 )
      goto LABEL_92;
    v21 = (_KPROCESS *)Object;
  }
  p_Lock = &v21->Header.Lock;
  v23 = 0LL;
  v24 = (unsigned __int64)BaseAddress + RegionSize - 1;
  if ( (unsigned __int64)BaseAddress > v24 )
  {
    v22 = -1073741582;
    goto LABEL_82;
  }
  if ( Process != v21 )
  {
    KiStackAttachProcess((ULONG_PTR)v21);
    v20 = 1;
  }
  v25 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v50 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = MiObtainReferencedVad(BaseAddress, &v47);
  if ( !v26 )
  {
    v22 = v47;
    if ( v47 != -1073741664 )
      goto LABEL_82;
    goto LABEL_81;
  }
  P = (PVOID)v26;
  if ( (*(_DWORD *)(v26 + 48) & 7) != 4
    || v24 > (((*(unsigned int *)(v26 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 33) << 32)) << 12) | 0xFFF) )
  {
LABEL_81:
    v22 = -1073741585;
    goto LABEL_82;
  }
  VadEvent = MiLocateVadEvent(v26, 4LL);
  v28 = ((unsigned __int64)BaseAddress >> 12)
      - (*(unsigned int *)(v27 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v27 + 32) << 32));
  v29 = p_Lock + 318;
  v61 = (char *)(p_Lock + 318);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(p_Lock + 318);
    v30 = v54;
  }
  else
  {
    v44 = 0;
    if ( _interlockedbittestandset(v29, 0x1Fu) )
      v44 = ExpWaitForSpinLockExclusiveAndAcquire(v29);
    for ( i = *v29; (*v29 & 0xBFFFFFFF) != 0x80000000; i = *v29 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v29, i | 0x40000000, i);
      v32 = (unsigned int)(v44 + 1);
      v44 = v32;
      if ( ((unsigned int)v32 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v32);
    }
    p_Lock = (volatile signed __int32 *)Object;
    v30 = v48;
  }
  v33 = v50;
  if ( v25 > v50 )
    goto LABEL_80;
  v34 = v43;
LABEL_49:
  NextPageTable = MiGetNextPageTable(v25, v33, 1uLL, (unsigned __int8)CurrentIrql, 1, &v59);
  v33 = v50;
  if ( !NextPageTable )
    NextPageTable = v50 + 8;
  if ( v25 == NextPageTable )
  {
LABEL_57:
    if ( v25 > v33 )
      goto LABEL_80;
    while ( 1 )
    {
      PteShadow = *(_QWORD *)v25;
      v37 = v25 + 0x90482413000LL;
      if ( v25 + 0x90482413000LL <= 0x7F8 )
        PteShadow = MiReadPteShadow(v25, *(_QWORD *)v25);
      v52 = PteShadow;
      v20 &= 0xFFFFFFF9;
      if ( _bittest64(*(const signed __int64 **)(VadEvent + 24), v28) == 1 )
      {
        v20 |= 4u;
        if ( (v43 & 1) != 0 )
        {
          _bittestandreset64(*(signed __int64 **)(VadEvent + 24), v28);
          if ( (PteShadow & 1) != 0 )
          {
            v38 = (PteShadow & 0x42) == 0;
            goto LABEL_67;
          }
        }
      }
      else if ( (PteShadow & 1) != 0 && (PteShadow & 0x42) != 0 )
      {
        v20 |= 4u;
        v38 = (v43 & 1) == 0;
LABEL_67:
        if ( !v38 )
          v20 |= 2u;
      }
      if ( (v20 & 2) != 0 )
      {
        v39 = PteShadow;
        if ( (unsigned __int64)&STACK[0x90482413080] <= 0x7F8 )
          v39 = MiReadPteShadow(&v52, PteShadow);
        v40 = 48 * ((v39 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v41 = PteShadow & 0xFFFFFFFFFFFFFFBDuLL;
        *(_QWORD *)v25 = v41;
        if ( v37 <= 0x7F8 )
          MiWritePteShadow(v25, v41);
        MiInsertTbFlushEntry(&v62, (__int64)(v25 << 25) >> 16, 1LL, 0LL);
        MiLockPageAndSetDirty(v40, 1);
        v33 = v50;
      }
      if ( (v20 & 4) != 0 )
      {
        *v19++ = (__int64)(v25 << 25) >> 16;
        if ( ++v23 == v30 )
          goto LABEL_80;
      }
      ++v28;
      v25 += 8LL;
      if ( (v25 & 0xFFF) == 0 || v25 > v33 )
      {
        v34 = v43;
        if ( v25 > v33 )
          goto LABEL_80;
        goto LABEL_49;
      }
    }
  }
  while ( 1 )
  {
    if ( _bittest64(*(const signed __int64 **)(VadEvent + 24), v28) == 1 )
    {
      if ( (v34 & 1) != 0 )
        _bittestandreset64(*(signed __int64 **)(VadEvent + 24), v28);
      *v19++ = (__int64)(v25 << 25) >> 16;
      if ( ++v23 == v30 )
        break;
    }
    ++v28;
    v25 += 8LL;
    if ( v25 == NextPageTable )
      goto LABEL_57;
  }
LABEL_80:
  MiFlushTbList(&v62);
  MiUnlockWorkingSetExclusive(v61, (unsigned __int8)CurrentIrql);
  v22 = 0;
LABEL_82:
  if ( P )
    MiUnlockAndDereferenceVad(P);
  if ( (v20 & 1) != 0 )
    KiUnstackDetachProcess(v67, 0LL);
  if ( v56 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag((PVOID)p_Lock, 0x77576D4Du);
  if ( !v22 )
  {
    v42 = Src;
    if ( v60 )
    {
      memmove(v60, Src, 8 * v23);
      *v57 = v23;
    }
    *v58 = 4096;
    goto LABEL_93;
  }
LABEL_92:
  v42 = Src;
LABEL_93:
  if ( v42 != v68 )
    ExFreePoolWithTag(v42, 0);
  return v22;
}
