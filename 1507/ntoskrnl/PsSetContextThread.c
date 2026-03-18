/*
 * XREFs of PsSetContextThread @ 0x1406C4040
 * Callers:
 *     <none>
 * Callees:
 *     PspSetContextThreadInternal @ 0x14044FFEC (PspSetContextThreadInternal.c)
 */

__int64 __fastcall PsSetContextThread(__int64 a1, __int64 a2, char a3)
{
  return PspSetContextThreadInternal(a1, a2, a3, a3, 1);
}
