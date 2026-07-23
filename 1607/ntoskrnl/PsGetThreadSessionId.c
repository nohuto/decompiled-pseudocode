/*
 * XREFs of PsGetThreadSessionId @ 0x1404285A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadSessionId(__int64 a1)
{
  return MmGetSessionId(*(struct _KPROCESS **)(a1 + 544));
}
