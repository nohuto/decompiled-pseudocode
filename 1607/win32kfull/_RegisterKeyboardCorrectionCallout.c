/*
 * XREFs of _RegisterKeyboardCorrectionCallout @ 0x1C021DC00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall RegisterKeyboardCorrectionCallout(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx

  v2 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  v5 = CurrentProcessWin32Process;
  v6 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( v2 != (v2 != 0) )
    goto LABEL_2;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x88) != 0
    || v2 == (*(_QWORD *)(v6 + 240) != 0LL)
    || *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) != CurrentProcessWin32Process
    || !(unsigned int)IsImmersiveBroker(CurrentProcessWin32Process)
    || *(int *)(v5 + 12) >= 0 )
  {
    goto LABEL_14;
  }
  if ( v2 )
  {
    HMAssignmentLock(v6 + 240, a1);
    return 1LL;
  }
  v8 = *(_QWORD *)(v6 + 240);
  if ( *(_QWORD *)(*(_QWORD *)(v8 + 16) + 376LL) != v5 )
  {
LABEL_14:
    v7 = 5LL;
    goto LABEL_15;
  }
  if ( v8 == a1 )
  {
    HMAssignmentUnlock(v6 + 240);
    return 1LL;
  }
LABEL_2:
  v7 = 87LL;
LABEL_15:
  UserSetLastError(v7);
  return 0LL;
}
