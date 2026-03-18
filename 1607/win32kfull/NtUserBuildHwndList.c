/*
 * XREFs of NtUserBuildHwndList @ 0x1C0076200
 * Callers:
 *     <none>
 * Callees:
 *     PtiFromThreadId @ 0x1C0057448 (PtiFromThreadId.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00766E8 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C007680C (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     CallerCanSeeImmersiveWindows @ 0x1C007724C (CallerCanSeeImmersiveWindows.c)
 *     MapDesktop @ 0x1C009A3E0 (MapDesktop.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     memmove @ 0x1C015A040 (memmove.c)
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
  __int64 v12; // r14
  unsigned int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rsi
  PVOID v19; // rdx
  __int64 v20; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // esi
  _DWORD *v25; // r15
  _DWORD *v26; // r8
  int v27; // ebx
  PVOID v28; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  char v33[8]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v34; // [rsp+40h] [rbp-48h]
  int v35; // [rsp+50h] [rbp-38h] BYREF
  __int64 CurrentProcess; // [rsp+58h] [rbp-30h]
  PVOID v37; // [rsp+60h] [rbp-28h]
  int v38; // [rsp+68h] [rbp-20h]
  int v39; // [rsp+6Ch] [rbp-1Ch]
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF

  v12 = 0LL;
  v13 = 2;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v33[0] = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)v33);
  if ( (*gpsi & 4) != 0 )
    v13 = 10;
  if ( a4 && !(unsigned int)CallerCanSeeImmersiveWindows() )
    v13 |= 0x20u;
  if ( a2 )
  {
    v17 = ValidateHwnd(a2);
    if ( !v17 )
      goto LABEL_46;
  }
  else
  {
    v17 = 0LL;
  }
  if ( a5 )
  {
    v30 = PtiFromThreadId(a5);
    v18 = v30;
    if ( !v30 )
      goto LABEL_47;
    v31 = *(_QWORD *)(v30 + 408);
    if ( !v31 )
      goto LABEL_47;
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 8) + 16LL) + 96LL);
  }
  else
  {
    v18 = 0LL;
  }
  if ( !a1 )
  {
    v19 = 0LL;
    Object = 0LL;
    goto LABEL_12;
  }
  LOBYTE(v14) = 1;
  if ( (int)ValidateHdesk(a1, v14, 1LL, &Object) < 0 )
  {
LABEL_46:
    v27 = -1073741816;
    goto LABEL_33;
  }
  v38 = 0;
  v39 = 0;
  v37 = Object;
  v35 = 1;
  CurrentProcess = PsGetCurrentProcess();
  v27 = MapDesktop(&v35);
  if ( v27 < 0 )
  {
    v32 = 6LL;
    goto LABEL_50;
  }
  v19 = Object;
  v17 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)Object + 1) + 16LL) + 96LL);
LABEL_12:
  if ( v17 )
  {
    if ( a3 )
    {
      v13 |= 1u;
      v17 = *(_QWORD *)(v17 + 96);
    }
    goto LABEL_22;
  }
  if ( !v19 )
  {
    v20 = v18;
    if ( !v18 )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), 0LL, v15, v16);
      if ( ThreadWin32Thread )
        v20 = *ThreadWin32Thread;
    }
    if ( v20 )
    {
      v22 = *(_QWORD *)(v20 + 416);
      if ( v22 )
        v12 = *(_QWORD *)(v22 + 16);
    }
    if ( v12 )
    {
      v17 = *(_QWORD *)(v12 + 96);
      goto LABEL_22;
    }
LABEL_47:
    v27 = -1073741816;
    UserSetLastError(87LL);
    goto LABEL_33;
  }
LABEL_22:
  v23 = BuildHwndList(v17, v13);
  v12 = v23;
  v34 = v23;
  if ( v23 )
  {
    v24 = ((*(_QWORD *)(v23 + 8) - v23 - 32) >> 3) + 1;
    ProbeForWrite(Address, 8LL * a6, 4u);
    v25 = (_DWORD *)a8;
    v26 = (_DWORD *)a8;
    if ( a8 >= W32UserProbeAddress )
      v26 = (_DWORD *)W32UserProbeAddress;
    *v26 = *v26;
    if ( v24 > a6 )
    {
      v27 = -1073741789;
    }
    else
    {
      memmove((void *)Address, (const void *)(v12 + 32), 8LL * v24);
      v27 = 0;
    }
    *v25 = v24;
    goto LABEL_29;
  }
  v27 = -1073741816;
  v32 = 8LL;
LABEL_50:
  UserSetLastError(v32);
LABEL_29:
  if ( v12 )
    FreeHwndList(v12);
  v28 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_33:
  if ( !v33[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v33);
  }
  UserSessionSwitchLeaveCrit(v28, v14);
  return (unsigned int)v27;
}
