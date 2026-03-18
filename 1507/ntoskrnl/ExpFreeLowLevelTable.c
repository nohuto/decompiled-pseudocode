/*
 * XREFs of ExpFreeLowLevelTable @ 0x140508D98
 * Callers:
 *     ExpFreeHandleTable @ 0x140508CCC (ExpFreeHandleTable.c)
 * Callees:
 *     ExpFreeTablePagedPool @ 0x140508DD0 (ExpFreeTablePagedPool.c)
 */

__int64 __fastcall ExpFreeLowLevelTable(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx

  v4 = *a2;
  if ( v4 )
    ExpFreeTablePagedPool(a1, v4, 1024LL);
  return ExpFreeTablePagedPool(a1, a2, 4096LL);
}
