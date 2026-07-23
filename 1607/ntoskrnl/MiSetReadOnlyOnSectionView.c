/*
 * XREFs of MiSetReadOnlyOnSectionView @ 0x14000C9C0
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x14040B548 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     MiVadPureReserve @ 0x14002B610 (MiVadPureReserve.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x14002E580 (MiLockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiSetProtectionOnTransitionPte @ 0x1400B6D28 (MiSetProtectionOnTransitionPte.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiRevertValidPte @ 0x1400DF690 (MiRevertValidPte.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MmFlushAllFilesystemPages @ 0x1401E5C00 (MmFlushAllFilesystemPages.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiUpdatePfnProtection @ 0x1401F0098 (MiUpdatePfnProtection.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 *     MiMakePrototypePteVadLookup @ 0x1401F2594 (MiMakePrototypePteVadLookup.c)
 */

__int64 __fastcall MiSetReadOnlyOnSectionView(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  __int64 v5; // r10
  unsigned int v7; // esi
  unsigned int v8; // r12d
  unsigned int updated; // r14d
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 v11; // rcx
  __int64 SharedVm; // rdi
  KIRQL v13; // al
  unsigned int v14; // edi
  _KPROCESS *Process; // r15
  ULONG_PTR v16; // rsi
  int v17; // eax
  ULONG_PTR v18; // rdi
  ULONG_PTR v19; // rbp
  __int64 v20; // rsi
  _KPROCESS *v21; // r15
  ULONG_PTR v22; // rsi
  int v23; // eax
  ULONG_PTR v24; // rbp
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // r15
  __int64 v29; // r10
  __int64 v30; // rdi
  __int64 *v31; // r9
  __int64 v32; // r10
  __int64 v33; // rcx
  __int64 PrototypePteVadLookup; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  unsigned __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  KIRQL v41; // [rsp+30h] [rbp-148h]
  int v42; // [rsp+34h] [rbp-144h]
  unsigned __int64 v43; // [rsp+38h] [rbp-140h] BYREF
  __int64 v44; // [rsp+40h] [rbp-138h]
  __int64 v45; // [rsp+48h] [rbp-130h]
  __int64 SharedWorkingSetList; // [rsp+50h] [rbp-128h]
  __int64 v47; // [rsp+58h] [rbp-120h]
  char v48[16]; // [rsp+60h] [rbp-118h] BYREF
  int v49; // [rsp+70h] [rbp-108h] BYREF
  __int16 v50; // [rsp+74h] [rbp-104h]
  __int64 v51; // [rsp+78h] [rbp-100h]
  __int64 v52; // [rsp+80h] [rbp-F8h]
  __int64 v53; // [rsp+88h] [rbp-F0h]

  if ( (unsigned int)MiVadPureReserve(a2) )
    return 3221225541LL;
  v7 = 0;
  v8 = 4;
  updated = 1;
  v49 = 1;
  v42 = 0;
  v51 = 20LL;
  v50 = 0;
  v52 = 0LL;
  v53 = 0LL;
  v47 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  BugCheckParameter4 = v47;
  v44 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v45 = v5 + 1280;
  SharedWorkingSetList = MiGetSharedWorkingSetList();
  SharedVm = MiGetSharedVm(v11);
  v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v41 = v13;
  v14 = (*(_DWORD *)(a2 + 48) >> 8) & 0x3F;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !(unsigned __int8)MiIsAddressValid(BugCheckParameter4, 1LL) )
  {
    v16 = ((unsigned __int64)v14 << 57) | 0x100000000000002LL;
    do
    {
      MiUnlockWorkingSetExclusive(&Process[1].IdealNode[12], v41);
      v17 = MmAccessFault(v16, BugCheckParameter4);
      v18 = v17;
      if ( v17 < 0 )
      {
        MmFlushAllFilesystemPages(1LL);
        KeBugCheckEx(0x7Au, 1uLL, v18, (ULONG_PTR)Process, BugCheckParameter4);
      }
      MiLockWorkingSetExclusive(&Process[1].IdealNode[12]);
    }
    while ( !(unsigned __int8)MiIsAddressValid(BugCheckParameter4, 1LL) );
    v7 = 0;
  }
  v19 = v44;
  while ( BugCheckParameter4 <= v19 )
  {
    if ( (BugCheckParameter4 & 0xFFF) == 0 )
    {
      v20 = (*(_DWORD *)(a2 + 48) >> 8) & 0x3F;
      v21 = KeGetCurrentThread()->ApcState.Process;
      if ( !(unsigned __int8)MiIsAddressValid(BugCheckParameter4, 1LL) )
      {
        v22 = (v20 << 57) | 0x100000000000002LL;
        do
        {
          MiFlushTbList(&v49);
          MiUnlockWorkingSetExclusive(&v21[1].IdealNode[12], v41);
          v23 = MmAccessFault(v22, BugCheckParameter4);
          v24 = v23;
          if ( v23 < 0 )
          {
            MmFlushAllFilesystemPages(1LL);
            KeBugCheckEx(0x7Au, 1uLL, v24, (ULONG_PTR)v21, BugCheckParameter4);
          }
          MiLockWorkingSetExclusive(&v21[1].IdealNode[12]);
        }
        while ( !(unsigned __int8)MiIsAddressValid(BugCheckParameter4, 1LL) );
        v19 = v44;
      }
    }
    v25 = MI_READ_PTE_LOCK_FREE(BugCheckParameter4);
    v43 = v25;
    v26 = v25;
    if ( !v25 )
      goto LABEL_34;
    if ( (v25 & 1) != 0 )
    {
      v28 = MI_GET_PAGE_FRAME_FROM_PTE(&v43);
      v30 = v29 + 48 * v28;
      if ( *(_WORD *)(v30 + 32) > 1u && (updated & 7) != 4 )
        goto LABEL_34;
      if ( (v27 & *(_QWORD *)(v30 + 40)) != 0 )
      {
        if ( (*(_QWORD *)(v30 + 8) | 0x8000000000000000uLL) == MiGetProtoPteAddress(
                                                                 a2,
                                                                 (unsigned __int64)((__int64)(BugCheckParameter4 << 25) >> 16) >> 12,
                                                                 1LL,
                                                                 v48) )
        {
          v31 = (__int64 *)(*(_QWORD *)(qword_140327FD0 + 276841312)
                          + MiLocateWsle((__int64)(BugCheckParameter4 << 25) >> 16)
                          * *(unsigned int *)(SharedWorkingSetList + 32));
          v32 = *v31;
          v33 = ((unsigned __int64)*v31 >> 4) & 0x1F;
          if ( v33 == v8 || !v33 && (unsigned int)MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v30 + 16) == v8 )
          {
            *v31 = v32 ^ ((unsigned __int16)v32 ^ (unsigned __int16)(16 * updated)) & 0x1F0;
            goto LABEL_28;
          }
        }
LABEL_34:
        v19 = BugCheckParameter4 - 8;
        v8 = 1;
        BugCheckParameter4 = v47;
        v7 = -1073741755;
        v44 = v19;
        v42 = -1073741755;
        updated = 4;
      }
      else
      {
        if ( ((*(_DWORD *)(v30 + 16) >> 5) & 0x1F) != (unsigned __int64)v8 )
          goto LABEL_34;
        updated = MiUpdatePfnProtection(a2, v30, updated);
LABEL_28:
        MiRevertValidPte(a2, BugCheckParameter4, updated, v28, (__int64)&v49);
        v7 = v42;
        BugCheckParameter4 += 8LL;
      }
    }
    else
    {
      if ( (v25 & 0x400) != 0 )
      {
        if ( (updated & 7) != 4 )
          goto LABEL_34;
        if ( !(unsigned int)MiIsPrototypePteVadLookup(v25) )
        {
          PrototypePteVadLookup = MiMakePrototypePteVadLookup(updated);
          v43 = PrototypePteVadLookup;
          *(_QWORD *)BugCheckParameter4 = PrototypePteVadLookup;
          if ( (unsigned int)MiPteInShadowRange(BugCheckParameter4, PrototypePteVadLookup) )
            MiWritePteShadow(v36, v35);
          goto LABEL_34;
        }
        goto LABEL_40;
      }
      if ( (v25 & 0x800) != 0 )
      {
        v37 = MiSetProtectionOnTransitionPte(a2, BugCheckParameter4, updated, (updated & 7) == 4);
        if ( !v37 )
          goto LABEL_42;
        if ( v37 != 2 )
          goto LABEL_34;
        v7 = v42;
      }
      else
      {
        if ( ((v25 >> 5) & 0x1F) != v8 )
          goto LABEL_34;
LABEL_40:
        v38 = ((unsigned __int16)v26 ^ (unsigned __int16)(32 * updated)) & 0x3E0 ^ v26;
        v43 = v38;
        *(_QWORD *)BugCheckParameter4 = v38;
        if ( (unsigned int)MiPteInShadowRange(BugCheckParameter4, v38) )
          MiWritePteShadow(v40, v39);
LABEL_42:
        v7 = v42;
        BugCheckParameter4 += 8LL;
      }
    }
  }
  MiFlushTbList(&v49);
  MiUnlockWorkingSetExclusive(v45, v41);
  return v7;
}
