/*
 * XREFs of FreeMessageList @ 0x140094860
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x140095B80 (-FreeQEntry@@YAXPEAUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x140095C20 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140096A20 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x14016EDD0 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 */

void __fastcall FreeMessageList(struct tagQMSG **a1)
{
  struct tagQMSG *i; // rbx
  struct tagQMSG *v3; // rsi
  struct tagQMSG *v4; // rbx

  for ( i = *a1; i; i = *a1 )
  {
    CleanEventMessage(i);
    DelQEntry(a1, i, 1LL);
  }
  v3 = a1[3];
  if ( v3 )
  {
    do
    {
      v4 = (struct tagQMSG *)*((_QWORD *)v3 + 1);
      RemoveQMsgFromDeferList((struct tagMLIST *)a1, v3);
      CleanEventMessage(v3);
      FreeQEntry(v3);
      v3 = v4;
    }
    while ( v4 );
  }
}
