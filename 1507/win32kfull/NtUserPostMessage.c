/*
 * XREFs of NtUserPostMessage @ 0x1C006FDF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0070100 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     IAMThreadAccessGranted @ 0x1C0082890 (IAMThreadAccessGranted.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00E247C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00E274C (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00E27BC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ForwardTouchMessage @ 0x1C01DC718 (ForwardTouchMessage.c)
 *     ValidateDDEConvPair @ 0x1C01EBAF4 (ValidateDDEConvPair.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserPostMessage(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct tagTOUCHINPUT *a4)
{
  __int64 v5; // rbx
  PVOID v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rsi
  BOOL v13; // ebp
  __int64 v14; // rbp
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v16; // r14
  struct tagQMSG *v17; // rax
  __int16 v19; // ax
  unsigned int v20; // edx
  int v21; // r9d
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // ecx
  __int64 v26; // rdx

  v5 = a2;
  EnterCrit(1LL);
  gbValidateHandleForIL = 0;
  if ( (v5 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    v10 = 0;
    goto LABEL_21;
  }
  if ( (unsigned int)v5 < 0x400 )
  {
    v8 = (PVOID)(((unsigned __int16)MessageTable[v5] >> 13) & 1);
    if ( (((unsigned __int16)MessageTable[v5] >> 13) & 1) != 0 )
    {
      v10 = 0;
      v24 = 5;
LABEL_61:
      UserSetLastError(v24);
      goto LABEL_21;
    }
  }
  v10 = 0;
  if ( a1 < 0x10000 || a1 == -1LL )
  {
    if ( !a1 )
    {
      v12 = 0LL;
      goto LABEL_6;
    }
    if ( a1 == 0xFFFF || a1 == -1LL )
    {
      v12 = -1LL;
      goto LABEL_6;
    }
  }
  v12 = ValidateHwnd(a1);
  if ( !v12 )
  {
    if ( (_DWORD)v5 == 993 )
      v10 = 1;
    goto LABEL_21;
  }
LABEL_6:
  if ( (_DWORD)v5 != 576 )
  {
    if ( (((_DWORD)v5 - 281) & 0xFFFFFFFD) == 0
      || (unsigned int)(v5 - 577) <= 3
      || (unsigned int)(v5 - 581) <= 0x12 && (_DWORD)v5 != 589 )
    {
      v24 = 1002;
      goto LABEL_61;
    }
    v13 = 0;
    if ( (unsigned int)(v5 - 992) <= 8 )
      v13 = ValidateDDEConvPair(a3, v12, v9) != 0;
    if ( (_DWORD)v5 == 274 && a3 == 61488 )
    {
      if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
        v13 = 1;
    }
    if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_16;
    if ( v13 )
      goto LABEL_16;
    v14 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 384LL);
    CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v8);
    v16 = CurrentProcessWin32Process;
    if ( (struct tagPROCESSINFO *)v14 == CurrentProcessWin32Process )
      goto LABEL_16;
    if ( (_DWORD)v5 == 717 )
      goto LABEL_21;
    if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                         CurrentProcessWin32Process,
                         (struct tagPROCESSINFO *)v14,
                         (struct tagWND *)v12,
                         v5,
                         a3,
                         (__int64)a4,
                         0) )
      goto LABEL_16;
    if ( (unsigned int)IsMessageAlwaysAllowedAcrossIL(v5) )
    {
      v19 = 2;
    }
    else if ( (_DWORD)v5 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792 )
    {
      if ( *(_QWORD *)v14 == gpepCSRSS )
      {
        v20 = 0x2000;
        v21 = 0;
      }
      else
      {
        v20 = *(_DWORD *)(v14 + 832);
        v21 = *(_DWORD *)(v14 + 836);
      }
      v22 = *((_QWORD *)v16 + 104);
      if ( !gbEnforceUIPI )
        goto LABEL_69;
      if ( (unsigned int)v22 <= v20 )
      {
        if ( (_DWORD)v22 != v20 || (v23 = HIDWORD(v22), (_DWORD)v23 != v21) && (_DWORD)v23 != -1 && v21 != -1 )
        {
          if ( (_DWORD)v5 != 793
            || (v26 = *(_QWORD *)(v12 + 16), *(_QWORD *)(v26 + 1232) != v12)
            || *(_QWORD *)(v26 + 392) != *(_QWORD *)(gptiCurrent + 392LL) )
          {
            EtwTraceUIPIMsgError(v16, v14, (unsigned int)v5, a3, a4);
            UserSetLastError(5);
            MSGSQMAddMessage(v16, (struct tagPROCESSINFO *)v14, (__int64)a4, 0, 0);
            goto LABEL_21;
          }
          goto LABEL_16;
        }
      }
      if ( gbEnforceUIPI )
        v19 = 5;
      else
LABEL_69:
        v19 = 1;
    }
    else
    {
      v19 = 2;
    }
    MSGSQMAddMessage(v16, (struct tagPROCESSINFO *)v14, (__int64)a4, 0, v19);
LABEL_16:
    v17 = _PostTransformableMessageExtended((struct tagWND *)v12, v5, a3, (__int64)a4, 0LL, 1);
    v8 = MmSystemRangeStart;
    if ( v17 >= MmSystemRangeStart )
    {
      if ( v17 )
        v10 = 1;
      LODWORD(v17) = v10;
    }
    v10 = (unsigned int)v17;
    goto LABEL_21;
  }
  if ( (unsigned __int64)(v12 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v24 = 1400;
    goto LABEL_61;
  }
  v10 = ForwardTouchMessage(gptiCurrent, a4, 1, 0LL, 0, 0LL);
LABEL_21:
  UserSessionSwitchLeaveCrit(v8, v11);
  return v10;
}
