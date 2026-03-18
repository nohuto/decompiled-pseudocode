/*
 * XREFs of MmSetAddressRangeModified @ 0x14007C280
 * Callers:
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 *     CcPurgeAndClearCacheSection @ 0x140078F1C (CcPurgeAndClearCacheSection.c)
 *     CcZeroDataInCache @ 0x140079230 (CcZeroDataInCache.c)
 *     CcUnpinRepinnedBcb @ 0x1401DD4E8 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeFlushMultipleRangeTb @ 0x14017E0D8 (KeFlushMultipleRangeTb.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KeFlushCurrentTbOnly @ 0x140203CA8 (KeFlushCurrentTbOnly.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     VmFlushTb @ 0x14025B4C4 (VmFlushTb.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFlushTb @ 0x140264FB0 (ExFlushTb.c)
 *     HvlFlushRangeListTb @ 0x140270884 (HvlFlushRangeListTb.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall MmSetAddressRangeModified(PVOID Address, SIZE_T Length)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r13
  __int64 i; // rdx
  unsigned int v6; // ebx
  __int64 v7; // r10
  __int64 v8; // r11
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int8 v16; // r12
  __int16 *v17; // rsi
  unsigned __int64 v18; // rbx
  unsigned int v19; // eax
  unsigned int v20; // r13d
  unsigned int v21; // r12d
  unsigned __int64 v22; // r8
  __int64 v23; // rcx
  _KPROCESS *Process; // rdx
  __int64 v25; // rdx
  unsigned int v26; // r15d
  unsigned __int8 v27; // r14
  unsigned __int64 v28; // rdi
  unsigned __int8 v29; // si
  __int64 v30; // rbx
  void **v31; // r11
  int v32; // edi
  char *v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r10
  unsigned __int8 v36; // bl
  int v37; // ecx
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 Group; // rcx
  unsigned __int64 GroupSetMember; // rdx
  unsigned __int64 v42; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-C8h]
  __int64 CurrentIrql; // [rsp+40h] [rbp-C0h]
  __int128 v45; // [rsp+48h] [rbp-B8h]
  __int128 v46; // [rsp+58h] [rbp-A8h]
  unsigned int v47; // [rsp+70h] [rbp-90h] BYREF
  __int16 v48; // [rsp+74h] [rbp-8Ch]
  __int64 v49; // [rsp+78h] [rbp-88h]
  unsigned __int64 v50; // [rsp+80h] [rbp-80h]
  _QWORD v51[21]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v52; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v53[21]; // [rsp+138h] [rbp+38h] BYREF

  _ESI = 0;
  v49 = 20LL;
  v47 = 0;
  v48 = 0;
  v50 = 0LL;
  v51[0] = 0LL;
  v3 = (((unsigned __int64)Address >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43 = ((((unsigned __int64)Address + Length - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = (unsigned __int64)Address & 0xFFFFFFFFFFFFF000uLL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FD40);
  }
  else
  {
    v6 = 0;
    if ( _interlockedbittestandset(dword_14034FD40, 0x1Fu) )
      v6 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FD40);
    for ( i = (unsigned int)dword_14034FD40[0];
          (dword_14034FD40[0] & 0xBFFFFFFF) != 0x80000000;
          i = (unsigned int)dword_14034FD40[0] )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(dword_14034FD40, i | 0x40000000, i);
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
  }
  v7 = 0xFFFFFFFFFLL;
  v8 = 0x58000000000LL;
  do
  {
    v9 = *(_QWORD *)v3;
    if ( v3 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(0x90482413000LL, i)
      && (v9 & 1) != 0
      && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      i = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( i )
      {
        v10 = *(_QWORD *)(i + 8 * ((v3 >> 3) & 0x1FF));
        if ( (v10 & 0x20) != 0 )
          v9 |= 0x20uLL;
        if ( (v10 & 0x42) != 0 )
          v9 |= 0x42uLL;
      }
    }
    v42 = v9;
    if ( (v9 & 1) != 0 )
    {
      v11 = 0LL;
      v12 = v9;
      if ( (unsigned __int64)&STACK[0x90482413030] <= 0x7F8
        && (unsigned int)MiPteHasShadow(0x90482413000LL, v9)
        && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
      {
        v13 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 8 * (((unsigned __int64)&v42 >> 3) & 0x1FF));
          if ( (v14 & 0x20) != 0 )
            v12 |= 0x20uLL;
          if ( (v14 & 0x42) != 0 )
            v12 |= 0x42uLL;
        }
      }
      v15 = 48 * (v7 & (v12 >> 12)) - v8;
      v16 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++_ESI & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(_ESI);
        }
        while ( (*(_QWORD *)(v15 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) );
      }
      v17 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v15 + 40)) >> 8) & 0x3FF);
      if ( (*(_BYTE *)(v15 + 34) & 0x10) == 0 || (*(_DWORD *)(v15 + 16) & 0x400LL) == 0 )
        v11 = MiCaptureDirtyBitToPfn(v15);
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v16);
      if ( v11 )
        MiReleasePageFileInfo(v17, v11, 0LL);
      if ( (v9 & 0x42) != 0 )
      {
        v18 = v9 & 0xFFFFFFFFFFFFFFBDuLL;
        v42 = v18;
        *(_QWORD *)v3 = v18;
        if ( v3 + 0x90482413000LL <= 0x7F8 )
          MiWritePteShadow(v3, v18);
        MiInsertTbFlushEntry(&v47, v4, 1LL, 0LL);
      }
      v8 = 0x58000000000LL;
      v7 = 0xFFFFFFFFFLL;
      _ESI = 0;
    }
    v3 += 8LL;
    v4 += 4096LL;
  }
  while ( v3 <= v43 );
  v19 = HIDWORD(v49);
  v20 = HIDWORD(v49);
  v21 = HIDWORD(v49);
  if ( HIDWORD(v49) )
  {
    v22 = qword_14034EBD8;
    if ( (v48 & 2) != 0 )
    {
      v23 = v47;
LABEL_72:
      if ( (_DWORD)v23 == 1 )
      {
        v25 = 0LL;
        goto LABEL_59;
      }
LABEL_58:
      v25 = 1LL;
LABEL_59:
      if ( HIBYTE(v48) || v50 > v22 )
      {
        if ( (v48 & 1) != 0 )
          KeFlushCurrentTbOnly(v23, v25, v22);
        else
          KeFlushTb(v23, v25);
        HIBYTE(v48) = 0;
      }
      else
      {
        if ( (v48 & 1) != 0 )
        {
          v26 = v23;
          if ( (_DWORD)v23 == 1 )
          {
            LODWORD(v23) = v47;
            if ( KeGetCurrentThread()->ApcState.Process->SecurePid )
            {
              v27 = 1;
              goto LABEL_65;
            }
            v19 = HIDWORD(v49);
          }
          v27 = 0;
          if ( (HvlEnlightenments & 6) != 0 )
          {
            if ( (HvlEnlightenments & 2) != 0 || (LODWORD(v23) = v47, (unsigned int)KeNumberProcessors_0 > 1) )
            {
LABEL_65:
              if ( KiKvaShadow )
              {
                if ( !(_DWORD)v23 || (_DWORD)v23 == 2 )
                {
                  v28 = 0LL;
                  v29 = 0;
LABEL_105:
                  CurrentPrcb = KeGetCurrentPrcb();
                  v52 = 1310721LL;
                  memset(v53, 0, 0xA0uLL);
                  Group = CurrentPrcb->Group;
                  GroupSetMember = CurrentPrcb->GroupSetMember;
                  if ( CurrentPrcb->Group )
                    LOWORD(v52) = Group + 1;
                  v53[Group] |= GroupSetMember;
                  HvlFlushRangeListTb(v28, &v52, v29, v27, HIDWORD(v49), v51);
LABEL_95:
                  if ( VmTbFlushEnabled )
                    VmFlushTb(v21, v51);
                  if ( ExTbFlushActive )
                  {
                    v36 = KeGetCurrentIrql();
                    __writecr8(0xFuLL);
                    ExFlushTb(v21, v51, v26);
                    __writecr8(v36);
                  }
                  goto LABEL_113;
                }
              }
              else if ( (_DWORD)v23 )
              {
                v37 = v23 - 1;
                if ( !v37 )
                {
                  v28 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
                  v29 = 0;
                  goto LABEL_105;
                }
                if ( v37 == 1 )
                {
                  v28 = 0LL;
                  v29 = 0;
                  goto LABEL_105;
                }
              }
              v28 = 0LL;
              v29 = 1;
              goto LABEL_105;
            }
            v19 = HIDWORD(v49);
          }
          if ( v19 )
          {
            v30 = v19;
            v31 = (void **)v51;
            v32 = __ROL4__(1, v23) & 0xA;
            do
            {
              v33 = (char *)*v31;
              if ( v32 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
              {
                *(_QWORD *)&v45 = 1LL;
                *((_QWORD *)&v45 + 1) = v33;
                __asm { invpcid esi, [rsp+210h+var_1C8] }
              }
              __invlpg(v33);
              v34 = (unsigned __int16)v33 & 0x7FF;
              v35 = 0x200000LL;
              if ( ((unsigned __int16)v33 & 0x800) == 0 )
                v35 = 4096LL;
              if ( ((unsigned __int16)v33 & 0x7FF) != 0 )
              {
                do
                {
                  v33 += v35;
                  if ( ((1 << v26) & 0xA) != 0 && KiFlushPcid && !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
                  {
                    *(_QWORD *)&v46 = 1LL;
                    *((_QWORD *)&v46 + 1) = v33;
                    __asm { invpcid esi, [rsp+210h+var_1B8] }
                  }
                  __invlpg(v33);
                  --v34;
                }
                while ( v34 );
              }
              ++v31;
              --v30;
            }
            while ( v30 );
            v20 = v21;
          }
          goto LABEL_95;
        }
        KeFlushMultipleRangeTb(v19, v51, (unsigned int)v23, (unsigned int)v25);
      }
LABEL_113:
      HIDWORD(v49) = 0;
      v50 = 0LL;
      goto LABEL_114;
    }
    v23 = v47;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[2].ActiveProcessors.Bitmap[11] )
    {
      if ( !Process->SecurePid )
      {
LABEL_70:
        v19 = HIDWORD(v49);
        goto LABEL_72;
      }
      if ( v47 != 1 )
      {
        v19 = HIDWORD(v49);
        goto LABEL_58;
      }
    }
    v22 = -1LL;
    goto LABEL_70;
  }
LABEL_114:
  MiUnlockWorkingSetExclusive(dword_14034FD40, (unsigned __int8)CurrentIrql);
  return v20 != 0;
}
