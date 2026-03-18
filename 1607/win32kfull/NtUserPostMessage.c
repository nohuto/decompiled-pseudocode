/*
 * XREFs of NtUserPostMessage @ 0x1C0080290
 * Callers:
 *     <none>
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00805A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C009B338 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C009B810 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C009B960 (MSGSQMAddMessage.c)
 *     IAMThreadAccessGranted @ 0x1C00A6F0C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ForwardTouchMessage @ 0x1C01D46BC (ForwardTouchMessage.c)
 *     ValidateDDEConvPair @ 0x1C01E2B94 (ValidateDDEConvPair.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserPostMessage(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct tagTOUCHINPUT *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdx
  PVOID v9; // rcx
  int v10; // edi
  __int64 v11; // rsi
  BOOL v12; // ebp
  __int64 v13; // rbp
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v15; // r14
  struct tagQMSG *v16; // rax
  __int16 v18; // ax
  unsigned int v19; // edx
  int v20; // r9d
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v25; // rdx

  v4 = a2;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( (v4 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    v10 = 0;
    goto LABEL_21;
  }
  if ( (unsigned int)v4 < 0x400 )
  {
    v9 = (PVOID)(((unsigned __int16)MessageTable[v4] >> 13) & 1);
    if ( (((unsigned __int16)MessageTable[v4] >> 13) & 1) != 0 )
    {
      v10 = 0;
      v23 = 5LL;
LABEL_61:
      UserSetLastError(v23);
      goto LABEL_21;
    }
  }
  v10 = 0;
  if ( a1 < 0x10000 || a1 == -1LL )
  {
    if ( !a1 )
    {
      v11 = 0LL;
      goto LABEL_6;
    }
    if ( a1 == 0xFFFF || a1 == -1LL )
    {
      v11 = -1LL;
      goto LABEL_6;
    }
  }
  v11 = ValidateHwnd(a1);
  if ( !v11 )
  {
    if ( (_DWORD)v4 == 993 )
      v10 = 1;
    goto LABEL_21;
  }
LABEL_6:
  if ( (_DWORD)v4 != 576 )
  {
    if ( (((_DWORD)v4 - 281) & 0xFFFFFFFD) == 0
      || (unsigned int)(v4 - 577) <= 3
      || (unsigned int)(v4 - 581) <= 0x12 && (_DWORD)v4 != 589 )
    {
      v23 = 1002LL;
      goto LABEL_61;
    }
    v12 = 0;
    if ( (unsigned int)(v4 - 992) <= 8 )
      v12 = ValidateDDEConvPair(a3, v11) != 0;
    if ( (_DWORD)v4 == 274 && a3 == 61488 )
    {
      if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
        v12 = 1;
    }
    if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_16;
    if ( v12 )
      goto LABEL_16;
    v13 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 376LL);
    CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v9, v8);
    v15 = CurrentProcessWin32Process;
    if ( (struct tagPROCESSINFO *)v13 == CurrentProcessWin32Process )
      goto LABEL_16;
    if ( (_DWORD)v4 == 717 )
      goto LABEL_21;
    if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                         CurrentProcessWin32Process,
                         (struct tagPROCESSINFO *)v13,
                         (struct tagWND *)v11,
                         v4,
                         a3,
                         (__int64)a4,
                         0) )
      goto LABEL_16;
    if ( (unsigned int)IsMessageAlwaysAllowedAcrossIL(v4) )
    {
      v18 = 2;
    }
    else if ( (_DWORD)v4 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792 )
    {
      if ( *(_QWORD *)v13 == gpepCSRSS )
      {
        v19 = 0x2000;
        v20 = 0;
      }
      else
      {
        v19 = *(_DWORD *)(v13 + 824);
        v20 = *(_DWORD *)(v13 + 828);
      }
      v21 = *((_QWORD *)v15 + 103);
      if ( !gbEnforceUIPI )
        goto LABEL_69;
      if ( (unsigned int)v21 <= v19 )
      {
        if ( (_DWORD)v21 != v19 || (v22 = HIDWORD(v21), (_DWORD)v22 != v20) && (_DWORD)v22 != -1 && v20 != -1 )
        {
          if ( (_DWORD)v4 != 793
            || (v25 = *(_QWORD *)(v11 + 16), *(_QWORD *)(v25 + 1248) != v11)
            || *(_QWORD *)(v25 + 384) != *(_QWORD *)(gptiCurrent + 384LL) )
          {
            EtwTraceUIPIMsgError(v15, v13, (unsigned int)v4, a3, a4);
            UserSetLastError(5LL);
            MSGSQMAddMessage(v15, (struct tagPROCESSINFO *)v13, (__int64)a4, 0, 0);
            goto LABEL_21;
          }
          goto LABEL_16;
        }
      }
      if ( gbEnforceUIPI )
        v18 = 5;
      else
LABEL_69:
        v18 = 1;
    }
    else
    {
      v18 = 2;
    }
    MSGSQMAddMessage(v15, (struct tagPROCESSINFO *)v13, (__int64)a4, 0, v18);
LABEL_16:
    v16 = _PostTransformableMessageExtended((struct tagWND *)v11, v4, a3, (__int64)a4, 0LL, 1);
    v9 = MmSystemRangeStart;
    if ( v16 >= MmSystemRangeStart )
    {
      if ( v16 )
        v10 = 1;
      LODWORD(v16) = v10;
    }
    v10 = (int)v16;
    goto LABEL_21;
  }
  if ( (unsigned __int64)(v11 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v23 = 1400LL;
    goto LABEL_61;
  }
  v10 = ForwardTouchMessage(gptiCurrent, a4, 1, 0LL, 0, 0LL);
LABEL_21:
  UserSessionSwitchLeaveCrit(v9, v8);
  return v10;
}
