/*
 * XREFs of ?GetShellArrangedWindowType@@YA?AW4SHELL_ARRANGEMENT_TYPE@@QEBU_MOVESIZEDATA@@K@Z @ 0x1C02050D4
 * Callers:
 *     ?PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z @ 0x1C0205A04 (-PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetShellArrangedWindowType(__int64 a1, char a2)
{
  unsigned int v2; // r8d

  v2 = 6;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 289LL) & 1) != 0 )
  {
    if ( (a2 & 0xB) == 0xB )
    {
      return 0;
    }
    else if ( (a2 & 3) == 3 )
    {
      return 1;
    }
    else if ( (a2 & 9) == 9 )
    {
      return 2;
    }
  }
  else if ( (a2 & 0xE) == 0xE )
  {
    return 3;
  }
  else if ( (a2 & 6) == 6 )
  {
    return 4;
  }
  else if ( (a2 & 0xC) == 0xC )
  {
    return 5;
  }
  return v2;
}
