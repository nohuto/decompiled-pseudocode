/*
 * XREFs of MiProtectPrivateMemory @ 0x14005DD20
 * Callers:
 *     MiProtectVirtualMemory @ 0x1404B9700 (MiProtectVirtualMemory.c)
 * Callees:
 *     MiGetPageProtection @ 0x14003BD40 (MiGetPageProtection.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 *     MiSanitizePfnProtection @ 0x14005E6A0 (MiSanitizePfnProtection.c)
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14005E830 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MiUnlockVa @ 0x14007C98C (MiUnlockVa.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiRotatedToFrameBuffer @ 0x140080948 (MiRotatedToFrameBuffer.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiRevertValidPte @ 0x140091390 (MiRevertValidPte.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiComputePageCommitment @ 0x14010E9C0 (MiComputePageCommitment.c)
 *     MiSetProtectionOnTransitionPte @ 0x140129CD0 (MiSetProtectionOnTransitionPte.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x140223A68 (MI_GET_USED_PTES_HANDLE.c)
 *     MiMakeProtoLeafValid @ 0x140224CAC (MiMakeProtoLeafValid.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x14041AE3C (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x1404BBC10 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiProtectPrivateMemory(
        ULONG_PTR a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int v7; // r14d
  int v8; // edi
  __int64 *v9; // r13
  int v10; // esi
  volatile signed __int32 *v11; // r12
  unsigned int v12; // ebx
  signed __int32 i; // edx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // r12
  volatile signed __int32 *v17; // r14
  unsigned __int8 v18; // di
  unsigned int v19; // ebx
  signed __int32 j; // edx
  __int64 PteShadow; // rax
  ULONG_PTR v22; // rdx
  ULONG_PTR v23; // r13
  int v24; // eax
  ULONG_PTR ProtoLeafValid; // r15
  __int64 v26; // r9
  unsigned __int64 v27; // r14
  __int64 v28; // r11
  char *v29; // r13
  ULONG_PTR v30; // r10
  __int64 v31; // r14
  __int64 v32; // rdi
  __int64 v33; // rdx
  _QWORD *CloneAddress; // rbx
  unsigned __int64 v35; // r12
  ULONG_PTR v36; // r9
  __int64 v37; // r14
  char v38; // r15
  ULONG_PTR v39; // r14
  unsigned __int64 *v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // rbx
  unsigned __int64 Wsle; // rcx
  unsigned int v44; // ebx
  int v45; // r13d
  unsigned int v46; // r12d
  __int64 v47; // r9
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned int v52; // eax
  __int64 DemandZeroPte; // rax
  int v54; // [rsp+30h] [rbp-D0h]
  __int64 v55; // [rsp+38h] [rbp-C8h]
  volatile signed __int32 *v57; // [rsp+48h] [rbp-B8h]
  unsigned __int8 CurrentIrql; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v60; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v61; // [rsp+68h] [rbp-98h] BYREF
  __int64 v62; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v63; // [rsp+78h] [rbp-88h]
  _KPROCESS *Process; // [rsp+80h] [rbp-80h]
  _DWORD *v65; // [rsp+88h] [rbp-78h]
  _DWORD v66[40]; // [rsp+90h] [rbp-70h] BYREF
  int v67; // [rsp+130h] [rbp+30h] BYREF
  __int16 v68; // [rsp+134h] [rbp+34h]
  __int64 v69; // [rsp+138h] [rbp+38h]
  __int64 v70; // [rsp+140h] [rbp+40h]
  __int64 v71; // [rsp+148h] [rbp+48h]

  v7 = a3;
  v65 = a7;
  v8 = a2;
  v69 = 20LL;
  v67 = 1;
  v9 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v68 = 0;
  v10 = 0;
  v70 = 0LL;
  v71 = 0LL;
  v60 = (ULONG_PTR)v9;
  v66[0] = 0;
  v54 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  v63 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v57 = (volatile signed __int32 *)&Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
  }
  else
  {
    v12 = 0;
    if ( _interlockedbittestandset(v11, 0x1Fu) )
      v12 = ExpWaitForSpinLockExclusiveAndAcquire(v11);
    for ( i = *v11; (*v11 & 0xBFFFFFFF) != 0x80000000; i = *v11 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v11, i | 0x40000000, i);
      if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v12);
    }
    v10 = v66[0];
  }
  v14 = MiComputePageCommitment(v8, v7, a1, CurrentIrql, (__int64)&v62);
  if ( v14 != ((__int64)(v63 - (_QWORD)v9) >> 3) + 1 )
  {
    MiUnlockWorkingSetExclusive(v11, CurrentIrql);
    return 3221225517LL;
  }
  v16 = v62;
  v17 = v57;
  v55 = v62;
  if ( v62 )
  {
    MiUnlockWorkingSetExclusive(v57, CurrentIrql);
    result = MiChargeFullProcessCommitment(Process, v16);
    if ( (int)result < 0 )
      return result;
    v18 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v57);
      CurrentIrql = v18;
    }
    else
    {
      v19 = 0;
      if ( _interlockedbittestandset(v57, 0x1Fu) )
        v19 = ExpWaitForSpinLockExclusiveAndAcquire(v57);
      for ( j = *v57; (*v57 & 0xBFFFFFFF) != 0x80000000; j = *v57 )
      {
        if ( (j & 0x40000000) == 0 )
          _InterlockedCompareExchange(v57, j | 0x40000000, j);
        if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v19);
      }
      v16 = v62;
      v10 = v66[0];
      v55 = v62;
      CurrentIrql = v18;
    }
  }
  else
  {
    v18 = CurrentIrql;
  }
  MiMakeSystemAddressValid((ULONG_PTR)v9, 1);
  PteShadow = *v9;
  if ( (unsigned __int64)(v9 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v9, *v9);
  if ( PteShadow )
  {
    v22 = (ULONG_PTR)v9;
    v23 = a1;
    *a6 = MmProtectToValue[(unsigned int)MiGetPageProtection(a1, v22, v18, 1)];
    v24 = 1;
    v54 = 1;
  }
  else
  {
    v23 = a1;
    *a6 = MmProtectToValue[(*(_DWORD *)(a1 + 48) >> 3) & 0x1F];
    v24 = 0;
  }
  ProtoLeafValid = v60;
  if ( v60 <= v63 )
  {
    v26 = 0x58000000000LL;
    while ( 1 )
    {
      if ( (ProtoLeafValid & 0xFFF) == 0 || v24 == 1 )
      {
        v54 = 0;
        MiFlushTbList(&v67);
        MiMakeSystemAddressValid(ProtoLeafValid, 1);
        v26 = 0x58000000000LL;
      }
      v27 = *(_QWORD *)ProtoLeafValid;
      v28 = 0x12090482600LL;
      if ( ProtoLeafValid + 0x90482413000LL <= 0x7F8 )
        v27 = MiReadPteShadow(ProtoLeafValid, *(_QWORD *)ProtoLeafValid);
      v61 = v27;
      if ( (v27 & 1) != 0 )
        break;
      if ( (v27 & 0x400) != 0 )
      {
        MiFlushTbList(&v67);
        ProtoLeafValid = MiMakeProtoLeafValid(ProtoLeafValid);
        v60 = ProtoLeafValid;
        v24 = 1;
        v54 = 1;
        goto LABEL_107;
      }
      if ( (v27 & 0x800) != 0 )
      {
        if ( (unsigned int)MiSetProtectionOnTransitionPte(v23, ProtoLeafValid, a4, 1LL) )
        {
          v24 = v54;
LABEL_107:
          v17 = v57;
LABEL_108:
          v48 = v55;
          goto LABEL_109;
        }
      }
      else
      {
        if ( v27 )
        {
          v51 = v27 >> 5;
        }
        else
        {
          v50 = MI_GET_USED_PTES_HANDLE((__int64)(ProtoLeafValid << 25) >> 16);
          MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v50, 1LL);
          LODWORD(v51) = *(_DWORD *)(v23 + 48) >> 3;
        }
        v52 = MiSanitizePfnProtection(v23, v51 & 0x1F, a4);
        a4 = v52;
        if ( v27 )
          DemandZeroPte = v27 ^ ((unsigned __int16)v27 ^ (unsigned __int16)(32 * v52)) & 0x3E0;
        else
          DemandZeroPte = MiMakeDemandZeroPte(v52);
        v61 = DemandZeroPte;
        *(_QWORD *)ProtoLeafValid = DemandZeroPte;
        if ( ProtoLeafValid + 0x90482413000LL <= 0x7F8 )
          MiWritePteShadow(ProtoLeafValid, DemandZeroPte);
      }
      v48 = v55;
      ProtoLeafValid += 8LL;
      v17 = v57;
      v24 = v54;
      v60 = ProtoLeafValid;
LABEL_109:
      v26 = 0x58000000000LL;
      v23 = a1;
      if ( ProtoLeafValid > v63 )
        goto LABEL_121;
      v16 = v55;
    }
    v29 = (char *)&v61 + v28 * 8;
    if ( (unsigned __int64)&v61 + v28 * 8 <= 0x7F8 )
      v27 = MiReadPteShadow(&v61, v27);
    v30 = a1;
    v31 = (v27 >> 12) & 0xFFFFFFFFFLL;
    v32 = 48 * v31 - v26;
    if ( (*(_BYTE *)(a1 + 48) & 7) == 6 )
    {
      if ( (unsigned int)MiRotatedToFrameBuffer(ProtoLeafValid) == 1 )
      {
        v48 = v55;
        v45 = a1;
        v46 = a4;
LABEL_92:
        if ( (v46 & 2) != 0 && (BYTE2(MiFlags) & 3u) > 1 )
        {
          v49 = 0LL;
          if ( ((*(_QWORD *)(v32 + 40) >> 54) & 7) != 3 )
            v49 = 2LL;
          if ( (v46 & 4) != 0 && (v46 & 5) != 5 )
            v49 = (unsigned int)v49 | 1;
          if ( (_DWORD)v49 )
            MiMarkPfnVerified(v32, v49);
        }
        MiRevertValidPte(v45, ProtoLeafValid, v46, v31, (__int64)&v67);
        v18 = CurrentIrql;
        ProtoLeafValid += 8LL;
        v17 = v57;
        v24 = v54;
        v60 = ProtoLeafValid;
        goto LABEL_109;
      }
      v30 = a1;
      v28 = 0x12090482600LL;
    }
    if ( (*(_QWORD *)(v32 + 40) & 0x200000000000000LL) != 0 )
    {
      v33 = *(_QWORD *)(v32 + 8);
      CloneAddress = 0LL;
      if ( v33 < 0 )
      {
        CloneAddress = MiLocateCloneAddress((__int64)Process, v33 | 0x8000000000000000uLL);
        if ( MEMORY[0xFFFFF58010804258] <= CloneAddress[9] )
          CloneAddress = 0LL;
      }
      MiFlushTbList(&v67);
      v18 = CurrentIrql;
      if ( !(unsigned int)MiCopyOnWriteEx(
                            (__int64)(ProtoLeafValid << 25) >> 16,
                            (volatile __int64 *)ProtoLeafValid,
                            -1LL,
                            CurrentIrql,
                            0) )
      {
        v24 = 1;
        v54 = 1;
        goto LABEL_107;
      }
      v17 = v57;
      v24 = v54;
      if ( CloneAddress )
      {
        v55 = v16 - 1;
        v62 = v16 - 1;
      }
      goto LABEL_108;
    }
    if ( (a5 & 0x101) != 0 )
    {
      v35 = v63;
      if ( (ProtoLeafValid & 0xFFFFFFFFFFFFF000uLL) != (v63 & 0xFFFFFFFFFFFFF000uLL) )
        v35 = (ProtoLeafValid & 0xFFFFFFFFFFFFF000uLL) + 4088;
      v36 = v60;
      v37 = ProtoLeafValid << 25;
      v38 = 0;
      v39 = v37 >> 16;
      v40 = (unsigned __int64 *)v60;
      if ( v60 > v35 )
      {
LABEL_80:
        v17 = v57;
        if ( v10 )
        {
          MiFreeWsleList(v57, v66, 0LL);
          v10 = 0;
          v66[0] = 0;
        }
        ProtoLeafValid = v60;
        v18 = CurrentIrql;
        v24 = v54;
        goto LABEL_108;
      }
      while ( 2 )
      {
        v41 = *v40;
        if ( (unsigned __int64)&v40[v28] <= 0x7F8 )
          v41 = MiReadPteShadow(v40, *v40);
        v61 = v41;
        if ( (v41 & 1) == 0 )
          goto LABEL_80;
        if ( (unsigned __int64)v29 <= 0x7F8 )
          v41 = MiReadPteShadow(&v61, v41);
        v42 = 48 * ((v41 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( (*(_BYTE *)(v30 + 48) & 7) == 6 && (unsigned int)MiRotatedToFrameBuffer(v36) == 1 )
          goto LABEL_80;
        if ( (*(_QWORD *)(v42 + 40) & 0x200000000000000LL) != 0 )
          goto LABEL_80;
        Wsle = MiLocateWsle(v39);
        if ( Wsle < MEMORY[0xFFFFF58010804008] )
        {
          v38 = 1;
          *v65 = 1;
          goto LABEL_75;
        }
        *(_QWORD *)&v66[2 * v10 + 2] = Wsle;
        v10 = ++v66[0];
        if ( v10 == 19 )
        {
LABEL_75:
          if ( v10 )
          {
            MiFreeWsleList(v57, v66, 0LL);
            v10 = 0;
            v66[0] = 0;
          }
          if ( v38 == 1 )
          {
            MiUnlockVa(v57, v39);
            v38 = 0;
          }
        }
        v36 = v60;
        ++v40;
        v30 = a1;
        v39 += 4096LL;
        v28 = 0x12090482600LL;
        if ( (unsigned __int64)v40 > v35 )
          goto LABEL_80;
        continue;
      }
    }
    v44 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v44 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v44);
      }
      while ( (*(_QWORD *)(v32 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) );
    }
    v45 = a1;
    v46 = MiSanitizePfnProtection(a1, (*(_QWORD *)(v32 + 16) >> 5) & 0x1FLL, a4);
    a4 = v46;
    *(_QWORD *)(v32 + 16) = v47 ^ ((unsigned __int16)v47 ^ (unsigned __int16)(32 * v46)) & 0x3E0;
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v48 = v62;
    v10 = v66[0];
    v55 = v62;
    goto LABEL_92;
  }
  v48 = v55;
LABEL_121:
  MiFlushTbList(&v67);
  MiUnlockWorkingSetExclusive(v17, v18);
  if ( v48 )
    MiReturnFullProcessCommitment(Process);
  return 0LL;
}
