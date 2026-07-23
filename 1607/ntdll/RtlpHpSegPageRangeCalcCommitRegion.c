/*
 * XREFs of RtlpHpSegPageRangeCalcCommitRegion @ 0x180041948
 * Callers:
 *     RtlpHpSegPageRangeDecommit @ 0x1800417F8 (RtlpHpSegPageRangeDecommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegPageRangeCalcCommitRegion(__int64 a1, unsigned int a2, char a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v5; // r10d
  __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // r11

  *a4 = 0LL;
  v5 = 0;
  v6 = a2;
  v7 = 0LL;
  v8 = a1 + 32 * v6;
  if ( a1 != v8 )
  {
    do
    {
      if ( (*(_BYTE *)(a1 + 24) & 2) == 0 && a3 || (*(_BYTE *)(a1 + 24) & 2) != 0 && !a3 )
      {
        if ( !*a4 )
          *a4 = a1;
        ++v5;
        v7 = a1;
      }
      a1 += 32LL;
    }
    while ( a1 != v8 );
    if ( *a4 )
      *a5 = ((v7 - *a4) >> 5) + 1;
  }
  return v5;
}
