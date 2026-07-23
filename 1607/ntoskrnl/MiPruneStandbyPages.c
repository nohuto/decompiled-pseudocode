/*
 * XREFs of MiPruneStandbyPages @ 0x1401F35CC
 * Callers:
 *     MiRebalanceZeroFreeLists @ 0x1401F37C4 (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiNodeFreeZeroPages @ 0x140066170 (MiNodeFreeZeroPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140120F60 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401F38F8 (MiSwapNumaStandbyPage.c)
 */

unsigned __int64 __fastcall MiPruneStandbyPages(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned int v7; // ebx
  BOOL i; // ebp
  __int64 v10; // rax
  ULONG_PTR v11; // r14
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  int v19; // [rsp+68h] [rbp+10h]

  v4 = 0LL;
  v7 = a3;
  for ( i = (*(_BYTE *)(2184LL * a2 + *(_QWORD *)(a1 + 48) + 2136) & 1) == 0; v4 < a4; v7 = a3 )
  {
    v10 = MiRemoveLowestPriorityStandbyPage(a1, 8u, 0);
    v11 = v10;
    if ( v10 == -1 )
      break;
    v19 = 0;
    v12 = 48 * v10 - 0x58000000000LL;
    ++v4;
    v13 = *(_QWORD *)(v12 + 40);
    v14 = (v13 >> 36) & 3;
    v15 = v13 >> 58;
    if ( (_DWORD)v15 != a2 || (_DWORD)v14 != v7 && !i )
    {
      if ( (unsigned __int64)MiNodeFreeZeroPages((_QWORD *)(*(_QWORD *)(a1 + 48) + 2184 * v15), v14, 1024) >= 0x200 )
      {
        v16 = MiSwapNumaStandbyPage(v11, a2, v7, 16LL);
        if ( v16 == v11 )
        {
          v19 = 1;
        }
        else
        {
          v11 = v16;
          v12 = 48 * v16 - 0x58000000000LL;
        }
      }
      else
      {
        --v4;
      }
    }
    v17 = (unsigned __int8)MiLockPageInline(v12);
    *(_QWORD *)(v12 + 24) |= 0x4000000000000000uLL;
    MiInsertPageInFreeOrZeroedList(v11, 2);
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v17);
    if ( v19 == 1 )
      break;
  }
  return v4;
}
