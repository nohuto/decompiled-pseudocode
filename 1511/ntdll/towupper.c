/*
 * XREFs of towupper @ 0x18009B0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
