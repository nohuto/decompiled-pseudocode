/*
 * XREFs of MiProtectPrivateMemory @ 0x1400614B0
 * Callers:
 *     MiProtectVirtualMemory @ 0x140418F80 (MiProtectVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14001EC70 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiLocateCloneAddress @ 0x14001EDA8 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x14001EE20 (MiRotatedToFrameBuffer.c)
 *     MiMakeProtoLeafValid @ 0x14001EF04 (MiMakeProtoLeafValid.c)
 *     MiUnlockVa @ 0x140021744 (MiUnlockVa.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiRevertValidPte @ 0x14005D150 (MiRevertValidPte.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiGetPageProtection @ 0x14005F320 (MiGetPageProtection.c)
 *     MiSanitizePfnProtection @ 0x14005F5D0 (MiSanitizePfnProtection.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MiComputePageCommitment @ 0x1400D66E0 (MiComputePageCommitment.c)
 *     MiSetProtectionOnTransitionPte @ 0x1400EEBBC (MiSetProtectionOnTransitionPte.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x1401DEC20 (MI_GET_USED_PTES_HANDLE.c)
 *     MiReturnFullProcessCommitment @ 0x1403E7B98 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14041AAC0 (MiChargeFullProcessCommitment.c)
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
  int v7; // edi
  int v8; // r13d
  int v9; // ebx
  int v10; // esi
  unsigned __int64 ProtoLeafValid; // r12
  volatile LONG *v12; // r15
  __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // r13
  KIRQL v16; // di
  int PageProtection; // eax
  _KPROCESS *v18; // rdx
  int v19; // eax
  ULONG_PTR v20; // r14
  unsigned __int64 v21; // rax
  _KPROCESS *v22; // rdx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rdx
  _QWORD *CloneAddress; // rdi
  unsigned __int64 v28; // r13
  char v29; // r14
  unsigned __int64 v30; // r15
  ULONG_PTR v31; // rdi
  ULONG_PTR *v32; // rbx
  unsigned __int64 Wsle; // rcx
  unsigned int v34; // r13d
  __int64 v35; // r10
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r8
  KIRQL v40; // [rsp+30h] [rbp-D0h]
  int v41; // [rsp+34h] [rbp-CCh]
  __int64 v43; // [rsp+40h] [rbp-C0h]
  __int64 v44; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v45; // [rsp+50h] [rbp-B0h]
  __int64 v46; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp-A0h]
  __int64 v48; // [rsp+68h] [rbp-98h] BYREF
  int v49; // [rsp+70h] [rbp-90h] BYREF
  _KPROCESS *Process; // [rsp+78h] [rbp-88h]
  _DWORD *v51; // [rsp+80h] [rbp-80h]
  int v52; // [rsp+90h] [rbp-70h] BYREF
  __int16 v53; // [rsp+94h] [rbp-6Ch]
  __int64 v54; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  _DWORD v57[40]; // [rsp+150h] [rbp+50h] BYREF

  v7 = a3;
  v8 = a1;
  v51 = a7;
  v54 = 20LL;
  v52 = 1;
  v9 = a2;
  BugCheckParameter4 = a1;
  v53 = 0;
  v10 = 0;
  v55 = 0LL;
  v56 = 0LL;
  v57[0] = 0;
  ProtoLeafValid = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v41 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = (volatile LONG *)&Process[1].IdealNode[12];
  v45 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43 = (__int64)&Process[1].IdealNode[12];
  v40 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  if ( MiComputePageCommitment(v9, v7, v8, v40, (__int64)&v48) != ((__int64)(v45 - ProtoLeafValid) >> 3) + 1 )
  {
    MiUnlockWorkingSetExclusive((__int64)v12, v40, v13);
    return 3221225517LL;
  }
  v15 = v48;
  v44 = v48;
  if ( v48 )
  {
    MiUnlockWorkingSetExclusive((__int64)v12, v40, v13);
    result = MiChargeFullProcessCommitment(Process, v15);
    if ( (int)result < 0 )
      return result;
    v16 = ExAcquireSpinLockExclusive(v12);
    v40 = v16;
  }
  else
  {
    v16 = v40;
  }
  MiMakeSystemAddressValid(ProtoLeafValid, 1);
  if ( MI_READ_PTE_LOCK_FREE(ProtoLeafValid) )
  {
    PageProtection = MiGetPageProtection(BugCheckParameter4, ProtoLeafValid, v16, 1);
    v18 = (_KPROCESS *)MmProtectToValue;
    *a6 = MmProtectToValue[PageProtection];
    v19 = 1;
    v41 = 1;
  }
  else
  {
    v18 = (_KPROCESS *)MmProtectToValue;
    *a6 = MmProtectToValue[(*(_DWORD *)(BugCheckParameter4 + 48) >> 3) & 0x1F];
    v19 = 0;
  }
  if ( ProtoLeafValid <= v45 )
  {
    while ( 1 )
    {
      if ( (ProtoLeafValid & 0xFFF) != 0 && v19 != 1 )
      {
        v20 = BugCheckParameter4;
      }
      else
      {
        v41 = 0;
        MiFlushTbList((__int64)&v52, v18);
        v20 = BugCheckParameter4;
        MiMakeSystemAddressValid(ProtoLeafValid, 1);
      }
      v21 = MI_READ_PTE_LOCK_FREE(ProtoLeafValid);
      v46 = v21;
      v23 = v21;
      if ( (v21 & 1) != 0 )
        break;
      if ( (v21 & 0x400) == 0 )
      {
        if ( (v21 & 0x800) != 0 )
        {
          if ( !(unsigned int)MiSetProtectionOnTransitionPte(v20, ProtoLeafValid, a4, 1LL) )
            goto LABEL_61;
        }
        else
        {
          if ( v21 )
          {
            v37 = v21 >> 5;
          }
          else
          {
            v36 = MI_GET_USED_PTES_HANDLE((__int64)(ProtoLeafValid << 25) >> 16);
            MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v36, 1u);
            LODWORD(v37) = *(_DWORD *)(v20 + 48) >> 3;
          }
          a4 = MiSanitizePfnProtection(v20, v37 & 0x1F, a4);
          v38 = ((unsigned __int16)v23 ^ (unsigned __int16)(32 * a4)) & 0x3E0 ^ v23;
          v46 = v38;
          *(_QWORD *)ProtoLeafValid = v38;
          if ( (unsigned int)MiPteInShadowRange(ProtoLeafValid) )
            MiWritePteShadow(ProtoLeafValid, v38);
LABEL_61:
          ProtoLeafValid += 8LL;
        }
LABEL_62:
        v19 = v41;
        goto LABEL_63;
      }
      MiFlushTbList((__int64)&v52, v22);
      ProtoLeafValid = MiMakeProtoLeafValid(ProtoLeafValid, 1LL, v16);
      v19 = 1;
      v41 = 1;
LABEL_63:
      v15 = v44;
      v16 = v40;
      if ( ProtoLeafValid > v45 )
        goto LABEL_64;
    }
    v24 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v46) >> 12) & 0xFFFFFFFFFLL;
    v25 = 48 * v24 - 0x58000000000LL;
    if ( (*(_BYTE *)(v20 + 48) & 7) == 6 && MiRotatedToFrameBuffer(ProtoLeafValid) )
    {
      v34 = a4;
    }
    else
    {
      if ( (*(_QWORD *)(v25 + 40) & 0x200000000000000LL) != 0 )
      {
        v26 = *(_QWORD *)(v25 + 8);
        CloneAddress = 0LL;
        if ( v26 < 0 )
        {
          CloneAddress = MiLocateCloneAddress((__int64)Process, v26 | 0x8000000000000000uLL);
          if ( MEMORY[0xFFFFF580108042B0] <= CloneAddress[9] )
            CloneAddress = 0LL;
        }
        MiFlushTbList((__int64)&v52, (_KPROCESS *)v26);
        if ( (unsigned int)MiCopyOnWriteEx((__int64)(ProtoLeafValid << 25) >> 16, 0) )
        {
          v19 = v41;
          if ( CloneAddress )
          {
            v44 = v15 - 1;
            v48 = v15 - 1;
          }
        }
        else
        {
          v19 = 1;
          v41 = 1;
        }
        goto LABEL_63;
      }
      if ( (a5 & 0x101) != 0 )
      {
        v28 = v45;
        if ( (ProtoLeafValid & 0xFFFFFFFFFFFFF000uLL) != (v45 & 0xFFFFFFFFFFFFF000uLL) )
          v28 = (ProtoLeafValid & 0xFFFFFFFFFFFFF000uLL) + 4088;
        v29 = 0;
        v30 = ProtoLeafValid;
        v31 = (__int64)(ProtoLeafValid << 25) >> 16;
        if ( ProtoLeafValid <= v28 )
        {
          while ( 1 )
          {
            v46 = MI_READ_PTE_LOCK_FREE(v30);
            if ( (v46 & 1) == 0 )
              goto LABEL_42;
            v32 = (ULONG_PTR *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v46) - 0x58000000000LL);
            if ( (*(_BYTE *)(BugCheckParameter4 + 48) & 7) == 6 && MiRotatedToFrameBuffer(ProtoLeafValid) )
              goto LABEL_42;
            if ( (v32[5] & 0x200000000000000LL) != 0 )
              goto LABEL_42;
            Wsle = MiLocateWsle(v31, v43, *v32);
            if ( Wsle < MEMORY[0xFFFFF58010804008] )
              break;
            *(_QWORD *)&v57[2 * v10 + 2] = Wsle;
            v10 = ++v57[0];
            if ( v57[0] == 19 )
              goto LABEL_37;
LABEL_41:
            v30 += 8LL;
            v31 += 4096LL;
            if ( v30 > v28 )
              goto LABEL_42;
          }
          v29 = 1;
          *v51 = 1;
LABEL_37:
          if ( v10 )
          {
            MiFreeWsleList(v43, v57, 0LL);
            v10 = 0;
            v57[0] = 0;
          }
          if ( v29 == 1 )
          {
            MiUnlockVa(v43, v31);
            v29 = 0;
          }
          goto LABEL_41;
        }
LABEL_42:
        v12 = (volatile LONG *)v43;
        if ( v10 )
        {
          MiFreeWsleList(v43, v57, 0LL);
          v10 = 0;
          v57[0] = 0;
        }
        goto LABEL_62;
      }
      v49 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v49);
          while ( (*(_QWORD *)(v25 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) );
        v12 = (volatile LONG *)v43;
      }
      v34 = MiSanitizePfnProtection(v20, (*(_QWORD *)(v25 + 16) >> 5) & 0x1F, a4);
      a4 = v34;
      *(_QWORD *)(v25 + 16) = v35 ^ ((unsigned __int16)v35 ^ (unsigned __int16)(32 * v34)) & 0x3E0;
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v10 = v57[0];
      v44 = v48;
    }
    MiRevertValidPte(v20, ProtoLeafValid, v34, v24, (__int64)&v52);
    goto LABEL_61;
  }
LABEL_64:
  MiFlushTbList((__int64)&v52, v18);
  MiUnlockWorkingSetExclusive((__int64)v12, v16, v39);
  if ( v15 )
    MiReturnFullProcessCommitment(Process);
  return 0LL;
}
