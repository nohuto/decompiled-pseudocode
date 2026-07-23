/*
 * XREFs of towupper @ 0x14014F430
 * Callers:
 *     PfSnParametersVerify @ 0x1405728CC (PfSnParametersVerify.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
