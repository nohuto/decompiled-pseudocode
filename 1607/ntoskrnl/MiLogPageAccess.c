/*
 * XREFs of MiLogPageAccess @ 0x1400484C0
 * Callers:
 *     MI_WSLE_LOG_ACCESS @ 0x1400169DC (MI_WSLE_LOG_ACCESS.c)
 *     MiIssueHardFault @ 0x1400244B0 (MiIssueHardFault.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiAgeWorkingSet @ 0x140046C10 (MiAgeWorkingSet.c)
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 *     MiClearPteAccessed @ 0x1400DFD90 (MiClearPteAccessed.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiRemoveMappedPtes @ 0x1400FE0A0 (MiRemoveMappedPtes.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x14012A1C0 (MiCaptureAndResetWorkingSetAccessBits.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x140026854 (MiGetSubsectionDriverProtos.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     MiAllocateAccessLog @ 0x1400886E0 (MiAllocateAccessLog.c)
 *     ObReferenceObjectExWithTag @ 0x140095D40 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1400A652C (ObpDeferObjectDeletion.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiGetSharedProtos @ 0x1401F4EB4 (MiGetSharedProtos.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 */

unsigned __int64 __fastcall MiLogPageAccess(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  LONG *v3; // r15
  unsigned __int64 v5; // r15
  unsigned __int64 result; // rax
  char v7; // r10
  __int64 v8; // r9
  char v9; // r10
  __int64 v10; // r9
  _QWORD *PrototypePteDirect; // r12
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // r8
  volatile signed __int64 *v17; // r14
  signed __int64 v18; // rdx
  signed __int64 v19; // rax
  signed __int64 v20; // rbp
  unsigned int v21; // edx
  ULONG_PTR v22; // rbp
  signed __int64 v23; // rax
  signed __int64 v24; // rtt
  signed __int64 BugCheckParameter4; // rax
  volatile LONG *v26; // rsi
  KIRQL v27; // di
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  __int64 v35; // rax
  _QWORD *v36; // rdx
  __int64 v37; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-40h]
  char v39; // [rsp+80h] [rbp+8h]
  __int64 v40; // [rsp+90h] [rbp+18h]
  int v41; // [rsp+98h] [rbp+20h]
  int v42; // [rsp+9Ch] [rbp+24h]

  v2 = 0LL;
  v42 = 3;
  v41 = 0;
  v3 = &dword_140327CC0;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
    v3 = (LONG *)(a1 + 192);
  v5 = *((_QWORD *)v3 + 5);
  if ( v5 && (unsigned __int64)(*(_QWORD *)(v5 + 32) + 8LL) <= *(_QWORD *)(v5 + 40)
    || (result = MiAllocateAccessLog(), (v5 = result) != 0) )
  {
    if ( (a2 & 1) != 0 )
    {
      a2 &= ~1uLL;
      v7 = 1;
    }
    else
    {
      v7 = 0;
    }
    v39 = v7;
    v37 = MI_READ_PTE_LOCK_FREE(a2);
    v8 = MI_GET_PFN_FROM_PTE(&v37);
    if ( (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) == 0 || (*(_DWORD *)(v8 + 16) & 0x400LL) == 0 )
    {
      result = (a2 << 16) | ((unsigned __int64)(v9 & 1) << 9);
LABEL_56:
      **(_QWORD **)(v5 + 32) = result;
      *(_QWORD *)(v5 + 32) += 8LL;
      return result;
    }
    PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v8 + 16));
    v12 = *(_QWORD *)(v5 + 48);
    result = 0x8000000000000000uLL;
    v13 = *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL;
    v38 = v12;
    v14 = v13 << 16;
    if ( *(_QWORD *)(v5 + 56) > 1uLL )
    {
      v15 = PrototypePteDirect;
LABEL_48:
      v35 = *(_QWORD *)(v5 + 40);
      v36 = (_QWORD *)(v35 + 8);
      if ( v35 + 8 > v12 )
        goto LABEL_53;
      while ( (_QWORD *)*v36 != v15 )
      {
        if ( (unsigned __int64)++v36 > v12 )
          goto LABEL_53;
      }
      if ( (unsigned __int64)v36 > v12 )
      {
LABEL_53:
        v36 = *(_QWORD **)(v5 + 40);
        *(_QWORD *)(v5 + 40) = v35 - 8;
        *v36 = v15;
      }
      result = v14 & 0xFFFFFFFFFFFFFC00uLL | ((unsigned __int64)(v39 & 1) << 9) | ((__int64)(*(_QWORD *)(v5 + 48)
                                                                                           - (_QWORD)v36) >> 3) & 0x1FF;
      goto LABEL_56;
    }
    v16 = *PrototypePteDirect;
    v40 = *PrototypePteDirect;
    if ( (*((_BYTE *)PrototypePteDirect + 34) & 2) == 0 || (*(_DWORD *)(v16 + 56) & 0x4000000) == 0 )
    {
      v17 = (volatile signed __int64 *)(v16 + 64);
      _m_prefetchw((const void *)(v16 + 64));
      v18 = *(_QWORD *)(v16 + 64);
      if ( (v18 & 0xF) != 0 )
      {
        do
        {
          v19 = _InterlockedCompareExchange64(v17, v18 - 1, v18);
          if ( v18 == v19 )
            break;
          v18 = v19;
        }
        while ( (v19 & 0xF) != 0 );
      }
      v20 = v18;
      v21 = v18 & 0xF;
      v22 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v21 <= 1 )
      {
        if ( !v21 )
          goto LABEL_31;
        ObReferenceObjectExWithTag(v22, 15LL);
        _m_prefetchw((const void *)v17);
        v23 = *v17;
        while ( (v23 & 0xF) == 0 )
        {
          if ( v22 != (v23 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v24 = v23;
          v23 = _InterlockedCompareExchange64(v17, v23 + 15, v23);
          if ( v24 == v23 )
            goto LABEL_29;
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo(v22 - 48);
        BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 - 48), 0xFFFFFFFFFFFFFFF1uLL)
                           - 15;
        if ( BugCheckParameter4 <= 0 )
        {
          if ( BugCheckParameter4 )
            KeBugCheckEx(0x18u, 0LL, v22, 5uLL, BugCheckParameter4);
          ObpDeferObjectDeletion(v22 - 48);
        }
LABEL_29:
        v16 = v40;
      }
      if ( v22 )
      {
LABEL_32:
        v15 = *(_QWORD **)(v22 + 24);
        _m_prefetchw((const void *)v17);
        v28 = *v17;
        if ( (v22 ^ *v17) >= 0xF )
        {
LABEL_35:
          ObDereferenceObjectDeferDelete((PVOID)v22);
        }
        else
        {
          while ( 1 )
          {
            v29 = v28;
            v28 = _InterlockedCompareExchange64(v17, v28 + 1, v28);
            if ( v29 == v28 )
              break;
            if ( (v22 ^ v28) >= 0xF )
              goto LABEL_35;
          }
        }
        if ( (*(_DWORD *)(*PrototypePteDirect + 56LL) & 0x20) != 0 )
        {
          v30 = PrototypePteDirect[1];
          if ( v13 < v30 || v13 >= v30 + 8LL * *((unsigned int *)PrototypePteDirect + 11) )
          {
            if ( (*((_BYTE *)PrototypePteDirect + 34) & 2) != 0 )
              v31 = (v13 << 9)
                  - (*(_QWORD *)(MiGetSharedProtos(*PrototypePteDirect, 0xFFFFFFFFLL, PrototypePteDirect) + 32) << 9);
            else
              v31 = (v13 << 9) - (*(_QWORD *)(MiGetSubsectionDriverProtos(PrototypePteDirect) + 32) << 9);
          }
          else
          {
            v31 = (v13 << 9) - (v30 << 9);
          }
          v32 = ((unsigned __int64)*((unsigned int *)PrototypePteDirect + 9) << 9) + (v31 & 0xFFFFFFFFFFFFF000uLL);
        }
        else
        {
          v33 = PrototypePteDirect[1];
          if ( v33 )
            v2 = (__int64)(v13 - v33) >> 3 << 12;
          v32 = v2
              + ((*((unsigned int *)PrototypePteDirect + 9) | ((unsigned __int64)((_WORD)PrototypePteDirect[4] & 0xFFC0) << 26)) << 12);
        }
        v34 = v32 << *((_BYTE *)&v41 + 4 * ((*(_DWORD *)(v40 + 56) >> 5) & 1));
        v12 -= 8LL;
        v14 = ((unsigned __int16)v34 ^ (unsigned __int16)(32 * *(_DWORD *)(v40 + 56))) & 0x400 ^ v34;
        goto LABEL_48;
      }
LABEL_31:
      v26 = (volatile LONG *)(v16 + 72);
      v27 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v16 + 72));
      v22 = ObFastReferenceObjectLocked(v17);
      ExReleaseSpinLockShared(v26, v27);
      v12 = v38;
      goto LABEL_32;
    }
  }
  return result;
}
