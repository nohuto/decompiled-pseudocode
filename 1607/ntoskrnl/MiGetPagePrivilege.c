/*
 * XREFs of MiGetPagePrivilege @ 0x1400E15D0
 * Callers:
 *     MiClearPfnImageVerified @ 0x14001D838 (MiClearPfnImageVerified.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRevertValidPte @ 0x1400DF690 (MiRevertValidPte.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiReferencePageForModifiedWrite @ 0x1400FFD38 (MiReferencePageForModifiedWrite.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiMarkPfnVerified @ 0x140108054 (MiMarkPfnVerified.c)
 *     MiTradeActivePage @ 0x140108F04 (MiTradeActivePage.c)
 *     MiDbgWriteCheck @ 0x14012CB4C (MiDbgWriteCheck.c)
 *     MiCombineCandidate @ 0x1401F7CA4 (MiCombineCandidate.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiIsPfnFileOnly @ 0x14004E500 (MiIsPfnFileOnly.c)
 *     MiGetTopLevelPfn @ 0x1401086F0 (MiGetTopLevelPfn.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 */

__int64 __fastcall MiGetPagePrivilege(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  unsigned int v10; // esi
  unsigned __int64 v11; // rbx
  unsigned __int8 v12; // r14
  __int64 TopLevelPfn; // rax
  __int64 v14; // rcx
  __int64 PrototypePteDirect; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // r9
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // eax

  if ( (MiFlags & 0x2000) != 0 && ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 3 && !(unsigned int)MiIsPfnFileOnly(a1) )
  {
    if ( a3 )
    {
      v8 = (unsigned int)-(v8 & 0x20000);
      a3 &= -(__int64)((_DWORD)v8 != 0);
    }
    v9 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    if ( (v6 & 0x200000000000000LL) == 0 )
    {
      v10 = 1;
      if ( (MiFlags & 0x10000) != 0 )
        return (unsigned __int64)((__int64)(v9 << 25) >> 16) < 0xFFFF800000000000uLL ? 2 : 17;
      if ( *(_QWORD *)(a1 + 8) )
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
            TopLevelPfn = MiGetTopLevelPfn(a1, 0LL, v7, v8);
            v14 = *(_QWORD *)TopLevelPfn;
            _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !a2 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v12);
            }
            if ( *(_QWORD *)(v14 + 720) )
            {
              *(_QWORD *)a3 = v11;
              *(_QWORD *)(a3 + 8) = *(_QWORD *)(v14 + 720);
            }
            else
            {
              return 0;
            }
          }
          return v10;
        }
        if ( !a3 )
          return v10;
        *(_QWORD *)a3 = v11;
      }
      else
      {
        v10 = 4;
        if ( !a3 )
          return v10;
        *(_QWORD *)a3 = 0LL;
      }
      *(_QWORD *)(a3 + 8) = 0LL;
      return v10;
    }
    if ( (*(_QWORD *)(a1 + 16) & 0x400LL) == 0 )
    {
      if ( (MiFlags & 0x10000) != 0 )
        LODWORD(v7) = 19;
      return (unsigned int)v7;
    }
    PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16));
    v18 = *(_QWORD *)PrototypePteDirect;
    if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) == 0 )
      return 2LL;
    v19 = *(_QWORD *)(PrototypePteDirect + 8);
    if ( v9 >= v19 && v9 < v19 + 8LL * *(unsigned int *)(PrototypePteDirect + 44) )
    {
      v20 = (v17 >> 5) & 0x1F;
      if ( (MiFlags & 0x10000) != 0 )
      {
        LODWORD(v7) = 2;
        if ( (*(_DWORD *)(v18 + 92) & 0xC000000) != 0 )
        {
          LODWORD(v7) = 10;
          if ( (v20 & 2) != 0 )
            LODWORD(v7) = 11;
        }
LABEL_42:
        if ( a3 )
        {
          *(_QWORD *)(a3 + 8) = *(_QWORD *)(*(_QWORD *)(v18 + 96) + 16LL);
          *(_QWORD *)a3 = (__int64)(v9 - *(_QWORD *)(v18 + 136)) >> 3 << 12;
        }
        return (unsigned int)v7;
      }
      if ( (*(_DWORD *)(v18 + 92) & 0xC000000) != 0 )
      {
        v21 = 8;
        if ( (v20 & 2) != 0 )
          v21 = 11;
        LODWORD(v7) = v21;
        goto LABEL_42;
      }
    }
  }
  return 0LL;
}
