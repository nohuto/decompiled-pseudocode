/*
 * XREFs of ParseInteger @ 0x1C002161C
 * Callers:
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     ParseArg @ 0x1C0016648 (ParseArg.c)
 * Callees:
 *     memmove @ 0x1C0024E80 (memmove.c)
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 */

__int64 __fastcall ParseInteger(const void **a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx

  v3 = a3;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)(a2 + 2) = 1;
  memmove((void *)(a2 + 16), *a1, a3);
  *a1 = (char *)*a1 + v3;
  if ( (gDebugger & 0xD0) != 0 )
    ConPrintf("0x%I64x");
  return 0LL;
}
