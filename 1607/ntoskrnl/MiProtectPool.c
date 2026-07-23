/*
 * XREFs of MiProtectPool @ 0x1400E8270
 * Callers:
 *     ExProtectPoolEx @ 0x1400E80E0 (ExProtectPoolEx.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1400169DC (MI_WSLE_LOG_ACCESS.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     KeFlushTb @ 0x14001D96C (KeFlushTb.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiLockNonPagedPoolPte @ 0x1400242D0 (MiLockNonPagedPoolPte.c)
 *     MiMakeProtectionMask @ 0x14002B880 (MiMakeProtectionMask.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     KeFlushMultipleRangeTb @ 0x1400B3B64 (KeFlushMultipleRangeTb.c)
 *     MiLockTransitionLeafPage @ 0x1400B6E48 (MiLockTransitionLeafPage.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiVaIsSessionSpecialPool @ 0x1400E9150 (MiVaIsSessionSpecialPool.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1400FC498 (MI_TIGHTER_PERMISSIONS.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14012FD08 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeFlushCurrentTbOnly @ 0x1401D5EF0 (KeFlushCurrentTbOnly.c)
 *     MiFindLargeMapping @ 0x1401ECAA0 (MiFindLargeMapping.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 */

__int64 __fastcall MiProtectPool(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int *v3; // rbp
  unsigned int v4; // r9d
  unsigned int ProtectionMask; // eax
  unsigned __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // r12
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rdx
  int v11; // r14d
  char *AnyMultiplexedVm; // r13
  int v13; // edi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r8
  _KPROCESS *v16; // rdx
  ULONG_PTR *SharedWorkingSetList; // rax
  LONG *v18; // rbx
  char v19; // cl
  KIRQL v20; // al
  KIRQL v21; // r15
  __int64 v22; // r9
  __int64 v23; // rax
  _KPROCESS *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  signed __int64 v27; // rdi
  ULONG_PTR *v28; // rax
  __int64 v29; // r9
  __int64 v30; // r11
  unsigned __int64 v31; // r8
  _KPROCESS *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned __int64 Wsle; // rbx
  __int64 v38; // rax
  unsigned __int64 v39; // r8
  _KPROCESS *Process; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rcx
  LONG *SharedVm; // rbx
  unsigned __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r9
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rdi
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 TransitionPte; // rax
  signed __int64 v55; // rdx
  bool v56; // zf
  signed __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // r10
  unsigned __int64 v63; // r11
  __int64 v64; // r14
  __int64 v65; // r9
  __int64 v66; // rdx
  signed __int64 ValidKernelPte; // rbx
  __int64 v68; // rax
  signed __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r14
  unsigned __int64 v76; // r11
  __int64 v77; // rdi
  unsigned __int64 v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // r9
  __int64 v83; // rcx
  char v85; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL);
  v4 = a3;
  if ( (a3 & 0x10) != 0 && (MiFlags & 0x4000) != 0 )
    v4 = a3 & 0xFFFFFFEF;
  ProtectionMask = MiMakeProtectionMask(v4);
  v8 = ProtectionMask;
  if ( ProtectionMask >= 8 && ProtectionMask != 24 || (ProtectionMask & 5) == 5 )
    return 0LL;
  v9 = 0xFFFFF68000000000uLL;
  v10 = v7 + v6 - 1;
  v11 = 0;
  *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v10;
  *(_DWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0;
  AnyMultiplexedVm = 0LL;
  v13 = 0;
  v14 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v6 < qword_140327F70 || v6 >= qword_140327F70 + 0xF8000000000LL )
  {
    if ( qword_140326C70 && v6 >= qword_140326C70 && v6 < qword_140326C70 + (qword_140326C50 << 21) )
    {
      if ( ((v10 ^ v6) & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        v6 = (v6 >> 18) & 0x3FFFFFF8;
        if ( (*(_BYTE *)(48 * ((*(_QWORD *)(v6 - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
          AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
        goto LABEL_23;
      }
    }
    else if ( (unsigned int)MiVaIsSessionSpecialPool(v6) )
    {
      v10 = *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
      v6 = v10 ^ v15;
      if ( (v6 & 0xFFFFFFFFFFFFF000uLL) == 0 )
      {
        v13 = 2;
        AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
        goto LABEL_23;
      }
    }
    else if ( v15 >= qword_140327F60[0]
           && v15 < qword_140327F60[0] + 0x100000000000LL
           && !(unsigned int)MiFindLargeMapping(
                               v15,
                               *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20)) )
    {
      v10 = *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
      v11 = 1;
      *(_DWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 1;
      v9 = 0xFFFFF68000000000uLL;
      goto LABEL_23;
    }
    return 0LL;
  }
  AnyMultiplexedVm = (char *)&unk_140327BA0;
LABEL_23:
  v16 = (_KPROCESS *)(v9 + ((v10 >> 9) & 0x7FFFFFFFF8LL));
  *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 20LL;
  *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v16;
  *(_DWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = v13;
  *(_WORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) = 0;
  *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
  if ( AnyMultiplexedVm )
  {
    SharedWorkingSetList = MiGetSharedWorkingSetList((__int64)AnyMultiplexedVm);
    v18 = &dword_140327CC0;
    v19 = AnyMultiplexedVm[184] & 7;
    *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = SharedWorkingSetList;
    if ( v19 != 2 )
      v18 = (LONG *)(AnyMultiplexedVm + 192);
    v20 = ExAcquireSpinLockExclusive(v18);
    v16 = *(_KPROCESS **)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
    v21 = v20;
    *(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = v20;
    v18[1] = 0;
  }
  else
  {
    v21 = 17;
    *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
    *(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 17;
  }
  v22 = v13;
  *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v13;
  if ( v14 <= (unsigned __int64)v16 )
  {
    do
    {
      v23 = MI_READ_PTE_LOCK_FREE(v14);
      *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v23;
      v27 = v23;
      if ( (_DWORD)v8 == 24 )
      {
        if ( !AnyMultiplexedVm )
        {
          if ( v11 == 1 )
          {
            v52 = MiLockNonPagedPoolPte(v14, (unsigned __int8 *)((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL));
            v27 = MI_READ_PTE_LOCK_FREE(v14);
            *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v27;
          }
          else
          {
            v52 = MI_GET_PFN_FROM_PTE(v3 + 4);
            *(_BYTE *)v3 = MiLockPageInline(v52);
          }
          *(_QWORD *)(v52 + 16) = *(_QWORD *)(v52 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
          v53 = MI_GET_PAGE_FRAME_FROM_PTE(v3 + 4);
          TransitionPte = MiMakeTransitionPte(v53, 24LL);
          v55 = TransitionPte;
          if ( v11 == 1 )
          {
            while ( 1 )
            {
              v57 = _InterlockedCompareExchange64((volatile signed __int64 *)v14, v55, v27);
              v56 = v27 == v57;
              v27 = v57;
              if ( v56 )
                break;
              *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v57;
              v58 = MI_GET_PAGE_FRAME_FROM_PTE(v3 + 4);
              v55 = MiMakeTransitionPte(v58, 24LL);
            }
            if ( (*(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) & 0x200LL) != 0 )
              *(_QWORD *)(v52 + 24) = *(_QWORD *)(v52 + 24) & 0xC000000000000000uLL | 0x10000;
          }
          else
          {
            *(_QWORD *)v14 = TransitionPte;
            if ( (unsigned int)MiPteInShadowRange(v14, TransitionPte) )
              MiWritePteShadow(v60, v59);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(*(unsigned __int8 *)v3);
          MiInsertTbFlushEntry((__int64)(v3 + 16), (__int64)(v14 << 25) >> 16, 1LL, 0);
          goto LABEL_54;
        }
        if ( (v23 & 1) == 0 )
        {
          if ( (v23 & 0x400) == 0 )
          {
            v46 = v14;
            if ( (v23 & 0x800) == 0 )
            {
              v51 = v23 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
              goto LABEL_161;
            }
            if ( MiLockTransitionLeafPage(v14, 0LL) )
            {
              v47 = MI_READ_PTE_LOCK_FREE(v14);
              v49 = *(_QWORD *)(v48 + 16) & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
              v50 = v47 & 0xFFFFFFFFFFFFFC1FuLL | 0x300;
LABEL_157:
              *(_QWORD *)(v48 + 16) = v49;
              *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v50;
              *(_QWORD *)v14 = v50;
              if ( (unsigned int)MiPteInShadowRange(v14, v50) )
                MiWritePteShadow(v81, v16);
              _InterlockedAnd64((volatile signed __int64 *)(v82 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v22 = *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
              goto LABEL_163;
            }
LABEL_83:
            v22 = *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
            v14 -= 8LL;
            goto LABEL_163;
          }
          if ( *(_DWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C) )
          {
            v39 = qword_140326A58;
            if ( (*(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) & 2) != 0 )
              goto LABEL_67;
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process[2].ActiveProcessors.Bitmap[14] )
              goto LABEL_66;
            if ( !Process->SecurePid )
            {
LABEL_67:
              if ( *(_DWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) != 1 )
                goto LABEL_69;
              v41 = 0LL;
            }
            else
            {
              if ( *(_DWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) == 1 )
              {
LABEL_66:
                v39 = -1LL;
                goto LABEL_67;
              }
LABEL_69:
              v41 = (unsigned int)((*(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) & 4) != 0) + 1;
            }
            if ( *(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x45)
              || *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) > v39 )
            {
              v44 = *(unsigned int *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
              if ( (*(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) & 1) != 0 )
                KeFlushCurrentTbOnly(v44, v41, v39, v26);
              else
                KeFlushTb(v44, v41);
              *(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x45) = 0;
            }
            else
            {
              v42 = *(unsigned int *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
              v43 = *(unsigned int *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C);
              if ( (*(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) & 1) != 0 )
                KeFlushMultipleRangeCurrentTb(v43, v3 + 22, v42);
              else
                KeFlushMultipleRangeTb(v43, (__int64)(v3 + 22), v42, v41);
            }
            *(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) &= ~4u;
            *(_DWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C) = 0;
            *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
          }
LABEL_80:
          MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v21);
          MmAccessFault(0LL, (__int64)(v14 << 25) >> 16, 0, 0LL);
          SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
          v21 = ExAcquireSpinLockExclusive(SharedVm);
          *(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = v21;
          SharedVm[1] = 0;
          goto LABEL_53;
        }
        v28 = (ULONG_PTR *)MI_GET_PFN_FROM_PTE(v3 + 4);
        if ( (v28[5] & 0x200000000000000LL) == 0 )
        {
          Wsle = MiLocateWsle((__int64)((v14 << 25) - (v30 << 25)) >> 16, (__int64)AnyMultiplexedVm, *v28);
          if ( dword_1403271C8 )
            MI_WSLE_LOG_ACCESS(
              (__int64)AnyMultiplexedVm,
              (_DWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) + 80LL)
                       + Wsle
                       * *(unsigned int *)(*(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) + 32LL)),
              (_BYTE *)v14);
          v38 = *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
          *(_DWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x100) = 1;
          *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x108) = Wsle;
          if ( Wsle < *(_QWORD *)(v38 + 8) || MiFreeWsleList((ULONG_PTR)AnyMultiplexedVm, v3 + 64, 0) )
            goto LABEL_54;
          goto LABEL_53;
        }
        if ( *(_DWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C) )
        {
          v31 = qword_140326A58;
          if ( (*(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) & 2) != 0 )
            goto LABEL_39;
          v32 = KeGetCurrentThread()->ApcState.Process;
          if ( v32[2].ActiveProcessors.Bitmap[14] )
            goto LABEL_38;
          if ( !v32->SecurePid )
          {
LABEL_39:
            if ( *(_DWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) != 1 )
              goto LABEL_41;
            v33 = 0LL;
          }
          else
          {
            if ( *(_DWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) == 1 )
            {
LABEL_38:
              v31 = -1LL;
              goto LABEL_39;
            }
LABEL_41:
            v33 = (unsigned int)((*(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) & 4) != 0) + 1;
          }
          if ( *(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x45)
            || *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) > v31 )
          {
            v36 = *(unsigned int *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
            if ( (*(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) & 1) != 0 )
              KeFlushCurrentTbOnly(v36, v33, v31, v29);
            else
              KeFlushTb(v36, v33);
            *(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x45) = 0;
          }
          else
          {
            v34 = *(unsigned int *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
            v35 = *(unsigned int *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C);
            if ( (*(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) & 1) != 0 )
              KeFlushMultipleRangeCurrentTb(v35, v3 + 22, v34);
            else
              KeFlushMultipleRangeTb(v35, (__int64)(v3 + 22), v34, v33);
          }
          *(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x44) &= ~4u;
          *(_DWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C) = 0;
          *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
        }
      }
      else
      {
        if ( !AnyMultiplexedVm )
        {
          while ( 1 )
          {
            v61 = MI_GET_PAGE_FRAME_FROM_PTE(v3 + 4);
            v64 = 48 * v61 - 0x58000000000LL;
            if ( v65 )
            {
              ValidKernelPte = MmProtectToPteMask[v8] ^ (v27 ^ MmProtectToPteMask[v8]) & 0xFFFFFFFFF000LL | 0x21;
              if ( v14 >= 0xFFFFF6FB40000000uLL && v14 <= 0xFFFFF6FB7FFFFFFFuLL )
                ValidKernelPte &= v62 & ~qword_1403A9350;
              if ( v14 <= v63 + 0x3FFFFFFF78LL && v14 >= v63
                || v14 >= 0xFFFFF6FB40000000uLL && v14 <= 0xFFFFF6FB5FFFFFF8uLL
                || v14 >= 0xFFFFF6FB7DA00000uLL && v14 <= 0xFFFFF6FB7DAFFFF8uLL
                || v14 >= 0xFFFFF6FB7DBED000uLL && v14 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                ValidKernelPte |= 4uLL;
              }
              if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v14) )
                ValidKernelPte |= 0x100uLL;
            }
            else
            {
              ValidKernelPte = MiMakeValidKernelPte(v61, v8, v14);
            }
            if ( (v8 & 4) != 0 )
              ValidKernelPte |= 0x42uLL;
            if ( (v27 & 1) == 0 )
              break;
            if ( *(_DWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) != 1 )
            {
              *(_BYTE *)v3 = 17;
              *(_QWORD *)v14 = ValidKernelPte;
              if ( (unsigned int)MiPteInShadowRange(v14, v66) )
                MiWritePteShadow(v70, ValidKernelPte);
LABEL_127:
              *(_QWORD *)(v64 + 16) ^= (*(_DWORD *)(v64 + 16) ^ (32 * (_DWORD)v8)) & 0x3E0;
              if ( *(_DWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) == 1 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(*(unsigned __int8 *)v3);
                v27 = *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
              }
              if ( (MiFlags & 0x100) == 0 || (unsigned int)MI_TIGHTER_PERMISSIONS(v27, ValidKernelPte) )
                MiInsertTbFlushEntry((__int64)(v3 + 16), (__int64)(v14 << 25) >> 16, 1LL, 0);
LABEL_132:
              v21 = *(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 1);
              goto LABEL_54;
            }
            v64 = MiLockNonPagedPoolPte(v14, (unsigned __int8 *)((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL));
            v68 = MI_READ_PTE_LOCK_FREE(v14);
            if ( v68 == v27 )
            {
              if ( (v27 & 0x200) != 0 )
                ValidKernelPte |= 0x200uLL;
              v69 = _InterlockedCompareExchange64((volatile signed __int64 *)v14, ValidKernelPte, v27);
              v56 = v27 == v69;
              v27 = v69;
              if ( v56 )
              {
                v27 = *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
                goto LABEL_127;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(*(unsigned __int8 *)v3);
              *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v69;
            }
            else
            {
              _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(*(unsigned __int8 *)v3);
              v27 = v68;
              *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v68;
            }
          }
          if ( (*(_QWORD *)(v64 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
          {
            *(_BYTE *)v3 = MiLockPageInline(v64);
            *(_QWORD *)(v64 + 24) = *(_QWORD *)(v64 + 24) & 0xC000000000000000uLL | 1;
            _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(*(unsigned __int8 *)v3);
            ValidKernelPte |= 0x200uLL;
          }
          *(_QWORD *)(v64 + 16) ^= (*(_DWORD *)(v64 + 16) ^ (32 * (_DWORD)v8)) & 0x3E0;
          *(_QWORD *)v14 = ValidKernelPte;
          if ( !(unsigned int)MiPteInShadowRange(v14, v66) )
            goto LABEL_132;
          MiWritePteShadow(v71, ValidKernelPte);
          v21 = *(_BYTE *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 1);
          v22 = *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          goto LABEL_163;
        }
        if ( (v23 & 1) == 0 )
        {
          if ( (v23 & 0x400) == 0 )
          {
            v46 = v14;
            if ( (v23 & 0x800) == 0 )
            {
              v51 = ((unsigned __int16)v23 ^ (unsigned __int16)(32 * v8)) & 0x3E0 ^ (unsigned __int64)v23;
LABEL_161:
              *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v51;
              *(_QWORD *)v14 = v51;
              if ( (unsigned int)MiPteInShadowRange(v46, v24) )
                MiWritePteShadow(v83, v51);
              goto LABEL_163;
            }
            if ( MiLockTransitionLeafPage(v14, 0LL) )
            {
              v79 = MI_READ_PTE_LOCK_FREE(v14);
              v80 = 32 * (v8 & 0x1F);
              v49 = v80 | *(_QWORD *)(v48 + 16) & 0xFFFFFFFFFFFFFC1FuLL;
              v50 = v80 | v79 & 0xFFFFFFFFFFFFFC1FuLL;
              goto LABEL_157;
            }
            goto LABEL_83;
          }
          MiFlushTbList((__int64)(v3 + 16), v24, v25, v26);
          goto LABEL_80;
        }
        v72 = MI_GET_PAGE_FRAME_FROM_PTE(v3 + 4);
        v75 = 48 * v72 - 0x58000000000LL;
        if ( (*(_QWORD *)(v75 + 40) & 0x200000000000000LL) == 0 )
        {
          if ( v74 )
          {
            if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v14) )
              v76 |= 0x100uLL;
          }
          else
          {
            v76 = MiMakeValidKernelPte(v72, v8, v14);
          }
          if ( v27 == _InterlockedCompareExchange64((volatile signed __int64 *)v14, v76, v27) )
          {
            v77 = *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
            if ( (MiFlags & 0x100) == 0
              || (unsigned int)MI_TIGHTER_PERMISSIONS(
                                 *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
                                 v76) )
            {
              MiInsertTbFlushEntry((__int64)(v3 + 16), (__int64)(v14 << 25) >> 16, 1LL, 0);
            }
            v78 = 0LL;
            MiLockPageAtDpcInline(v75);
            *(_QWORD *)(v75 + 16) ^= (*(_DWORD *)(v75 + 16) ^ (32 * (_DWORD)v8)) & 0x3E0;
            if ( (v77 & 0x42) != 0 )
              v78 = MiCaptureDirtyBitToPfn(v75);
            _InterlockedAnd64((volatile signed __int64 *)(v75 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v78 )
              MiReleasePageFileInfo((struct _KEVENT *)MiSystemPartition, v78, 1);
            goto LABEL_54;
          }
          goto LABEL_53;
        }
        MiFlushTbList((__int64)(v3 + 16), (_KPROCESS *)0x200000000000000LL, v73, v74);
      }
      MiCopyOnWriteEx((__int64)(v14 << 25) >> 16, v14, -1LL, v21, 0);
LABEL_53:
      v14 -= 8LL;
LABEL_54:
      v22 = *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
LABEL_163:
      v11 = *(_DWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
      v14 += 8LL;
    }
    while ( v14 <= *(_QWORD *)(((unsigned __int64)&v85 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) );
  }
  MiFlushTbList((__int64)(v3 + 16), v16, v6, v22);
  if ( AnyMultiplexedVm )
    MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v21);
  return 1LL;
}
