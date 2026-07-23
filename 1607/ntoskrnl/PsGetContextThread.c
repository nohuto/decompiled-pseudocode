/*
 * XREFs of PsGetContextThread @ 0x140680050
 * Callers:
 *     <none>
 * Callees:
 *     PspGetContextThreadInternal @ 0x1404FADF4 (PspGetContextThreadInternal.c)
 */

NTSTATUS __fastcall PsGetContextThread(__int64 a1, __int64 a2, char a3)
{
  return PspGetContextThreadInternal(a1, a2, a3, a3, 1);
}
