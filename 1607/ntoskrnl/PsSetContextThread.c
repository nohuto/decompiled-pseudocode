/*
 * XREFs of PsSetContextThread @ 0x140680068
 * Callers:
 *     <none>
 * Callees:
 *     PspSetContextThreadInternal @ 0x1404FA764 (PspSetContextThreadInternal.c)
 */

NTSTATUS __fastcall PsSetContextThread(__int64 a1, CONTEXT *a2, char a3)
{
  return PspSetContextThreadInternal(a1, a2, a3, a3, 1);
}
