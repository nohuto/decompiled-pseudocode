/*
 * XREFs of TtmiUpdateActiveTerminalCount @ 0x140678E18
 * Callers:
 *     TtmiCreateTerminal @ 0x140677844 (TtmiCreateTerminal.c)
 *     TtmiSessionTerminalListWorker @ 0x140677C10 (TtmiSessionTerminalListWorker.c)
 *     TtmInitCurrentSession @ 0x14067879C (TtmInitCurrentSession.c)
 * Callees:
 *     <none>
 */

char __fastcall TtmiUpdateActiveTerminalCount(_DWORD *a1, char a2, int a3)
{
  char v3; // r9
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax

  v3 = 0;
  if ( a2 )
  {
    if ( ++a1[19] == 1 )
    {
      v7 = a1[1] & 0xFFFFFFDF;
      a1[3] = a3;
      v6 = v7 | 0x10;
      goto LABEL_6;
    }
  }
  else if ( a1[19]-- == 1 )
  {
    v5 = a1[1] & 0xFFFFFFEF;
    a1[4] = a3;
    v6 = v5 | 0x20;
LABEL_6:
    v3 = 1;
    a1[1] = v6;
  }
  return v3;
}
