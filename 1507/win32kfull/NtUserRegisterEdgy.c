/*
 * XREFs of NtUserRegisterEdgy @ 0x1C00F7D50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IsShellProcess @ 0x1C0080B7C (IsShellProcess.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     ?_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z @ 0x1C00F7F34 (-_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z.c)
 *     EdgyUnregisterListener @ 0x1C0130454 (EdgyUnregisterListener.c)
 */

__int64 __fastcall NtUserRegisterEdgy(unsigned int a1, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int128 *v10; // rcx
  int updated; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  int v16; // ecx
  __int64 v17; // [rsp+20h] [rbp-78h]
  __int128 v18; // [rsp+30h] [rbp-68h] BYREF
  __int128 v19; // [rsp+40h] [rbp-58h]
  __int128 v20; // [rsp+60h] [rbp-38h]
  __int128 v21; // [rsp+70h] [rbp-28h]

  v6 = 0;
  LODWORD(v17) = 0;
  EnterCrit(1LL);
  if ( !a1 )
  {
    v16 = 87;
LABEL_29:
    UserSetLastError(v16);
    goto LABEL_26;
  }
  if ( !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 384LL)) )
  {
    v16 = 5;
    goto LABEL_29;
  }
  v9 = 0;
  HIDWORD(v17) = 0;
  while ( v9 < a1 )
  {
    v10 = (__int128 *)(a2 + 32LL * v9);
    if ( v10 + 2 < v10 || (unsigned __int64)(v10 + 2) > W32UserProbeAddress )
      v10 = (__int128 *)W32UserProbeAddress;
    v20 = *v10;
    v21 = v10[1];
    v18 = v20;
    v19 = (unsigned __int64)v21;
    if ( a3 )
    {
      if ( !HMValidateHandle(v18, 19)
        || *((_QWORD *)&v18 + 1)
        && ((v12 = ValidateHwnd(*((_QWORD *)&v18 + 1)), (v14 = v12) == 0)
         || *(char *)(v12 + 43) < 0
         || (LOBYTE(v13) = *(_BYTE *)(v12 + 44), (v13 & 0x80u) != 0LL)
         || *(_QWORD *)(*(_QWORD *)(v12 + 16) + 384LL) != PsGetCurrentProcessWin32Process(v13)
         || *(_DWORD *)(v14 + 320)) )
      {
        UserSetLastError(87);
        goto LABEL_26;
      }
      updated = Edgy::_AddOrUpdateListener(
                  *(_QWORD *)(gptiCurrent + 416LL),
                  v18,
                  (unsigned int)v19,
                  *((_QWORD *)&v18 + 1),
                  v17);
    }
    else
    {
      updated = EdgyUnregisterListener(&v18);
    }
    if ( a3 && !updated )
    {
      UserSetLastError(8);
      goto LABEL_26;
    }
    HIDWORD(v17) = ++v9;
  }
  v6 = 1;
LABEL_26:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v6;
}
