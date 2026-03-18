/*
 * XREFs of MiGetPagePrivilege @ 0x140070730
 * Callers:
 *     MiTradeActivePage @ 0x140007470 (MiTradeActivePage.c)
 *     MiReferencePageForModifiedWrite @ 0x14002FDF8 (MiReferencePageForModifiedWrite.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     MiRevertValidPte @ 0x14005D150 (MiRevertValidPte.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiClearPfnImageVerified @ 0x1400B5370 (MiClearPfnImageVerified.c)
 *     MiMarkPfnVerified @ 0x1400FE088 (MiMarkPfnVerified.c)
 *     MiCombineCandidate @ 0x14012A1D0 (MiCombineCandidate.c)
 *     MiDbgWriteCheck @ 0x1401DE0F4 (MiDbgWriteCheck.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MI_IS_PFN_FILE_ONLY @ 0x140071340 (MI_IS_PFN_FILE_ONLY.c)
 *     MiGetTopLevelPfn @ 0x1400D56E0 (MiGetTopLevelPfn.c)
 */

__int64 __fastcall MiGetPagePrivilege(__int64 a1, int a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  __int64 v7; // r8
  int v8; // r9d
  unsigned __int64 v9; // r14
  unsigned int v10; // ebp
  unsigned __int64 v11; // r14
  unsigned __int8 v12; // r15
  __int64 TopLevelPfn; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned __int64 v17; // r10
  __int64 v18; // rdx
  unsigned int v19; // ebp
  int v20; // eax

  if ( (MiFlags & 0x8000) == 0 || ((*(_QWORD *)(a1 + 40) >> 54) & 7) != 3 || (unsigned int)MI_IS_PFN_FILE_ONLY(a1) )
    return 0LL;
  if ( a3 && (v8 & 0x80000) == 0 )
    a3 = 0LL;
  v9 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( (v7 & 0x200000000000000LL) == 0 )
  {
    if ( (v8 & 0x40000) != 0 )
    {
      v10 = 2;
      if ( (unsigned __int64)((__int64)(v9 << 25) >> 16) >= 0xFFFF800000000000uLL )
        return 17;
    }
    else if ( *(_QWORD *)(a1 + 8) )
    {
      v11 = (__int64)(v9 << 25) >> 16;
      if ( v11 < 0xFFFF800000000000uLL )
      {
        v10 = 20;
        if ( a3 )
        {
          if ( a2 )
            v12 = 17;
          else
            v12 = MiLockPageInline(a1);
          TopLevelPfn = MiGetTopLevelPfn(a1, 0LL);
          v14 = *(_QWORD *)TopLevelPfn;
          _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !a2 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v12);
          }
          if ( *(_QWORD *)(v14 + 720) )
          {
            *a3 = v11;
            a3[1] = *(_QWORD *)(v14 + 720);
          }
          else
          {
            return 0;
          }
        }
      }
      else
      {
        v10 = 1;
        if ( a3 )
        {
          *a3 = v11;
          a3[1] = 0LL;
        }
      }
    }
    else
    {
      v10 = 4;
      if ( a3 )
      {
        *a3 = 0LL;
        a3[1] = 0LL;
      }
    }
    return v10;
  }
  v15 = *(_QWORD *)(a1 + 16);
  if ( (v15 & 0x400) == 0 )
  {
    result = 3LL;
    if ( (v8 & 0x40000) != 0 )
      return 19LL;
    return result;
  }
  v16 = *(_QWORD *)(v15 >> 16);
  if ( (*(_DWORD *)(v16 + 56) & 0x20) == 0 )
    return 2LL;
  v17 = *(_QWORD *)((v15 >> 16) + 8);
  if ( v9 < v17 || v9 >= v17 + 8LL * *(unsigned int *)((v15 >> 16) + 0x2C) )
    return 0LL;
  v18 = ((unsigned __int64)v15 >> 5) & 0x1F;
  if ( (v8 & 0x40000) == 0 )
  {
    if ( (*(_DWORD *)(v16 + 92) & 0xC000000) != 0 )
    {
      v20 = 8;
      if ( (v18 & 2) != 0 )
        v20 = 11;
      v19 = v20;
      goto LABEL_45;
    }
    return 0LL;
  }
  v19 = 2;
  if ( (*(_DWORD *)(v16 + 92) & 0xC000000) != 0 )
  {
    v19 = 10;
    if ( (v18 & 2) != 0 )
      v19 = 11;
  }
LABEL_45:
  if ( a3 )
  {
    a3[1] = *(_QWORD *)(*(_QWORD *)(v16 + 96) + 16LL);
    *a3 = (__int64)(v9 - *(_QWORD *)(v16 + 128)) >> 3 << 12;
  }
  return v19;
}
