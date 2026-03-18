/*
 * XREFs of NtUserFindWindowEx @ 0x1C008D7F0
 * Callers:
 *     <none>
 * Callees:
 *     _FindWindowEx @ 0x1C008DAE0 (_FindWindowEx.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ??1EnterLeaveCrit@@QEAA@XZ @ 0x1C01BF2EC (--1EnterLeaveCrit@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserFindWindowEx(__int64 a1, __int64 a2, int *a3, int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ecx
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  EnterLeaveCrit *v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // r10d
  int v21; // edx
  unsigned __int64 v22; // r8
  int v23; // ecx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r11
  unsigned __int64 v26; // r11
  __int64 *Window; // rax
  __int64 v28; // rbx
  unsigned int v29; // edx
  int v31; // [rsp+30h] [rbp-68h]
  int v32; // [rsp+4Ch] [rbp-4Ch]

  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  ++gdwInAtomicOperation;
  if ( gpAtomickCheckStacks )
  {
    v32 = ++gdwAtomicCheckSerial;
    v11 = 0;
    v8 = gdwAtomicCheckLogSize;
    if ( gdwAtomicCheckLogSize )
    {
      v9 = gpAtomickCheckStacks;
      while ( *(_DWORD *)(((unsigned __int64)v11 << 6) + gpAtomickCheckStacks) )
      {
        if ( ++v11 >= gdwAtomicCheckLogSize )
          goto LABEL_8;
      }
      v12 = (unsigned __int64)v11 << 6;
      *(_DWORD *)(v12 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(gpAtomickCheckStacks + v12 + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(gpAtomickCheckStacks + v12 + 8) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v12 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
LABEL_8:
  if ( a1 == -3 )
  {
    LODWORD(v15) = 0;
    v16 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v8, v9, v10);
    if ( ThreadWin32Thread )
      v16 = *ThreadWin32Thread;
    if ( v16 )
    {
      v18 = *(_QWORD *)(v16 + 408);
      if ( v18 )
        v15 = *(_QWORD *)(v18 + 96);
    }
  }
  else if ( a1 )
  {
    v13 = ValidateHwnd(a1);
    LODWORD(v15) = v13;
    if ( !v13 )
    {
LABEL_43:
      v28 = 0LL;
      goto LABEL_44;
    }
  }
  else
  {
    LODWORD(v15) = 0;
  }
  if ( a2 )
  {
    v19 = ValidateHwnd(a2);
    v20 = v19;
    if ( !v19 )
      goto LABEL_43;
  }
  else
  {
    v20 = 0;
  }
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (int *)W32UserProbeAddress;
  v21 = *a3;
  v22 = *((_QWORD *)a3 + 1);
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    a4 = (int *)W32UserProbeAddress;
  v23 = *a4;
  v31 = *a4;
  v24 = *((_QWORD *)a4 + 1);
  if ( (v22 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v22 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v25 = (unsigned __int16)v21 + v22 + 2;
    if ( v25 >= W32UserProbeAddress
      || (unsigned __int16)v21 > (unsigned __int16)HIWORD(*a3)
      || (v21 & 1) != 0
      || v25 <= v22 )
    {
      *W32UserProbeAddress = 0;
    }
  }
  if ( (v24 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v26 = (unsigned __int16)v23 + v24 + 2;
  if ( v26 >= W32UserProbeAddress || (unsigned __int16)v23 > HIWORD(v31) || (v23 & 1) != 0 || v26 <= v24 )
    *W32UserProbeAddress = 0;
  Window = (__int64 *)FindWindowEx(v15, v20, v22, v24);
  if ( !Window )
    goto LABEL_43;
  v28 = *Window;
LABEL_44:
  --gdwInAtomicOperation;
  if ( gpAtomickCheckStacks )
  {
    v29 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      while ( 1 )
      {
        v14 = (EnterLeaveCrit *)((unsigned __int64)v29 << 6);
        if ( *(_DWORD *)((char *)v14 + gpAtomickCheckStacks) == v32 )
          break;
        if ( ++v29 >= gdwAtomicCheckLogSize )
          goto LABEL_50;
      }
      v14 = (EnterLeaveCrit *)((unsigned __int64)v29 << 6);
      *(_DWORD *)((char *)v14 + gpAtomickCheckStacks) = 0;
    }
  }
LABEL_50:
  EnterLeaveCrit::~EnterLeaveCrit(v14);
  return v28;
}
