/*
 * XREFs of KeRemoveSystemServiceTable @ 0x140698A5C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall KeRemoveSystemServiceTable(int a1)
{
  char result; // al

  if ( a1 != 1 || !(_QWORD)xmmword_1403D17E0 && !(_QWORD)xmmword_1403D17A0 )
    return 0;
  *(_QWORD *)&xmmword_1403D17A0 = 0LL;
  result = 1;
  LODWORD(xmmword_1403D17B0) = 0;
  *((_QWORD *)&xmmword_1403D17B0 + 1) = 0LL;
  return result;
}
