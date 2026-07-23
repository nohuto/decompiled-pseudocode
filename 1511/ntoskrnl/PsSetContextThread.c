/*
 * XREFs of PsSetContextThread @ 0x140641B20
 * Callers:
 *     <none>
 * Callees:
 *     PspSetContextThreadInternal @ 0x1403EFC88 (PspSetContextThreadInternal.c)
 */

int __fastcall PsSetContextThread(__int64 a1, CONTEXT *a2, char a3)
{
  return PspSetContextThreadInternal(a1, a2, a3, a3, 1);
}
