/*
 * XREFs of ExpSetHandleExtraInfo @ 0x1406F0234
 * Callers:
 *     ExCreateHandleEx @ 0x140424CD0 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     ExDupHandleTable @ 0x1405237E0 (ExDupHandleTable.c)
 * Callees:
 *     ExpLookupHandleTableEntry @ 0x140498B20 (ExpLookupHandleTableEntry.c)
 *     ExpFreeTablePagedPool @ 0x140508DD0 (ExpFreeTablePagedPool.c)
 *     ExpAllocateTablePagedPool @ 0x1405235C8 (ExpAllocateTablePagedPool.c)
 */

__int64 __fastcall ExpSetHandleExtraInfo(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rbp
  volatile signed __int64 *v6; // rax
  volatile signed __int64 *v7; // rdi
  volatile signed __int64 v9; // rcx
  void *TablePagedPool; // rax

  v5 = (unsigned __int8)((unsigned int)a2 >> 2);
  v6 = (volatile signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)a1, a2 & 0xFFFFFFFFFFFFFC03uLL);
  v7 = v6;
  if ( !v6 )
    return 3221225473LL;
  v9 = *v6;
  if ( !*v6 )
  {
    TablePagedPool = ExpAllocateTablePagedPool(*(_QWORD *)(a1 + 16), 0x400uLL);
    v9 = (volatile signed __int64)TablePagedPool;
    if ( !TablePagedPool )
      return 3221225626LL;
    if ( _InterlockedCompareExchange64(v7, (signed __int64)TablePagedPool, 0LL) )
    {
      ExpFreeTablePagedPool(*(_QWORD *)(a1 + 16), TablePagedPool, 0x400uLL);
      v9 = *v7;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 4));
    }
    if ( !v9 )
      return 3221225626LL;
  }
  *(_DWORD *)(v9 + 4 * v5) = a3;
  return 0LL;
}
