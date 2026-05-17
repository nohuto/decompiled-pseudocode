/*
 * XREFs of LdrFindResourceEx_U @ 0x180074E20
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x18001778C (LdrpSearchResourceSection_U.c)
 *     LdrpTraceLoadMUIDll @ 0x1800CBC78 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrFindResourceEx_U(
        unsigned int a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned int v9; // ebx

  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L"02", MEMORY[0x7FFE0384]);
  v9 = LdrpSearchResourceSection_U(a2, a3, a4, a1, a5);
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L".0", MEMORY[0x7FFE0384]);
  return v9;
}
