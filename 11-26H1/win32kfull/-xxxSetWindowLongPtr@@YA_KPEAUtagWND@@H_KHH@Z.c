/*
 * XREFs of ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x140085220
 * Callers:
 *     xxxCsDdeInitialize @ 0x140083F78 (xxxCsDdeInitialize.c)
 *     NtUserSetWindowLongPtr @ 0x140085090 (NtUserSetWindowLongPtr.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     ?FCallerOk@@YAHPEAUtagWND@@@Z @ 0x140086128 (-FCallerOk@@YAHPEAUtagWND@@@Z.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1401EF1D0 (safe_cast_wf_to_PDIALOG.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

unsigned __int64 __fastcall xxxSetWindowLongPtr(struct tagWND *a1, int a2, __int64 a3, unsigned int a4, int a5)
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
  unsigned __int64 v22; // rdi
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int i; // edi
  __int64 UserSessionState; // rax
  int v37; // r9d
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 *v40; // rax
  __int64 v41; // rcx
  __int64 *v42; // [rsp+28h] [rbp-80h]

  v5 = a3;
  v6 = a2;
  v8 = 0;
  if ( !(unsigned int)FCallerOk(a1) )
    goto LABEL_70;
  if ( (int)v6 >= 0 )
  {
    v9 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 248LL);
    if ( v6 + 8 > v9 )
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
LABEL_70:
        UserSetLastError(5);
        return 0LL;
      }
    }
  }
LABEL_14:
  v17 = (char *)a1 + 40;
  if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0 )
    goto LABEL_59;
  v42 = (__int64 *)safe_cast_wf_to_PDIALOG(a1);
  if ( !v42 )
  {
    if ( (int)v6 < 0 )
    {
LABEL_60:
      v22 = xxxSetWindowData(a1, v6, v5, a4);
      goto LABEL_28;
    }
    v24 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 19904);
    v25 = *(unsigned __int16 *)(*(_QWORD *)v17 + 42LL);
    if ( (int)v6 >= *(unsigned __int16 *)(v24 + 2LL * (((unsigned int)v25 & 0xFFFF2FFF) - 666) + 328)
                  - *(unsigned __int16 *)(W32GetUserSessionState(v25, v26) + 71164) )
    {
      v5 = a3;
      goto LABEL_59;
    }
    v27 = *(_QWORD *)v17;
    v28 = *(_WORD *)(*(_QWORD *)v17 + 42LL) & 0x2FFF;
    if ( v28 > 0x2A6 )
    {
      v30 = v28 - 679;
      if ( !v30 )
      {
        if ( (_DWORD)v6 != 8 )
          goto LABEL_57;
        v32 = **(_QWORD **)(v27 + 296);
LABEL_46:
        if ( v32 && *(char *)(*(_QWORD *)v17 + 19LL) >= 0 )
          goto LABEL_57;
        goto LABEL_48;
      }
    }
    else if ( v28 == 678 || (v29 = v28 - 673) == 0 || (v30 = v29 - 1) == 0 )
    {
LABEL_42:
      if ( (_DWORD)v6 )
        goto LABEL_57;
      if ( *(_DWORD *)(v27 + 248) )
        v32 = **((_QWORD **)a1 + 35);
      else
        v32 = **(_QWORD **)(v27 + 296);
      goto LABEL_46;
    }
    v31 = v30 - 1;
    if ( v31 && v31 - 1 > 1 )
      goto LABEL_57;
    goto LABEL_42;
  }
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 == 16 )
    {
      v21 = *(_DWORD *)(*(_QWORD *)v17 + 248LL);
      if ( v21 || *(int *)(*(_QWORD *)v17 + 200LL) < 30 )
      {
        v22 = 0LL;
        if ( v21 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 509LL);
        if ( *(int *)(*(_QWORD *)v17 + 200LL) < 30 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 510LL);
      }
      else
      {
        v22 = v42[2];
        v42[2] = v5;
      }
      goto LABEL_28;
    }
    if ( (unsigned int)v6 <= 0x1D )
    {
      v20 = 1415;
      goto LABEL_65;
    }
LABEL_59:
    if ( (int)v6 < 0 )
      goto LABEL_60;
LABEL_48:
    v33 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v17 + 200LL) + *(_DWORD *)(*(_QWORD *)v17 + 248LL));
    if ( (unsigned __int64)(unsigned int)v6 + 8 <= v33 )
    {
      if ( a5 )
      {
        v34 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
        if ( _bittest16((const signed __int16 *)(v34 + 6), 8u) )
        {
          for ( i = 0; i < 5; ++i )
          {
            UserSessionState = W32GetUserSessionState(v34, v33);
            v37 = gDefaultServerClasses[12 * i];
            v33 = *(_QWORD *)(UserSessionState + 19904);
            v34 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
            if ( *(_WORD *)v34 == *(_WORD *)(v33 + 2LL * ((unsigned __int8)v37 >> 3) + 868) )
            {
              if ( (int)v6 >= gDefaultServerClasses[12 * i + 6] )
                break;
              if ( (v37 & 0xF8) == 0xB0 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 613LL);
              v20 = 5;
              goto LABEL_65;
            }
          }
        }
      }
      v38 = *((_QWORD *)a1 + 5);
      v39 = *(unsigned int *)(v38 + 248);
      if ( (int)v6 + 8LL <= v39 )
      {
        v41 = *((_QWORD *)a1 + 35);
        v22 = *(_QWORD *)(v41 + (int)v6);
        *(_QWORD *)(v41 + (int)v6) = a3;
      }
      else
      {
        v40 = (unsigned __int64 *)(*(_QWORD *)(v38 + 296) + (int)v6 - (int)v39);
        v22 = *v40;
        *v40 = a3;
      }
      goto LABEL_28;
    }
LABEL_57:
    v20 = 1413;
LABEL_65:
    UserSetLastError(v20);
    if ( v8 )
      KeDetachProcess();
    return 0LL;
  }
  v22 = *v42;
  *v42 = v5;
LABEL_28:
  if ( v8 )
    KeDetachProcess();
  return v22;
}
