/*
 * XREFs of MiLogPageAccess @ 0x14005A690
 * Callers:
 *     MiIssueHardFault @ 0x140039650 (MiIssueHardFault.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MmUnmapViewInSystemCache @ 0x1400ADB30 (MmUnmapViewInSystemCache.c)
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 *     MiClearPteAccessed @ 0x1400B72A0 (MiClearPteAccessed.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1400B82C4 (MI_WSLE_LOG_ACCESS.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14011AB80 (MiCaptureAndResetWorkingSetAccessBits.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiAllocateAccessLog @ 0x1400D7D70 (MiAllocateAccessLog.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiLogPageAccess(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  char v3; // r13
  unsigned __int64 result; // rax
  _QWORD *v6; // rcx
  __int64 v7; // r15
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdi
  signed __int64 *v13; // r14
  ULONG_PTR v14; // rbp
  KIRQL v15; // bl
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // rax
  unsigned __int16 v19; // dx
  __int64 v20; // rax
  __int64 *v21; // rdx
  unsigned __int64 v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+70h] [rbp+8h]
  __int64 v24; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v23 = 0x300000000LL;
  if ( v2 && (unsigned __int64)(*(_QWORD *)(v2 + 32) + 8LL) <= *(_QWORD *)(v2 + 40)
    || (result = MiAllocateAccessLog(), (v2 = result) != 0) )
  {
    if ( (a2 & 1) != 0 )
    {
      a2 &= ~1uLL;
      v3 = 1;
    }
    v24 = MI_READ_PTE_LOCK_FREE(a2);
    v6 = (_QWORD *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(&v24) - 0x58000000000LL);
    if ( (v6[5] & 0x200000000000000LL) == 0 || (v7 = v6[2], (v7 & 0x400) == 0) )
    {
      result = (a2 << 16) | ((unsigned __int64)(v3 & 1) << 9);
LABEL_27:
      **(_QWORD **)(v2 + 32) = result;
      *(_QWORD *)(v2 + 32) += 8LL;
      return result;
    }
    v8 = *(_QWORD *)(v2 + 48);
    result = v6[1] | 0x8000000000000000uLL;
    v9 = v7 >> 16;
    v10 = result << 16;
    v22 = result;
    if ( *(_QWORD *)(v2 + 56) > 1uLL )
    {
      v11 = v9;
LABEL_19:
      v20 = *(_QWORD *)(v2 + 40);
      v21 = (__int64 *)(v20 + 8);
      if ( v20 + 8 > v8 )
        goto LABEL_24;
      while ( *v21 != v11 )
      {
        if ( (unsigned __int64)++v21 > v8 )
          goto LABEL_24;
      }
      if ( (unsigned __int64)v21 > v8 )
      {
LABEL_24:
        v21 = *(__int64 **)(v2 + 40);
        *(_QWORD *)(v2 + 40) = v20 - 8;
        *v21 = v11;
      }
      result = v10 & 0xFFFFFFFFFFFFFC00uLL | ((unsigned __int64)(v3 & 1) << 9) | ((__int64)(*(_QWORD *)(v2 + 48)
                                                                                          - (_QWORD)v21) >> 3) & 0x1FF;
      goto LABEL_27;
    }
    v12 = *(_QWORD *)v9;
    if ( (*(_BYTE *)(v9 + 34) & 2) == 0 || (*(_DWORD *)(v12 + 56) & 0x4000000) == 0 )
    {
      v13 = (signed __int64 *)(v12 + 64);
      v14 = ObFastReferenceObject((signed __int64 *)(v12 + 64));
      if ( !v14 )
      {
        v15 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v12 + 72));
        v14 = ObFastReferenceObjectLocked((_QWORD *)(v12 + 64));
        ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v12 + 72), v15);
      }
      v11 = *(_QWORD *)(v14 + 24);
      _m_prefetchw(v13);
      v16 = *v13;
      if ( (v14 ^ *v13) >= 0xF )
      {
LABEL_17:
        ObDereferenceObjectDeferDeleteWithTag((PVOID)v14, 0x746C6644u);
      }
      else
      {
        while ( 1 )
        {
          v17 = v16;
          v16 = _InterlockedCompareExchange64(v13, v16 + 1, v16);
          if ( v17 == v16 )
            break;
          if ( (v14 ^ v16) >= 0xF )
            goto LABEL_17;
        }
      }
      v18 = MiStartingOffset(v9, v22, 0xFFFFFFFFLL);
      v19 = 32 * *(_DWORD *)(v12 + 56);
      v23 = v18 << *((_BYTE *)&v23 + 4 * ((*(_DWORD *)(v12 + 56) >> 5) & 1));
      LODWORD(v23) = ((unsigned __int16)v23 ^ v19) & 0x400 ^ v23;
      v8 -= 8LL;
      v10 = v23;
      goto LABEL_19;
    }
  }
  return result;
}
