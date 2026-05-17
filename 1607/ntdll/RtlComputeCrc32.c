/*
 * XREFs of RtlComputeCrc32 @ 0x180063B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlComputeCrc32(int a1, _BYTE *a2, unsigned int a3)
{
  unsigned int v4; // r9d
  __int64 v5; // r11
  unsigned __int8 v6; // dl

  v4 = ~a1;
  if ( a3 )
  {
    v5 = a3;
    do
    {
      v6 = v4 ^ *a2++;
      v4 = (v4 >> 8) ^ RtlCrc32Table[v6];
      --v5;
    }
    while ( v5 );
  }
  return ~v4;
}
