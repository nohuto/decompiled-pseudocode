/*
 * XREFs of GraySkipDIB_CX @ 0x14030A260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GraySkipDIB_CX(__int64 a1, __int64 a2, _WORD *a3, _WORD *a4, int a5)
{
  unsigned __int16 *v5; // rcx
  unsigned __int8 *v6; // rdx
  __int64 result; // rax

  if ( a2 )
  {
    v5 = *(unsigned __int16 **)(a1 + 88);
    v6 = (unsigned __int8 *)(a2 - 1);
    do
    {
      v6 += *v5++;
      result = (unsigned __int16)GrayIdxWORD[*v6];
      *a3 = result;
      a3 = (_WORD *)((char *)a3 + a5);
    }
    while ( a3 != a4 );
  }
  return result;
}
