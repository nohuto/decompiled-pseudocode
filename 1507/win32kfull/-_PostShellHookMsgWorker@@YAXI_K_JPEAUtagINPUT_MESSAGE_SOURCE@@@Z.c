/*
 * XREFs of ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0085FE0
 * Callers:
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0118004 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0070100 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 */

void __fastcall _PostShellHookMsgWorker(
        unsigned int a1,
        unsigned __int64 a2,
        struct _LARGE_STRING *a3,
        struct tagINPUT_MESSAGE_SOURCE *a4)
{
  unsigned int v4; // edi
  __int64 v9; // rbx
  __int64 v10; // rbp
  unsigned int *v11; // r8
  unsigned __int64 v12; // r8

  v4 = 0;
  v9 = 0LL;
  v10 = *(_QWORD *)(gptiCurrent + 424LL);
  while ( 1 )
  {
    v11 = *(unsigned int **)(v10 + 248);
    if ( !v11 || v11[3] )
      break;
    if ( v4 >= *v11 )
      goto LABEL_13;
    if ( *(_QWORD *)&v11[4 * v4 + 6] == v9 )
      ++v4;
    if ( v4 >= *v11 )
    {
LABEL_13:
      v4 = 0;
      v9 = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)&v11[4 * v4 + 6];
    }
    if ( !v9 )
      break;
    if ( a1 == *(_DWORD *)(gpsi + 912LL) && v9 == *(_QWORD *)(v10 + 192) )
    {
      if ( a2 == 1 )
      {
        v12 = (unsigned int)guiOtherWindowCreated;
LABEL_19:
        PostMessage(v9, a1, v12, a3);
      }
      else if ( a2 == 2 )
      {
        v12 = (unsigned int)guiOtherWindowDestroyed;
        goto LABEL_19;
      }
    }
    else
    {
      _PostTransformableMessageExtended(v9, a1, a2, a3, a4, 1);
    }
  }
}
