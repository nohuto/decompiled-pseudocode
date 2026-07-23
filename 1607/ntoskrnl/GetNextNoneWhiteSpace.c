/*
 * XREFs of GetNextNoneWhiteSpace @ 0x1406CCFE4
 * Callers:
 *     GetOperandValue @ 0x1406CD058 (GetOperandValue.c)
 * Callees:
 *     iswspace @ 0x14014E2FC (iswspace.c)
 */

__int64 __fastcall GetNextNoneWhiteSpace(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx

  v4 = 0;
  if ( *(_WORD *)(a1 + 2LL * (unsigned int)*a2) )
  {
    v5 = 0LL;
    do
    {
      if ( !iswspace(*(_WORD *)(a1 + 2 * (v5 + (unsigned int)*a2))) )
        break;
      v5 = ++v4;
    }
    while ( *(_WORD *)(a1 + 2 * (v4 + (unsigned __int64)(unsigned int)*a2)) );
  }
  if ( !*(_WORD *)(a1 + 2LL * v4) )
    return 1336LL;
  *a2 += v4;
  return 0LL;
}
