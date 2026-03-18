/*
 * XREFs of GreDeleteClientObj @ 0x140292070
 * Callers:
 *     NtGdiDeleteClientObj @ 0x1402468C0 (NtGdiDeleteClientObj.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreDeleteClientObj(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  __int64 result; // rax
  char v4; // [rsp+28h] [rbp-20h]

  v4 = 6;
  v2 = Gre::Base::Globals(a1);
  result = HmgRemoveObject(v2, a1, 0LL, 0LL, 1, v4, 0LL);
  if ( result )
  {
    FreeObject(v2, (void *)result, 6u);
    return 1LL;
  }
  return result;
}
