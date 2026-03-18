/*
 * XREFs of _PostTransformableMessageIL @ 0x1400218F0
 * Callers:
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x140004EE4 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxBroadcastMessageEx @ 0x140092830 (xxxBroadcastMessageEx.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140021BA8 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14012EFF0 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x14012F08C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     IAMThreadAccessGranted @ 0x1401A2EB0 (IAMThreadAccessGranted.c)
 *     ValidateDDEConvPair @ 0x140211B04 (ValidateDDEConvPair.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x14028C1E4 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall PostTransformableMessageIL(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5)
{
  int v6; // edi
  struct tagQMSG *v11; // rbx
  __int64 v13; // r14
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v15; // rsi
  const struct tagUIPI_INFO *v16; // r8
  const struct tagUIPI_INFO *v17; // rdx
  __int64 v18; // rcx
  _QWORD *CurrentThreadWin32Thread; // rax
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+30h] [rbp-68h] BYREF
  int v25; // [rsp+38h] [rbp-60h]

  v6 = 0;
  if ( a2 >= 0x3E0 )
  {
    if ( a2 <= 0x3E8 && (unsigned int)ValidateDDEConvPair(a3, a1) )
      a5 = 1;
  }
  else if ( a2 == 274 && a3 == 61488 )
  {
    CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(a1);
    v20 = CurrentThreadWin32Thread ? *CurrentThreadWin32Thread : 0LL;
    if ( (unsigned int)IAMThreadAccessGranted(v20) )
      a5 = 1;
  }
  if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL || a5 )
    goto LABEL_5;
  v13 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v15 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
    v15 = 0LL;
  if ( (_QWORD *)v13 == v15 )
    goto LABEL_5;
  if ( a2 == 717 )
    return 0LL;
  if ( !IsMessageAllowedAcrossILByReceiver((struct tagPROCESSINFO *)v13, a1, a2)
    && !(unsigned int)IsMessageAlwaysAllowedAcrossIL(a2)
    && (a2 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792) )
  {
    if ( (unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline() )
    {
      v17 = (const struct tagUIPI_INFO *)(v13 + 864);
    }
    else
    {
      if ( *(_QWORD *)v13 == *(_QWORD *)(W32GetUserGdiSessionState() + 40) )
      {
        v24 = 0x2000LL;
        v25 = 0;
      }
      else
      {
        v24 = *(_QWORD *)(v13 + 864);
        v25 = *(_DWORD *)(v13 + 872);
      }
      v17 = (const struct tagUIPI_INFO *)&v24;
    }
    if ( !UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v15 + 108), v17, v16) )
    {
      if ( a2 != 793
        || (v21 = *((_QWORD *)a1 + 2), *(struct tagWND **)(v21 + 1584) != a1)
        || ((v22 = (__int64 *)PsGetCurrentThreadWin32Thread(v18)) == 0LL ? (v23 = 0LL) : (v23 = *v22),
            *(_QWORD *)(v21 + 464) != *(_QWORD *)(v23 + 464)) )
      {
        EtwTraceUIPIMsgError(v15, v13, a2, a3, a4);
        UserSetLastError(5LL);
        return 0LL;
      }
    }
  }
LABEL_5:
  v11 = _PostTransformableMessageExtended(a1, a2, a3, a4, 0LL, 1);
  if ( (unsigned __int8)MmIsKernelAddress(v11) )
  {
    LOBYTE(v6) = v11 != 0LL;
    LODWORD(v11) = v6;
  }
  return (unsigned int)v11;
}
