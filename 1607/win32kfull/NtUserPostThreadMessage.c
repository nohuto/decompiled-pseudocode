/*
 * XREFs of NtUserPostThreadMessage @ 0x1C0057130
 * Callers:
 *     <none>
 * Callees:
 *     PtiFromThreadId @ 0x1C0057448 (PtiFromThreadId.c)
 *     _PostThreadMessage @ 0x1C0057CD8 (_PostThreadMessage.c)
 *     GetDesktopView @ 0x1C009A590 (GetDesktopView.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C009B338 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C009B810 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C009B960 (MSGSQMAddMessage.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     IsPrivileged @ 0x1C0111B6C (IsPrivileged.c)
 */

__int64 __fastcall NtUserPostThreadMessage(unsigned int a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  int v8; // ebx
  unsigned __int64 i; // rcx
  _QWORD *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r15
  _QWORD *v15; // rdx
  int v16; // esi
  unsigned int v17; // edx
  int v18; // r8d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int16 v21; // ax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  _DWORD v24[2]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v25[2]; // [rsp+48h] [rbp-30h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    v8 = 0;
    goto LABEL_6;
  }
  v8 = 0;
  v10 = (_QWORD *)PtiFromThreadId(a1);
  if ( !v10 )
  {
    v15 = (_QWORD *)gpwpiFirstWow;
LABEL_8:
    if ( !v15 )
      goto LABEL_9;
    for ( i = v15[2]; ; i = *(_QWORD *)i )
    {
      if ( !i )
      {
        v15 = (_QWORD *)*v15;
        goto LABEL_8;
      }
      if ( *(unsigned __int16 *)(i + 32) == a1 )
        break;
    }
    v10 = *(_QWORD **)(i + 16);
  }
  v11 = v10[51];
  if ( *(_QWORD *)(gptiCurrent + 408LL) != v11
    && (*(_DWORD *)(gptiCurrent + 440LL) & 8) == 0
    && !GetDesktopView(*(_QWORD *)(gptiCurrent + 376LL)) )
  {
    if ( !(unsigned int)IsPrivileged(psTcb) )
    {
LABEL_9:
      UserSetLastError(1444LL);
      goto LABEL_6;
    }
    if ( gbEnforceUIPI )
    {
      i = *(_QWORD *)(v10[47] + 824LL);
      v22 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
      if ( (unsigned int)v22 <= (unsigned int)i )
      {
        if ( (_DWORD)v22 != (_DWORD)i
          || (v23 = HIDWORD(v22), i >>= 32, (_DWORD)v23 != (_DWORD)i) && (_DWORD)v23 != -1 && (_DWORD)i != -1 )
        {
          UserSetLastError(1444LL);
          EtwTraceUIPIMsgError(*(_QWORD *)(gptiCurrent + 376LL), v10[47], a2, a3, a4);
          goto LABEL_6;
        }
      }
    }
    else if ( (int)GetProcessLuid(*gptiCurrent, v25) < 0
           || (int)GetProcessLuid(*v10, v24) < 0
           || v25[0] != v24[0]
           || v25[1] != v24[1] )
    {
      goto LABEL_9;
    }
  }
  v12 = v10[47];
  v13 = *(_QWORD *)(gptiCurrent + 376LL);
  if ( v12 != v13 )
  {
    if ( a2 == 717 )
      goto LABEL_6;
    if ( !(unsigned int)IsMessageAllowedAcrossILByReceiver(
                          (struct tagPROCESSINFO *)v13,
                          (struct tagPROCESSINFO *)v12,
                          0LL,
                          a2,
                          a3,
                          a4,
                          0) )
    {
      v16 = IsMessageAlwaysAllowedAcrossIL(a2);
      if ( v16 )
      {
        v21 = 2;
      }
      else
      {
        if ( a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
        {
          MSGSQMAddMessage((struct tagPROCESSINFO *)v13, (struct tagPROCESSINFO *)v12, a4, 0, 2);
          goto LABEL_5;
        }
        if ( *(_QWORD *)v12 == gpepCSRSS )
        {
          v17 = 0x2000;
          v18 = 0;
        }
        else
        {
          v17 = *(_DWORD *)(v12 + 824);
          v18 = *(_DWORD *)(v12 + 828);
        }
        v19 = *(_QWORD *)(v13 + 824);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v19 <= v17 )
          {
            if ( (_DWORD)v19 != v17 || (v20 = HIDWORD(v19), (_DWORD)v20 != v18) && v18 != -1 && (_DWORD)v20 != -1 )
            {
              v16 = 0;
              EtwTraceUIPIMsgError(v13, v12, a2, a3, a4);
              UserSetLastError(5LL);
              MSGSQMAddMessage((struct tagPROCESSINFO *)v13, (struct tagPROCESSINFO *)v12, a4, 0, 0);
LABEL_22:
              if ( !v16 )
                goto LABEL_6;
              goto LABEL_5;
            }
          }
        }
        v16 = 1;
        v21 = gbEnforceUIPI != 0 ? 5 : 1;
      }
      MSGSQMAddMessage((struct tagPROCESSINFO *)v13, (struct tagPROCESSINFO *)v12, a4, 0, v21);
      goto LABEL_22;
    }
  }
LABEL_5:
  v8 = PostThreadMessage(v10, a2, a3, a4);
LABEL_6:
  UserSessionSwitchLeaveCrit(i, v11);
  return v8;
}
