/*
 * XREFs of NtUserReportInertia @ 0x1C000DFA0
 * Callers:
 *     <none>
 * Callees:
 *     InvalidateInertiaInfo @ 0x1C000E084 (InvalidateInertiaInfo.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0078EA8 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     AddInertiaInfo @ 0x1C0229F34 (AddInertiaInfo.c)
 *     ValidateInertiaInfo @ 0x1C022A2D0 (ValidateInertiaInfo.c)
 */

__int64 __fastcall NtUserReportInertia(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  int v9; // ebx
  __int64 v10; // rdi
  int v11; // r12d
  int v12; // esi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 CurrentProcess; // rax
  int v19; // r13d
  int v20; // esi
  __int64 v21; // rcx
  __int64 v23; // [rsp+60h] [rbp-108h] BYREF
  int v24; // [rsp+68h] [rbp-100h]
  __int64 v25; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v26; // [rsp+80h] [rbp-E8h]
  int v27; // [rsp+88h] [rbp-E0h]
  __int128 v28; // [rsp+98h] [rbp-D0h]
  __int128 v29; // [rsp+A8h] [rbp-C0h]
  __int64 v30; // [rsp+B8h] [rbp-B0h]
  _OWORD v31[2]; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+E0h] [rbp-88h]
  _BYTE v33[64]; // [rsp+F0h] [rbp-78h] BYREF

  EnterCrit(0LL, 1LL);
  v9 = 0;
  if ( a3 )
  {
    v10 = ValidateHwnd(a3);
    if ( !v10 )
      goto LABEL_12;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !a1 || (a2 & 0xFFFFFFF8) != 0 )
    goto LABEL_13;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 2) != 0 )
      goto LABEL_13;
    v11 = 1;
  }
  else
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_13;
    v11 = 0;
  }
  v12 = a2 & 4;
  if ( v12 )
  {
    if ( a3 )
      goto LABEL_13;
    CurrentProcess = PsGetCurrentProcess();
    if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
    {
LABEL_20:
      v17 = 5LL;
      goto LABEL_44;
    }
  }
  if ( v11 )
  {
    if ( a4 )
    {
      if ( !v12 )
      {
        v19 = 0;
        if ( !v10 || *(char *)(v10 + 44) < 0 || *(char *)(v10 + 43) < 0 )
        {
          v17 = 1400LL;
          goto LABEL_44;
        }
        if ( (unsigned int)IsCompositionInputWindow((struct tagWND *)v10) && !a5
          || gptiCurrent != *(_QWORD *)(v10 + 16) && gptiCurrent != *(_QWORD *)(v10 + 312) )
        {
          goto LABEL_13;
        }
        if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
           - *(_DWORD *)(gptiCurrent + 1144LL) > 0x7D0 )
          goto LABEL_20;
        goto LABEL_34;
      }
      v19 = 1;
      if ( a5 )
      {
LABEL_34:
        v20 = (*(_DWORD *)(gptiCurrent + 1096LL) >> 17) & 1;
        if ( a4 + 12 < a4 || a4 + 12 > W32UserProbeAddress )
          a4 = W32UserProbeAddress;
        v26 = *(_QWORD *)a4;
        v27 = *(_DWORD *)(a4 + 8);
        v23 = v26;
        v24 = v27;
        if ( a5 )
        {
          v21 = a5;
          if ( a5 + 40 < a5 || a5 + 40 > W32UserProbeAddress )
            v21 = W32UserProbeAddress;
          v28 = *(_OWORD *)v21;
          v29 = *(_OWORD *)(v21 + 16);
          v30 = *(_QWORD *)(v21 + 32);
          v31[0] = v28;
          v31[1] = v29;
          v32 = v30;
        }
        if ( (unsigned int)ValidateInertiaInfo(&v23, (unsigned __int64)v31 & -(__int64)(a5 != 0), v33, &v25) )
        {
          v13 = AddInertiaInfo(
                  gptiCurrent,
                  a1,
                  v10,
                  v20,
                  v19,
                  (__int64)&v23,
                  v25,
                  (unsigned __int64)v31 & -(__int64)(a5 != 0),
                  (unsigned __int64)v33 & -(__int64)(a5 != 0));
          goto LABEL_11;
        }
      }
    }
LABEL_13:
    v17 = 87LL;
LABEL_44:
    UserSetLastError(v17);
    goto LABEL_12;
  }
  v13 = InvalidateInertiaInfo(gptiCurrent, a1);
LABEL_11:
  v9 = v13;
LABEL_12:
  UserSessionSwitchLeaveCrit(v15, v14);
  return v9;
}
