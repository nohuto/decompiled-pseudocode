/*
 * XREFs of NtUserBuildHwndList @ 0x1C007BA50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     CallerCanSeeImmersiveWindows @ 0x1C007BD00 (CallerCanSeeImmersiveWindows.c)
 *     GetThreadDesktopWindow @ 0x1C007BD60 (GetThreadDesktopWindow.c)
 *     MapDesktop @ 0x1C007EF40 (MapDesktop.c)
 *     PtiFromThreadId @ 0x1C00911E4 (PtiFromThreadId.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserBuildHwndList(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        volatile void *Address,
        unsigned __int64 a8)
{
  struct tagBWL *v12; // rsi
  char v13; // r14
  __int64 v14; // rdx
  __int64 ThreadDesktopWindow; // rax
  __int64 v16; // rdi
  PVOID v17; // rdx
  struct tagBWL *v18; // rax
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
  int v30; // ecx
  _BYTE v31[16]; // [rsp+40h] [rbp-48h] BYREF
  int v32; // [rsp+50h] [rbp-38h] BYREF
  __int64 CurrentProcess; // [rsp+58h] [rbp-30h]
  PVOID v34; // [rsp+60h] [rbp-28h]
  int v35; // [rsp+68h] [rbp-20h]
  int v36; // [rsp+6Ch] [rbp-1Ch]
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF

  v12 = 0LL;
  v13 = 2;
  EnterCrit(1LL);
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v31);
  if ( (*gpsi & 4) != 0 )
    v13 = 10;
  if ( a4 && !(unsigned int)CallerCanSeeImmersiveWindows() )
    v13 |= 0x20u;
  if ( a2 )
  {
    ThreadDesktopWindow = ValidateHwnd(a2);
    if ( !ThreadDesktopWindow )
      goto LABEL_38;
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
      goto LABEL_39;
    v27 = *(_QWORD *)(v26 + 416);
    if ( !v27 )
      goto LABEL_39;
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
LABEL_38:
    v22 = -1073741816;
    goto LABEL_29;
  }
  v35 = 0;
  v36 = 0;
  v34 = Object;
  v32 = 1;
  CurrentProcess = PsGetCurrentProcess(v29, v28);
  v22 = MapDesktop(&v32);
  if ( v22 < 0 )
  {
    v30 = 6;
    goto LABEL_42;
  }
  v17 = Object;
  ThreadDesktopWindow = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 1) + 16LL) + 96LL);
LABEL_12:
  if ( !ThreadDesktopWindow )
  {
    if ( v17 )
      goto LABEL_18;
    ThreadDesktopWindow = GetThreadDesktopWindow(v16);
    if ( ThreadDesktopWindow )
      goto LABEL_17;
LABEL_39:
    v22 = -1073741816;
    UserSetLastError(87);
    goto LABEL_29;
  }
  if ( a3 )
  {
    v13 |= 1u;
LABEL_17:
    ThreadDesktopWindow = *(_QWORD *)(ThreadDesktopWindow + 96);
  }
LABEL_18:
  v18 = BuildHwndList(ThreadDesktopWindow, v13, v16);
  v12 = v18;
  if ( v18 )
  {
    v19 = ((*((_QWORD *)v18 + 1) - (_QWORD)v18 - 32LL) >> 3) + 1;
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
      memmove((void *)Address, (char *)v12 + 32, 8LL * v19);
      v22 = 0;
    }
    *v20 = v19;
    goto LABEL_25;
  }
  v22 = -1073741816;
  v30 = 8;
LABEL_42:
  UserSetLastError(v30);
LABEL_25:
  if ( v12 )
    FreeHwndList(v12);
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_29:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v31);
  UserSessionSwitchLeaveCrit(v24, v23);
  return (unsigned int)v22;
}
