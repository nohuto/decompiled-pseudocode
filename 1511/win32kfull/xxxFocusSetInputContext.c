/*
 * XREFs of xxxFocusSetInputContext @ 0x1C008120C
 * Callers:
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxSendFocusMessages @ 0x1C0080EB8 (xxxSendFocusMessages.c)
 *     xxxDeactivate @ 0x1C008C738 (xxxDeactivate.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C00DB8C0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00DBB38 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

__int64 __fastcall xxxFocusSetInputContext(__int64 *a1, int a2, int a3)
{
  __int64 v4; // rcx
  __int64 v5; // r10
  __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a1[2];
  v5 = a1[19];
  if ( (*(_BYTE *)(v5 + 86) & 1) == 0 )
  {
    result = *(unsigned __int16 *)(gpsi + 882LL);
    if ( *(_WORD *)(v5 + 8) != (_WORD)result )
    {
      v7 = *(_QWORD *)(v4 + 696);
      if ( v7 )
      {
        result = *(unsigned int *)(v4 + 440);
        if ( (result & 1) == 0 )
        {
          v11[0] = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = v11;
          v11[1] = v7;
          ++*(_DWORD *)(v7 + 8);
          v8 = *a1;
          if ( a3 )
            QueueNotifyTransformableMessage((struct tagWND *)v7, 0x287u, 24 - (a2 != 0), v8, 0, 0);
          else
            xxxSendMessage((struct tagWND *)v7, 0x287u, 24 - (a2 != 0), v8);
          return ThreadUnlock1(v10, v9);
        }
      }
    }
  }
  return result;
}
