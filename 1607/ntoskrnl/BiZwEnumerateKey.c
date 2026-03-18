/*
 * XREFs of BiZwEnumerateKey @ 0x14012DF70
 * Callers:
 *     BiEnumerateSubKeys @ 0x14053C2A0 (BiEnumerateSubKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall BiZwEnumerateKey(void *a1, ULONG a2, __int64 a3, void *a4, ULONG a5, ULONG *a6)
{
  return ZwEnumerateKey(a1, a2, KeyBasicInformation, a4, a5, a6);
}
