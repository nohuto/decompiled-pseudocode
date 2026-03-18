/*
 * XREFs of DestroyThreadsMessages @ 0x140093F10
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeQEntry@@YAXPEAUtagQMSG@@@Z @ 0x140095B80 (-FreeQEntry@@YAXPEAUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x140095C20 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140096A20 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x14016EDD0 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14018E9F0 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 */

void __fastcall DestroyThreadsMessages(_QWORD *a1, __int64 a2)
{
  struct tagMLIST *v2; // r14
  struct tagQMSG *v4; // rbx
  __int64 v6; // rbx
  struct tagQMSG *v7; // r15
  __int64 *v8; // r13
  char v9; // bp
  char v10; // si
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rdi

  v2 = (struct tagMLIST *)(a1 + 3);
  v4 = (struct tagQMSG *)a1[3];
  if ( v4 )
  {
    do
    {
      v7 = *(struct tagQMSG **)v4;
      if ( *((_QWORD *)v4 + 13) == a2 )
      {
        v8 = (__int64 *)a1[11];
        if ( v8 == (__int64 *)v4 )
        {
          if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) == 0
            || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            v9 = 0;
          }
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
            || (v10 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
          {
            v10 = 0;
          }
          if ( v9 || v10 )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, 0LL);
            LOBYTE(v12) = v10;
            LOBYTE(v13) = v9;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v13,
              v12,
              *(_QWORD *)(UserSessionState + 69152),
              5,
              18,
              28,
              (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids,
              (char)a1,
              (char)v8);
          }
          a1[11] = 0LL;
        }
        CleanEventMessage(v4);
        DelQEntry(v2, v4, 1LL);
      }
      v4 = v7;
    }
    while ( v7 );
  }
  v6 = a1[6];
  if ( v6 )
  {
    do
    {
      v14 = *(_QWORD *)(v6 + 8);
      if ( *(_QWORD *)(v6 + 104) == a2 )
      {
        RemoveQMsgFromDeferList(v2, (struct tagQMSG *)v6);
        CleanEventMessage((struct tagQMSG *)v6);
        FreeQEntry((struct tagQMSG *)v6);
      }
      v6 = v14;
    }
    while ( v14 );
  }
}
