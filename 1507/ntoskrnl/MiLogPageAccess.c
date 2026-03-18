/*
 * XREFs of MiLogPageAccess @ 0x140096F70
 * Callers:
 *     MiRemoveMappedPtes @ 0x140039410 (MiRemoveMappedPtes.c)
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MiEmptyWorkingSetHelper @ 0x14007BAE0 (MiEmptyWorkingSetHelper.c)
 *     MiTrimWorkingSet @ 0x140080FFC (MiTrimWorkingSet.c)
 *     MiIssueHardFault @ 0x140087FE0 (MiIssueHardFault.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     MiClearPteAccessed @ 0x1400ADE80 (MiClearPteAccessed.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiTrimSharedPageFromViews @ 0x1400FAC3C (MiTrimSharedPageFromViews.c)
 *     MiRemoveSingleWsle @ 0x1401224EC (MiRemoveSingleWsle.c)
 *     MiDeprioritizeVARange @ 0x140126B74 (MiDeprioritizeVARange.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140152DC0 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     MiAllocateAccessLog @ 0x140099C40 (MiAllocateAccessLog.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall MiLogPageAccess(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  char v4; // r15
  unsigned __int64 result; // rax
  unsigned __int64 PteShadow; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 PrototypePteDirect; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r13
  ULONG_PTR v17; // rsi
  signed __int32 v18; // ett
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  unsigned __int64 v21; // rax
  unsigned __int16 v22; // dx
  __int64 v23; // rax
  __int64 *v24; // rdx
  unsigned __int64 v25; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v27; // [rsp+70h] [rbp+8h] BYREF
  int v28; // [rsp+80h] [rbp+18h]
  int v29; // [rsp+84h] [rbp+1Ch]
  __int64 CurrentIrql; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v28 = 0;
  v29 = 3;
  if ( v3 && (unsigned __int64)(*(_QWORD *)(v3 + 32) + 8LL) <= *(_QWORD *)(v3 + 40)
    || (result = MiAllocateAccessLog(), (v3 = result) != 0) )
  {
    if ( (a2 & 1) != 0 )
    {
      a2 &= ~1uLL;
      v4 = 1;
    }
    PteShadow = *(_QWORD *)a2;
    v8 = 0x90482413000LL;
    if ( a2 + 0x90482413000LL <= 0x7F8 )
      PteShadow = MiReadPteShadow(a2, *(_QWORD *)a2);
    v27 = PteShadow;
    if ( (unsigned __int64)&v27 + v8 <= 0x7F8 )
      PteShadow = MiReadPteShadow(&v27, PteShadow);
    v9 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(v9 + 40) & 0x200000000000000LL) == 0 || (*(_DWORD *)(v9 + 16) & 0x400LL) == 0 )
    {
      result = (a2 << 16) | ((unsigned __int64)(v4 & 1) << 9);
LABEL_38:
      **(_QWORD **)(v3 + 32) = result;
      *(_QWORD *)(v3 + 32) += 8LL;
      return result;
    }
    PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(v9 + 16), v9, a3, v8);
    v11 = *(_QWORD *)(v3 + 48);
    v12 = PrototypePteDirect;
    v25 = *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL;
    result = v25;
    v14 = v25 << 16;
    if ( *(_QWORD *)(v3 + 56) > 1uLL )
    {
      v15 = v12;
LABEL_30:
      v23 = *(_QWORD *)(v3 + 40);
      v24 = (__int64 *)(v23 + 8);
      if ( v23 + 8 > v11 )
        goto LABEL_35;
      while ( *v24 != v15 )
      {
        if ( (unsigned __int64)++v24 > v11 )
          goto LABEL_35;
      }
      if ( (unsigned __int64)v24 > v11 )
      {
LABEL_35:
        v24 = *(__int64 **)(v3 + 40);
        *(_QWORD *)(v3 + 40) = v23 - 8;
        *v24 = v15;
      }
      result = v14 & 0xFFFFFFFFFFFFFC00uLL | ((unsigned __int64)(v4 & 1) << 9) | ((__int64)(*(_QWORD *)(v3 + 48)
                                                                                          - (_QWORD)v24) >> 3) & 0x1FF;
      goto LABEL_38;
    }
    v16 = *(_QWORD *)v12;
    if ( (*(_BYTE *)(v12 + 34) & 2) == 0 || (*(_DWORD *)(v16 + 56) & 0x4000000) == 0 )
    {
      v17 = ObFastReferenceObject((signed __int64 *)(v16 + 64));
      if ( !v17 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v16 + 72);
        }
        else
        {
          _m_prefetchw((const void *)(v16 + 72));
          v18 = *(_DWORD *)(v16 + 72) & 0x7FFFFFFF;
          if ( v18 != _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 72), v18 + 1, v18) )
            ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)(v16 + 72));
        }
        v17 = ObFastReferenceObjectLocked((_QWORD *)(v16 + 64));
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v16 + 72, retaddr);
        }
        else
        {
          _InterlockedAnd((volatile signed __int32 *)(v16 + 72), 0xBFFFFFFF);
          _InterlockedDecrement((volatile signed __int32 *)(v16 + 72));
        }
        __writecr8((unsigned __int8)CurrentIrql);
      }
      v15 = *(_QWORD *)(v17 + 24);
      _m_prefetchw((const void *)(v16 + 64));
      v19 = *(_QWORD *)(v16 + 64);
      if ( (v17 ^ v19) >= 0xF )
      {
LABEL_28:
        ObDereferenceObjectDeferDeleteWithTag((PVOID)v17, 0x746C6644u);
      }
      else
      {
        while ( 1 )
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 64), v19 + 1, v19);
          if ( v20 == v19 )
            break;
          if ( (v17 ^ v19) >= 0xF )
            goto LABEL_28;
        }
      }
      v21 = MiStartingOffset((__int64 *)v12, v25, 0xFFFFFFFF);
      v22 = 32 * *(_DWORD *)(v16 + 56);
      v27 = v21 << *((_BYTE *)&v28 + 4 * ((*(_DWORD *)(v16 + 56) >> 5) & 1));
      LODWORD(v27) = ((unsigned __int16)v27 ^ v22) & 0x400 ^ v27;
      v11 -= 8LL;
      v14 = v27;
      goto LABEL_30;
    }
  }
  return result;
}
