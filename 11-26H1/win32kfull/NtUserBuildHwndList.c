/*
 * XREFs of NtUserBuildHwndList @ 0x14020DC00
 * Callers:
 *     <none>
 * Callees:
 *     GetThreadDesktopWindow @ 0x140009BD0 (GetThreadDesktopWindow.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140021034 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     MapDesktop @ 0x140059FC0 (MapDesktop.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     CallerCanSeeImmersiveWindows @ 0x14025CC4C (CallerCanSeeImmersiveWindows.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtUserBuildHwndList(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        volatile void *Address,
        volatile void *a8)
{
  struct tagBWL *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // r14d
  struct tagWND *ThreadDesktopWindow; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  PVOID v20; // rcx
  int v21; // edi
  struct tagBWL *v23; // rax
  unsigned int v24; // r14d
  volatile void *v25; // rbx
  __int64 v26; // rdx
  int v27; // ecx
  _QWORD v28[2]; // [rsp+38h] [rbp-80h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-70h]
  char v30; // [rsp+4Ch] [rbp-6Ch]
  _BYTE v31[8]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v32; // [rsp+58h] [rbp-60h]
  _QWORD v33[2]; // [rsp+60h] [rbp-58h] BYREF
  int v34; // [rsp+70h] [rbp-48h]
  int v35; // [rsp+74h] [rbp-44h]
  __int64 CurrentProcess; // [rsp+78h] [rbp-40h]
  PVOID v37; // [rsp+80h] [rbp-38h]
  __int64 v38; // [rsp+88h] [rbp-30h]
  PVOID Object; // [rsp+C8h] [rbp+10h] BYREF
  int v40; // [rsp+D0h] [rbp+18h]

  v40 = a3;
  Object = 0LL;
  v11 = 0LL;
  v33[0] = 0LL;
  v33[1] = 0LL;
  v35 = 0;
  EnterLeaveCritShared::EnterLeaveCritShared(v28, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v31);
  v15 = 2 * (**(_DWORD **)(W32GetUserSessionState(v13, v12) + 19904) & 4 | 1);
  if ( a4 && !(unsigned int)CallerCanSeeImmersiveWindows() )
    v15 |= 0x10u;
  if ( a2 )
  {
    ThreadDesktopWindow = (struct tagWND *)ValidateHwnd(a2);
    if ( !ThreadDesktopWindow )
      goto LABEL_10;
  }
  else
  {
    ThreadDesktopWindow = 0LL;
  }
  if ( a5 )
  {
    v17 = PtiFromThreadId(a5);
    v18 = v17;
    if ( !v17 )
      goto LABEL_39;
    v19 = *(_QWORD *)(v17 + 488);
    if ( !v19 )
      goto LABEL_39;
    ThreadDesktopWindow = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 24LL) + 112LL);
  }
  else
  {
    v18 = 0LL;
  }
  if ( a1 )
  {
    LOBYTE(v14) = 1;
    if ( (int)ValidateHdesk(a1, v14, 1LL, &Object) < 0 )
    {
LABEL_10:
      v21 = -1073741816;
      goto LABEL_11;
    }
    v38 = 0LL;
    v37 = Object;
    v34 = 1;
    CurrentProcess = PsGetCurrentProcess(v20);
    v21 = MapDesktop((__int64)v33);
    if ( v21 < 0 )
    {
      v27 = 6;
      goto LABEL_30;
    }
    ThreadDesktopWindow = *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)Object + 1) + 24LL) + 112LL);
  }
  if ( ThreadDesktopWindow )
  {
    if ( !v40 )
      goto LABEL_17;
    v15 |= 1u;
    goto LABEL_28;
  }
  if ( !Object )
  {
    ThreadDesktopWindow = (struct tagWND *)GetThreadDesktopWindow(v18);
    if ( !ThreadDesktopWindow )
    {
LABEL_39:
      v21 = -1073741816;
      UserSetLastError(87);
      goto LABEL_11;
    }
LABEL_28:
    ThreadDesktopWindow = (struct tagWND *)*((_QWORD *)ThreadDesktopWindow + 14);
  }
LABEL_17:
  v23 = BuildHwndList(ThreadDesktopWindow, v15, v18, 0);
  v11 = v23;
  v28[0] = v23;
  if ( v23 )
  {
    v24 = ((*((_QWORD *)v23 + 1) - (_QWORD)v23 - 32LL) >> 3) + 1;
    ProbeForWrite(Address, 8LL * a6, 4u);
    v25 = a8;
    ProbeForWrite(a8, 4uLL, 1u);
    if ( v24 > a6 )
    {
      v21 = -1073741789;
    }
    else
    {
      RtlCopyToUser((void *)Address, (char *)v11 + 32, 8LL * v24);
      v21 = 0;
    }
    v28[1] = v25;
    v30 = 0;
    RtlWriteULongToUser(v25, v24);
    v29 = v24;
    v30 = 1;
    goto LABEL_22;
  }
  v21 = -1073741816;
  v27 = 8;
LABEL_30:
  UserSetLastError(v27);
LABEL_22:
  if ( v11 )
    FreeHwndList(v11, v26);
  v20 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_11:
  if ( v31[0] )
    --*(_DWORD *)(v32 + 28);
  UserSessionSwitchLeaveCrit(v20);
  return (unsigned int)v21;
}
