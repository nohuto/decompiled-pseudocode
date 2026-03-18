/*
 * XREFs of xxxSetWindowLong @ 0x140085C90
 * Callers:
 *     NtUserSetWindowLong @ 0x140085B00 (NtUserSetWindowLong.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1401FFD98 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     ?FCallerOk@@YAHPEAUtagWND@@@Z @ 0x140086128 (-FCallerOk@@YAHPEAUtagWND@@@Z.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1401EF1D0 (safe_cast_wf_to_PDIALOG.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxSetWindowLong(struct tagWND *a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v5; // rsi
  __int64 v6; // r15
  char v8; // bl
  unsigned __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  const struct tagUIPI_INFO *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  char *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // ecx
  unsigned int v22; // edi
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdx
  int v27; // ecx
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int i; // edi
  __int64 UserSessionState; // rax
  int v32; // r9d
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned int *v35; // rax
  __int64 v36; // rcx
  _DWORD *v37; // [rsp+28h] [rbp-70h]

  v5 = (int)a3;
  v6 = a2;
  v8 = 0;
  if ( !(unsigned int)FCallerOk(a1) )
    goto LABEL_60;
  if ( (int)v6 >= 0 )
  {
    v9 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 248LL);
    if ( v6 + 4 > v9 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v11 = *((_QWORD *)a1 + 2);
      v12 = *(_QWORD *)(v11 + 456);
      if ( v12 != CurrentProcessWin32Process )
      {
        v13 = PsGetCurrentProcessWin32Process(v11);
        if ( v13 )
          v13 &= -(__int64)(*(_QWORD *)v13 != 0LL);
        if ( UIPrivilegeIsolation::CheckAccess(
               (UIPrivilegeIsolation *)(v13 + 864),
               (const struct tagUIPI_INFO *)(v12 + 864),
               v14) )
        {
          goto LABEL_13;
        }
        v16 = PsGetCurrentProcessWin32Process(v15);
        if ( v16 )
          v16 &= -(__int64)(*(_QWORD *)v16 != 0LL);
        if ( *(int *)(v16 + 12) < 0 )
        {
LABEL_13:
          KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 456LL));
          v8 = 1;
          goto LABEL_14;
        }
LABEL_60:
        UserSetLastError(5);
        return 0LL;
      }
    }
  }
LABEL_14:
  v17 = (char *)a1 + 40;
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0 )
    goto LABEL_40;
  v37 = (_DWORD *)safe_cast_wf_to_PDIALOG(a1);
  if ( !v37 )
  {
    if ( (int)v6 < 0 )
    {
LABEL_41:
      if ( (unsigned int)(v6 + 21) <= 9 )
      {
        v27 = 547;
        if ( _bittest(&v27, v6 + 21) )
        {
          v22 = xxxSetWindowData(a1, v6, (unsigned int)v5, a4);
          goto LABEL_28;
        }
      }
LABEL_38:
      v20 = 1413;
LABEL_55:
      UserSetLastError(v20);
      if ( v8 )
        KeDetachProcess();
      return 0LL;
    }
    v24 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 19904);
    v25 = *(unsigned __int16 *)(*(_QWORD *)v17 + 42LL);
    if ( (int)v6 < *(unsigned __int16 *)(v24 + 2LL * (((unsigned int)v25 & 0xFFFF2FFF) - 666) + 328)
                 - *(unsigned __int16 *)(W32GetUserSessionState(v25, v26) + 71164) )
    {
      if ( (*(_WORD *)(*(_QWORD *)v17 + 42LL) & 0x2FFF) != 0x2A7
        || (_DWORD)v6
        && ((_DWORD)v6 != 8 || **(_DWORD **)(*(_QWORD *)v17 + 296LL) && *(char *)(*(_QWORD *)v17 + 19LL) >= 0) )
      {
        goto LABEL_38;
      }
      goto LABEL_44;
    }
    LODWORD(v5) = a3;
LABEL_40:
    if ( (int)v6 < 0 )
      goto LABEL_41;
LABEL_44:
    v28 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v17 + 200LL) + *(_DWORD *)(*(_QWORD *)v17 + 248LL));
    if ( (unsigned __int64)(unsigned int)v6 + 4 <= v28 )
    {
      if ( a5 )
      {
        v29 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
        if ( _bittest16((const signed __int16 *)(v29 + 6), 8u) )
        {
          for ( i = 0; i < 5; ++i )
          {
            UserSessionState = W32GetUserSessionState(v29, v28);
            v32 = gDefaultServerClasses[12 * i];
            v28 = *(_QWORD *)(UserSessionState + 19904);
            v29 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
            if ( *(_WORD *)v29 == *(_WORD *)(v28 + 2LL * ((unsigned __int8)v32 >> 3) + 868) )
            {
              if ( (int)v6 >= gDefaultServerClasses[12 * i + 6] )
                break;
              if ( (v32 & 0xF8) == 0xB0 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 788LL);
              v20 = 5;
              goto LABEL_55;
            }
          }
        }
      }
      v33 = *((_QWORD *)a1 + 5);
      v34 = *(unsigned int *)(v33 + 248);
      if ( (int)v6 + 4LL <= v34 )
      {
        v36 = *((_QWORD *)a1 + 35);
        v22 = *(_DWORD *)(v36 + (int)v6);
        *(_DWORD *)(v36 + (int)v6) = a3;
      }
      else
      {
        v35 = (unsigned int *)(*(_QWORD *)(v33 + 296) + (int)v6 - (int)v34);
        v22 = *v35;
        *v35 = a3;
      }
      goto LABEL_28;
    }
    goto LABEL_38;
  }
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == 16 )
    {
      v21 = *(_DWORD *)(*(_QWORD *)v17 + 248LL);
      if ( v21 || *(int *)(*(_QWORD *)v17 + 200LL) < 30 )
      {
        v22 = 0;
        if ( v21 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 709LL);
        if ( *(int *)(*(_QWORD *)v17 + 200LL) < 30 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 710LL);
      }
      else
      {
        v22 = v37[4];
        *((_QWORD *)v37 + 2) = v5;
      }
      goto LABEL_28;
    }
    if ( (unsigned int)v6 <= 0x1D )
    {
      v20 = 1415;
      goto LABEL_55;
    }
    goto LABEL_40;
  }
  v22 = *v37;
  *(_QWORD *)v37 = v5;
LABEL_28:
  if ( v8 )
    KeDetachProcess();
  return v22;
}
