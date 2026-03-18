/*
 * XREFs of PsGetContextThread @ 0x14067FF6C
 * Callers:
 *     <none>
 * Callees:
 *     PspGetContextThreadInternal @ 0x140517A04 (PspGetContextThreadInternal.c)
 */

__int64 __fastcall PsGetContextThread(__int64 a1, __int64 a2, char a3)
{
  return PspGetContextThreadInternal(a1, a2, a3, a3, 1);
}
