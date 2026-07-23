/*
 * XREFs of MiIssueHardFault @ 0x1400244B0
 * Callers:
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiResolvePageTablePage @ 0x14003F890 (MiResolvePageTablePage.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiLockPageAndSetDirty @ 0x1400150F8 (MiLockPageAndSetDirty.c)
 *     MiIssueHardFaultIo @ 0x140023324 (MiIssueHardFaultIo.c)
 *     MiReferenceInPageFile @ 0x1400249D0 (MiReferenceInPageFile.c)
 *     MiGetSessionIdForVa @ 0x140024B24 (MiGetSessionIdForVa.c)
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     MiGetEffectivePagePriorityThread @ 0x140026934 (MiGetEffectivePagePriorityThread.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 *     MiLogPageAccess @ 0x1400484C0 (MiLogPageAccess.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     MiLockAndDecrementShareCount @ 0x140075E7C (MiLockAndDecrementShareCount.c)
 *     PfHardFaultRecord @ 0x14009FE4C (PfHardFaultRecord.c)
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     MiZeroPhysicalPage @ 0x140108208 (MiZeroPhysicalPage.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPteValid @ 0x1401F25F0 (MiMakeTransitionPteValid.c)
 */

__int64 __fastcall MiIssueHardFault(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r12
  __int64 v9; // r14
  char v10; // bl
  unsigned int SessionIdForVa; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  int v16; // r8d
  char v17; // dl
  __int64 v18; // rdx
  __int64 v19; // r9
  _QWORD *v20; // r8
  char v21; // dl
  __int64 *v22; // rax
  _QWORD *v23; // r8
  __int64 *v24; // rcx
  __int64 SharedVm; // rbx
  __int64 result; // rax
  __int64 v27; // r14
  __int64 v28; // rsi
  int v29; // edi
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 TransitionPteValid; // rax
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rcx
  unsigned __int64 v37; // r15
  __int64 v38; // [rsp+0h] [rbp-60h]
  _DWORD v39[16]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int8 v40; // [rsp+60h] [rbp+0h]
  _DWORD *v41; // [rsp+68h] [rbp+8h] BYREF
  __int64 v42; // [rsp+70h] [rbp+10h] BYREF
  __int64 v43; // [rsp+78h] [rbp+18h]
  unsigned __int64 v44; // [rsp+80h] [rbp+20h]

  v7 = *(_QWORD *)(a4 + 152);
  v9 = *(_QWORD *)(a4 + 200);
  v40 = a2;
  v10 = 0;
  v44 = a3;
  *(_QWORD *)(a4 + 216) = a3;
  SessionIdForVa = MiGetSessionIdForVa(a3);
  v13 = MiReferenceInPageFile(a4, SessionIdForVa);
  LOBYTE(v14) = 1;
  v15 = v13;
  MiUnlockWorkingSetExclusive(a1, v14);
  if ( v15 )
  {
    *(_QWORD *)(a4 + 192) = v15;
    v10 = (*(_BYTE *)(v9 + 56) & 0x20) != 0;
  }
  v43 = a5 & 1;
  if ( (a5 & 1) == 0 || *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    ++*(_BYTE *)(v7 + 1742);
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    --*(_WORD *)(v7 + 486);
  else
    --*(_WORD *)(v7 + 484);
  __writecr8(v40);
  if ( (*(_BYTE *)(a4 + 191) & 1) != 0 )
    MiZeroPhysicalPage(*(_QWORD *)(a4
                                 + 8LL
                                 * ((unsigned int)((*(_DWORD *)(a4 + 296) & 0xFFF) != 0) + (*(_DWORD *)(a4 + 296) >> 12))
                                 + 296));
  v16 = *(_DWORD *)(a4 + 296);
  *(_DWORD *)(a4 + 180) = v16;
  v41 = 0LL;
  if ( *(_DWORD *)(a4 + 36) )
  {
    v10 |= 2u;
  }
  else
  {
    v17 = *(_BYTE *)(a4 + 189);
    if ( (v17 & 4) == 0 || (*(_BYTE *)(a4 + 191) & 0x10) == 0 || v17 < 0 )
    {
      if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (dword_14033B854 & 1) != 0) && v17 >= 0 && (v17 & 4) == 0 )
      {
        v18 = *(_QWORD *)(a4 + 96);
        v19 = *(_QWORD *)(a4 + 216);
        v38 = *(_QWORD *)(a4 + 192);
        v41 = v39;
        PfHardFaultRecord((unsigned int)v39, v18, v16, v19, v38, v7);
      }
      if ( (*(_BYTE *)(a1 + 187) & 0xC0) == 0xC0 && !*(_QWORD *)(MiGetSharedVm(a1) + 32) )
        KiStackAttachProcess((ULONG_PTR)PsInitialSystemProcess);
      v10 |= 2u;
      MiIssueHardFaultIo(a4, v10 & 1, a5);
    }
  }
  if ( (a5 & 1) != 0 )
  {
    v20 = (_QWORD *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      v21 = *(_BYTE *)(a1 + 184);
      if ( (v21 & 7u) >= 2 )
        *(_BYTE *)(a4 + 189) ^= (*(_BYTE *)(a4 + 189) ^ (v21 - 1)) & 3;
      if ( (v10 & 2) != 0 )
      {
        v22 = (__int64 *)v20[6];
        v23 = v20 + 5;
        if ( (_QWORD *)*v22 != v23 )
          __fastfail(3u);
        *(_QWORD *)a4 = v23;
        *(_QWORD *)(a4 + 8) = v22;
        *v22 = a4;
        v23[1] = a4;
      }
      else
      {
        v24 = (__int64 *)v20[8];
        if ( (_QWORD *)*v24 != v20 + 7 )
          __fastfail(3u);
        *(_QWORD *)a4 = v20 + 7;
        *(_QWORD *)(a4 + 8) = v24;
        *v24 = a4;
        v20[8] = a4;
        v20[9] += *(unsigned int *)(a4 + 180);
      }
      __writecr8(1uLL);
      if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
        KiLeaveGuardedRegionUnsafe(v7);
      else
        KeLeaveCriticalRegionThread(v7);
      SharedVm = MiGetSharedVm(a1);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      result = 0LL;
      *(_DWORD *)(SharedVm + 4) = 0;
      return result;
    }
  }
  v27 = *(_QWORD *)(a4 + 240);
  v28 = *(_QWORD *)(a4 + 224);
  if ( *(__int64 *)(v27 + 8) >= 0 )
    v27 = 0LL;
  result = MiWaitForInPageComplete(a4, (unsigned int)&v42, a1, a5, a7, (__int64)&v41);
  --*(_BYTE *)(v7 + 1742);
  v29 = result;
  if ( !(_DWORD)result )
  {
    if ( !v27 )
      v27 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v42) - 0x58000000000LL;
    if ( (*(_QWORD *)(v27 + 40) & 0x200000000000000LL) != 0 )
    {
      v28 = ((v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v29 = MiCompleteProtoPteFault(a1, v40, v44, v42, a6, 0, a5);
      if ( v29 >= 0 )
        goto LABEL_47;
      return (unsigned int)v29;
    }
    if ( v43 )
    {
      if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      {
        v30 = MI_READ_PTE_LOCK_FREE(v28) & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        *(_QWORD *)v28 = v30;
        if ( (unsigned int)MiPteInShadowRange(v28, v30) )
          MiWritePteShadow(v32, v31);
      }
    }
    TransitionPteValid = MiMakeTransitionPteValid(v28);
    v35 = TransitionPteValid;
    if ( a6 )
    {
      if ( (TransitionPteValid & 0x800) != 0 )
      {
        v35 = TransitionPteValid | 0x42;
        if ( (*(_BYTE *)(v27 + 34) & 0x10) == 0 )
        {
          if ( (unsigned int)MiGetPagingFileOffset(v27 + 16) )
            MiLockPageAndSetDirty(v27, 1);
        }
      }
    }
    if ( !v43 )
      goto LABEL_70;
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      *(_QWORD *)v28 = v35;
      if ( (unsigned int)MiPteInShadowRange(v28, v34) )
        MiWritePteShadow(v36, v35);
      *(_QWORD *)v27 = 0LL;
      return 276LL;
    }
    v37 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) != 5 )
LABEL_70:
      v37 = 0LL;
    if ( MiAllocateWsle(a1, v28, v27, 0LL, v35, v37) )
    {
LABEL_47:
      if ( dword_1403271C8 && (_DWORD)v41 != 2 && (unsigned int)MiGetEffectivePagePriorityThread(v7) >= dword_1403271F0 )
        MiLogPageAccess(a1, v28 | 1);
      if ( !v29 )
        return 276;
      return (unsigned int)v29;
    }
    MiLockAndDecrementShareCount(v27, 0LL);
    return (unsigned int)-1073741801;
  }
  return result;
}
