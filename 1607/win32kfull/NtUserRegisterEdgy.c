/*
 * XREFs of NtUserRegisterEdgy @ 0x1C01214A0
 * Callers:
 *     <none>
 * Callees:
 *     EdgyUnregisterListener @ 0x1C000D548 (EdgyUnregisterListener.c)
 *     HMValidateHandle @ 0x1C003BC68 (HMValidateHandle.c)
 *     IsShellProcess @ 0x1C009B064 (IsShellProcess.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z @ 0x1C0121688 (-_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall NtUserRegisterEdgy(unsigned int a1, __int64 a2, int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  __int128 *v12; // rcx
  unsigned __int64 v13; // rdx
  int updated; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-78h]
  __int128 v22; // [rsp+30h] [rbp-68h] BYREF
  __int128 v23; // [rsp+40h] [rbp-58h]
  __int128 v24; // [rsp+60h] [rbp-38h]
  __int128 v25; // [rsp+70h] [rbp-28h]

  v6 = 0;
  LODWORD(v21) = 0;
  EnterCrit(0LL, 1LL);
  if ( !a1 )
  {
    v20 = 87LL;
LABEL_29:
    UserSetLastError(v20);
    goto LABEL_26;
  }
  if ( !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 376LL)) )
  {
    v20 = 5LL;
    goto LABEL_29;
  }
  v11 = 0;
  HIDWORD(v21) = 0;
  while ( v11 < a1 )
  {
    v12 = (__int128 *)(a2 + 32LL * v11);
    v13 = (unsigned __int64)(v12 + 2);
    if ( v12 + 2 < v12 || v13 > W32UserProbeAddress )
      v12 = (__int128 *)W32UserProbeAddress;
    v24 = *v12;
    v25 = v12[1];
    v22 = v24;
    v23 = (unsigned __int64)v25;
    if ( a3 )
    {
      LOBYTE(v13) = 19;
      if ( !HMValidateHandle(v22, v13, v9, v10)
        || *((_QWORD *)&v22 + 1)
        && ((v15 = ValidateHwnd(*((_QWORD *)&v22 + 1)), (v18 = v15) == 0)
         || *(char *)(v15 + 43) < 0
         || (LOBYTE(v17) = *(_BYTE *)(v15 + 44), (v17 & 0x80u) != 0LL)
         || *(_QWORD *)(*(_QWORD *)(v15 + 16) + 376LL) != PsGetCurrentProcessWin32Process(v17, v16)
         || *(_DWORD *)(v18 + 320)) )
      {
        UserSetLastError(87LL);
        goto LABEL_26;
      }
      updated = Edgy::_AddOrUpdateListener(
                  *(_QWORD *)(gptiCurrent + 408LL),
                  v22,
                  (unsigned int)v23,
                  *((_QWORD *)&v22 + 1),
                  v21);
    }
    else
    {
      updated = EdgyUnregisterListener((__int64)&v22);
    }
    if ( a3 && !updated )
    {
      UserSetLastError(8LL);
      goto LABEL_26;
    }
    HIDWORD(v21) = ++v11;
  }
  v6 = 1;
LABEL_26:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v6;
}
