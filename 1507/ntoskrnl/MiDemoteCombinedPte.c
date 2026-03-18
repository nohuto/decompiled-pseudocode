/*
 * XREFs of MiDemoteCombinedPte @ 0x14022A174
 * Callers:
 *     MiEmptyWorkingSetHelper @ 0x14007BAE0 (MiEmptyWorkingSetHelper.c)
 *     NtUnlockVirtualMemory @ 0x14007ECE0 (NtUnlockVirtualMemory.c)
 *     MiActOnPte @ 0x14007FD30 (MiActOnPte.c)
 *     MiTrimThisWsle @ 0x140081700 (MiTrimThisWsle.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     MiRemoveWorkingSetPages @ 0x1401089A0 (MiRemoveWorkingSetPages.c)
 *     MiTrimSingleWsle @ 0x140122378 (MiTrimSingleWsle.c)
 *     MiDeprioritizeVARange @ 0x140126B74 (MiDeprioritizeVARange.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140152DC0 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x14021AF0C (MiReplaceWorkingSetEntrySmall.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiUnlockPageTableCharges @ 0x14007CC10 (MiUnlockPageTableCharges.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiUpdateWsleHash @ 0x140097290 (MiUpdateWsleHash.c)
 *     MiIdentifyPfn @ 0x1400C4A30 (MiIdentifyPfn.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiFreeCombineBlock @ 0x14022A730 (MiFreeCombineBlock.c)
 *     MiLogCombinedPteDelete @ 0x14022AAC8 (MiLogCombinedPteDelete.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiDemoteCombinedPte(unsigned __int64 a1, __int64 a2)
{
  __int64 PteShadow; // rbx
  __int64 v3; // r9
  unsigned __int64 v6; // rax
  ULONG_PTR v7; // r13
  __int64 v8; // rdi
  _KPROCESS *Process; // r15
  signed __int32 *v10; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 Wsle; // rax
  __int64 v13; // rdx
  __int64 *v14; // rcx
  unsigned __int64 v15; // r9
  __int64 CurrentIrql; // rcx
  unsigned int v17; // r13d
  __int16 v18; // ax
  __int16 *v19; // rax
  __int64 v20; // r9
  int v21; // r10d
  __int64 v22; // r11
  __int64 v23; // rcx
  volatile signed __int32 *v24; // r8
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // r12
  __int64 v30; // rbx
  _QWORD *v31; // rbx
  BOOL v32; // [rsp+30h] [rbp-59h]
  unsigned __int64 v33; // [rsp+38h] [rbp-51h] BYREF
  __int64 v34; // [rsp+40h] [rbp-49h]
  __int64 v35; // [rsp+50h] [rbp-39h]
  __int64 v36; // [rsp+58h] [rbp-31h]
  ULONG_PTR v37; // [rsp+60h] [rbp-29h]
  _BYTE *v38; // [rsp+68h] [rbp-21h]
  unsigned __int64 v39; // [rsp+70h] [rbp-19h]
  __int64 v40; // [rsp+78h] [rbp-11h]
  _QWORD v41[3]; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v42[2]; // [rsp+98h] [rbp+Fh] BYREF

  PteShadow = *(_QWORD *)a1;
  v3 = a2;
  v34 = a2;
  if ( a1 + 0x90482413000LL <= 0x7F8 )
    PteShadow = MiReadPteShadow(a1, PteShadow);
  v33 = PteShadow;
  if ( *(_QWORD *)(v3 - 16) > 1uLL )
    return 0LL;
  v6 = PteShadow;
  if ( (unsigned __int64)&STACK[0x90482413038] <= 0x7F8 )
    v6 = MiReadPteShadow((__int64)&v33, PteShadow);
  v7 = (__int64)(a1 << 25) >> 16;
  v37 = v7;
  v8 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  if ( v7 + 0x400000000000LL > 0xF7FFFFFFFFFLL )
  {
    CurrentThread = KeGetCurrentThread();
    if ( v7 + 0x70000000000LL > 0x7FFFFFFFFFLL )
    {
      Process = CurrentThread->ApcState.Process;
      if ( Process[1].Affinity.Bitmap[10] )
        return 0LL;
      v10 = (signed __int32 *)&Process[1].IdealNode[8];
    }
    else
    {
      Process = 0LL;
      v10 = (signed __int32 *)(CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2968);
    }
  }
  else
  {
    Process = 0LL;
    v10 = dword_14034FE40;
  }
  Wsle = MiLocateWsle((__int64)(a1 << 25) >> 16, (__int64)v10, *(_QWORD *)v8);
  v13 = *((_QWORD *)v10 + 23);
  v39 = Wsle;
  v40 = v13;
  v38 = (_BYTE *)(*(_QWORD *)(v13 + 496) + Wsle * *(unsigned int *)(v13 + 64));
  v14 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v15 = *v14;
  if ( (unsigned __int64)(v14 + 0x12090482600LL) <= 0x7F8 )
    v15 = MiReadPteShadow((__int64)v14, *v14);
  v35 = (v15 >> 12) & 0xFFFFFFFFFLL;
  v32 = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
  CurrentIrql = KeGetCurrentIrql();
  v36 = CurrentIrql;
  __writecr8(2uLL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    v17 = 0;
    do
    {
      if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v17);
    }
    while ( *(__int64 *)(v8 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) );
    v7 = v37;
    LOBYTE(CurrentIrql) = v36;
  }
  v18 = *(_WORD *)(v8 + 32);
  if ( v18 != 1 && (v18 != 2 || (*(_BYTE *)(v8 + 34) & 8) == 0)
    || (*(_BYTE *)(v8 + 16) & 8) == 0
    || _InterlockedCompareExchange64((volatile signed __int64 *)(v34 - 16), 0LL, 1LL) != 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)CurrentIrql);
    return 0LL;
  }
  v19 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v8 + 40)) >> 8) & 0x3FF);
  v23 = *(_QWORD *)(v8 + 16);
  v24 = (volatile signed __int32 *)(v19 + 2432);
  if ( (v23 & 8) != 0 )
    *(_QWORD *)(v8 + 16) = v23 & 0xFFFFFFFFFFFFFFF7uLL;
  else
    v24 = (volatile signed __int32 *)&unk_14034EF18;
  _InterlockedExchangeAdd(v24 + 96, 0xFFFFFFFF);
  v25 = *(_QWORD *)(v8 + 40) & 0xFDFFFFFFFFFFFFFFuLL;
  *(_QWORD *)(v8 + 8) = a1;
  v35 = v22 & v25;
  v26 = v25 ^ v22 & (v20 ^ v25);
  v27 = *(_QWORD *)(v8 + 16);
  *(_QWORD *)(v8 + 40) = v26;
  if ( ((v27 >> 5) & 5) == 5 )
    *(_QWORD *)(v8 + 16) = v27 & 0xFFFFFFFFFFFFFC1FuLL | (32 * ((v27 >> 5) & 0x1E));
  if ( v21 )
  {
    memset(v41, 0, sizeof(v41));
    MiIdentifyPfn(v8, v41);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8((unsigned __int8)v36);
  if ( (PteShadow & 0x200) != 0 )
  {
    v28 = PteShadow & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
    v33 = v28;
    *(_QWORD *)a1 = v28;
    if ( a1 + 0x90482413000LL <= 0x7F8 )
      MiWritePteShadow(a1, v28);
  }
  v29 = v39;
  v30 = 48 * v35 - 0x58000000000LL;
  if ( v39 < *(_QWORD *)(v40 + 8) )
    MiUnlockPageTableCharges(48 * v35 - 0x58000000000LL, 2u, 0);
  MiLockAndDecrementShareCount(v30, 0);
  v31 = v38;
  if ( (*v38 & 4) != 0 )
    MiUpdateWsleHash(v7, v29, (ULONG_PTR)v10, 1u);
  *(_QWORD *)v8 = v29;
  *v31 |= 8uLL;
  ++*((_QWORD *)v10 + 16);
  if ( v7 + 0x98000000000LL > 0x7FFFFFFFFFLL )
    ++*((_QWORD *)v10 + 14);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
  if ( v32 )
  {
    MiLogCombinedPteDelete(v34);
    v42[1] = 24LL;
    v42[0] = v41;
    EtwTraceKernelEvent((int)v42, 1, 0x28000001u, 0x276u, 289413890);
  }
  MiFreeCombineBlock(v34 - 48);
  return 1LL;
}
