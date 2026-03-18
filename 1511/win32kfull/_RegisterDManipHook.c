/*
 * XREFs of _RegisterDManipHook @ 0x1C01013B4
 * Callers:
 *     NtUserRegisterDManipHook @ 0x1C0101340 (NtUserRegisterDManipHook.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     AddHmodDependency @ 0x1C00848A8 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00848C0 (GetHmodTableIndex.c)
 *     RemoveHmodDependency @ 0x1C00849F0 (RemoveHmodDependency.c)
 *     IsPrivileged @ 0x1C01017AC (IsPrivileged.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C011DDB4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterDManipHook(int *a1, int *a2, int *a3, int *a4)
{
  __int64 v8; // rcx
  int v9; // ecx
  const unsigned __int16 *v10; // r8
  unsigned __int64 v11; // rdx
  int *v12; // rax
  int v13; // ecx
  const unsigned __int16 *v14; // r8
  unsigned __int64 v15; // rdx
  int v16; // r9d
  const unsigned __int16 *v17; // r8
  unsigned __int64 v18; // rcx
  int *v19; // rax
  int v20; // ecx
  const unsigned __int16 *v21; // r8
  unsigned __int64 v22; // r9
  int HmodTableIndex; // eax
  int v24; // eax
  __int64 v25; // rcx
  int v27; // ecx

  if ( gihmodDManipHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || *(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 740) != luidSystem[0]
    || *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)luidSystem) + 744) != luidSystem[1]
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v27 = 5;
LABEL_43:
    UserSetLastError(v27);
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
  RtlStringCchCopyW(&gszFunctionDManipHook, 0x104uLL, v10);
  v12 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v12 = (int *)W32UserProbeAddress;
  v13 = *v12;
  v14 = (const unsigned __int16 *)*((_QWORD *)v12 + 1);
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (unsigned __int64)v14 + (unsigned __int16)v13 + 2;
  if ( v15 >= W32UserProbeAddress
    || (unsigned __int16)v13 > (unsigned __int16)HIWORD(*v12)
    || v15 <= (unsigned __int64)v14 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW(&gszModuleDManipHook, 0x104uLL, v14);
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    a4 = (int *)W32UserProbeAddress;
  v16 = *a4;
  v17 = (const unsigned __int16 *)*((_QWORD *)a4 + 1);
  if ( ((unsigned __int8)v17 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v18 = (unsigned __int64)v17 + (unsigned __int16)v16 + 2;
  if ( v18 >= W32UserProbeAddress
    || (unsigned __int16)v16 > (unsigned __int16)HIWORD(*a4)
    || v18 <= (unsigned __int64)v17 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW(&gszFunctionDManipHookWOW, 0x104uLL, v17);
  v19 = a3;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    v19 = (int *)W32UserProbeAddress;
  v20 = *v19;
  v21 = (const unsigned __int16 *)*((_QWORD *)v19 + 1);
  if ( ((unsigned __int8)v21 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v22 = (unsigned __int64)v21 + (unsigned __int16)v20 + 2;
  if ( v22 >= W32UserProbeAddress
    || (unsigned __int16)v20 > (unsigned __int16)HIWORD(*v19)
    || v22 <= (unsigned __int64)v21 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW(&gszModuleDManipHookWOW, 0x104uLL, v21);
  HmodTableIndex = GetHmodTableIndex(a1);
  gihmodDManipHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v27 = 126;
    goto LABEL_43;
  }
  AddHmodDependency(HmodTableIndex);
  v24 = GetHmodTableIndex(a3);
  gihmodDManipHookWOW = v24;
  if ( v24 != -1 )
  {
    AddHmodDependency(v24);
    gppiDManipHook = PsGetCurrentProcessWin32Process(v25);
    *gpsi |= 0x10u;
    return 1LL;
  }
  UserSetLastError(126);
  RemoveHmodDependency(gihmodDManipHook);
  gihmodDManipHook = -1;
  return 0LL;
}
