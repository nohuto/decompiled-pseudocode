/*
 * XREFs of MiDemoteCombinedPte @ 0x14012836C
 * Callers:
 *     MiActOnPte @ 0x14001C9B4 (MiActOnPte.c)
 *     MiEmptyWorkingSetHelper @ 0x14001F788 (MiEmptyWorkingSetHelper.c)
 *     NtUnlockVirtualMemory @ 0x140021060 (NtUnlockVirtualMemory.c)
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MiTrimThisWsle @ 0x1400B6290 (MiTrimThisWsle.c)
 *     MiMoveValidWsle @ 0x1400B8B14 (MiMoveValidWsle.c)
 *     MiTrimSingleWsle @ 0x1400E4694 (MiTrimSingleWsle.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14011AB80 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiDeprioritizeVARange @ 0x1401D257C (MiDeprioritizeVARange.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x1401D812C (MiReplaceWorkingSetEntrySmall.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140005934 (MiLockAndDecrementShareCount.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MI_UPDATE_WORKING_SET_PRIVATE_SIZE @ 0x14001EDF8 (MI_UPDATE_WORKING_SET_PRIVATE_SIZE.c)
 *     MiUnlockPageTableCharges @ 0x140021978 (MiUnlockPageTableCharges.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     MiIdentifyPfn @ 0x140050C60 (MiIdentifyPfn.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiUpdateWsleHash @ 0x14005A900 (MiUpdateWsleHash.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiFreeCombineBlock @ 0x14012B6C8 (MiFreeCombineBlock.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiLogCombinedPteDelete @ 0x1401E1364 (MiLogCombinedPteDelete.c)
 */

__int64 __fastcall MiDemoteCombinedPte(unsigned __int64 *a1, __int64 a2)
{
  __int64 v5; // r15
  __int64 v6; // rdi
  _KPROCESS *Process; // r14
  LONG *v8; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 Wsle; // rax
  __int64 v11; // rdx
  unsigned __int8 v12; // al
  __int16 v13; // cx
  unsigned __int8 v14; // bl
  int *v15; // rax
  __int64 v16; // rcx
  volatile signed __int32 *v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r12
  __int64 v24; // rbx
  _QWORD *v25; // rbx
  BOOL v26; // [rsp+30h] [rbp-49h]
  __int64 v27; // [rsp+38h] [rbp-41h] BYREF
  __int64 v28; // [rsp+40h] [rbp-39h]
  __int64 v29; // [rsp+48h] [rbp-31h]
  __int64 v30; // [rsp+50h] [rbp-29h]
  _BYTE *v31; // [rsp+58h] [rbp-21h]
  unsigned __int64 v32; // [rsp+60h] [rbp-19h]
  __int64 v33; // [rsp+68h] [rbp-11h]
  unsigned __int64 v34[3]; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v35[2]; // [rsp+88h] [rbp+Fh] BYREF

  v28 = a2;
  v27 = MI_READ_PTE_LOCK_FREE(a1);
  if ( *(_QWORD *)(a2 - 16) > 1uLL )
    return 0LL;
  v5 = (__int64)((_QWORD)a1 << 25) >> 16;
  v6 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v27) - 0x58000000000LL;
  if ( (unsigned __int64)(v5 + 0x400000000000LL) > 0xF7FFFFFFFFFLL )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned __int64)(v5 + 0x70000000000LL) > 0x7FFFFFFFFFLL )
    {
      Process = CurrentThread->ApcState.Process;
      if ( Process[1].Affinity.Bitmap[10] )
        return 0LL;
      v8 = (LONG *)&Process[1].IdealNode[12];
    }
    else
    {
      Process = 0LL;
      v8 = (LONG *)(CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 2968);
    }
  }
  else
  {
    Process = 0LL;
    v8 = &dword_1402FF980;
  }
  Wsle = MiLocateWsle((__int64)((_QWORD)a1 << 25) >> 16, (__int64)v8, *(_QWORD *)v6);
  v11 = *((_QWORD *)v8 + 23);
  v32 = Wsle;
  v30 = v11;
  v31 = (_BYTE *)(*(_QWORD *)(v11 + 496) + Wsle * *(unsigned int *)(v11 + 64));
  v33 = MI_GET_PAGE_FRAME_FROM_PTE((((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v26 = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
  v12 = MiLockPageInline(v6);
  v13 = *(_WORD *)(v6 + 32);
  v14 = v12;
  if ( v13 != 1 && (v13 != 2 || (*(_BYTE *)(v6 + 34) & 8) == 0)
    || (*(_DWORD *)(v6 + 16) & 0x1000000) == 0
    || _InterlockedCompareExchange64((volatile signed __int64 *)(v28 - 16), 0LL, 1LL) != 1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v12);
    return 0LL;
  }
  v15 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v6 + 40)) >> 8) & 0x3FF);
  v16 = *(_QWORD *)(v6 + 16);
  v17 = v15 + 1306;
  if ( (v16 & v18) != 0 )
    *(_QWORD *)(v6 + 16) = v16 & 0xFFFFFFFFFEFFFFFFuLL;
  else
    v17 = (volatile signed __int32 *)&unk_1402FEA58;
  _InterlockedExchangeAdd(v17 + 96, 0xFFFFFFFF);
  v19 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v6 + 8) = a1;
  v19 &= ~0x200000000000000uLL;
  v29 = v19 & 0xFFFFFFFFFLL;
  v20 = v19 ^ (v33 ^ v19) & 0xFFFFFFFFFLL;
  v21 = *(_QWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 40) = v20;
  if ( ((v21 >> 5) & 5) == 5 )
    *(_QWORD *)(v6 + 16) = v21 & 0xFFFFFFFFFFFFFC1FuLL | (32 * ((v21 >> 5) & 0x1E));
  if ( v26 )
  {
    memset(v34, 0, sizeof(v34));
    MiIdentifyPfn(v6, v34);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v14);
  if ( (v27 & 0x200) != 0 )
  {
    v22 = v27 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
    v27 = v22;
    *a1 = v22;
    if ( (unsigned int)MiPteInShadowRange(a1) )
      MiWritePteShadow(a1, v22);
  }
  v23 = v32;
  v24 = 48 * v29 - 0x58000000000LL;
  if ( v32 < *(_QWORD *)(v30 + 8) )
    MiUnlockPageTableCharges(48 * v29 - 0x58000000000LL, 2u, 0);
  MiLockAndDecrementShareCount(v24, 0);
  v25 = v31;
  if ( (*v31 & 4) != 0 )
    MiUpdateWsleHash(v5, v23, (ULONG_PTR)v8, 1u);
  *(_QWORD *)v6 = v23;
  *v25 |= 8uLL;
  MI_UPDATE_WORKING_SET_PRIVATE_SIZE((__int64)v8, v5, 1LL);
  if ( Process )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
  if ( v26 )
  {
    MiLogCombinedPteDelete(v28);
    v35[1] = 24LL;
    v35[0] = v34;
    EtwTraceKernelEvent((int)v35, 1, 0x28000001u, 0x276u, 289413890);
  }
  MiFreeCombineBlock(v28 - 48);
  return 1LL;
}
