/*
 * XREFs of PopPromoteActionFlag @ 0x1404F70E4
 * Callers:
 *     PopExecutePowerAction @ 0x1404F6DC0 (PopExecutePowerAction.c)
 * Callees:
 *     <none>
 */

void __fastcall PopPromoteActionFlag(_BYTE *a1, char a2, int a3, char a4, int a5)
{
  if ( a4 )
  {
    if ( (a3 & a5) != 0 && (dword_1402DE08C & a5) == 0 )
    {
      dword_1402DE08C |= a5;
LABEL_5:
      *a1 |= a2;
    }
  }
  else if ( (a3 & a5) == 0 && (dword_1402DE08C & a5) != 0 )
  {
    dword_1402DE08C &= ~a5;
    goto LABEL_5;
  }
}
