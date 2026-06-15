/*
 * XREFs of pre_cpp_init @ 0x140018B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 pre_cpp_init()
{
  __int64 result; // rax

  dword_140055504 = newmode;
  result = __wgetmainargs(&unk_1400554E8, &unk_1400554F0, &unk_1400554F8, (unsigned int)dowildcard, &dword_140055504);
  dword_1400554EC = result;
  return result;
}
