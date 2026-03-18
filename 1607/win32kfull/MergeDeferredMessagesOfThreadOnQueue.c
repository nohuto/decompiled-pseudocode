/*
 * XREFs of MergeDeferredMessagesOfThreadOnQueue @ 0x1C01CB1E8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 * Callees:
 *     IsHiddenByInputService @ 0x1C0058034 (IsHiddenByInputService.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C01CADC4 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 */

void __fastcall MergeDeferredMessagesOfThreadOnQueue(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // esi
  __int64 v4; // r11
  __int64 v5; // rdi
  struct tagQMSG *v6; // r11
  _QWORD *v7; // rdx
  _QWORD *v8; // r10
  struct tagQMSG *v9; // r11
  __int64 v10; // r10
  _QWORD *v11; // r11
  bool v12; // zf

  v1 = *(_QWORD *)(a1 + 384);
  v2 = 0;
  v4 = *(_QWORD *)(v1 + 24);
  v5 = *(_QWORD *)(v1 + 8);
  if ( v4 )
  {
    do
    {
      if ( !v5 )
        break;
      if ( *(_QWORD *)(v4 + 104) == a1 )
      {
        if ( *(_DWORD *)(v5 + 48) < *(_DWORD *)(v4 + 48) )
        {
          if ( !IsHiddenByInputService(v4) )
            ++v2;
          RemoveQMsgFromDeferList((struct tagMLIST *)v1, v6);
          *v7 = *(_QWORD *)v5;
          *v8 = v5;
          if ( v5 == *(_QWORD *)(v1 + 8) )
            *(_QWORD *)(v1 + 8) = v7;
          else
            *(_QWORD *)(*(_QWORD *)v5 + 8LL) = v7;
          *(_QWORD *)v5 = v7;
        }
        else
        {
          v5 = *(_QWORD *)(v5 + 8);
        }
      }
      else
      {
        v4 = *(_QWORD *)(v4 + 8);
      }
    }
    while ( v4 );
    while ( v4 )
    {
      if ( *(_QWORD *)(v4 + 104) == a1 )
      {
        if ( !IsHiddenByInputService(v4) )
          ++v2;
        RemoveQMsgFromDeferList((struct tagMLIST *)v1, v9);
        *v11 = *(_QWORD *)v1;
        if ( *(_QWORD *)v1 )
          *(_QWORD *)(*(_QWORD *)v1 + 8LL) = v11;
        v12 = *(_QWORD *)(v1 + 8) == 0LL;
        *(_QWORD *)v1 = v11;
        if ( v12 )
          *(_QWORD *)(v1 + 8) = v11;
        v11[1] = 0LL;
        v4 = v10;
      }
      else
      {
        v4 = *(_QWORD *)(v4 + 8);
      }
    }
  }
  *(_DWORD *)(v1 + 16) += v2;
}
