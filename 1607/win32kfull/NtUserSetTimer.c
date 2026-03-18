/*
 * XREFs of NtUserSetTimer @ 0x1C005E0A0
 * Callers:
 *     <none>
 * Callees:
 *     InternalSetTimer @ 0x1C005E280 (InternalSetTimer.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetTimer(__int64 a1, int a2, unsigned int a3, int a4, unsigned int a5)
{
  __int64 v9; // rdx
  unsigned int v10; // ecx
  int v11; // ebp
  unsigned __int64 v12; // rbx
  unsigned int v13; // ebx
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v17; // [rsp+54h] [rbp+Ch]

  EnterCrit(0LL, 1LL);
  ++gdwInAtomicOperation;
  if ( gpAtomickCheckStacks )
  {
    v10 = 0;
    v11 = ++gdwAtomicCheckSerial;
    v9 = gdwAtomicCheckLogSize;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v10 << 6) + gpAtomickCheckStacks) )
      {
        if ( ++v10 >= gdwAtomicCheckLogSize )
          goto LABEL_5;
      }
      v12 = (unsigned __int64)v10 << 6;
      *(_DWORD *)(v12 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v12 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v12 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v12 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v11 = v17;
  }
LABEL_5:
  if ( a1 )
  {
    a1 = ValidateHwnd(a1);
    if ( !a1 )
      goto LABEL_29;
  }
  v13 = a5;
  if ( a3 < 0xA )
    a3 = 10;
  if ( a3 > 0x7FFFFFFF )
    a3 = 0x7FFFFFFF;
  if ( a5 == 2147483637 )
  {
    v13 = 0x7FFFFFFF - a3;
  }
  else if ( a5 != -1 && (a3 + a5 < a3 || a3 + a5 > 0x7FFFFFFF) )
  {
    v14 = 0LL;
    UserSetLastError(87LL);
    goto LABEL_18;
  }
  if ( a1 && PsGetCurrentProcessWin32Process(0x7FFFFFFFLL, v9) != *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) )
  {
    UserSetLastError(5LL);
LABEL_29:
    v14 = 0LL;
    goto LABEL_18;
  }
  v14 = InternalSetTimer(a1, a2, a3, a4, v13, 0);
LABEL_18:
  --gdwInAtomicOperation;
  v15 = gpAtomickCheckStacks;
  if ( gpAtomickCheckStacks )
  {
    v15 = gdwAtomicCheckLogSize;
    v9 = 0LL;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v9 << 6) + gpAtomickCheckStacks) != v11 )
      {
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= gdwAtomicCheckLogSize )
          goto LABEL_22;
      }
      *(_DWORD *)(((unsigned __int64)(unsigned int)v9 << 6) + gpAtomickCheckStacks) = 0;
    }
  }
LABEL_22:
  UserSessionSwitchLeaveCrit(v15, v9);
  return v14;
}
