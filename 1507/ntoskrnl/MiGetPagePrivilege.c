/*
 * XREFs of MiGetPagePrivilege @ 0x1400597B0
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClearPfnImageVerified @ 0x1400E6680 (MiClearPfnImageVerified.c)
 *     MiReferencePageForModifiedWrite @ 0x1400E69AC (MiReferencePageForModifiedWrite.c)
 *     MiTradeActivePage @ 0x1400FCE2C (MiTradeActivePage.c)
 *     MiDbgWriteCheck @ 0x1402236C0 (MiDbgWriteCheck.c)
 *     MiCombineCandidate @ 0x140227894 (MiCombineCandidate.c)
 * Callees:
 *     MiCanPageMove @ 0x14005ABF0 (MiCanPageMove.c)
 *     MiGetTopLevelPfn @ 0x1400FD760 (MiGetTopLevelPfn.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiIsStrongCodeImagePage @ 0x1402311FC (MiIsStrongCodeImagePage.c)
 */

__int64 __fastcall MiGetPagePrivilege(__int64 a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbp
  unsigned __int8 CurrentIrql; // bp
  __int64 TopLevelPfn; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 *v18; // [rsp+58h] [rbp+20h] BYREF

  v3 = a3;
  if ( (MiFlags & 0x8000) == 0 )
    return 0LL;
  v7 = 0;
  if ( a3 && (MiFlags & 0x80000) == 0 )
    v3 = 0LL;
  if ( (BYTE2(MiFlags) & 3u) <= 1 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_QWORD *)(a1 + 40);
    v10 = v8 | 0x8000000000000000uLL;
    if ( (v9 & 0x200000000000000LL) != 0 || ((v9 >> 54) & 7) != 3 )
    {
      if ( (unsigned int)MiIsStrongCodeImagePage(a1, &v18) )
      {
        if ( v18 )
        {
          v16 = v18[1];
          if ( v10 < v16 || v10 >= v16 + 8LL * *((unsigned int *)v18 + 11) )
            return 0LL;
          if ( v3 )
          {
            v17 = *v18;
            v3[1] = *(_QWORD *)(*(_QWORD *)(*v18 + 96) + 16LL);
            *v3 = (__int64)(v10 - *(_QWORD *)(v17 + 128)) >> 3 << 12;
          }
        }
        return 1LL;
      }
    }
    else
    {
      if ( !v3 )
        return 1LL;
      if ( !v8 )
      {
        *v3 = 0LL;
LABEL_15:
        v3[1] = 0LL;
        return 1LL;
      }
      v11 = (__int64)(v10 << 25) >> 16;
      *v3 = v11;
      if ( v11 >= 0xFFFF800000000000uLL )
        goto LABEL_15;
      if ( a2 )
      {
        CurrentIrql = 17;
      }
      else
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v7);
          }
          while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
        }
      }
      TopLevelPfn = MiGetTopLevelPfn(a1, 0LL);
      v14 = *(_QWORD *)TopLevelPfn;
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !a2 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
      }
      v15 = *(_QWORD *)(v14 + 720);
      if ( v15 )
      {
        v3[1] = v15;
        return 1LL;
      }
    }
    return 0LL;
  }
  if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) != 3 )
    return 0LL;
  LOBYTE(v7) = (unsigned int)MiCanPageMove(a1) != 0;
  return v7;
}
