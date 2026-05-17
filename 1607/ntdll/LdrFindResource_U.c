/*
 * XREFs of LdrFindResource_U @ 0x18002D6C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1800303A8 (LdrpSearchResourceSection_U.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC874 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrFindResource_U(int a1, int a2, int a3, __int64 a4)
{
  unsigned int v8; // ebx

  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L",.", MEMORY[0x7FFE0384]);
  v8 = LdrpSearchResourceSection_U(a1, a2, a3, 0, a4);
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L"*,", MEMORY[0x7FFE0384]);
  return v8;
}
