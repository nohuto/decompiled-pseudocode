/*
 * XREFs of RtlpHpLfhBucketUpdateStats @ 0x18004F394
 * Callers:
 *     RtlpHpSegFree @ 0x18001B3B4 (RtlpHpSegFree.c)
 * Callees:
 *     RtlpLfhBucketUsageUpdate @ 0x18001D9E4 (RtlpLfhBucketUsageUpdate.c)
 *     RtlpHpLfhBucketActivate @ 0x1800534A4 (RtlpHpLfhBucketActivate.c)
 */

_BOOL8 __fastcall RtlpHpLfhBucketUpdateStats(__int64 a1, int a2, int a3)
{
  unsigned __int64 v3; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v9; // rax

  v3 = (unsigned __int64)(unsigned int)(a2 + 15) >> 4;
  v6 = RtlpLfhBucketIndexMap[v3];
  if ( (*(_QWORD *)(a1 + 8 * v6 + 192) & 1) != 0 )
  {
    v7 = RtlpLfhBucketUsageUpdate(a1, RtlpLfhBucketIndexMap[v3], a3);
    if ( a3 )
    {
      v9 = v7 >> 16;
      if ( (v9 & 0x1F) > 0x10 || (unsigned __int16)v9 > 0xFF00u )
        RtlpHpLfhBucketActivate(a1, (unsigned int)v6);
    }
  }
  return (*(_QWORD *)(a1 + 8 * v6 + 192) & 1) == 0;
}
