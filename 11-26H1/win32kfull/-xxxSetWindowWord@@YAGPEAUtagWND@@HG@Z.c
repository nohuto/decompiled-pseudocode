/*
 * XREFs of ?xxxSetWindowWord@@YAGPEAUtagWND@@HG@Z @ 0x14028E3E4
 * Callers:
 *     NtUserSetWindowWord @ 0x140231E80 (NtUserSetWindowWord.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?FCallerOk@@YAHPEAUtagWND@@@Z @ 0x140086128 (-FCallerOk@@YAHPEAUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

PETHREAD __fastcall xxxSetWindowWord(PETHREAD **a1, int a2, unsigned __int16 a3)
{
  int v3; // r12d
  unsigned __int64 v4; // r15
  char v6; // bl
  PETHREAD *v7; // r8
  __int64 v8; // rdx
  int v9; // ecx
  unsigned __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  PETHREAD *v12; // rcx
  PETHREAD v13; // rdi
  __int64 v14; // rax
  const struct tagUIPI_INFO *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  PETHREAD result; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  PETHREAD *v21; // rcx
  PETHREAD v22; // rsi
  __int64 v23; // rax
  const struct tagUIPI_INFO *v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rdx
  PETHREAD *v31; // rdx
  bool v32; // sf
  int v33; // ecx
  unsigned __int16 ULongFromUser; // di
  unsigned __int64 v35; // rdx
  PETHREAD v36; // rcx
  unsigned int i; // edi
  __int64 UserSessionState; // rax
  int v39; // r9d
  PETHREAD *v40; // rcx
  unsigned __int64 v41; // r8
  unsigned __int16 *v42; // rax
  PETHREAD *v43; // rcx
  __int64 v44; // [rsp+28h] [rbp-40h]

  v3 = a3;
  v4 = a2;
  v6 = 0;
  if ( !(unsigned int)FCallerOk(a1) )
    goto LABEL_70;
  v7 = a1[5];
  v8 = v4;
  if ( (*((_BYTE *)v7 + 18) & 1) != 0 )
  {
    if ( v4 >= 8 && (v4 & 0x80000000) != 0LL || v4 > 0x16 && (int)v4 < 30 )
    {
      v9 = 1413;
LABEL_71:
      UserSetLastError(v9);
      return 0LL;
    }
    if ( (*((_WORD *)v7 + 21) & 0x2FFF) == 0x2A4 )
    {
      v10 = *((unsigned int *)v7 + 62);
      if ( v4 + 2 <= v10 )
        goto LABEL_52;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v12 = a1[2];
      v13 = v12[57];
      if ( v13 == (PETHREAD)CurrentProcessWin32Process )
        goto LABEL_52;
      v14 = PsGetCurrentProcessWin32Process(v12);
      if ( v14 )
        v14 &= -(__int64)(*(_QWORD *)v14 != 0LL);
      if ( UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v14 + 864), (PETHREAD)((char *)v13 + 864), v15) )
        goto LABEL_19;
      v17 = PsGetCurrentProcessWin32Process(v16);
      if ( v17 )
        v17 &= -(__int64)(*(_QWORD *)v17 != 0LL);
      if ( *(int *)(v17 + 12) < 0 )
      {
LABEL_19:
        KeAttachProcess(*(PRKPROCESS *)a1[2][57]);
        v6 = 1;
LABEL_52:
        v32 = (v4 & 0x80000000) != 0LL;
LABEL_53:
        if ( !v32 )
        {
          v35 = (unsigned int)(*((_DWORD *)a1[5] + 50) + *((_DWORD *)a1[5] + 62));
          if ( (unsigned __int64)(unsigned int)v4 + 2 <= v35 )
          {
            v36 = a1[17][1];
            if ( _bittest16((const signed __int16 *)v36 + 3, 8u) )
            {
              for ( i = 0; i < 5; ++i )
              {
                UserSessionState = W32GetUserSessionState(v36, v35);
                v39 = gDefaultServerClasses[12 * i];
                v35 = *(_QWORD *)(UserSessionState + 19904);
                v36 = a1[17][1];
                if ( *(_WORD *)v36 == *(_WORD *)(v35 + 2LL * ((unsigned __int8)v39 >> 3) + 868) )
                {
                  if ( (int)v4 >= gDefaultServerClasses[12 * i + 6] )
                    break;
                  if ( (v39 & 0xF8) == 0xB0 )
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 406);
                  v33 = 5;
                  goto LABEL_43;
                }
              }
            }
            v40 = a1[5];
            v41 = *((unsigned int *)v40 + 62);
            if ( v4 + 2 <= v41 )
            {
              v43 = a1[35];
              ULongFromUser = *(_WORD *)((char *)v43 + v4);
              *(_WORD *)((char *)v43 + v4) = v3;
            }
            else
            {
              v42 = (unsigned __int16 *)((char *)v40[37] + (int)v4 - (int)v41);
              ULongFromUser = *v42;
              *v42 = v3;
            }
            goto LABEL_67;
          }
        }
LABEL_42:
        v33 = 1413;
LABEL_43:
        UserSetLastError(v33);
        if ( v6 )
          KeDetachProcess();
        return 0LL;
      }
LABEL_70:
      v9 = 5;
      goto LABEL_71;
    }
  }
  if ( (_DWORD)v4 == -21 )
  {
    result = v7[27];
    v7[27] = (PETHREAD)(v3 | (WORD1(result) << 16));
    return result;
  }
  if ( (_DWORD)v4 == -16 )
  {
    result = (PETHREAD)*((unsigned int *)v7 + 7);
    *((_DWORD *)v7 + 7) = v3 | *((_DWORD *)v7 + 7) & 0xFFFF0000;
    return result;
  }
  if ( (v4 & 0x80000000) == 0LL )
  {
    v19 = *((unsigned int *)v7 + 62);
    if ( v4 + 2 > v19 )
    {
      v20 = PsGetCurrentProcessWin32Process(v19);
      if ( v20 )
      {
        v8 = -(__int64)(*(_QWORD *)v20 != 0LL);
        v20 &= v8;
      }
      v21 = a1[2];
      v22 = v21[57];
      if ( v22 != (PETHREAD)v20 )
      {
        v23 = PsGetCurrentProcessWin32Process(v21);
        if ( v23 )
          v23 &= -(__int64)(*(_QWORD *)v23 != 0LL);
        if ( !UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)(v23 + 864), (PETHREAD)((char *)v22 + 864), v24) )
        {
          v26 = PsGetCurrentProcessWin32Process(v25);
          if ( v26 )
            v26 &= -(__int64)(*(_QWORD *)v26 != 0LL);
          if ( *(int *)(v26 + 12) >= 0 )
            goto LABEL_70;
        }
        KeAttachProcess(*(PRKPROCESS *)a1[2][57]);
        v6 = 1;
      }
    }
  }
  v27 = *((unsigned __int16 *)a1[5] + 21);
  if ( (v27 & 0xFFFF2FFF) == 0 )
    goto LABEL_52;
  if ( (v4 & 0x80000000) != 0LL )
    goto LABEL_42;
  v28 = *(_QWORD *)(W32GetUserSessionState(v27, v8) + 19904);
  v29 = *((unsigned __int16 *)a1[5] + 21);
  if ( (int)v4 >= *(unsigned __int16 *)(v28 + 2LL * (((unsigned int)v29 & 0xFFFF2FFF) - 666) + 328)
                - *(unsigned __int16 *)(W32GetUserSessionState(v29, v30) + 71164) )
    goto LABEL_52;
  v31 = a1[5];
  if ( (*((_WORD *)v31 + 21) & 0x2FFF) != 0x2A1 )
  {
    if ( (*((_WORD *)v31 + 21) & 0x2FFF) != 0x2A7 )
      goto LABEL_42;
    v32 = (v4 & 0x80000000) != 0LL;
    if ( (_DWORD)v4 )
      goto LABEL_42;
    goto LABEL_53;
  }
  if ( (_DWORD)v4 )
    goto LABEL_42;
  v44 = *(_QWORD *)v31[37];
  if ( v44 && v44 != -1 )
  {
    ULongFromUser = RtlReadULongFromUser(v44 + 8);
    *(_DWORD *)(v44 + 8) = v3;
LABEL_67:
    if ( v6 )
      KeDetachProcess();
    return (PETHREAD)ULongFromUser;
  }
  if ( v6 )
    KeDetachProcess();
  return 0LL;
}
