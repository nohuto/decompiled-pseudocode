/*
 * XREFs of pre_cpp_init @ 0x140002D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 pre_cpp_init()
{
  __int64 result; // rax

  dword_14000A194 = newmode;
  result = __wgetmainargs(&unk_14000A178, &unk_14000A180, &unk_14000A188, (unsigned int)dowildcard, &dword_14000A194);
  dword_14000A17C = result;
  return result;
}
