/*
 * XREFs of MiGetLargePageDemoteAsNeeded @ 0x1401FD17C
 * Callers:
 *     MiFindLargeNodePage @ 0x1401E314C (MiFindLargeNodePage.c)
 *     MiGetFastLargePage @ 0x140662AD4 (MiGetFastLargePage.c)
 * Callees:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140064A70 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiReplenishFromNodeLargePages @ 0x140089BD0 (MiReplenishFromNodeLargePages.c)
 *     MiUnlinkNodeLargePage @ 0x140089F30 (MiUnlinkNodeLargePage.c)
 */

__int64 __fastcall MiGetLargePageDemoteAsNeeded(__int64 a1, unsigned int a2, unsigned __int64 a3, char a4, __int64 a5)
{
  unsigned __int64 *v5; // r13
  unsigned int v6; // edi
  char v7; // al
  __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 result; // rax
  unsigned int v15; // esi
  int *v16; // r14
  unsigned __int64 v17; // [rsp+80h] [rbp+18h]

  v17 = a3;
  v5 = (unsigned __int64 *)a5;
  v6 = 0;
  v7 = a4;
  *(_QWORD *)a5 = 0LL;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = MiLargePageSizes[v10];
    if ( v11 <= a3 )
      break;
LABEL_24:
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= 3 )
      return 0LL;
  }
  if ( v11 < 0x200 )
  {
    if ( !v6 )
      return 0LL;
    v12 = v6;
    while ( 1 )
    {
      v13 = MiReplenishFromNodeLargePages(a1, --v12, v7, a2, 4u);
      if ( v13 )
        break;
      if ( !v12 )
        return 0LL;
      v7 = a4;
    }
    do
    {
      MiInsertLargePageInFreeOrZeroList(v13, v12++, 0);
      if ( v12 == v6 )
        break;
      v13 = MiReplenishFromNodeLargePages(a1, v12, a4, a2, 4u);
    }
    while ( v13 );
    LODWORD(v10) = -1;
    goto LABEL_23;
  }
  if ( !v6 )
    v6 = v10;
  if ( (v7 & 1) != 0 )
  {
    result = MiReplenishFromNodeLargePages(a1, v10, v7, a2, 4u);
    if ( result )
      return result;
LABEL_23:
    v7 = a4;
    a3 = v17;
    goto LABEL_24;
  }
  if ( (v7 & 2) != 0 )
    a5 = 0x100000000LL;
  else
    a5 = 1LL;
  v15 = 0;
  v16 = (int *)&a5;
  while ( 1 )
  {
    result = MiUnlinkNodeLargePage(a1, v10, a2, 4u, *v16, 0LL);
    if ( result )
      break;
    ++v15;
    ++v16;
    if ( v15 >= 2 )
      goto LABEL_23;
  }
  *v5 = v11;
  return result;
}
