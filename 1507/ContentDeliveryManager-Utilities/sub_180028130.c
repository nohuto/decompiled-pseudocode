/*
 * XREFs of sub_180028130 @ 0x180028130
 * Callers:
 *     <none>
 * Callees:
 *     sub_180021420 @ 0x180021420 (sub_180021420.c)
 */

void __fastcall sub_180028130()
{
  _QWORD **v0; // rcx

  while ( 1 )
  {
    v0 = (_QWORD **)qword_18003A378;
    if ( !qword_18003A378 )
      break;
    qword_18003A378 = *(void **)qword_18003A378;
    sub_180021420(v0, 1);
  }
}
