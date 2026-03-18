/*
 * XREFs of _lambda_0626be66eec18444efdef0f40e13a11c_::operator() @ 0x1402A4D54
 * Callers:
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 * Callees:
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140047DD0 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall lambda_0626be66eec18444efdef0f40e13a11c_::operator()(__int64 a1, const struct tagWND *a2)
{
  char *v2; // rcx
  bool result; // al

  result = a2
        && (v2 = (char *)*((_QWORD *)a2 + 5), (v2[31] & 0x18) == 0x10)
        && (v2[27] & 8) == 0
        && (v2[24] >= 0 || (v2[26] & 4) != 0)
        && !IsWindowCloaked(a2);
  return result;
}
