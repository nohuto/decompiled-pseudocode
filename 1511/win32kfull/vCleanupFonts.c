/*
 * XREFs of vCleanupFonts @ 0x1C00D2F70
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteFont @ 0x1C00D2FC0 (bDeleteFont.c)
 */

struct HOBJ__ *__fastcall vCleanupFonts(unsigned int a1)
{
  __int64 v2; // rdx
  struct HOBJ__ *i; // rcx
  struct HOBJ__ *result; // rax
  struct HOBJ__ *v5; // rbx

  v2 = a1;
  for ( i = 0LL; ; i = v5 )
  {
    result = (struct HOBJ__ *)HmgNextOwned(i, v2);
    v5 = result;
    if ( !result )
      break;
    if ( (BYTE2(result) & 0x1F) == 0xA )
      bDeleteFont(result);
    v2 = a1;
  }
  return result;
}
