/*
 * XREFs of NtUserFindWindowEx @ 0x1C0076940
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _FindWindowEx @ 0x1C0076C20 (_FindWindowEx.c)
 *     LeaveEditionCrit @ 0x1C01573F0 (LeaveEditionCrit.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserFindWindowEx(__int64 a1, __int64 a2, int *a3, int *a4)
{
  unsigned int v8; // ecx
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r10d
  int v18; // edx
  unsigned __int64 v19; // r8
  int v20; // ecx
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // r11
  __int64 *Window; // rax
  __int64 v25; // rbx
  int v27; // [rsp+30h] [rbp-68h]
  int v28; // [rsp+4Ch] [rbp-4Ch]

  EnterCrit(1LL);
  gbValidateHandleForIL = 0;
  ++gdwInAtomicOperation;
  if ( gpAtomickCheckStacks )
  {
    v28 = ++gdwAtomicCheckSerial;
    v8 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v8 << 6) + gpAtomickCheckStacks) )
      {
        if ( ++v8 >= gdwAtomicCheckLogSize )
          goto LABEL_7;
      }
      v9 = (unsigned __int64)v8 << 6;
      *(_DWORD *)(v9 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(gpAtomickCheckStacks + v9 + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(gpAtomickCheckStacks + v9 + 8) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v9 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
LABEL_7:
  if ( a1 == -3 )
  {
    LODWORD(v13) = 0;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v15 = *(_QWORD *)(ThreadWin32Thread + 416);
      if ( v15 )
        v13 = *(_QWORD *)(v15 + 96);
    }
  }
  else if ( a1 )
  {
    v10 = ValidateHwnd(a1);
    LODWORD(v13) = v10;
    if ( !v10 )
    {
LABEL_40:
      v25 = 0LL;
      goto LABEL_41;
    }
  }
  else
  {
    LODWORD(v13) = 0;
  }
  if ( a2 )
  {
    v16 = ValidateHwnd(a2);
    v17 = v16;
    if ( !v16 )
      goto LABEL_40;
  }
  else
  {
    v17 = 0;
  }
  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (int *)W32UserProbeAddress;
  v18 = *a3;
  v19 = *((_QWORD *)a3 + 1);
  if ( (unsigned __int64)a4 >= W32UserProbeAddress )
    a4 = (int *)W32UserProbeAddress;
  v20 = *a4;
  v27 = *a4;
  v21 = *((_QWORD *)a4 + 1);
  if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v19 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = (unsigned __int16)v18 + v19 + 2;
    if ( v22 >= W32UserProbeAddress
      || (unsigned __int16)v18 > (unsigned __int16)HIWORD(*a3)
      || (v18 & 1) != 0
      || v22 <= v19 )
    {
      *W32UserProbeAddress = 0;
    }
  }
  if ( (v21 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v23 = (unsigned __int16)v20 + v21 + 2;
  if ( v23 >= W32UserProbeAddress || (unsigned __int16)v20 > HIWORD(v27) || (v20 & 1) != 0 || v23 <= v21 )
    *W32UserProbeAddress = 0;
  Window = (__int64 *)FindWindowEx(v13, v17, v19, v21);
  if ( !Window )
    goto LABEL_40;
  v25 = *Window;
LABEL_41:
  --gdwInAtomicOperation;
  if ( gpAtomickCheckStacks )
  {
    v11 = 0LL;
    if ( gdwAtomicCheckLogSize )
    {
      while ( 1 )
      {
        v12 = (unsigned __int64)(unsigned int)v11 << 6;
        if ( *(_DWORD *)(v12 + gpAtomickCheckStacks) == v28 )
          break;
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= gdwAtomicCheckLogSize )
          goto LABEL_47;
      }
      v12 = (unsigned __int64)(unsigned int)v11 << 6;
      *(_DWORD *)(v12 + gpAtomickCheckStacks) = 0;
    }
  }
LABEL_47:
  LeaveEditionCrit(v12, v11);
  return v25;
}
