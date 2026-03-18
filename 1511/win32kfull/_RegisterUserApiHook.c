/*
 * XREFs of _RegisterUserApiHook @ 0x1C0101144
 * Callers:
 *     NtUserRegisterUserApiHook @ 0x1C01010D0 (NtUserRegisterUserApiHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     AddHmodDependency @ 0x1C00848A8 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00848C0 (GetHmodTableIndex.c)
 *     RemoveHmodDependency @ 0x1C00849F0 (RemoveHmodDependency.c)
 *     IsPrivileged @ 0x1C01017AC (IsPrivileged.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C011DDB4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterUserApiHook(int *a1, int *a2, int *a3, int *a4)
{
  __int64 v8; // rcx
  int v9; // ecx
  const unsigned __int16 *v10; // r8
  unsigned __int64 v11; // rdx
  int v12; // edx
  const unsigned __int16 *v13; // r8
  unsigned __int64 v14; // rcx
  int HmodTableIndex; // eax
  int v16; // eax
  __int64 v17; // rcx
  int v19; // ecx

  if ( gihmodUserApiHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || *(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 740) != luidSystem[0]
    || *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)luidSystem) + 744) != luidSystem[1]
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v19 = 5;
LABEL_27:
    UserSetLastError(v19);
    return 0LL;
  }
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (int *)W32UserProbeAddress;
  v9 = *a2;
  v10 = (const unsigned __int16 *)*((_QWORD *)a2 + 1);
  if ( ((unsigned __int8)v10 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v11 = (unsigned __int64)v10 + (unsigned __int16)v9 + 2;
  if ( v11 >= W32UserProbeAddress
    || (unsigned __int16)v9 > (unsigned __int16)HIWORD(*a2)
    || v11 <= (unsigned __int64)v10 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW(gszFunctionUserApiHook, 0x104uLL, v10);
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    a4 = (int *)W32UserProbeAddress;
  v12 = *a4;
  v13 = (const unsigned __int16 *)*((_QWORD *)a4 + 1);
  if ( ((unsigned __int8)v13 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (unsigned __int64)v13 + (unsigned __int16)v12 + 2;
  if ( v14 >= W32UserProbeAddress
    || (unsigned __int16)v12 > (unsigned __int16)HIWORD(*a4)
    || v14 <= (unsigned __int64)v13 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW(&gszFunctionUserApiHookWOW, 0x104uLL, v13);
  HmodTableIndex = GetHmodTableIndex(a1);
  gihmodUserApiHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v19 = 126;
    goto LABEL_27;
  }
  AddHmodDependency(HmodTableIndex);
  v16 = GetHmodTableIndex(a3);
  gihmodUserApiHookWOW = v16;
  if ( v16 != -1 )
  {
    AddHmodDependency(v16);
    gppiUserApiHook = PsGetCurrentProcessWin32Process(v17);
    *gpsi |= 0x10u;
    return 1LL;
  }
  UserSetLastError(126);
  RemoveHmodDependency(gihmodUserApiHook);
  gihmodUserApiHook = -1;
  return 0LL;
}
