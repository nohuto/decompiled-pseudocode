/*
 * XREFs of RtlpHpExtrasMove @ 0x180051B78
 * Callers:
 *     RtlpHpReallocMove @ 0x1800430A0 (RtlpHpReallocMove.c)
 *     RtlpHpSegReAlloc @ 0x180043274 (RtlpHpSegReAlloc.c)
 *     RtlpHpLargeReAlloc @ 0x180051828 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     <none>
 */

void *__fastcall RtlpHpExtrasMove(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 *v7; // rdx

  v5 = a1 + a2;
  if ( (a5 & 0x10000000) != 0 )
    v5 += 16LL;
  v6 = a3 + a4;
  v7 = (unsigned __int8 *)((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (a5 & 0x10000000) != 0 )
    v6 += 16LL;
  return memmove((void *)((v6 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v7, 16 * ((unsigned int)v7[3] + 1));
}
