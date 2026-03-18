/*
 * XREFs of xxxFocusSetInputContext @ 0x1C0046C38
 * Callers:
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C0008998 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     xxxSendFocusMessages @ 0x1C0046914 (xxxSendFocusMessages.c)
 *     xxxDeactivate @ 0x1C007D9B8 (xxxDeactivate.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00D53CC (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

__int64 __fastcall xxxFocusSetInputContext(__int64 *a1, int a2, int a3)
{
  __int64 v4; // rcx
  __int64 v5; // r10
  __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a1[2];
  v5 = a1[19];
  if ( (*(_BYTE *)(v5 + 86) & 1) == 0 )
  {
    result = *(unsigned __int16 *)(gpsi + 882LL);
    if ( *(_WORD *)(v5 + 8) != (_WORD)result )
    {
      v7 = *(_QWORD *)(v4 + 704);
      if ( v7 )
      {
        result = *(unsigned int *)(v4 + 448);
        if ( (result & 1) == 0 )
        {
          v10[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v10;
          v10[1] = v7;
          ++*(_DWORD *)(v7 + 8);
          if ( a3 )
            QueueNotifyTransformableMessage((struct tagWND *)v7, 0x287u, 24 - (a2 != 0), *a1, 0, 0);
          else
            xxxSendMessage(v7, 647LL, 24 - (a2 != 0));
          return ThreadUnlock1(v9, v8);
        }
      }
    }
  }
  return result;
}
