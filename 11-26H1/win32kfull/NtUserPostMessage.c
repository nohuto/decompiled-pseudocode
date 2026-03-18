/*
 * XREFs of NtUserPostMessage @ 0x140022150
 * Callers:
 *     <none>
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140021BA8 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14012EFF0 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x14012F08C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     ForwardTouchMessage @ 0x1401EDF48 (ForwardTouchMessage.c)
 *     ValidateDDEConvPair @ 0x140211B04 (ValidateDDEConvPair.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x14028C1E4 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserPostMessage(__int64 a1, unsigned int a2, unsigned __int64 a3, volatile void *a4)
{
  __int64 v4; // rdi
  __int16 *v8; // rcx
  int v9; // ebx
  __int64 v10; // rbp
  __int64 v11; // rcx
  BOOL v13; // esi
  struct tagQMSG *v14; // rdi
  __int64 v15; // r14
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v17; // rsi
  const struct tagUIPI_INFO *v18; // r8
  const struct tagUIPI_INFO *v19; // rdx
  __int64 v20; // rcx
  struct tagTHREADINFO **v21; // rax
  struct tagTHREADINFO *v22; // rcx
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v24; // rcx
  __int64 v25; // r15
  __int64 *v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+50h] [rbp-68h] BYREF
  int v29; // [rsp+58h] [rbp-60h]

  v4 = a2;
  EnterCrit(0LL, 1LL);
  if ( (v4 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    v9 = 0;
    goto LABEL_11;
  }
  if ( (unsigned int)v4 < 0x400 )
  {
    v8 = MessageTable;
    if ( (MessageTable[v4] & 0x2000) != 0 )
    {
      v9 = 0;
      UserSetLastError(5LL);
      goto LABEL_11;
    }
  }
  v9 = 0;
  if ( a1 )
  {
    if ( a1 == 0xFFFF || a1 == -1 )
    {
      v10 = -1LL;
    }
    else
    {
      v10 = ValidateHwnd(a1);
      if ( !v10 )
      {
        LOBYTE(v9) = (_DWORD)v4 == 993;
        goto LABEL_11;
      }
    }
  }
  else
  {
    v10 = 0LL;
  }
  if ( (unsigned int)v4 < 0x240 )
  {
    if ( (((_DWORD)v4 - 281) & 0xFFFFFFFD) == 0 )
    {
LABEL_9:
      v11 = 1002LL;
LABEL_10:
      UserSetLastError(v11);
      goto LABEL_11;
    }
    goto LABEL_19;
  }
  if ( (unsigned int)v4 > 0x240 )
  {
    if ( (unsigned int)v4 < 0x258 && (_DWORD)v4 != 589 )
      goto LABEL_9;
    v13 = 0;
    if ( (unsigned int)v4 >= 0x3E0 )
    {
      if ( (unsigned int)v4 <= 0x3E8 )
        v13 = ValidateDDEConvPair(a3, v10) != 0;
      goto LABEL_20;
    }
LABEL_19:
    v13 = 0;
    if ( (_DWORD)v4 == 274 && a3 == 61488 )
    {
      CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(v8);
      v24 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
      if ( (unsigned int)IAMThreadAccessGranted(v24) )
        v13 = 1;
    }
LABEL_20:
    if ( (unsigned __int64)(v10 - 1) > 0xFFFFFFFFFFFFFFFDuLL || v13 )
      goto LABEL_22;
    v15 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 456LL);
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v8);
    v17 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
      v17 = 0LL;
    if ( (_QWORD *)v15 == v17 )
      goto LABEL_22;
    if ( (_DWORD)v4 == 717 )
      goto LABEL_11;
    if ( IsMessageAllowedAcrossILByReceiver((struct tagPROCESSINFO *)v15, (struct tagWND *)v10, v4)
      || (unsigned int)IsMessageAlwaysAllowedAcrossIL(v4)
      || (_DWORD)v4 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792
      || ((unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline()
        ? (v19 = (const struct tagUIPI_INFO *)(v15 + 864))
        : (*(_QWORD *)v15 == *(_QWORD *)(W32GetUserGdiSessionState() + 40)
         ? (v28 = 0x2000LL, v29 = 0)
         : (v28 = *(_QWORD *)(v15 + 864), v29 = *(_DWORD *)(v15 + 872)),
           v19 = (const struct tagUIPI_INFO *)&v28),
          UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v17 + 108), v19, v18)
       || (_DWORD)v4 == 793
       && (v25 = *(_QWORD *)(v10 + 16), *(_QWORD *)(v25 + 1584) == v10)
       && ((v26 = (__int64 *)PsGetCurrentThreadWin32Thread(v20)) == 0LL ? (v27 = 0LL) : (v27 = *v26),
           *(_QWORD *)(v25 + 464) == *(_QWORD *)(v27 + 464))) )
    {
LABEL_22:
      v14 = _PostTransformableMessageExtended((struct tagWND *)v10, v4, a3, (__int64)a4, 0LL, 1);
      if ( (unsigned __int8)MmIsKernelAddress(v14) )
      {
        LOBYTE(v9) = v14 != 0LL;
        LODWORD(v14) = v9;
      }
      v9 = (int)v14;
    }
    else
    {
      EtwTraceUIPIMsgError(v17, v15, (unsigned int)v4, a3, a4);
      UserSetLastError(5LL);
    }
    goto LABEL_11;
  }
  if ( (unsigned __int64)(v10 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v11 = 1400LL;
    goto LABEL_10;
  }
  v21 = (struct tagTHREADINFO **)PsGetCurrentThreadWin32Thread(v8);
  if ( v21 )
    v22 = *v21;
  else
    v22 = 0LL;
  v9 = ForwardTouchMessage(v22, a4, 1, 0LL, 0, 0LL);
LABEL_11:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
