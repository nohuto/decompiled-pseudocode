/*
 * XREFs of ExpFreeLowLevelTable @ 0x1404AE398
 * Callers:
 *     ExpFreeHandleTable @ 0x1404AE2CC (ExpFreeHandleTable.c)
 * Callees:
 *     ExpFreeTablePagedPool @ 0x1404AE3D0 (ExpFreeTablePagedPool.c)
 */

__int64 __fastcall ExpFreeLowLevelTable(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx

  v4 = *a2;
  if ( v4 )
    ExpFreeTablePagedPool(a1, v4, 1024LL);
  return ExpFreeTablePagedPool(a1, a2, 4096LL);
}
