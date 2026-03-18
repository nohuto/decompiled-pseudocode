/*
 * XREFs of towupper @ 0x14014EE70
 * Callers:
 *     PfSnParametersVerify @ 0x14057238C (PfSnParametersVerify.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
