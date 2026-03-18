/*
 * XREFs of KeRemoveSystemServiceTable @ 0x14061A438
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall KeRemoveSystemServiceTable(int a1)
{
  char result; // al

  if ( a1 != 1 || !(_QWORD)xmmword_1403827A0 && !(_QWORD)xmmword_140382760 )
    return 0;
  *(_QWORD *)&xmmword_140382760 = 0LL;
  result = 1;
  LODWORD(xmmword_140382770) = 0;
  *((_QWORD *)&xmmword_140382770 + 1) = 0LL;
  return result;
}
