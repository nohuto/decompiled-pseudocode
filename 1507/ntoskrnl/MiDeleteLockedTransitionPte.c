/*
 * XREFs of MiDeleteLockedTransitionPte @ 0x140084B60
 * Callers:
 *     MiDeleteTransitionPte @ 0x140082E6C (MiDeleteTransitionPte.c)
 *     MiDeleteSegmentPages @ 0x1400839A0 (MiDeleteSegmentPages.c)
 *     MmPurgeSection @ 0x1400843A0 (MmPurgeSection.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiDeletePerSessionProtos @ 0x14021BD68 (MiDeletePerSessionProtos.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiRemoveUnusedSubsection @ 0x140082C00 (MiRemoveUnusedSubsection.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiInsertUnusedSubsection @ 0x14010E120 (MiInsertUnusedSubsection.c)
 *     MiInvalidateCollidedIos @ 0x14012CBCC (MiInvalidateCollidedIos.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiTransferSoftwarePte @ 0x140226040 (MiTransferSoftwarePte.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDeleteLockedTransitionPte(
        ULONG_PTR *BugCheckParameter2,
        ULONG_PTR a2,
        unsigned __int8 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  ULONG_PTR v7; // rsi
  ULONG_PTR PteShadow; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 *v12; // r15
  __int64 v13; // rdx
  _BYTE *PrototypePteDirect; // rbx
  __int64 v15; // r13
  __int64 v16; // rbp
  unsigned int v17; // ebx
  signed __int32 i; // edx
  bool v19; // zf
  __int64 inserted; // rbx
  __int64 v21; // rbx
  __int64 v22; // rbp
  __int64 v23; // r9
  unsigned __int16 v24; // ax
  unsigned int v25; // r15d
  char v26; // al
  unsigned int v27; // ebx
  __int64 v28; // rsi
  char v29; // dl
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int8 v33; // cl
  _BYTE *v35; // [rsp+30h] [rbp-68h]
  __int64 v36; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  __int16 *v38; // [rsp+A8h] [rbp+10h]
  int v40; // [rsp+B8h] [rbp+20h]

  v40 = a4;
  v6 = (unsigned __int128)((__int64)(a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v7 = ((unsigned __int64)v6 >> 63) + (v6 >> 3);
  PteShadow = *BugCheckParameter2;
  if ( (unsigned __int64)(BugCheckParameter2 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(BugCheckParameter2, PteShadow);
  v9 = 0x8000000000000000uLL;
  if ( (ULONG_PTR *)(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    KeBugCheckEx(0x1Au, 0x402uLL, (ULONG_PTR)BugCheckParameter2, PteShadow, *(_QWORD *)(a2 + 8));
  v10 = 0LL;
  v11 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL;
  v12 = (__int64 *)(a2 + 16);
  v38 = 0LL;
  v36 = v11;
  if ( (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
  {
    PrototypePteDirect = (_BYTE *)MiGetPrototypePteDirect(*v12, 0LL, 0x8000000000000000uLL, a4);
    v35 = PrototypePteDirect;
    v15 = *(_QWORD *)PrototypePteDirect;
    if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0
      || (v16 = (__int64)PrototypePteDirect, *(_QWORD *)(v15 + 64) == v13) )
    {
      v16 = v13;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v15 + 72);
    }
    else
    {
      v17 = v13;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v15 + 72), 0x1Fu) )
        v17 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v15 + 72));
      for ( i = *(_DWORD *)(v15 + 72); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(v15 + 72) )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 72), i | 0x40000000, i);
        if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v17);
      }
      PrototypePteDirect = v35;
    }
    if ( v16
      && (v19 = *(_QWORD *)(v16 + 104) == 1LL, --*(_QWORD *)(v16 + 104), v19)
      && !*(_QWORD *)(v16 + 96)
      && (PrototypePteDirect[34] & 1) == 0
      && (*(_BYTE *)(v16 + 34) & 8) != 0 )
    {
      MiRemoveUnusedSubsection(v16);
      inserted = MiInsertUnusedSubsection(v16, 1LL);
    }
    else
    {
      inserted = 0LL;
    }
    --*(_QWORD *)(v15 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v15 + 72, retaddr);
    else
      *(_DWORD *)(v15 + 72) = 0;
    if ( inserted )
      MiReturnSubsectionCharges(inserted);
    v11 = v36;
    v21 = MiTransferSoftwarePte(*v12, 0LL, 0LL);
  }
  else
  {
    v21 = 0LL;
  }
  v22 = 0LL;
  if ( *(_WORD *)(a2 + 32) )
  {
    *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
    v26 = *(_BYTE *)(a2 + 34);
    if ( (v26 & 0x20) != 0 && (v26 & 8) == 0 )
    {
      v22 = *(_QWORD *)a2 - 32LL;
      if ( *(_QWORD *)(v22 + 16) == v22 + 16 )
        v22 = 0LL;
    }
    v25 = 3;
    v23 = 0x12090482600LL;
  }
  else
  {
    MiUnlinkPageFromList(a2);
    v23 = 0x12090482600LL;
    if ( (*(_DWORD *)v12 & 0x400LL) == 0 )
    {
      v10 = *v12;
      if ( (*v12 & 4) != 0 || (v10 & 2) != 0 )
      {
        if ( a2 + 0x90482413010LL <= 0x7F8 )
          v10 = MiReadPteShadow(a2 + 16, *v12);
      }
      else
      {
        v10 = 0LL;
      }
      v24 = ((unsigned int)HIDWORD(*(_QWORD *)(a2 + 40)) >> 8) & 0x3FF;
      if ( v24 == 1023 )
      {
        v25 = 4;
        v38 = MiSystemPartition;
        goto LABEL_51;
      }
      v38 = *(__int16 **)(qword_14034F0E8 + 8LL * v24);
    }
    v25 = 4;
  }
LABEL_51:
  *BugCheckParameter2 = v21;
  if ( (unsigned __int64)&BugCheckParameter2[v23] <= 0x7F8 )
    MiWritePteShadow(BugCheckParameter2, v21);
  if ( v25 == 4 )
    MiInsertPageInFreeOrZeroedList(v7);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v27 = 0;
  v28 = 48 * v11 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v27 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v27);
    }
    while ( (*(_QWORD *)(v28 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) );
  }
  v29 = *(_BYTE *)(v28 + 34);
  v30 = 0x3FFFFFFFFFFFFFFFLL;
  if ( (v29 & 7) != 6 )
    KeBugCheckEx(
      0x4Eu,
      0x99uLL,
      48 * v11 / 48,
      v29 & 7,
      *(_QWORD *)(48 * v11 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v31 = *(_QWORD *)(v28 + 24);
  v32 = (v31 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v28 + 24) = v31 ^ (v32 ^ v31) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v31 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    MiPfnShareCountIsZero(v28, v32);
  v33 = a3;
  _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 != 17 )
    __writecr8(a3);
  if ( v22 )
  {
    MiInvalidateCollidedIos(v22, v32, v9, v30);
    v33 = a3;
  }
  if ( v10 && v40 )
    MiReleasePageFileInfo(v38, v10, v33 == 17);
  return v25;
}
