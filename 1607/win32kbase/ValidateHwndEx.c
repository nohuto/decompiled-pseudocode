/*
 * XREFs of ValidateHwndEx @ 0x1C0020B00
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C0015690 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0015AA0 (EtwTraceMessageCheckDelay.c)
 *     UserGetDesktopDC @ 0x1C001CBFC (UserGetDesktopDC.c)
 *     ValidateHwnd @ 0x1C0020AF0 (ValidateHwnd.c)
 *     NtUserGetDC @ 0x1C00210B0 (NtUserGetDC.c)
 * Callees:
 *     IsGetDesktopViewSupported_0 @ 0x1C0001AD0 (IsGetDesktopViewSupported_0.c)
 *     GetDesktopView_0 @ 0x1C0001AD8 (GetDesktopView_0.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0080F58 (EtwTraceUIPIHandleValidationError.c)
 *     ?IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C00B1668 (-IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z.c)
 */

__int64 __fastcall ValidateHwndEx(void *a1, int a2, int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v12; // rax
  __int64 v13; // rcx
  struct tagPROCESSINFO *v14; // rdx

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    goto LABEL_30;
  v6 = qword_1C011A128 + (unsigned int)(unsigned __int16)a1 * dword_1C011A130;
  if ( WORD1(a1) != *(_WORD *)(v6 + 18) && WORD1(a1) != 0xFFFF && (WORD1(a1) || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_30;
  if ( *(_BYTE *)(v6 + 16) != 1 )
    goto LABEL_30;
  v7 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v7 = *ThreadWin32Thread;
  v9 = *(_QWORD *)v6;
  if ( *(_QWORD *)v6
    && (v10 = *(_QWORD *)(v9 + 16), (*(_BYTE *)(v6 + 17) & 1) == 0)
    && (!a2
     || v10 == v7
     || *(_QWORD *)(v9 + 24) == *(_QWORD *)(v7 + 408)
     || (*(_DWORD *)(v7 + 440) & 4) != 0
     || (int)IsGetDesktopViewSupported_0() >= 0 && GetDesktopView_0()) )
  {
    if ( a3 && *(_DWORD *)(*(_QWORD *)(v10 + 376) + 832LL) != 1 )
      a3 = 0;
    if ( !gbValidateHandleForIL
      || !v10
      || (v12 = *(_QWORD *)(*(_QWORD *)(v10 + 376) + 824LL),
          v13 = *(_QWORD *)(*(_QWORD *)(v7 + 376) + 824LL),
          !gbEnforceUIPI)
      || (unsigned int)v13 > (unsigned int)v12
      || (_DWORD)v13 == (_DWORD)v12 && (HIDWORD(v13) == HIDWORD(v12) || HIDWORD(v13) == -1 || HIDWORD(v12) == -1)
      || a3
      && (_DWORD)v13 == (_DWORD)v12
      && (unsigned __int8)SeIsParentOfChildAppContainer((unsigned int)gSessionId, HIDWORD(v13), HIDWORD(v12))
      || (v14 = *(struct tagPROCESSINFO **)(v10 + 376), *(PVOID *)v14 == gpepCSRSS) )
    {
      if ( (*(_DWORD *)(v7 + 440) & 0x20000000) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 376) + 720LL) + 24LL) & 1) != 0
        && !(unsigned int)IsHandleEntrySecure(a1, (struct _HANDLEENTRY *)v6) )
      {
        UserSetLastError(1400LL);
        return 0LL;
      }
      return v9;
    }
    else
    {
      EtwTraceUIPIHandleValidationError(*(struct tagPROCESSINFO **)(v7 + 376), v14);
      UserSetLastError(5LL);
      return 0LL;
    }
  }
  else
  {
LABEL_30:
    UserSetLastError(1400LL);
    return 0LL;
  }
}
