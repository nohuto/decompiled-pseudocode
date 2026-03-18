/*
 * XREFs of UserReAllocPoolZInit @ 0x1C0079440
 * Callers:
 *     <none>
 * Callees:
 *     UserReAllocPool @ 0x1C0079490 (UserReAllocPool.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall UserReAllocPoolZInit(void *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi

  v5 = UserReAllocPool(a1);
  v6 = v5;
  if ( v5 && a3 > a2 )
    memset((void *)(v5 + a2), 0, a3 - a2);
  return v6;
}
