/*
 * XREFs of _RegisterUserApiHook @ 0x1C0153660
 * Callers:
 *     NtUserRegisterUserApiHook @ 0x1C01535F0 (NtUserRegisterUserApiHook.c)
 * Callees:
 *     AddHmodDependency @ 0x1C004AB4C (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C004AB64 (GetHmodTableIndex.c)
 *     RemoveHmodDependency @ 0x1C004ACAC (RemoveHmodDependency.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005E4A8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IsPrivileged @ 0x1C00F983C (IsPrivileged.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterUserApiHook(int *a1, int *a2, int *a3, int *a4)
{
  __int64 v8; // rcx
  int v9; // ecx
  char *v10; // r8
  unsigned __int64 v11; // rdx
  int v12; // ecx
  char *v13; // r8
  unsigned __int64 v14; // r9
  int HmodTableIndex; // eax
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rcx

  if ( gihmodUserApiHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || *(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 740) != luidSystem[0]
    || *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)luidSystem) + 744) != luidSystem[1]
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v16 = 5;
    goto LABEL_30;
  }
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (int *)W32UserProbeAddress;
  v9 = *a2;
  v10 = (char *)*((_QWORD *)a2 + 1);
  if ( ((unsigned __int8)v10 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = (unsigned __int64)&v10[(unsigned __int16)v9 + 2];
  if ( v11 >= W32UserProbeAddress
    || (unsigned __int16)v9 > (unsigned __int16)HIWORD(*a2)
    || (v9 & 1) != 0
    || v11 <= (unsigned __int64)v10 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW((char *)gszFunctionUserApiHook, 260LL, v10);
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    a4 = (int *)W32UserProbeAddress;
  v12 = *a4;
  v13 = (char *)*((_QWORD *)a4 + 1);
  if ( ((unsigned __int8)v13 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (unsigned __int64)&v13[(unsigned __int16)v12 + 2];
  if ( v14 >= W32UserProbeAddress
    || (unsigned __int16)v12 > (unsigned __int16)HIWORD(*a4)
    || (v12 & 1) != 0
    || v14 <= (unsigned __int64)v13 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW((char *)gszFunctionUserApiHookWOW, 260LL, v13);
  HmodTableIndex = GetHmodTableIndex(a1);
  gihmodUserApiHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v16 = 126;
LABEL_30:
    UserSetLastError(v16);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  v17 = GetHmodTableIndex(a3);
  gihmodUserApiHookWOW = v17;
  if ( v17 != -1 )
  {
    AddHmodDependency(v17);
    gppiUserApiHook = PsGetCurrentProcessWin32Process(v18);
    *gpsi |= 0x10u;
    return 1LL;
  }
  UserSetLastError(126);
  RemoveHmodDependency(gihmodUserApiHook);
  gihmodUserApiHook = -1;
  return 0LL;
}
