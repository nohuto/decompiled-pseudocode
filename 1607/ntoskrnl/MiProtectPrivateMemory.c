/*
 * XREFs of MiProtectPrivateMemory @ 0x1400DEEE0
 * Callers:
 *     MiProtectVirtualMemory @ 0x140432340 (MiProtectVirtualMemory.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiIncreaseUsedPtesCount @ 0x140037030 (MiIncreaseUsedPtesCount.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiComputePageCommitment @ 0x140095B00 (MiComputePageCommitment.c)
 *     MiMakeProtoLeafValid @ 0x1400984DC (MiMakeProtoLeafValid.c)
 *     MiSetProtectionOnTransitionPte @ 0x1400B6D28 (MiSetProtectionOnTransitionPte.c)
 *     MiUnlockVa @ 0x1400B88A0 (MiUnlockVa.c)
 *     MiGetPageProtection @ 0x1400BB5A0 (MiGetPageProtection.c)
 *     MiLocateCloneAddress @ 0x1400BB990 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x1400BBC90 (MiRotatedToFrameBuffer.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiSanitizePfnProtection @ 0x1400DF630 (MiSanitizePfnProtection.c)
 *     MiRevertValidPte @ 0x1400DF690 (MiRevertValidPte.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetUsedPtesHandle @ 0x1401EF60C (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiChargeFullProcessCommitment @ 0x14042F830 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1404A8A18 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiProtectPrivateMemory(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int16 a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v9; // r13
  unsigned __int64 ProtoLeafValid; // r12
  int v11; // edx
  int v12; // r14d
  LONG *SharedVm; // rbx
  KIRQL v14; // al
  ULONG_PTR v15; // rbx
  __int64 result; // rax
  __int64 v17; // rsi
  LONG *v18; // rbx
  KIRQL v19; // al
  KIRQL v20; // di
  __int64 v21; // r8
  __int64 v22; // r9
  int PageProtection; // eax
  _KPROCESS *v24; // rdx
  int v25; // eax
  __int64 v26; // r15
  unsigned __int64 v27; // rax
  _KPROCESS *v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r9
  int v34; // edi
  __int64 v35; // rbx
  __int64 v36; // rdx
  _QWORD *CloneAddress; // rdi
  unsigned __int64 v38; // r13
  char v39; // si
  unsigned __int64 v40; // r15
  ULONG_PTR v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r9
  ULONG_PTR *v44; // rbx
  ULONG_PTR v45; // r8
  __int64 v46; // rbx
  unsigned __int64 Wsle; // rcx
  unsigned int v48; // esi
  __int64 v49; // r9
  __int64 UsedPtesHandle; // rax
  unsigned __int64 v51; // rax
  unsigned int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 DemandZeroPte; // rbx
  __int64 v57; // rcx
  KIRQL v58; // [rsp+30h] [rbp-D0h]
  int v59; // [rsp+34h] [rbp-CCh]
  __int64 v62; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v63; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v64; // [rsp+58h] [rbp-A8h]
  __int64 v65; // [rsp+60h] [rbp-A0h]
  int v66; // [rsp+68h] [rbp-98h] BYREF
  __int64 v67; // [rsp+70h] [rbp-90h] BYREF
  _KPROCESS *Process; // [rsp+78h] [rbp-88h]
  ULONG_PTR *SharedWorkingSetList; // [rsp+80h] [rbp-80h]
  _DWORD *v70; // [rsp+88h] [rbp-78h]
  int v71; // [rsp+90h] [rbp-70h] BYREF
  __int16 v72; // [rsp+94h] [rbp-6Ch]
  __int64 v73; // [rsp+98h] [rbp-68h]
  __int64 v74; // [rsp+A0h] [rbp-60h]
  __int64 v75; // [rsp+A8h] [rbp-58h]
  _DWORD v76[40]; // [rsp+150h] [rbp+50h] BYREF

  v72 = 0;
  v74 = 0LL;
  v75 = 0LL;
  v70 = a7;
  v73 = 20LL;
  v71 = 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = (__int64)&Process[1].IdealNode[12];
  v63 = &Process[1].IdealNode[12];
  SharedWorkingSetList = MiGetSharedWorkingSetList((__int64)&Process[1].IdealNode[12]);
  ProtoLeafValid = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v76[0] = v11;
  v64 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = v11;
  v59 = v11;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v14 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = v12;
  v15 = a1;
  v58 = v14;
  if ( MiComputePageCommitment(a2, a3, a1, v14, &v67) != ((__int64)(v64 - ProtoLeafValid) >> 3) + 1 )
  {
    MiUnlockWorkingSetExclusive(v9, v58);
    return 3221225517LL;
  }
  v17 = v67;
  v65 = v67;
  if ( v67 )
  {
    MiUnlockWorkingSetExclusive(v9, v58);
    result = MiChargeFullProcessCommitment(Process, v17);
    if ( (int)result < 0 )
      return result;
    v18 = MiGetSharedVm(v9);
    v19 = ExAcquireSpinLockExclusive(v18);
    v18[1] = v12;
    v20 = v19;
    v15 = a1;
    v58 = v19;
  }
  else
  {
    v20 = v58;
  }
  MiMakeSystemAddressValid(ProtoLeafValid, 0LL, (*(_DWORD *)(v15 + 48) >> 8) & 0x3F, v20, 1);
  if ( MI_READ_PTE_LOCK_FREE(ProtoLeafValid) )
  {
    PageProtection = MiGetPageProtection(v15, ProtoLeafValid, v20, 1);
    v24 = (_KPROCESS *)MmProtectToValue;
    *a6 = MmProtectToValue[PageProtection];
    v25 = 1;
    v59 = 1;
  }
  else
  {
    v24 = (_KPROCESS *)MmProtectToValue;
    *a6 = MmProtectToValue[(*(_DWORD *)(v15 + 48) >> 3) & 0x1F];
    v25 = v12;
  }
  if ( ProtoLeafValid <= v64 )
  {
    while ( 1 )
    {
      if ( (ProtoLeafValid & 0xFFF) != 0 && v25 != 1 )
      {
        v26 = a1;
      }
      else
      {
        v26 = a1;
        v59 = 0;
        MiMakeSystemAddressValid(ProtoLeafValid, (__int64)&v71, (*(_DWORD *)(a1 + 48) >> 8) & 0x3F, v20, 1);
      }
      v27 = MI_READ_PTE_LOCK_FREE(ProtoLeafValid);
      v62 = v27;
      v31 = v27;
      if ( (v27 & 1) != 0 )
        break;
      if ( (v27 & 0x400) == 0 )
      {
        if ( (v27 & 0x800) != 0 )
        {
          if ( !(unsigned int)MiSetProtectionOnTransitionPte(v26, (unsigned __int64 *)ProtoLeafValid, a4, 1) )
            goto LABEL_65;
        }
        else
        {
          if ( v27 )
          {
            v51 = v27 >> 5;
          }
          else
          {
            UsedPtesHandle = MiGetUsedPtesHandle((__int64)(ProtoLeafValid << 25) >> 16);
            MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
            LODWORD(v51) = *(_DWORD *)(v26 + 48) >> 3;
          }
          v52 = MiSanitizePfnProtection(v26, v51 & 0x1F, a4);
          a4 = v52;
          if ( v31 )
            DemandZeroPte = ((unsigned __int16)v31 ^ (unsigned __int16)(32 * v52)) & 0x3E0 ^ v31;
          else
            DemandZeroPte = MiMakeDemandZeroPte(v52, v53, v54, v55);
          v62 = DemandZeroPte;
          *(_QWORD *)ProtoLeafValid = DemandZeroPte;
          if ( (unsigned int)MiPteInShadowRange(ProtoLeafValid, v53) )
            MiWritePteShadow(v57, DemandZeroPte);
LABEL_65:
          ProtoLeafValid += 8LL;
        }
LABEL_66:
        v25 = v59;
        goto LABEL_67;
      }
      MiFlushTbList((__int64)&v71, v28, v29, v30);
      ProtoLeafValid = MiMakeProtoLeafValid(ProtoLeafValid, 1LL, v20);
      v25 = 1;
      v59 = 1;
LABEL_67:
      v17 = v65;
      v20 = v58;
      v22 = 0xFFFFFA8000000000uLL;
      if ( ProtoLeafValid > v64 )
        goto LABEL_68;
    }
    v32 = MI_GET_PAGE_FRAME_FROM_PTE(&v62);
    v34 = v32;
    v35 = v33 + 48 * v32;
    if ( (*(_BYTE *)(v26 + 48) & 7) == 6 )
    {
      if ( MiRotatedToFrameBuffer(ProtoLeafValid) )
      {
        v48 = a4;
        goto LABEL_51;
      }
      v33 = 0xFFFFFA8000000000uLL;
    }
    if ( (*(_QWORD *)(v35 + 40) & 0x200000000000000LL) != 0 )
    {
      v36 = *(_QWORD *)(v35 + 8);
      CloneAddress = 0LL;
      if ( v36 < 0 )
      {
        CloneAddress = MiLocateCloneAddress((__int64)Process, v36 | 0x8000000000000000uLL);
        v36 = CloneAddress[9];
        if ( *(_QWORD *)(qword_140327FD0 + 276840632) <= (unsigned __int64)v36 )
          CloneAddress = 0LL;
      }
      MiFlushTbList((__int64)&v71, (_KPROCESS *)v36, v21, v33);
      if ( (unsigned int)MiCopyOnWriteEx((__int64)(ProtoLeafValid << 25) >> 16, 0) )
      {
        v25 = v59;
        if ( CloneAddress )
        {
          v65 = v17 - 1;
          v67 = v17 - 1;
        }
      }
      else
      {
        v25 = 1;
        v59 = 1;
      }
      goto LABEL_67;
    }
    if ( (a5 & 0x101) != 0 )
    {
      v38 = v64;
      if ( (ProtoLeafValid & 0xFFFFFFFFFFFFF000uLL) != (v64 & 0xFFFFFFFFFFFFF000uLL) )
        v38 = (ProtoLeafValid & 0xFFFFFFFFFFFFF000uLL) + 4088;
      v39 = 0;
      v40 = ProtoLeafValid;
      v41 = (__int64)(ProtoLeafValid << 25) >> 16;
      if ( ProtoLeafValid <= v38 )
      {
        while ( 1 )
        {
          v62 = MI_READ_PTE_LOCK_FREE(v40);
          if ( (v62 & 1) == 0 )
            goto LABEL_43;
          v42 = MI_GET_PAGE_FRAME_FROM_PTE(&v62);
          v44 = (ULONG_PTR *)(v43 + 48 * v42);
          if ( (*(_BYTE *)(a1 + 48) & 7) == 6 && MiRotatedToFrameBuffer(ProtoLeafValid) )
            goto LABEL_43;
          if ( (v44[5] & 0x200000000000000LL) != 0 )
            goto LABEL_43;
          v45 = *v44;
          v46 = (__int64)v63;
          Wsle = MiLocateWsle(v41, (__int64)v63, v45);
          if ( Wsle < SharedWorkingSetList[1] )
            break;
          *(_QWORD *)&v76[2 * v12 + 2] = Wsle;
          v12 = ++v76[0];
          if ( v76[0] == 19 )
            goto LABEL_38;
LABEL_42:
          v40 += 8LL;
          v41 += 4096LL;
          if ( v40 > v38 )
            goto LABEL_43;
        }
        v39 = 1;
        *v70 = 1;
LABEL_38:
        if ( v12 )
        {
          MiFreeWsleList(v46, v76, 0LL);
          v12 = 0;
          v76[0] = 0;
        }
        if ( v39 == 1 )
        {
          MiUnlockVa(v46, v41);
          v39 = 0;
        }
        goto LABEL_42;
      }
LABEL_43:
      v9 = (__int64)v63;
      if ( v12 )
      {
        MiFreeWsleList(v63, v76, 0LL);
        v12 = 0;
        v76[0] = 0;
      }
      goto LABEL_66;
    }
    v66 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v66);
        while ( (*(_QWORD *)(v35 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) );
      v9 = (__int64)v63;
    }
    v48 = MiSanitizePfnProtection(v26, (*(_QWORD *)(v35 + 16) >> 5) & 0x1FLL, a4);
    a4 = v48;
    *(_QWORD *)(v35 + 16) = v49 ^ ((unsigned __int16)v49 ^ (unsigned __int16)(32 * v48)) & 0x3E0;
    _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v12 = v76[0];
    v65 = v67;
LABEL_51:
    MiRevertValidPte(v26, ProtoLeafValid, v48, v34, (__int64)&v71);
    goto LABEL_65;
  }
LABEL_68:
  MiFlushTbList((__int64)&v71, v24, v21, v22);
  MiUnlockWorkingSetExclusive(v9, v20);
  if ( v17 )
    MiReturnFullProcessCommitment(Process, v17);
  return 0LL;
}
