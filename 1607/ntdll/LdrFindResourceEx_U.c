/*
 * XREFs of LdrFindResourceEx_U @ 0x180085730
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1800303A8 (LdrpSearchResourceSection_U.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC874 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrFindResourceEx_U(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int **a5)
{
  unsigned int v9; // ebx

  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L"02", MEMORY[0x7FFE0384]);
  v9 = LdrpSearchResourceSection_U(a2, a3, a4, a1, a5);
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L".0", MEMORY[0x7FFE0384]);
  return v9;
}
