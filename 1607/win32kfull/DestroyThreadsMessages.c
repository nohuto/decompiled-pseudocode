/*
 * XREFs of DestroyThreadsMessages @ 0x1C00FDE00
 * Callers:
 *     <none>
 * Callees:
 *     DelQEntry @ 0x1C0057FA0 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00FDF30 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     FreeQEntry @ 0x1C0135788 (FreeQEntry.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C01CADC4 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 */

__int64 __fastcall DestroyThreadsMessages(struct tagMLIST *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi

  v2 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    do
    {
      v5 = *(_QWORD *)v2;
      if ( *(_QWORD *)(v2 + 104) == a2 )
      {
        if ( *((_QWORD *)a1 + 6) == v2 )
          *((_QWORD *)a1 + 6) = 0LL;
        CleanEventMessage((struct tagQMSG *)v2);
        result = DelQEntry(a1, v2);
      }
      v2 = v5;
    }
    while ( v5 );
  }
  v7 = *((_QWORD *)a1 + 3);
  if ( v7 )
  {
    do
    {
      v8 = *(_QWORD *)(v7 + 8);
      if ( *(_QWORD *)(v7 + 104) == a2 )
      {
        RemoveQMsgFromDeferList(a1, (struct tagQMSG *)v7);
        CleanEventMessage((struct tagQMSG *)v7);
        result = FreeQEntry(v7);
      }
      v7 = v8;
    }
    while ( v8 );
  }
  return result;
}
