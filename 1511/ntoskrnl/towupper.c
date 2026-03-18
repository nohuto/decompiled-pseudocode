/*
 * XREFs of towupper @ 0x140145A94
 * Callers:
 *     PfSnParametersVerify @ 0x14054131C (PfSnParametersVerify.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
