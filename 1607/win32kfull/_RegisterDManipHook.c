/*
 * XREFs of _RegisterDManipHook @ 0x1C0111294
 * Callers:
 *     NtUserRegisterDManipHook @ 0x1C0111220 (NtUserRegisterDManipHook.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00A0A68 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     AddHmodDependency @ 0x1C00A742C (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00A7444 (GetHmodTableIndex.c)
 *     RemoveHmodDependency @ 0x1C00A758C (RemoveHmodDependency.c)
 *     IsPrivileged @ 0x1C0111B6C (IsPrivileged.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterDManipHook(int *a1, int *a2, int *a3, int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ecx
  char *v13; // r8
  unsigned __int64 v14; // rdx
  int *v15; // rax
  int v16; // ecx
  char *v17; // r8
  unsigned __int64 v18; // rdx
  int v19; // ecx
  char *v20; // r8
  unsigned __int64 v21; // rdx
  int *v22; // rax
  int v23; // ecx
  char *v24; // r8
  unsigned __int64 v25; // r9
  int HmodTableIndex; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx

  if ( gihmodDManipHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || (v11 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v9, v8) + 732), (_DWORD)v11 != luidSystem[0])
    || *(_DWORD *)(PsGetCurrentProcessWin32Process(v11, v10) + 736) != luidSystem[1]
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v27 = 5LL;
    goto LABEL_48;
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
  RtlStringCchCopyW((char *)gszFunctionDManipHook, 260LL, v13);
  v15 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v15 = (int *)W32UserProbeAddress;
  v16 = *v15;
  v17 = (char *)*((_QWORD *)v15 + 1);
  if ( ((unsigned __int8)v17 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v18 = (unsigned __int64)&v17[(unsigned __int16)v16 + 2];
  if ( v18 >= W32UserProbeAddress
    || (unsigned __int16)v16 > (unsigned __int16)HIWORD(*v15)
    || (v16 & 1) != 0
    || v18 <= (unsigned __int64)v17 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW((char *)gszModuleDManipHook, 260LL, v17);
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    a4 = (int *)W32UserProbeAddress;
  v19 = *a4;
  v20 = (char *)*((_QWORD *)a4 + 1);
  if ( ((unsigned __int8)v20 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v21 = (unsigned __int64)&v20[(unsigned __int16)v19 + 2];
  if ( v21 >= W32UserProbeAddress
    || (unsigned __int16)v19 > (unsigned __int16)HIWORD(*a4)
    || (v19 & 1) != 0
    || v21 <= (unsigned __int64)v20 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW((char *)gszFunctionDManipHookWOW, 260LL, v20);
  v22 = a3;
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    v22 = (int *)W32UserProbeAddress;
  v23 = *v22;
  v24 = (char *)*((_QWORD *)v22 + 1);
  if ( ((unsigned __int8)v24 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v25 = (unsigned __int64)&v24[(unsigned __int16)v23 + 2];
  if ( v25 >= W32UserProbeAddress
    || (unsigned __int16)v23 > (unsigned __int16)HIWORD(*v22)
    || (v23 & 1) != 0
    || v25 <= (unsigned __int64)v24 )
  {
    *W32UserProbeAddress = 0;
  }
  RtlStringCchCopyW((char *)gszModuleDManipHookWOW, 260LL, v24);
  HmodTableIndex = GetHmodTableIndex(a1);
  gihmodDManipHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v27 = 126LL;
LABEL_48:
    UserSetLastError(v27);
    return 0LL;
  }
  AddHmodDependency(HmodTableIndex);
  v28 = GetHmodTableIndex(a3);
  gihmodDManipHookWOW = v28;
  if ( v28 != -1 )
  {
    AddHmodDependency(v28);
    gppiDManipHook = PsGetCurrentProcessWin32Process(v30, v29);
    *gpsi |= 0x10u;
    return 1LL;
  }
  UserSetLastError(126LL);
  RemoveHmodDependency(gihmodDManipHook);
  gihmodDManipHook = -1;
  return 0LL;
}
