/*
 * XREFs of NtUserSetTimer @ 0x1C007A190
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     InternalSetTimer @ 0x1C007A390 (InternalSetTimer.c)
 *     LeaveEditionCrit @ 0x1C01573F0 (LeaveEditionCrit.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetTimer(__int64 a1, int a2, unsigned int a3, int a4, unsigned int a5)
{
  unsigned int v9; // ecx
  int v10; // ebp
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rbx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  int v17; // [rsp+54h] [rbp+Ch]

  EnterCrit(1LL);
  ++gdwInAtomicOperation;
  if ( gpAtomickCheckStacks )
  {
    v9 = 0;
    v10 = ++gdwAtomicCheckSerial;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v9 << 6) + gpAtomickCheckStacks) )
      {
        if ( ++v9 >= gdwAtomicCheckLogSize )
          goto LABEL_8;
      }
      v11 = (unsigned __int64)v9 << 6;
      *(_DWORD *)(v11 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(v11 + gpAtomickCheckStacks + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(v11 + gpAtomickCheckStacks + 8) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v11 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  else
  {
    v10 = v17;
  }
LABEL_8:
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    v14 = a5;
    if ( a3 < 0xA )
      a3 = 10;
    if ( a3 > 0x7FFFFFFF )
      a3 = 0x7FFFFFFF;
    if ( a5 == 2147483637 )
    {
      v14 = 0x7FFFFFFF - a3;
    }
    else if ( a5 != -1 && (a3 + a5 < a3 || a3 + a5 > 0x7FFFFFFF) )
    {
      v13 = 0LL;
      UserSetLastError(87);
      goto LABEL_25;
    }
    if ( !a1 || PsGetCurrentProcessWin32Process(0x7FFFFFFFLL) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) )
    {
      v13 = InternalSetTimer(a1, a2, a3, a4, v14, 0);
      goto LABEL_25;
    }
    UserSetLastError(5);
  }
  v13 = 0LL;
LABEL_25:
  --gdwInAtomicOperation;
  v15 = gpAtomickCheckStacks;
  if ( gpAtomickCheckStacks )
  {
    v15 = gdwAtomicCheckLogSize;
    v12 = 0LL;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)(unsigned int)v12 << 6) + gpAtomickCheckStacks) != v10 )
      {
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= gdwAtomicCheckLogSize )
          goto LABEL_31;
      }
      *(_DWORD *)(((unsigned __int64)(unsigned int)v12 << 6) + gpAtomickCheckStacks) = 0;
    }
  }
LABEL_31:
  LeaveEditionCrit(v15, v12);
  return v13;
}
