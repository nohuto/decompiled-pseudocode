/*
 * XREFs of pre_cpp_init @ 0x140002E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 pre_cpp_init()
{
  __int64 result; // rax

  dword_14000A1A4 = newmode;
  result = __wgetmainargs(&unk_14000A188, &unk_14000A190, &unk_14000A198, (unsigned int)dowildcard, &dword_14000A1A4);
  dword_14000A18C = result;
  return result;
}
