/*
 * XREFs of _RegisterDManipHook @ 0x1C0152690
 * Callers:
 *     NtUserRegisterDManipHook @ 0x1C0152620 (NtUserRegisterDManipHook.c)
 * Callees:
 *     AddHmodDependency @ 0x1C004AB4C (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C004AB64 (GetHmodTableIndex.c)
 *     RemoveHmodDependency @ 0x1C004ACAC (RemoveHmodDependency.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C005E4A8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     IsPrivileged @ 0x1C00F983C (IsPrivileged.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterDManipHook(int *a1, int *a2, int *a3, int *a4)
{
  __int64 v8; // rcx
  int v9; // ecx
  char *v10; // r8
  unsigned __int64 v11; // rdx
  int *v12; // rax
  int v13; // ecx
  char *v14; // r8
  unsigned __int64 v15; // rdx
  int v16; // ecx
  char *v17; // r8
  unsigned __int64 v18; // rdx
  int *v19; // rax
  int v20; // ecx
  char *v21; // r8
  unsigned __int64 v22; // r9
  int HmodTableIndex; // eax
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rcx

  if ( gihmodDManipHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || *(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 740) != luidSystem[0]
    || *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)luidSystem) + 744) != luidSystem[1]
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v24 = 5;
    goto LABEL_48;
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
  RtlStringCchCopyW((char *)gszFunctionDManipHook, 260LL, v10);
  v12 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v12 = (int *)W32UserProbeAddress;
  v13 = *v12;
  v14 = (char *)*((_QWORD *)v12 + 1);
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (unsigned __int64)&v14[(unsigned __int16)v13 + 2];
  if ( v15 >= W32UserProbeAddress
    || (unsigned __int16)v13 > (unsigned __int16)HIWORD(*v12)
    || (v13 & 1) != 0
    || v15 <= (unsigned __int64)v14 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW((char *)gszModuleDManipHook, 260LL, v14);
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    a4 = (int *)W32UserProbeAddress;
  v16 = *a4;
  v17 = (char *)*((_QWORD *)a4 + 1);
  if ( ((unsigned __int8)v17 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v18 = (unsigned __int64)&v17[(unsigned __int16)v16 + 2];
  if ( v18 >= W32UserProbeAddress
    || (unsigned __int16)v16 > (unsigned __int16)HIWORD(*a4)
    || (v16 & 1) != 0
    || v18 <= (unsigned __int64)v17 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW((char *)gszFunctionDManipHookWOW, 260LL, v17);
  v19 = a3;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    v19 = (int *)W32UserProbeAddress;
  v20 = *v19;
  v21 = (char *)*((_QWORD *)v19 + 1);
  if ( ((unsigned __int8)v21 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v22 = (unsigned __int64)&v21[(unsigned __int16)v20 + 2];
  if ( v22 >= W32UserProbeAddress
    || (unsigned __int16)v20 > (unsigned __int16)HIWORD(*v19)
    || (v20 & 1) != 0
    || v22 <= (unsigned __int64)v21 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW((char *)gszModuleDManipHookWOW, 260LL, v21);
  HmodTableIndex = GetHmodTableIndex(a1);
  gihmodDManipHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v24 = 126;
LABEL_48:
    UserSetLastError(v24);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  v25 = GetHmodTableIndex(a3);
  gihmodDManipHookWOW = v25;
  if ( v25 != -1 )
  {
    AddHmodDependency(v25);
    gppiDManipHook = PsGetCurrentProcessWin32Process(v26);
    *gpsi |= 0x10u;
    return 1LL;
  }
  UserSetLastError(126);
  RemoveHmodDependency(gihmodDManipHook);
  gihmodDManipHook = -1;
  return 0LL;
}
