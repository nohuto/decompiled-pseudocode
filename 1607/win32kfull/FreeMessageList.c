/*
 * XREFs of FreeMessageList @ 0x1C00FDEB0
 * Callers:
 *     <none>
 * Callees:
 *     DelQEntry @ 0x1C0057FA0 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00FDF30 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     FreeQEntry @ 0x1C0135788 (FreeQEntry.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C01CADC4 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 */

__int64 __fastcall FreeMessageList(struct tagQMSG **a1)
{
  struct tagQMSG *i; // rbx
  __int64 result; // rax
  struct tagQMSG *v4; // rsi
  struct tagQMSG *v5; // rbx

  for ( i = *a1; i; i = *a1 )
  {
    CleanEventMessage(i);
    result = DelQEntry(a1, (__int64)i);
  }
  v4 = a1[3];
  if ( v4 )
  {
    do
    {
      v5 = (struct tagQMSG *)*((_QWORD *)v4 + 1);
      RemoveQMsgFromDeferList((struct tagMLIST *)a1, v4);
      CleanEventMessage(v4);
      result = FreeQEntry(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  return result;
}
