/*
 * XREFs of ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C000F7B8
 * Callers:
 *     ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C000F7B8 (-GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00100E4 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C000F7B8 (-GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall GetNextLayeredWindowSubtree(struct tagWND *a1)
{
  struct tagWND *result; // rax
  struct tagWND *i; // rbx

  result = 0LL;
  for ( i = a1; i; i = (struct tagWND *)*((_QWORD *)i + 9) )
  {
    result = GetNextLayeredWindowSubtree(*((struct tagWND **)i + 12));
    if ( result )
      break;
    if ( (*((_BYTE *)i + 50) & 8) != 0 )
      return i;
  }
  return result;
}
