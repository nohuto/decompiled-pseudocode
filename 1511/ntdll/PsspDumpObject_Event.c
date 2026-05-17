/*
 * XREFs of PsspDumpObject_Event @ 0x18008AD40
 * Callers:
 *     PsspWalkHandleTable @ 0x18008A7C0 (PsspWalkHandleTable.c)
 * Callees:
 *     NtQueryEvent @ 0x1800A5B80 (NtQueryEvent.c)
 */

__int64 __fastcall PsspDumpObject_Event(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  *a4 = 0;
  if ( a3 < 8 )
    return 3221225507LL;
  else
    return NtQueryEvent(a1, 0LL, a2, 8LL, a4);
}
