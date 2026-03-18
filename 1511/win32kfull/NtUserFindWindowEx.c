/*
 * XREFs of NtUserFindWindowEx @ 0x1C00B9F90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     _FindWindowEx @ 0x1C00BA2A0 (_FindWindowEx.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserFindWindowEx(__int64 a1, __int64 a2, int *a3, int *a4)
{
  unsigned int v8; // edx
  unsigned __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  int v13; // r14d
  int v14; // edx
  unsigned __int64 v15; // r8
  int v16; // ecx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rdx
  __int64 *Window; // rax
  __int64 v21; // rbx
  unsigned int v22; // r8d
  __int64 v24; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // [rsp+30h] [rbp-68h]
  int v29; // [rsp+4Ch] [rbp-4Ch]

  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  ++gdwInAtomicOperation;
  if ( gpAtomickCheckStacks )
  {
    v29 = ++gdwAtomicCheckSerial;
    v8 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v8 << 6) + gpAtomickCheckStacks) )
      {
        if ( ++v8 >= gdwAtomicCheckLogSize )
          goto LABEL_5;
      }
      v9 = (unsigned __int64)v8 << 6;
      *(_DWORD *)(v9 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(gpAtomickCheckStacks + v9 + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(gpAtomickCheckStacks + v9 + 8) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v9 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
LABEL_5:
  if ( a1 == -3 )
  {
    LODWORD(v10) = 0;
    v24 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v24 = *ThreadWin32Thread;
    if ( v24 )
    {
      v26 = *(_QWORD *)(v24 + 408);
      if ( v26 )
        v10 = *(_QWORD *)(v26 + 96);
    }
  }
  else if ( a1 )
  {
    v27 = ValidateHwnd(a1);
    LODWORD(v10) = v27;
    if ( !v27 )
      goto LABEL_41;
  }
  else
  {
    LODWORD(v10) = 0;
  }
  if ( a2 )
  {
    v11 = ValidateHwnd(a2);
    v13 = v11;
    if ( v11 )
      goto LABEL_10;
LABEL_41:
    v21 = 0LL;
    goto LABEL_30;
  }
  v13 = 0;
LABEL_10:
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (int *)W32UserProbeAddress;
  v14 = *a3;
  v15 = *((_QWORD *)a3 + 1);
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    a4 = (int *)W32UserProbeAddress;
  v16 = *a4;
  v28 = *a4;
  v17 = *((_QWORD *)a4 + 1);
  if ( (v15 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v15 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = v15 + (unsigned __int16)v14 + 2LL;
    if ( v18 >= W32UserProbeAddress || (unsigned __int16)v14 > (unsigned __int16)HIWORD(*a3) || v18 <= v15 )
      *W32UserProbeAddress = 0;
  }
  if ( (v17 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v19 = v17 + (unsigned __int16)v16 + 2LL;
  if ( v19 >= W32UserProbeAddress || (unsigned __int16)v16 > HIWORD(v28) || v19 <= v17 )
    *W32UserProbeAddress = 0;
  Window = (__int64 *)FindWindowEx(v10, v13, v15, v17);
  if ( !Window )
    goto LABEL_41;
  v21 = *Window;
LABEL_30:
  --gdwInAtomicOperation;
  if ( gpAtomickCheckStacks )
  {
    v22 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      while ( 1 )
      {
        v12 = (unsigned __int64)v22 << 6;
        if ( *(_DWORD *)(v12 + gpAtomickCheckStacks) == v29 )
          break;
        if ( ++v22 >= gdwAtomicCheckLogSize )
          goto LABEL_34;
      }
      v12 = (unsigned __int64)v22 << 6;
      *(_DWORD *)(v12 + gpAtomickCheckStacks) = 0;
    }
  }
LABEL_34:
  UserSessionSwitchLeaveCrit(v12, gpAtomickCheckStacks);
  return v21;
}
