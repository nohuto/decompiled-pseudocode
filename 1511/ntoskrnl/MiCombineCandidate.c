/*
 * XREFs of MiCombineCandidate @ 0x14012A1D0
 * Callers:
 *     MiRecheckCombineVm @ 0x1401282E0 (MiRecheckCombineVm.c)
 *     MiCapturePfnVm @ 0x14012896C (MiCapturePfnVm.c)
 *     MiCrcStillIntact @ 0x140128AC0 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 *     MiMapArbitraryPage @ 0x140129AC0 (MiMapArbitraryPage.c)
 *     MiCombineAllPhysicalMemory @ 0x140129C30 (MiCombineAllPhysicalMemory.c)
 *     MiCombineWorkingSet @ 0x1401E0DFC (MiCombineWorkingSet.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140070730 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCombineCandidate(int **a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // rdx
  unsigned __int16 v5; // ax
  int *v6; // rax
  unsigned __int8 v8; // cl
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned int v12; // edx
  char v13; // cl

  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 40);
  v5 = (HIDWORD(v4) >> 8) & 0x3FF;
  if ( v5 == 1023 )
    v6 = MiSystemPartition;
  else
    v6 = *(int **)(qword_1402FEC28 + 8LL * v5);
  if ( v6 != *a1 && a1 != (int **)&unk_1402FEA58 )
    return 0LL;
  if ( (v4 & 0x200000000000000LL) == 0 )
  {
    if ( *(_QWORD *)a2 )
    {
      v8 = *(_BYTE *)(a2 + 35);
      if ( (v8 & 8) == 0
        && v2 + 0x98000000000LL <= 0x7FFFFFFFFFLL
        && (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) == 0
        && ((v4 >> 54) & 7) != 4
        && ((v2 | 0x8000000000000000uLL) > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL)
                                         - 0x98000000000LL
         || (v2 | 0x8000000000000000uLL) < 0xFFFFF68000000000uLL
         || ((v8 >> 5) & 1) == 0) )
      {
        v9 = MI_READ_PTE_LOCK_FREE(a2 + 16);
        v10 = (v9 >> 5) & 0x1F;
        if ( (_DWORD)v10 == 31
          || (_DWORD)v10 == 24
          || ((v9 >> 5) & 0x18) == 0x10
          || (unsigned int)v10 >= 0x1E
          || (unsigned int)MiGetPagePrivilege(a2, 0, 0LL) )
        {
          return 0LL;
        }
        v11 = (__int64)(v2 << 25) >> 16;
        if ( v2 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        {
          if ( v11 + 0x400000000000LL > 0xF7FFFFFFFFFLL )
          {
            if ( v11 + 0x70000000000LL > 0x7FFFFFFFFFLL || v11 <= qword_1402FE640 )
              return 0LL;
            v12 = 3;
          }
          else
          {
            v12 = 2;
          }
        }
        else
        {
          v12 = 1;
        }
        v13 = *(_BYTE *)(a2 + 34) & 7;
        if ( (unsigned __int8)(v13 - 2) > 1u || *(_WORD *)(a2 + 32) )
        {
          if ( v13 != 6
            || (*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL
            || *(_WORD *)(a2 + 32) != 1
            || (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
            || v12 == 1 && (v9 & 1) == 0 && (v9 & 0x3C00) == 0 && HIDWORD(v9) == 1 )
          {
            return 0LL;
          }
        }
        else if ( v12 == 1 && (v9 & 1) == 0 && (v9 & 0x3C00) == 0 && HIDWORD(v9) == 1 )
        {
          return 0LL;
        }
        return v12;
      }
    }
  }
  return 0LL;
}
