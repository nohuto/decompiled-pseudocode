/*
 * XREFs of pre_cpp_init @ 0x140018080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 pre_cpp_init()
{
  __int64 result; // rax

  dword_1400545B4 = newmode;
  result = __wgetmainargs(&unk_140054598, &unk_1400545A0, &unk_1400545A8, (unsigned int)dowildcard, &dword_1400545B4);
  dword_14005459C = result;
  return result;
}
