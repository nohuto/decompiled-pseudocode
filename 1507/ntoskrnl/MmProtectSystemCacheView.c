/*
 * XREFs of MmProtectSystemCacheView @ 0x140217958
 * Callers:
 *     HvpViewMapPinForFileOffset @ 0x1401E0B18 (HvpViewMapPinForFileOffset.c)
 *     HvpViewMapUnpinViewOfPrimaryFile @ 0x1401E0E54 (HvpViewMapUnpinViewOfPrimaryFile.c)
 *     HvpViewMapViewOfPrimaryFile @ 0x14066365C (HvpViewMapViewOfPrimaryFile.c)
 *     HvpViewRemapViewOfPrimaryFile @ 0x140663788 (HvpViewRemapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x14066398C (HvpViewUnmapViewOfPrimaryFile.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeProtectionMask @ 0x14008E520 (MiMakeProtectionMask.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140156C90 (KeFlushMultipleRangeCurrentTb.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeFlushMultipleRangeTb @ 0x14017E0D8 (KeFlushMultipleRangeTb.c)
 *     KeFlushCurrentTbOnly @ 0x140203CA8 (KeFlushCurrentTbOnly.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MmProtectSystemCacheView(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r15d
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r14
  unsigned __int64 i; // rdx
  unsigned int v11; // ebx
  __int64 v12; // r9
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  signed __int64 v18; // rdi
  __int64 v19; // r14
  __int16 *v20; // rax
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r8
  unsigned int v23; // ecx
  _KPROCESS *Process; // rdx
  unsigned __int64 v25; // rbx
  unsigned int v26; // edx
  unsigned __int64 v27; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v28; // [rsp+30h] [rbp-D0h]
  __int64 CurrentIrql; // [rsp+38h] [rbp-C8h]
  unsigned int v30; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v31; // [rsp+44h] [rbp-BCh]
  __int64 v32; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v33; // [rsp+50h] [rbp-B0h]
  void *v34[21]; // [rsp+58h] [rbp-A8h] BYREF

  if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
    return 3221225713LL;
  v6 = 0;
  MiMakeProtectionMask(a3);
  v32 = 20LL;
  v30 = 0;
  v31 = 0;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v33 = 0LL;
  v34[0] = 0LL;
  v9 = v7 + 8 * (((v8 & 0xFFF) != 0) + (v8 >> 12));
  v28 = v9;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FD40);
  }
  else
  {
    v11 = 0;
    if ( _interlockedbittestandset(dword_14034FD40, 0x1Fu) )
      v11 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FD40);
    for ( i = (unsigned int)dword_14034FD40[0];
          (dword_14034FD40[0] & 0xBFFFFFFF) != 0x80000000;
          i = (unsigned int)dword_14034FD40[0] )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(dword_14034FD40, i | 0x40000000, i);
      if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v11);
    }
  }
  v12 = 0x90482413000LL;
  v13 = v7 + 0x90482413000LL;
  do
  {
    v14 = *(_QWORD *)v7;
    if ( v13 <= 0x7F8
      && (unsigned int)MiPteHasShadow(2040LL, i)
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      i = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( i )
      {
        v15 = *(_QWORD *)(i + 8 * ((v7 >> 3) & 0x1FF));
        if ( (v15 & 0x20) != 0 )
          v14 |= 0x20uLL;
        if ( (v15 & 0x42) != 0 )
          v14 |= 0x42uLL;
      }
    }
    v27 = v14;
    if ( (v14 & 1) != 0 )
    {
      if ( a3 == 2 && (v14 & 0x800) != 0 || a3 == 4 && (v14 & 0x800) == 0 )
      {
        if ( (unsigned __int64)&v27 + v12 <= 0x7F8 )
          MiReadPteShadow(&v27, v14);
        if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v7) )
          v16 |= 0x100uLL;
        v18 = v16 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
        if ( (v14 & 0x42) != 0 )
        {
          v19 = 48 * v17 - 0x58000000000LL;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v6);
            }
            while ( (*(_QWORD *)(v19 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) );
          }
          MiCaptureDirtyBitToPfn(v19);
          v20 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v19 + 40)) >> 8) & 0x3FF);
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v6 = 0;
          if ( v21 )
            MiReleasePageFileInfo((struct _KEVENT *)v20, v21, 1);
          v9 = v28;
        }
        *(_QWORD *)v7 = v18;
        if ( v13 <= 0x7F8 )
          MiWritePteShadow(v7, v18);
        if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0
          || (v18 & 0x40) == 0 && (v14 & 0x40) != 0
          || (v18 & 2) == 0 && (v14 & 2) != 0
          || (i = 0x8000000000000000uLL, v18 < 0) && (v14 & 0x8000000000000000uLL) == 0 )
        {
          MiInsertTbFlushEntry((__int64)&v30, (__int64)(v7 << 25) >> 16, 1LL, 0);
        }
        goto LABEL_57;
      }
    }
    else
    {
      if ( a3 == 2 )
      {
        if ( (v14 & 8) != 0 )
          goto LABEL_58;
        v25 = v14 | 8;
      }
      else
      {
        if ( (v14 & 8) == 0 )
          goto LABEL_58;
        v25 = v14 & 0xFFFFFFFFFFFFFFF7uLL;
      }
      v27 = v25;
      *(_QWORD *)v7 = v25;
      if ( v13 <= 0x7F8 )
      {
        MiWritePteShadow(v7, v25);
LABEL_57:
        v12 = 0x90482413000LL;
      }
    }
LABEL_58:
    v7 += 8LL;
    v13 += 8LL;
  }
  while ( v7 < v9 );
  if ( !HIDWORD(v32) )
    goto LABEL_85;
  v22 = qword_14034EBD8;
  if ( (v31 & 2) != 0 )
  {
    v23 = v30;
    goto LABEL_73;
  }
  v23 = v30;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[2].ActiveProcessors.Bitmap[11] )
    goto LABEL_64;
  if ( !Process->SecurePid )
  {
LABEL_73:
    v26 = 0;
    if ( v23 != 1 )
      goto LABEL_74;
    goto LABEL_75;
  }
  if ( v30 == 1 )
  {
LABEL_64:
    v22 = -1LL;
    goto LABEL_73;
  }
LABEL_74:
  v26 = 1;
LABEL_75:
  if ( HIBYTE(v31) || v33 > v22 )
  {
    if ( (v31 & 1) != 0 )
      KeFlushCurrentTbOnly(v23);
    else
      KeFlushTb(v23, v26);
    HIBYTE(v31) = 0;
  }
  else if ( (v31 & 1) != 0 )
  {
    KeFlushMultipleRangeCurrentTb(HIDWORD(v32), v34, v23);
  }
  else
  {
    KeFlushMultipleRangeTb(HIDWORD(v32), (__int64)v34, v23, v26);
  }
  HIDWORD(v32) = 0;
  v33 = 0LL;
LABEL_85:
  MiUnlockWorkingSetExclusive((__int64)dword_14034FD40, CurrentIrql);
  return 0LL;
}
