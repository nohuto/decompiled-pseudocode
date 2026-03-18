/*
 * XREFs of MiMakeSystemCacheRangeValid @ 0x1400A5070
 * Callers:
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400A65D0 (ExpAcquireSpinLockExclusive.c)
 *     PfSnLogPageFault @ 0x1400A7010 (PfSnLogPageFault.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiMakeSystemCacheRangeValid(__int64 a1, _QWORD *a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 result; // rax
  _QWORD *v17; // r13
  unsigned __int64 v18; // r15
  __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r12
  __int64 v24; // rsi
  ULONG_PTR v25; // rbp
  KIRQL v26; // di
  unsigned __int64 v27; // rax
  signed __int64 v28; // rax
  signed __int64 v29; // rtt
  __int64 v31; // [rsp+30h] [rbp-178h]
  __int64 v32; // [rsp+38h] [rbp-170h] BYREF
  __int64 v33; // [rsp+40h] [rbp-168h]
  __int64 CurrentIrql; // [rsp+48h] [rbp-160h]
  _QWORD v35[16]; // [rsp+50h] [rbp-158h]
  _QWORD v36[16]; // [rsp+D0h] [rbp-D8h]

  v4 = a3;
  v5 = 0LL;
  v6 = a4;
  v36[0] = 0LL;
  v33 = a4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_1402FF880, (unsigned __int8)CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&dword_1402FF880, (unsigned __int8)CurrentIrql);
  if ( (_DWORD)v4 )
  {
    v10 = 0LL;
    v11 = a1 - (_QWORD)a2;
    v12 = v4;
    do
    {
      v35[v10] = 0LL;
      v13 = MI_READ_PTE_LOCK_FREE(a2);
      v32 = v13;
      v14 = v13;
      if ( v13 )
      {
        if ( (v13 & 1) != 0 )
        {
          if ( (*((_BYTE *)a2 + v11) & 1) != 0 )
          {
            v35[v10] = 1LL;
          }
          else
          {
            v15 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v32) - 0x58000000000LL;
            v36[v10] = *(_QWORD *)(v15 + 16);
            if ( MiAllocateWsle((ULONG_PTR)&dword_1402FF880, (_QWORD *)((char *)a2 + v11), v15, 0LL, v14, 0LL) )
            {
              if ( (v36[v10] & 0x400LL) != 0 && PfSnNumActiveTraces )
                v35[v10] = *(_QWORD *)(v15 + 8) | 0x8000000000000000uLL;
            }
            else
            {
              v35[v10] = 1LL;
            }
          }
        }
        else
        {
          *a2 |= 1uLL;
          v35[v10] = 1LL;
        }
      }
      ++v10;
      ++a2;
      --v12;
    }
    while ( v12 );
    LODWORD(v4) = a3;
    v6 = v33;
  }
  MiUnlockWorkingSetExclusive((__int64)&dword_1402FF880, (unsigned __int8)CurrentIrql, v9);
  v31 = (unsigned int)v4;
  result = -(__int64)(unsigned int)v4;
  v17 = &a2[-(unsigned int)v4];
  if ( (_DWORD)v4 )
  {
    result = (unsigned int)v4;
    while ( 1 )
    {
      v18 = v35[v5];
      if ( v18 == 1 )
        break;
      if ( v18 )
      {
        v23 = (__int64)v36[v5] >> 16;
        v24 = *(_QWORD *)v23;
        v25 = ObFastReferenceObject((signed __int64 *)(*(_QWORD *)v23 + 64LL));
        if ( !v25 )
        {
          v26 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v24 + 72));
          v25 = ObFastReferenceObjectLocked((_QWORD *)(v24 + 64));
          ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v24 + 72), v26);
        }
        v27 = MiStartingOffset((__int64 *)v23, v18, 0xFFFFFFFF);
        PfSnLogPageFault(v25, v27, 4LL);
        _m_prefetchw((const void *)(v24 + 64));
        v28 = *(_QWORD *)(v24 + 64);
        if ( (v25 ^ v28) >= 0xF )
        {
LABEL_28:
          ObDereferenceObjectDeferDeleteWithTag((PVOID)v25, 0x746C6644u);
        }
        else
        {
          while ( 1 )
          {
            v29 = v28;
            v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 64), v28 + 1, v28);
            if ( v29 == v28 )
              break;
            if ( (v25 ^ v28) >= 0xF )
              goto LABEL_28;
          }
        }
        goto LABEL_29;
      }
LABEL_30:
      v6 = v33;
      ++v5;
      ++v17;
      v31 = --result;
      if ( !result )
        return result;
    }
    v32 = MI_READ_PTE_LOCK_FREE(v17);
    v19 = MI_GET_PFN_FROM_PTE(&v32);
    v20 = (unsigned __int8)MiLockPageInline(v19);
    MiDecrementShareCount(v19);
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiLockPageAtDpcInline(v6, v21, v22);
    MiDecrementShareCount(v6);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v20);
LABEL_29:
    result = v31;
    goto LABEL_30;
  }
  return result;
}
