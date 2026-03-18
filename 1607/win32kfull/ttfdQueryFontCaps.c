/*
 * XREFs of ttfdQueryFontCaps @ 0x1C0122790
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall ttfdQueryFontCaps(unsigned int a1, void *a2)
{
  unsigned int v2; // ebx
  int Src; // [rsp+40h] [rbp+18h] BYREF
  int v5; // [rsp+44h] [rbp+1Ch]

  v5 = 3;
  Src = 2;
  v2 = 2;
  if ( a1 < 2 )
    v2 = a1;
  memmove(a2, &Src, 4 * v2);
  return v2;
}
