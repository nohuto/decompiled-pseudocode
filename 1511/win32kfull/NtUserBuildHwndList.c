/*
 * XREFs of NtUserBuildHwndList @ 0x1C006D080
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C0065AC8 (PtiFromThreadId.c)
 *     FreeHwndList @ 0x1C006D900 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006D970 (BuildHwndList.c)
 *     CallerCanSeeImmersiveWindows @ 0x1C006DD6C (CallerCanSeeImmersiveWindows.c)
 *     GetThreadDesktopWindow @ 0x1C006E690 (GetThreadDesktopWindow.c)
 *     MapDesktop @ 0x1C00CF780 (MapDesktop.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserBuildHwndList(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        volatile void *Address,
        unsigned __int64 a8)
{
  __int64 v12; // rsi
  unsigned int v13; // r14d
  __int64 v14; // rdx
  __int64 ThreadDesktopWindow; // rax
  __int64 v16; // rdi
  PVOID v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // edi
  _DWORD *v20; // r14
  _DWORD *v21; // r8
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // ecx
  _BYTE v33[16]; // [rsp+40h] [rbp-48h] BYREF
  int v34; // [rsp+50h] [rbp-38h] BYREF
  __int64 CurrentProcess; // [rsp+58h] [rbp-30h]
  PVOID v36; // [rsp+60h] [rbp-28h]
  int v37; // [rsp+68h] [rbp-20h]
  int v38; // [rsp+6Ch] [rbp-1Ch]
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF

  v12 = 0LL;
  v13 = 2;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v33);
  v14 = gpsi;
  if ( (*gpsi & 4) != 0 )
    v13 = 10;
  if ( a4 && !(unsigned int)CallerCanSeeImmersiveWindows() )
    v13 |= 0x20u;
  if ( a2 )
  {
    ThreadDesktopWindow = ValidateHwnd(a2);
    if ( !ThreadDesktopWindow )
      goto LABEL_39;
  }
  else
  {
    ThreadDesktopWindow = 0LL;
  }
  if ( a5 )
  {
    v26 = PtiFromThreadId(a5);
    v16 = v26;
    if ( !v26 )
      goto LABEL_38;
    v27 = *(_QWORD *)(v26 + 408);
    if ( !v27 )
      goto LABEL_38;
    ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 8) + 16LL) + 96LL);
  }
  else
  {
    v16 = 0LL;
  }
  if ( !a1 )
  {
    v17 = 0LL;
    Object = 0LL;
    goto LABEL_12;
  }
  LOBYTE(v14) = 1;
  if ( (int)ValidateHdesk(a1, v14, 1LL, &Object) < 0 )
  {
LABEL_39:
    v22 = -1073741816;
    goto LABEL_27;
  }
  v37 = 0;
  v38 = 0;
  v36 = Object;
  v34 = 1;
  CurrentProcess = PsGetCurrentProcess(v29, v28, v30, v31);
  v22 = MapDesktop(&v34);
  if ( v22 < 0 )
  {
    v32 = 6;
    goto LABEL_42;
  }
  v17 = Object;
  ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 1) + 16LL) + 96LL);
LABEL_12:
  if ( ThreadDesktopWindow )
  {
    if ( !a3 )
      goto LABEL_16;
    v13 |= 1u;
    goto LABEL_15;
  }
  if ( !v17 )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(v16);
    if ( ThreadDesktopWindow )
    {
LABEL_15:
      ThreadDesktopWindow = *(_QWORD *)(ThreadDesktopWindow + 96);
      goto LABEL_16;
    }
LABEL_38:
    v22 = -1073741816;
    UserSetLastError(87);
    goto LABEL_27;
  }
LABEL_16:
  v18 = BuildHwndList(ThreadDesktopWindow, v13);
  v12 = v18;
  if ( v18 )
  {
    v19 = ((*(_QWORD *)(v18 + 8) - v18 - 32) >> 3) + 1;
    ProbeForWrite(Address, 8LL * a6, 4u);
    v20 = (_DWORD *)a8;
    v21 = (_DWORD *)a8;
    if ( a8 >= W32UserProbeAddress )
      v21 = (_DWORD *)W32UserProbeAddress;
    *v21 = *v21;
    if ( v19 > a6 )
    {
      v22 = -1073741789;
    }
    else
    {
      memmove((void *)Address, (const void *)(v12 + 32), 8LL * v19);
      v22 = 0;
    }
    *v20 = v19;
    goto LABEL_23;
  }
  v22 = -1073741816;
  v32 = 8;
LABEL_42:
  UserSetLastError(v32);
LABEL_23:
  if ( v12 )
    FreeHwndList(v12);
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_27:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v33);
  UserSessionSwitchLeaveCrit(v24, v23);
  return (unsigned int)v22;
}
