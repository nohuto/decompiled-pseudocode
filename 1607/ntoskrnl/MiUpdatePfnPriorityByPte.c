/*
 * XREFs of MiUpdatePfnPriorityByPte @ 0x14002E6B0
 * Callers:
 *     MiSystemFault @ 0x14001BFF0 (MiSystemFault.c)
 *     MiPfPrepareSequentialReadList @ 0x1404302F0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140445CF0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiIsPfn @ 0x14000FBA0 (MiIsPfn.c)
 *     MiRelinkStandbyPage @ 0x1400BE514 (MiRelinkStandbyPage.c)
 *     MiLockPage @ 0x1401593D8 (MiLockPage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F2550 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F2570 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1401F26C4 (MiInvalidPteConforms.c)
 *     MiUnlockPage @ 0x1401F2B80 (MiUnlockPage.c)
 */

unsigned __int64 __fastcall MiUpdatePfnPriorityByPte(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  int v7; // r14d
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rdi
  unsigned __int8 v11; // bp
  char v12; // al
  char v13; // cl
  unsigned int v14; // eax
  unsigned __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  while ( 1 )
  {
    result = MI_READ_PTE_LOCK_FREE(a1);
    v15 = result;
    v5 = result;
    if ( (result & 1) != 0 )
    {
      v6 = MI_GET_PAGE_FRAME_FROM_PTE(&v15);
      v7 = 6;
    }
    else
    {
      if ( (result & 0x400) != 0 )
        return result;
      if ( (result & 0x800) == 0 )
        return result;
      result = MiInvalidPteConforms(result);
      if ( !(_DWORD)result )
        return result;
      v6 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v15);
      v7 = 2;
    }
    result = MiIsPfn(v6);
    if ( !(_DWORD)result )
      return result;
    v10 = v9 + 48 * v8;
    v11 = MiLockPage(v10);
    if ( (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) != a1
      && ((*(_QWORD *)(v10 + 40) & 0x200000000000000LL) == 0 || a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      return MiUnlockPage(v10, v11);
    }
    v12 = *(_BYTE *)(v10 + 34) & 7;
    if ( v7 != 6 )
    {
      if ( (unsigned __int8)(v12 - 2) > 2u || (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0 )
        goto LABEL_26;
      goto LABEL_25;
    }
    if ( v12 == 6 )
    {
LABEL_25:
      if ( v5 == MI_READ_PTE_LOCK_FREE(a1) )
      {
        v13 = *(_BYTE *)(v10 + 35);
        if ( (v13 & 8) != 0 )
          v14 = 5;
        else
          v14 = v13 & 7;
        if ( a2 != v14 && a2 >= v14 )
        {
          if ( (*(_BYTE *)(v10 + 34) & 7) == 2 )
            MiRelinkStandbyPage(v10, a2, 1022LL);
          else
            *(_BYTE *)(v10 + 35) = v13 ^ (a2 ^ v13) & 7;
        }
        return MiUnlockPage(v10, v11);
      }
LABEL_26:
      MiUnlockPage(v10, v11);
    }
    else
    {
      MiUnlockPage(v10, v11);
      if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        result = (__int64)(a1 << 25) >> 16;
        if ( (result < 0xFFFFF68000000000uLL || result > 0xFFFFF6FFFFFFFFFFuLL)
          && result >= qword_140326AF0
          && result < qword_140326AF0 + (qword_140326AE0 << 21)
          && (result < qword_140327FF0 || result >= qword_140327FF0 + 0x8000000000LL) )
        {
          return result;
        }
      }
    }
  }
}
