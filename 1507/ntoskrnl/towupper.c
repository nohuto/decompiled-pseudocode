/*
 * XREFs of towupper @ 0x140173AC4
 * Callers:
 *     PfSnParametersVerify @ 0x1405B70E0 (PfSnParametersVerify.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
