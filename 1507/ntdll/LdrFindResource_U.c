/*
 * XREFs of LdrFindResource_U @ 0x1800702A0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x18001778C (LdrpSearchResourceSection_U.c)
 *     LdrpTraceLoadMUIDll @ 0x1800CBC78 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrFindResource_U(unsigned __int64 a1, __int64 a2, unsigned int a3, unsigned __int64 *a4)
{
  unsigned int v8; // ebx

  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L",.", MEMORY[0x7FFE0384]);
  v8 = LdrpSearchResourceSection_U(a1, a2, a3, 0, a4);
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(L"*,", MEMORY[0x7FFE0384]);
  return v8;
}
