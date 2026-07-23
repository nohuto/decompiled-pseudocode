/*
 * XREFs of RtlpHpSegUpdateCommit @ 0x1800418E8
 * Callers:
 *     RtlpHpSegPageRangeDecommit @ 0x1800417F8 (RtlpHpSegPageRangeDecommit.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpHpSegUpdateCommit(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  char *v6; // rdx
  unsigned __int64 v7; // rcx
  char v8; // al
  char v9; // al
  char result; // al

  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), a5);
  if ( a3 < a3 + 32LL * a4 )
  {
    v6 = (char *)(a3 + 24);
    v7 = ((32 * (unsigned __int64)a4 - 1) >> 5) + 1;
    do
    {
      v8 = *v6;
      if ( a5 > 0 )
        v9 = v8 | 2;
      else
        v9 = v8 & 0xFD;
      *v6 = v9;
      v6 += 32;
      --v7;
    }
    while ( v7 );
  }
  result = ~(a5 + ~*(_BYTE *)(a2 + 26));
  *(_BYTE *)(a2 + 26) = result;
  return result;
}
