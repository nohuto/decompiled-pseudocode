/*
 * XREFs of MiGetPageProtection @ 0x14003BD40
 * Callers:
 *     MiQueryAddressState @ 0x14003B1A0 (MiQueryAddressState.c)
 *     MiProtectPrivateMemory @ 0x14005DD20 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x14008E680 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiRotatedToFrameBuffer @ 0x140080948 (MiRotatedToFrameBuffer.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiCaptureProtectionFromLockedProto @ 0x1400E0B6C (MiCaptureProtectionFromLockedProto.c)
 *     MiCaptureProtectionFromProto @ 0x1400E0DD8 (MiCaptureProtectionFromProto.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiGetPageProtection(
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a3,
        int a4)
{
  ULONG_PTR PteShadow; // rbx
  __int64 v6; // r9
  unsigned __int64 v10; // r14
  int v11; // ebp
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 result; // rax
  int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rdx
  _KPROCESS *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _KPROCESS *Process; // rdi
  __int64 PrototypePteDirect; // rax
  ULONG_PTR v25; // rsi
  volatile signed __int32 *v26; // rbx
  unsigned int v27; // esi
  unsigned int v28; // edi
  signed __int32 v29; // edx
  signed __int32 v30; // ett
  void *retaddr; // [rsp+48h] [rbp+0h]
  ULONG_PTR v32; // [rsp+58h] [rbp+10h] BYREF

  PteShadow = *(_QWORD *)BugCheckParameter2;
  v6 = 0x90482413000LL;
  if ( BugCheckParameter2 + 0x90482413000LL <= 0x7F8 )
    PteShadow = MiReadPteShadow(BugCheckParameter2, *(_QWORD *)BugCheckParameter2);
  v32 = PteShadow;
  if ( (PteShadow & 1) == 0 )
  {
    if ( (PteShadow & 0x400) != 0 && !(unsigned int)MiIsPrototypePteVadLookup(PteShadow) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      PrototypePteDirect = MiGetPrototypePteDirect(PteShadow, v20, v21, v22);
      v25 = PrototypePteDirect;
      if ( (PteShadow & 0x800) != 0
        || Process[1].Affinity.Bitmap[12] && MiLocateCloneAddress(Process, PrototypePteDirect) )
      {
        return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(v25)];
      }
      else
      {
        v26 = (volatile signed __int32 *)&Process[1].IdealNode[8];
        if ( a4 == 1 )
        {
          MiUnlockWorkingSetExclusive(&Process[1].IdealNode[8], a3);
        }
        else
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&Process[1].IdealNode[8], retaddr);
          }
          else
          {
            _InterlockedAnd(v26, 0xBFFFFFFF);
            _InterlockedDecrement(v26);
          }
          __writecr8(a3);
        }
        v27 = MiCaptureProtectionFromProto(v25);
        __writecr8(2uLL);
        if ( a4 == 1 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
            return v27;
          }
          v28 = 0;
          if ( _interlockedbittestandset(v26, 0x1Fu) )
            v28 = ExpWaitForSpinLockExclusiveAndAcquire(v26);
          v29 = *v26;
          if ( (*v26 & 0xBFFFFFFF) != 0x80000000 )
          {
            do
            {
              if ( (v29 & 0x40000000) == 0 )
                _InterlockedCompareExchange(v26, v29 | 0x40000000, v29);
              if ( (++v28 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v28);
              v29 = *v26;
            }
            while ( (*v26 & 0xBFFFFFFF) != 0x80000000 );
            return v27;
          }
        }
        else
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
            return v27;
          }
          _m_prefetchw((const void *)v26);
          v30 = *v26 & 0x7FFFFFFF;
          if ( v30 != _InterlockedCompareExchange(v26, v30 + 1, v30) )
          {
            ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)&Process[1].IdealNode[8]);
            return v27;
          }
        }
      }
      return v27;
    }
    LODWORD(PteShadow) = (PteShadow >> 5) & 0x1F;
    return (unsigned int)PteShadow;
  }
  v10 = PteShadow;
  if ( (unsigned __int64)&v32 + v6 <= 0x7F8 )
    v10 = MiReadPteShadow(&v32, PteShadow);
  v11 = *(_DWORD *)(BugCheckParameter4 + 48);
  v12 = (v10 >> 12) & 0xFFFFFFFFFLL;
  v13 = 48 * v12 - 0x58000000000LL;
  if ( (*(_BYTE *)(BugCheckParameter4 + 48) & 7) == 6 && (unsigned int)MiRotatedToFrameBuffer(BugCheckParameter2) )
  {
    result = 1LL;
    if ( (PteShadow & 0x800) != 0 )
      result = 4LL;
    v15 = (unsigned __int8)v11 >> 6;
    if ( v15 == 3 && (v11 & 0x38) != 0 )
      return (unsigned int)result | 0x18;
    if ( v15 == 1 )
      return (unsigned int)result | 8;
    return result;
  }
  if ( !(unsigned int)MI_IS_PFN(v12)
    || (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) == 0
    && (*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
  {
    KeBugCheckEx(0x1Au, 0x41201uLL, BugCheckParameter2, PteShadow, BugCheckParameter4);
  }
  if ( ((*(_QWORD *)(v13 + 40) >> 57) & 1LL) != 0 )
  {
    v16 = *(_QWORD *)(MiLocateWsle((__int64)(BugCheckParameter2 << 25) >> 16) * MEMORY[0xFFFFF58010804040]
                    - 0xA7FEF7FBD00LL) >> 4;
    if ( (v16 & 0x1F) != 0 )
      return v16 & 0x1F;
    v17 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v13 + 16);
    v18 = *(_QWORD *)(v13 + 8);
    PteShadow = v17;
    if ( (v18 & 0x8000000000000000uLL) == 0 )
      return (unsigned int)MmMakeProtectNotWriteCopy[v17];
    v19 = KeGetCurrentThread()->ApcState.Process;
    if ( v19[1].Affinity.Bitmap[12] && MiLocateCloneAddress(v19, v18 | 0x8000000000000000uLL) )
      LODWORD(PteShadow) = MmMakeProtectNotWriteCopy[PteShadow];
    return (unsigned int)PteShadow;
  }
  if ( ((*(_QWORD *)(v13 + 40) >> 54) & 7) != 1 )
  {
    v16 = (unsigned __int64)*(unsigned int *)(v13 + 16) >> 5;
    return v16 & 0x1F;
  }
  if ( (PteShadow & 4) == 0 )
    return 24LL;
  result = 1LL;
  if ( (PteShadow & 0x800) != 0 )
    return 4LL;
  return result;
}
