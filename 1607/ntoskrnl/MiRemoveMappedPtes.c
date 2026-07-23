/*
 * XREFs of MiRemoveMappedPtes @ 0x1400FE0A0
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x1400FDE10 (MiRemoveFromSystemSpace.c)
 * Callees:
 *     MiReleasePageFileSpace @ 0x140021DB8 (MiReleasePageFileSpace.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14002228C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiRemoveViewsFromSection @ 0x140022364 (MiRemoveViewsFromSection.c)
 *     MiCheckControlArea @ 0x140027A60 (MiCheckControlArea.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockLeafPage @ 0x14002E5D0 (MiLockLeafPage.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiLogPageAccess @ 0x1400484C0 (MiLogPageAccess.c)
 *     MiDeleteValidSystemPage @ 0x14004B220 (MiDeleteValidSystemPage.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiTryDeleteTransitionPte @ 0x1400B6E00 (MiTryDeleteTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiTerminateWsle @ 0x1400E0160 (MiTerminateWsle.c)
 *     MiTbFlushType @ 0x1400FEB3C (MiTbFlushType.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 */

unsigned __int64 __fastcall MiRemoveMappedPtes(_QWORD *a1, ULONG_PTR a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // r13
  __int64 v5; // rbp
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  ULONG_PTR v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // r14
  LONG *SharedVm; // rbx
  KIRQL v14; // al
  KIRQL v15; // r15
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  ULONG_PTR *v18; // rax
  ULONG_PTR *v19; // rbx
  unsigned __int64 Wsle; // rsi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 PrototypePteDirect; // rbx
  __int64 v24; // rcx
  __int64 v25; // r9
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r9
  __int64 v32; // rbx
  LONG *v33; // rbx
  KIRQL v34; // al
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  _KPROCESS *v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rsi
  KIRQL v42; // al
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // r14
  KIRQL v46; // bl
  int v47; // r8d
  unsigned __int64 result; // rax
  unsigned __int64 v49; // rdx
  unsigned __int8 v50[8]; // [rsp+20h] [rbp-168h] BYREF
  ULONG_PTR *SharedWorkingSetList; // [rsp+28h] [rbp-160h]
  __int64 v52; // [rsp+30h] [rbp-158h]
  __int64 v53; // [rsp+38h] [rbp-150h]
  _QWORD *v54; // [rsp+40h] [rbp-148h]
  unsigned __int64 v55; // [rsp+48h] [rbp-140h] BYREF
  unsigned __int64 v56; // [rsp+50h] [rbp-138h]
  __int64 v57; // [rsp+58h] [rbp-130h] BYREF
  __int64 v58; // [rsp+60h] [rbp-128h]
  __int64 v59; // [rsp+68h] [rbp-120h]
  __int64 v60; // [rsp+70h] [rbp-118h]
  int v61; // [rsp+80h] [rbp-108h] BYREF
  __int16 v62; // [rsp+84h] [rbp-104h]
  __int64 v63; // [rsp+88h] [rbp-100h]
  __int64 v64; // [rsp+90h] [rbp-F8h]
  __int64 v65; // [rsp+98h] [rbp-F0h]

  v2 = a1[4];
  v3 = a1[10];
  v5 = 0LL;
  v6 = a1[6] & 0xFFFFFFFFFFFFFFF8uLL;
  v54 = a1;
  v7 = v2 >> 12;
  v56 = v6;
  v8 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v52 = v7;
  v53 = 0LL;
  v63 = 20LL;
  v9 = v3 & 0xFFFFFFFFFFFFF000uLL;
  v61 = MiTbFlushType(a2);
  v62 = 0;
  v64 = 0LL;
  v65 = 0LL;
  v12 = (_QWORD *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( !*(_QWORD *)(v10 + 64) || (*(_DWORD *)(v10 + 56) & 0x420) != 0 )
    v8 = -1LL;
  if ( dword_1403271C8 )
    SharedWorkingSetList = MiGetSharedWorkingSetList(v11);
  else
    SharedWorkingSetList = 0LL;
  SharedVm = MiGetSharedVm(a2);
  v14 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v15 = v14;
  if ( v7 )
  {
    while ( 1 )
    {
      v16 = MI_READ_PTE_LOCK_FREE(v12);
      v55 = v16;
      if ( (v16 & 1) != 0 )
      {
        v18 = (ULONG_PTR *)MI_GET_PFN_FROM_PTE(&v55);
        v19 = v18;
        Wsle = *v18;
        if ( SharedWorkingSetList )
        {
          Wsle = MiLocateWsle(v9, a2, *v18);
          if ( (*(_BYTE *)v12 & 0x20) != 0
            && (*(_DWORD *)(Wsle * *((unsigned int *)SharedWorkingSetList + 8) + SharedWorkingSetList[10]) & 0xE00) != 0xE00LL )
          {
            MiLogPageAccess(a2, (__int64)v12);
          }
        }
        MiTerminateWsle(v9, a2, Wsle, 0);
        if ( v8 != -1 && (v19[5] & 0x200000000000000LL) != 0 && (v19[2] & 0x400) != 0 )
        {
          if ( !v8
            || (v21 = *(_QWORD *)(v8 + 8), v22 = v19[1] | 0x8000000000000000uLL, v22 < v21)
            || v22 >= v21 + 8LL * *(unsigned int *)(v8 + 44) )
          {
            PrototypePteDirect = MiGetPrototypePteDirect(v19[2]);
            if ( v8 != PrototypePteDirect )
            {
              if ( v8 )
                MiRemoveViewsFromSectionWithPfn((__int64 *)v8, *(unsigned int *)(v8 + 44));
              v8 = PrototypePteDirect;
            }
          }
        }
        MiInsertTbFlushEntry((__int64)&v61, v9, 1LL, 0);
        MiDeleteValidSystemPage(v12, 0, (__int64)&v57);
        v7 = v52;
        v58 = 0LL;
        goto LABEL_51;
      }
      if ( (v16 & 0x400) != 0 )
      {
        *v12 = 0LL;
        if ( (unsigned int)MiPteInShadowRange(v12, v17) )
          MiWritePteShadow(v24, 0LL);
        v26 = MiGetPrototypePteDirect(v25);
        if ( v8 != -1 )
        {
          if ( !v8 || (v27 = *(_QWORD *)(v8 + 8), v26 < v27) || v26 >= v27 + 8LL * *(unsigned int *)(v8 + 44) )
          {
            MiUnlockWorkingSetExclusive(a2, v15);
            v28 = MiLockProtoPoolPage(v26, v50);
            if ( !v28 )
            {
              do
              {
                MmAccessFault(2uLL, v26, 0, 0LL);
                v28 = MiLockProtoPoolPage(v26, v50);
              }
              while ( !v28 );
              v5 = 0LL;
            }
            v29 = MiLockLeafPage(v26, 0);
            if ( v29 )
            {
              v30 = MI_READ_PTE_LOCK_FREE(v29 + 16);
              _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            else
            {
              v30 = MI_READ_PTE_LOCK_FREE(v26);
            }
            MiUnlockProtoPoolPage(v28, v50[0]);
            if ( (v30 & 0x400) != 0 )
            {
              v32 = MiGetPrototypePteDirect(v30);
              if ( v8 != v32 )
              {
                if ( v8 )
                  MiRemoveViewsFromSectionWithPfn((__int64 *)v8, *(unsigned int *)(v8 + 44));
                v8 = v32;
              }
            }
            v33 = MiGetSharedVm(a2);
            v34 = ExAcquireSpinLockExclusive(v33);
            v7 = v52;
            v15 = v34;
            v33[1] = 0;
          }
        }
        goto LABEL_51;
      }
      if ( (v16 & 0x800) == 0 )
        break;
      v35 = MiTryDeleteTransitionPte((ULONG_PTR)v12);
      if ( v35 != 1 )
      {
        if ( v35 == 3 )
          ++v53;
LABEL_49:
        *v12 = 0LL;
        if ( (unsigned int)MiPteInShadowRange(v12, v36) )
          MiWritePteShadow(v37, 0LL);
        goto LABEL_51;
      }
LABEL_52:
      if ( !v7 )
        goto LABEL_53;
    }
    if ( v16 )
    {
      MiReleasePageFileSpace((struct _KEVENT *)MiSystemPartition, v16, 1LL);
      goto LABEL_49;
    }
LABEL_51:
    ++v12;
    v9 += 4096LL;
    v52 = --v7;
    goto LABEL_52;
  }
LABEL_53:
  MiUnlockWorkingSetExclusive(a2, v15);
  MiFlushTbList((__int64)&v61, v38, v39, v40);
  v41 = v56;
  v42 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v56 + 72));
  v45 = v54;
  v46 = v42;
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v47 = 2;
    if ( (v54[6] & 4) != 0 )
      v47 = 4;
    v5 = MiRemoveViewsFromSection(v8, *(unsigned int *)(v8 + 44), v47);
  }
  --*(_QWORD *)(v41 + 48);
  --*(_QWORD *)(v41 + 40);
  result = MiCheckControlArea(v41, v46, v43, v44);
  if ( v5 )
    result = MiReturnSubsectionCharges(v5);
  v49 = v45[5] - v53;
  if ( v49 )
    return MiReturnCommit((__int64)MiSystemPartition, v49);
  return result;
}
