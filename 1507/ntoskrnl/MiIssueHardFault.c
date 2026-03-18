/*
 * XREFs of MiIssueHardFault @ 0x140087FE0
 * Callers:
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiResolvePageTablePage @ 0x1400C0790 (MiResolvePageTablePage.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x14003C720 (MiGetEffectivePagePriorityThread.c)
 *     MiLockPageAndSetDirty @ 0x14003C7B8 (MiLockPageAndSetDirty.c)
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiIssueHardFaultIo @ 0x140085C00 (MiIssueHardFaultIo.c)
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 *     MiGetSessionIdForVa @ 0x14008861C (MiGetSessionIdForVa.c)
 *     MiReferenceInPageFile @ 0x140088848 (MiReferenceInPageFile.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PfHardFaultRecord @ 0x140111AE4 (PfHardFaultRecord.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeTransitionPteValid @ 0x140225E1C (MiMakeTransitionPteValid.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiIssueHardFault(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r12
  unsigned int v9; // esi
  char v10; // bl
  unsigned int SessionIdForVa; // eax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // eax
  char v19; // dl
  __int64 v20; // rdx
  __int64 v21; // r9
  _QWORD *v22; // r15
  __int64 *v23; // rcx
  __int64 *v24; // rax
  _QWORD *v25; // r15
  __int16 v26; // ax
  __int16 v27; // ax
  __int64 result; // rax
  signed __int32 i; // edx
  __int64 v30; // r12
  __int64 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // r14d
  unsigned __int64 v35; // r9
  __int64 v36; // r11
  unsigned __int64 v37; // rcx
  __int64 PteShadow; // rax
  unsigned __int64 v39; // rax
  __int64 TransitionPteValid; // rax
  __int64 v41; // r11
  __int64 v42; // rbx
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  __int64 v45; // [rsp+0h] [rbp-60h]
  _DWORD v46[16]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int8 v47; // [rsp+60h] [rbp+0h]
  __int64 v48; // [rsp+68h] [rbp+8h] BYREF
  unsigned __int64 v49; // [rsp+70h] [rbp+10h] BYREF
  __int64 v50; // [rsp+78h] [rbp+18h]
  unsigned __int64 v51; // [rsp+80h] [rbp+20h]

  v6 = *(_QWORD *)(a4 + 152);
  v7 = *(_QWORD *)(a4 + 200);
  v9 = 0;
  v51 = a3;
  *(_QWORD *)(a4 + 216) = a3;
  v10 = 0;
  v47 = a2;
  SessionIdForVa = MiGetSessionIdForVa(a3);
  v13 = MiReferenceInPageFile(a4, SessionIdForVa);
  LOBYTE(v14) = 1;
  v15 = v13;
  MiUnlockWorkingSetExclusive(a1, v14);
  if ( v15 )
  {
    *(_QWORD *)(a4 + 192) = v15;
    v10 = (*(_BYTE *)(v7 + 56) & 0x20) != 0;
  }
  v50 = a5 & 1;
  if ( (a5 & 1) == 0 || *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    ++*(_BYTE *)(v6 + 1738);
  if ( (*(_BYTE *)(a1 + 216) & 7) != 0 )
    --*(_WORD *)(v6 + 486);
  else
    --*(_WORD *)(v6 + 484);
  __writecr8(v47);
  if ( (*(_BYTE *)(a4 + 191) & 1) != 0 )
  {
    v16 = (unsigned int)((*(_DWORD *)(a4 + 296) & 0xFFF) != 0) + (*(_DWORD *)(a4 + 296) >> 12);
    MiZeroPhysicalPage(
      *(_QWORD *)(a4 + 8 * v16 + 296),
      3,
      *(unsigned __int8 *)(48LL * *(_QWORD *)(a4 + 8 * v16 + 296) - 0x57FFFFFFFDELL) >> 6);
  }
  v17 = *(_DWORD *)(a4 + 296);
  *(_DWORD *)(a4 + 180) = v17;
  v18 = *(_DWORD *)(a4 + 36);
  v48 = 0LL;
  if ( v18 )
  {
    v10 |= 2u;
  }
  else
  {
    v19 = *(_BYTE *)(a4 + 189);
    if ( (v19 & 4) == 0 || (*(_BYTE *)(a4 + 191) & 0x10) == 0 || v19 < 0 )
    {
      if ( ((PerfGlobalGroupMask & 0x2000) != 0 || (dword_140367DD4 & 1) != 0) && v19 >= 0 && (v19 & 4) == 0 )
      {
        v20 = *(_QWORD *)(a4 + 96);
        v21 = *(_QWORD *)(a4 + 216);
        v45 = *(_QWORD *)(a4 + 192);
        v48 = (__int64)v46;
        PfHardFaultRecord((unsigned int)v46, v20, v17, v21, v45, v6);
      }
      if ( (*(_BYTE *)(a1 + 219) & 0xC0) == 0xC0 && !*(_QWORD *)(a1 + 240) )
        KiStackAttachProcess((ULONG_PTR)PsInitialSystemProcess);
      v10 |= 2u;
      MiIssueHardFaultIo(a4, v10 & 1, a5);
    }
  }
  if ( (a5 & 1) != 0 )
  {
    v22 = (_QWORD *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      v23 = (__int64 *)*(unsigned __int8 *)(a1 + 216);
      if ( ((unsigned __int8)v23 & 7u) >= 2 )
      {
        LOBYTE(v23) = (*(_BYTE *)(a4 + 189) ^ ((_BYTE)v23 - 1)) & 3;
        *(_BYTE *)(a4 + 189) ^= (unsigned __int8)v23;
      }
      if ( (v10 & 2) != 0 )
      {
        v24 = (__int64 *)v22[6];
        v25 = v22 + 5;
        *(_QWORD *)a4 = v25;
        *(_QWORD *)(a4 + 8) = v24;
        if ( (_QWORD *)*v24 != v25 )
          __fastfail(3u);
        *v24 = a4;
        v25[1] = a4;
      }
      else
      {
        v23 = (__int64 *)v22[8];
        *(_QWORD *)a4 = v22 + 7;
        *(_QWORD *)(a4 + 8) = v23;
        if ( (_QWORD *)*v23 != v22 + 7 )
          __fastfail(3u);
        *v23 = a4;
        v22[8] = a4;
        v22[9] += *(unsigned int *)(a4 + 180);
      }
      __writecr8(1uLL);
      if ( (*(_BYTE *)(a1 + 216) & 7) != 0 )
      {
        v27 = *(_WORD *)(v6 + 486) + 1;
        *(_WORD *)(v6 + 486) = v27;
        if ( !v27 && *(_QWORD *)(v6 + 152) != v6 + 152 )
          goto LABEL_43;
      }
      else
      {
        v26 = *(_WORD *)(v6 + 484) + 1;
        *(_WORD *)(v6 + 484) = v26;
        if ( !v26 && *(_QWORD *)(v6 + 152) != v6 + 152 && !*(_WORD *)(v6 + 486) )
LABEL_43:
          KiCheckForKernelApcDelivery(v23);
      }
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
        return 0LL;
      }
      else
      {
        if ( _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Fu) )
          v9 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)a1);
        for ( i = *(_DWORD *)a1; (*(_DWORD *)a1 & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)a1 )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedCompareExchange((volatile signed __int32 *)a1, i | 0x40000000, i);
          if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v9);
        }
        return 0LL;
      }
    }
  }
  v30 = *(_QWORD *)(a4 + 240);
  v31 = *(_QWORD *)(a4 + 224);
  if ( *(__int64 *)(v30 + 8) >= 0 )
    v30 = 0LL;
  result = MiWaitForInPageComplete((_QWORD *)a4, (__int64)&v49, a1, a5, (_QWORD **)&v48);
  --*(_BYTE *)(v6 + 1738);
  v34 = result;
  if ( !(_DWORD)result )
  {
    v35 = v49;
    v36 = 0x90482413000LL;
    if ( !v30 )
    {
      v37 = v49;
      if ( (unsigned __int64)&STACK[0x90482413070] <= 0x7F8 )
        v37 = MiReadPteShadow(&v49, v49);
      v30 = 48 * ((v37 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    }
    if ( (*(_QWORD *)(v30 + 40) & 0x200000000000000LL) != 0 )
    {
      v31 = ((v51 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v34 = MiCompleteProtoPteFault(a1, v47, v51, v35, a6, 0, a5);
      if ( v34 >= 0 )
        goto LABEL_66;
      return (unsigned int)v34;
    }
    if ( v50 && *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      PteShadow = *(_QWORD *)v31;
      v35 = v31 + v36;
      if ( (unsigned __int64)(v31 + v36) <= 0x7F8 )
        PteShadow = MiReadPteShadow(v31, *(_QWORD *)v31);
      v39 = PteShadow & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      *(_QWORD *)v31 = v39;
      if ( v35 <= 0x7F8 )
        MiWritePteShadow(v31, v39);
    }
    TransitionPteValid = MiMakeTransitionPteValid(v31, v32, v33, v35);
    v42 = TransitionPteValid;
    if ( a6 )
    {
      if ( (TransitionPteValid & 0x800) != 0 )
      {
        v42 = TransitionPteValid | 0x42;
        if ( (*(_BYTE *)(v30 + 34) & 0x10) == 0 )
        {
          v43 = *(_QWORD *)(v30 + 16);
          if ( (unsigned __int64)(v30 + 16 + v41) <= 0x7F8 )
            LOBYTE(v43) = MiReadPteShadow(v30 + 16, *(_QWORD *)(v30 + 16));
          if ( (v43 & 4) != 0 )
            MiLockPageAndSetDirty(v30, 1);
        }
      }
    }
    if ( !v50 )
      goto LABEL_93;
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
    {
      *(_QWORD *)v31 = v42;
      if ( (unsigned __int64)(v31 + 0x90482413000LL) <= 0x7F8 )
        MiWritePteShadow(v31, v42);
      *(_QWORD *)v30 = 0LL;
      return 276LL;
    }
    v44 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL) != 5 )
LABEL_93:
      v44 = 0LL;
    if ( MiAllocateWsle(a1, v31, v30, 0LL, v42, v44) )
    {
LABEL_66:
      if ( dword_14034F248 && (_DWORD)v48 != 2 && (unsigned int)MiGetEffectivePagePriorityThread(v6) >= dword_14034F270 )
        MiLogPageAccess(a1, v31 | 1);
      if ( !v34 )
        return 276;
      return (unsigned int)v34;
    }
    MiLockAndDecrementShareCount(v30, 0LL);
    return (unsigned int)-1073741801;
  }
  return result;
}
