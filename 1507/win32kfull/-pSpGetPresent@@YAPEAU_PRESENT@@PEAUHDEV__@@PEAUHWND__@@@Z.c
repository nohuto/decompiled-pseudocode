/*
 * XREFs of ?pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C008B0B8
 * Callers:
 *     GreDeleteSpriteOverlapPresent @ 0x1C008A328 (GreDeleteSpriteOverlapPresent.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C026DE54 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

struct _PRESENT *__fastcall pSpGetPresent(_QWORD *a1, HWND a2)
{
  struct _PRESENT *result; // rax

  result = 0LL;
  if ( a2 )
  {
    for ( result = (struct _PRESENT *)a1[23];
          result && *(HWND *)result != a2;
          result = (struct _PRESENT *)*((_QWORD *)result + 1) )
    {
      ;
    }
  }
  return result;
}
