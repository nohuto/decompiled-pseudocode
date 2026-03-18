/*
 * XREFs of MiDeleteLockedTransitionPte @ 0x140010C30
 * Callers:
 *     MiDeleteTransitionPte @ 0x140010618 (MiDeleteTransitionPte.c)
 *     MmPurgeSection @ 0x1400107A0 (MmPurgeSection.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiDeletePerSessionProtos @ 0x1401E2DAC (MiDeletePerSessionProtos.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiRemoveUnusedSubsection @ 0x14003A500 (MiRemoveUnusedSubsection.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPfnShareCountIsZero @ 0x14006A920 (MiPfnShareCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiInsertUnusedSubsection @ 0x1400A86E0 (MiInsertUnusedSubsection.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 *     MiInvalidateCollidedIos @ 0x1400F16AC (MiInvalidateCollidedIos.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDeleteLockedTransitionPte(_QWORD *BugCheckParameter2, ULONG_PTR a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  ULONG_PTR BugCheckParameter4; // rbx
  _DWORD *v8; // rbp
  unsigned int v9; // r12d
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // r15
  __int64 v13; // rbp
  __int64 v14; // rsi
  signed __int32 v15; // edx
  bool v16; // zf
  signed __int32 v17; // eax
  __int64 inserted; // rsi
  __int64 v19; // rbx
  __int64 v20; // rsi
  unsigned int v21; // ebp
  char v22; // al
  __int64 v23; // rbx
  char v24; // dl
  __int64 v25; // rcx
  unsigned __int8 v26; // cl
  ULONG_PTR v28; // rax
  __int64 v29; // [rsp+30h] [rbp-68h]
  __int64 BugCheckParameter2a; // [rsp+38h] [rbp-60h]
  __int64 v31; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v33; // [rsp+A0h] [rbp+8h] BYREF
  int v34; // [rsp+A8h] [rbp+10h] BYREF
  unsigned __int8 v35; // [rsp+B0h] [rbp+18h]
  int v36; // [rsp+B8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v6 = (unsigned __int128)((__int64)(a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  BugCheckParameter4 = *(_QWORD *)(a2 + 8);
  BugCheckParameter2a = ((unsigned __int64)v6 >> 63) + (v6 >> 3);
  if ( (_QWORD *)(BugCheckParameter4 | 0x8000000000000000uLL) != BugCheckParameter2 )
  {
    v28 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
    KeBugCheckEx(0x1Au, 0x402uLL, (ULONG_PTR)BugCheckParameter2, v28, BugCheckParameter4);
  }
  v8 = (_DWORD *)(a2 + 16);
  v9 = 0;
  v10 = 0LL;
  v11 = *(_QWORD *)(a2 + 16);
  v29 = 0LL;
  v31 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL;
  if ( (v11 & 0x400) != 0 )
  {
    v12 = v11 >> 16;
    v13 = *(_QWORD *)v12;
    if ( (*(_DWORD *)(*(_QWORD *)v12 + 56LL) & 0x20) != 0 || (v14 = v12, !*(_QWORD *)(v13 + 64)) )
      v14 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(v6) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v13 + 72, v6);
    }
    else
    {
      v33 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v13 + 72), 0x1Fu) )
      {
        LOBYTE(v6) = -1;
        v33 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v13 + 72), v6, a3);
      }
      v15 = *(_DWORD *)(v13 + 72);
      while ( (v15 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v15 & 0x40000000) == 0 )
        {
          v17 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 72), v15 | 0x40000000, v15);
          v16 = v15 == v17;
          v15 = v17;
          if ( !v16 )
            continue;
        }
        KeYieldProcessorEx(&v33);
        v15 = *(_DWORD *)(v13 + 72);
      }
    }
    if ( v14
      && (v16 = *(_DWORD *)(v14 + 104) == 1, --*(_DWORD *)(v14 + 104), v16)
      && !*(_QWORD *)(v14 + 96)
      && (*(_BYTE *)(v12 + 34) & 1) == 0
      && (*(_BYTE *)(v14 + 34) & 8) != 0 )
    {
      MiRemoveUnusedSubsection(v14);
      inserted = MiInsertUnusedSubsection(v14, 1LL);
    }
    else
    {
      inserted = 0LL;
    }
    --*(_QWORD *)(v13 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v13 + 72, retaddr);
    else
      *(_DWORD *)(v13 + 72) = 0;
    if ( inserted )
      MiReturnSubsectionCharges(inserted);
    v19 = *(_QWORD *)(a2 + 16);
    v8 = (_DWORD *)(a2 + 16);
  }
  else
  {
    v19 = 0LL;
  }
  v20 = 0LL;
  if ( *(_WORD *)(a2 + 32) )
  {
    *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
    v22 = *(_BYTE *)(a2 + 34);
    if ( (v22 & 0x20) != 0 && (v22 & 8) == 0 )
    {
      v20 = *(_QWORD *)a2 - 32LL;
      if ( *(_QWORD *)(v20 + 16) == v20 + 16 )
        v20 = 0LL;
    }
    v21 = 3;
  }
  else
  {
    MiUnlinkPageFromList(a2);
    if ( (*v8 & 0x400LL) == 0 )
    {
      v10 = MiCapturePageFileInfoInline(v8, 0LL, 1LL);
      v29 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a2 + 40)) >> 8) & 0x3FF);
    }
    v21 = 4;
  }
  *BugCheckParameter2 = v19;
  if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2) )
    MiWritePteShadow(BugCheckParameter2, v19);
  if ( v21 == 4 )
    MiInsertPageInFreeOrZeroedList(BugCheckParameter2a);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v34 = 0;
  v23 = 48 * v31 - 0x58000000000LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v34);
    while ( (*(_QWORD *)(v23 + 24) & 0x8000000000000000uLL) != 0 );
  }
  v24 = *(_BYTE *)(v23 + 34);
  if ( (v24 & 7) != 6 )
    KeBugCheckEx(
      0x4Eu,
      0x99uLL,
      48 * v31 / 48,
      v24 & 7,
      *(_QWORD *)(48 * v31 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v25 = *(_QWORD *)(v23 + 24);
  *(_QWORD *)(v23 + 24) = v25 ^ (((v25 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v25) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v25 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    MiPfnShareCountIsZero(v23);
  v26 = v35;
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v26 != 17 )
    __writecr8(v26);
  if ( v20 )
  {
    MiInvalidateCollidedIos(v20);
    v26 = v35;
  }
  if ( v10 && v36 )
  {
    LOBYTE(v9) = v26 == 17;
    MiReleasePageFileInfo(v29, v10, v9);
  }
  return v21;
}
