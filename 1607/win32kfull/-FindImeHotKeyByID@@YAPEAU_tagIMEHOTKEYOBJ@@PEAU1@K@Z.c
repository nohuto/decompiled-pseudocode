/*
 * XREFs of ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@K@Z @ 0x1C0118AC4
 * Callers:
 *     SetImeHotKey @ 0x1C01189B4 (SetImeHotKey.c)
 *     NtUserGetImeHotKey @ 0x1C02137B0 (NtUserGetImeHotKey.c)
 * Callees:
 *     <none>
 */

struct _tagIMEHOTKEYOBJ *__fastcall FindImeHotKeyByID(struct _tagIMEHOTKEYOBJ *a1, int a2)
{
  struct _tagIMEHOTKEYOBJ *result; // rax

  for ( result = (struct _tagIMEHOTKEYOBJ *)gpImeHotKeyListHeader;
        result && *((_DWORD *)result + 2) != a2;
        result = *(struct _tagIMEHOTKEYOBJ **)result )
  {
    ;
  }
  return result;
}
