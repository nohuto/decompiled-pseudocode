/*
 * XREFs of _dynamic_initializer_for__g_scratchContextState__ @ 0x180001440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_initializer_for__g_scratchContextState__()
{
  __int64 result; // rax

  result = (unsigned int)dword_1801EAD50;
  dword_1801EADBC &= ~1u;
  xmmword_1801EADC0 = CMILMatrix::Identity;
  xmmword_1801EADD0 = xmmword_1801EAD20;
  xmmword_1801EADE0 = xmmword_1801EAD30;
  xmmword_1801EADF0 = xmmword_1801EAD40;
  dword_1801EAE00 = dword_1801EAD50;
  return result;
}
