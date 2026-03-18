/*
 * XREFs of MiIsLowestPageTablePage @ 0x14007CE24
 * Callers:
 *     MiUnlockPageTableCharges @ 0x14007CC10 (MiUnlockPageTableCharges.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsLowestPageTablePage(__int64 a1)
{
  unsigned __int64 v1; // rcx

  if ( (*(_BYTE *)(a1 + 34) & 7) == 6
    && (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
    && (v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL, v1 + 0x98000000000LL <= 0x7FFFFFFFFFLL) )
  {
    return (unsigned __int64)(((__int64)(v1 << 25) >> 16) + 0x98000000000LL) <= 0x7FFFFFFFFFLL;
  }
  else
  {
    return 0LL;
  }
}
