/*
 * XREFs of SkipDIB_CX @ 0x14026EFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall SkipDIB_CX(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int16 *v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx
  char result; // al

  if ( a2 )
  {
    v5 = *(unsigned __int16 **)(a1 + 88);
    v6 = a2 - 3;
    do
    {
      v7 = *v5++;
      v6 += v7 + 2 * v7;
      *(_WORD *)a3 = *(_WORD *)v6;
      result = *(_BYTE *)(v6 + 2);
      *(_BYTE *)(a3 + 2) = result;
      a3 += a5;
    }
    while ( a3 != a4 );
  }
  return result;
}
