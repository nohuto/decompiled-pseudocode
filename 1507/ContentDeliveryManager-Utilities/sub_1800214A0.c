/*
 * XREFs of sub_1800214A0 @ 0x1800214A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180021614 @ 0x180021614 (sub_180021614.c)
 *     ??3@YAXPEAX@Z @ 0x18002621C (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall sub_1800214A0(_QWORD *a1, char a2)
{
  void *v4; // rcx

  *a1 = &off_18002B3F0;
  sub_180021614();
  v4 = (void *)a1[5];
  if ( v4 )
    free(v4);
  a1[5] = 0LL;
  *a1 = &off_18002D990;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
