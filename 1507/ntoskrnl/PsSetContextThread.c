/*
 * XREFs of PsSetContextThread @ 0x1406C4040
 * Callers:
 *     <none>
 * Callees:
 *     PspSetContextThreadInternal @ 0x14044FFEC (PspSetContextThreadInternal.c)
 */

int __fastcall PsSetContextThread(__int64 a1, CONTEXT *a2, char a3)
{
  return PspSetContextThreadInternal(a1, a2, a3, a3, 1);
}
