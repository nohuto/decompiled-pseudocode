/*
 * XREFs of GrepIsDBCSCodePage @ 0x14030A840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GrepIsDBCSCodePage(int a1, __int64 a2)
{
  return *(unsigned int *)(*(_QWORD *)(W32GetSessionState(a1, a2) + 96) + 20340LL);
}
