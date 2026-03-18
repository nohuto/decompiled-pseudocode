/*
 * XREFs of _RegisterUserApiHook @ 0x1C0111014
 * Callers:
 *     NtUserRegisterUserApiHook @ 0x1C0110FA0 (NtUserRegisterUserApiHook.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A0A68 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     AddHmodDependency @ 0x1C00A742C (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00A7444 (GetHmodTableIndex.c)
 *     RemoveHmodDependency @ 0x1C00A758C (RemoveHmodDependency.c)
 *     IsPrivileged @ 0x1C0111B6C (IsPrivileged.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterUserApiHook(int *a1, int *a2, int *a3, int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ecx
  char *v13; // r8
  unsigned __int64 v14; // rdx
  int v15; // ecx
  char *v16; // r8
  unsigned __int64 v17; // r9
  int HmodTableIndex; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx

  if ( gihmodUserApiHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || (v11 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v9, v8) + 732), (_DWORD)v11 != luidSystem[0])
    || *(_DWORD *)(PsGetCurrentProcessWin32Process(v11, v10) + 736) != luidSystem[1]
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v19 = 5LL;
    goto LABEL_30;
  }
  if ( (unsigned __int64)a2 >= W32UserProbeAddress )
    a2 = (int *)W32UserProbeAddress;
  v12 = *a2;
  v13 = (char *)*((_QWORD *)a2 + 1);
  if ( ((unsigned __int8)v13 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (unsigned __int64)&v13[(unsigned __int16)v12 + 2];
  if ( v14 >= W32UserProbeAddress
    || (unsigned __int16)v12 > (unsigned __int16)HIWORD(*a2)
    || (v12 & 1) != 0
    || v14 <= (unsigned __int64)v13 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW((char *)gszFunctionUserApiHook, 260LL, v13);
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    a4 = (int *)W32UserProbeAddress;
  v15 = *a4;
  v16 = (char *)*((_QWORD *)a4 + 1);
  if ( ((unsigned __int8)v16 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = (unsigned __int64)&v16[(unsigned __int16)v15 + 2];
  if ( v17 >= W32UserProbeAddress
    || (unsigned __int16)v15 > (unsigned __int16)HIWORD(*a4)
    || (v15 & 1) != 0
    || v17 <= (unsigned __int64)v16 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW((char *)gszFunctionUserApiHookWOW, 260LL, v16);
  HmodTableIndex = GetHmodTableIndex(a1);
  gihmodUserApiHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v19 = 126LL;
LABEL_30:
    UserSetLastError(v19);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  v20 = GetHmodTableIndex(a3);
  gihmodUserApiHookWOW = v20;
  if ( v20 != -1 )
  {
    AddHmodDependency(v20);
    gppiUserApiHook = PsGetCurrentProcessWin32Process(v22, v21);
    *gpsi |= 0x10u;
    return 1LL;
  }
  UserSetLastError(126LL);
  RemoveHmodDependency(gihmodUserApiHook);
  gihmodUserApiHook = -1;
  return 0LL;
}
