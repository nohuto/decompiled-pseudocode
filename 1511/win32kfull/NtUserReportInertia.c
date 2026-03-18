/*
 * XREFs of NtUserReportInertia @ 0x1C000CB80
 * Callers:
 *     <none>
 * Callees:
 *     InvalidateInertiaInfo @ 0x1C000CC30 (InvalidateInertiaInfo.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0053E70 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     AddInertiaInfo @ 0x1C023981C (AddInertiaInfo.c)
 *     ValidateInertiaInfo @ 0x1C0239C14 (ValidateInertiaInfo.c)
 */

__int64 __fastcall NtUserReportInertia(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rcx
  int v16; // r15d
  __int64 v17; // rcx
  __int64 v18; // [rsp+48h] [rbp-100h] BYREF
  int v19; // [rsp+50h] [rbp-F8h]
  __int64 v20; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-E0h]
  int v22; // [rsp+70h] [rbp-D8h]
  __int128 v23; // [rsp+80h] [rbp-C8h]
  __int128 v24; // [rsp+90h] [rbp-B8h]
  __int64 v25; // [rsp+A0h] [rbp-A8h]
  _OWORD v26[2]; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+C8h] [rbp-80h]
  _BYTE v28[64]; // [rsp+D0h] [rbp-78h] BYREF

  EnterCrit(0LL, 1LL);
  v9 = 0;
  if ( a3 )
  {
    v10 = ValidateHwnd(a3);
    if ( !v10 )
      goto LABEL_7;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !a1 )
    goto LABEL_10;
  if ( a2 )
  {
    if ( a4 )
    {
      if ( !v10 || *(char *)(v10 + 44) < 0 || *(char *)(v10 + 43) < 0 )
      {
        v15 = 1400LL;
        goto LABEL_12;
      }
      if ( (!(unsigned int)IsCompositionInputWindow((struct tagWND *)v10) || a5)
        && (gptiCurrent == *(_QWORD *)(v10 + 16) || gptiCurrent == *(_QWORD *)(v10 + 312)) )
      {
        if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
           - *(_DWORD *)(gptiCurrent + 1120LL) > 0x7D0 )
        {
          v15 = 5LL;
          goto LABEL_12;
        }
        v16 = (*(_DWORD *)(gptiCurrent + 1072LL) >> 17) & 1;
        if ( a4 + 12 < a4 || a4 + 12 > W32UserProbeAddress )
          a4 = W32UserProbeAddress;
        v21 = *(_QWORD *)a4;
        v22 = *(_DWORD *)(a4 + 8);
        v18 = v21;
        v19 = v22;
        if ( a5 )
        {
          v17 = a5;
          if ( a5 + 40 < a5 || a5 + 40 > W32UserProbeAddress )
            v17 = W32UserProbeAddress;
          v23 = *(_OWORD *)v17;
          v24 = *(_OWORD *)(v17 + 16);
          v25 = *(_QWORD *)(v17 + 32);
          v26[0] = v23;
          v26[1] = v24;
          v27 = v25;
        }
        if ( (unsigned int)ValidateInertiaInfo(&v18, (unsigned __int64)v26 & -(__int64)(a5 != 0), v28, &v20) )
        {
          v11 = AddInertiaInfo(
                  gptiCurrent,
                  a1,
                  v10,
                  v16,
                  (__int64)&v18,
                  v20,
                  (unsigned __int64)v26 & -(__int64)(a5 != 0),
                  (unsigned __int64)v28 & -(__int64)(a5 != 0));
          goto LABEL_6;
        }
      }
    }
LABEL_10:
    v15 = 87LL;
LABEL_12:
    UserSetLastError(v15);
    goto LABEL_7;
  }
  v11 = InvalidateInertiaInfo(gptiCurrent, a1);
LABEL_6:
  v9 = v11;
LABEL_7:
  UserSessionSwitchLeaveCrit(v13, v12);
  return v9;
}
