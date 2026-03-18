/*
 * XREFs of MergeDeferredMessagesOfThreadOnQueue @ 0x14016EB64
 * Callers:
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x140095E60 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     IsHiddenByInputService @ 0x14016ED70 (IsHiddenByInputService.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x14016EDD0 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 */

__int64 __fastcall MergeDeferredMessagesOfThreadOnQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r15
  int v5; // ebp
  __int64 v6; // r10
  __int64 v7; // r14
  int v8; // eax
  int v9; // ecx
  struct tagQMSG *v10; // rdx
  _QWORD *v11; // r11
  _QWORD *v12; // r9
  __int64 v13; // rdx
  char v14; // r12
  char v15; // r13
  __int64 UserSessionState; // rax
  __int64 v17; // r9
  bool v18; // zf
  __int64 v19; // [rsp+20h] [rbp-78h]
  __int64 v20; // [rsp+28h] [rbp-70h]

  result = a1;
  v4 = *(_QWORD *)(a1 + 464) + 24LL;
  v5 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 32LL);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 464) + 48LL);
  while ( v7 )
  {
    if ( !v6 )
    {
      do
      {
        if ( *(_QWORD *)(v7 + 104) == result )
        {
          if ( !(unsigned int)IsHiddenByInputService(v7, a2, a3) )
          {
            ++v5;
            v14 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
               && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20000) != 0
               && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
            v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
              WPP_RECORDER_AND_TRACE_SF_qiqdd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v14,
                v15,
                *(_QWORD *)(UserSessionState + 69152),
                v19,
                v20,
                0x1Bu,
                (__int64)&WPP_835b3a91c6b03c100663678aa6bd529e_Traceguids);
            }
          }
          RemoveQMsgFromDeferList((struct tagMLIST *)v4, (struct tagQMSG *)v7);
          *(_QWORD *)v7 = *(_QWORD *)v4;
          if ( *(_QWORD *)v4 )
            *(_QWORD *)(*(_QWORD *)v4 + 8LL) = v7;
          v18 = *(_QWORD *)(v4 + 8) == 0LL;
          *(_QWORD *)v4 = v7;
          if ( v18 )
            *(_QWORD *)(v4 + 8) = v7;
          result = a1;
          *(_QWORD *)(v7 + 8) = 0LL;
          v7 = v17;
        }
        else
        {
          v7 = *(_QWORD *)(v7 + 8);
        }
      }
      while ( v7 );
      break;
    }
    if ( *(_QWORD *)(v7 + 104) == result )
    {
      if ( *(_DWORD *)(v6 + 48) < *(_DWORD *)(v7 + 48) )
      {
        v8 = IsHiddenByInputService(v7, a2, a3);
        v9 = v5 + 1;
        v10 = (struct tagQMSG *)v7;
        v7 = *(_QWORD *)(v7 + 8);
        if ( v8 )
          v9 = v5;
        v5 = v9;
        RemoveQMsgFromDeferList((struct tagMLIST *)v4, v10);
        *v11 = *(_QWORD *)v6;
        *v12 = v6;
        if ( v6 == *(_QWORD *)(v4 + 8) )
          *(_QWORD *)(v4 + 8) = a2;
        else
          *(_QWORD *)(*(_QWORD *)v6 + 8LL) = a2;
        *(_QWORD *)v6 = a2;
      }
      else
      {
        v6 = *(_QWORD *)(v6 + 8);
      }
      result = a1;
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 8);
    }
  }
  *(_DWORD *)(v4 + 16) += v5;
  return result;
}
