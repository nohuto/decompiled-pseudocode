/*
 * XREFs of _RegisterKeyboardCorrectionCallout @ 0x1C02236B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall RegisterKeyboardCorrectionCallout(__int64 a1, int a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  int v7; // ecx
  __int64 v8; // rcx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = CurrentProcessWin32Process;
  v6 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( a2 != (a2 != 0) )
    goto LABEL_2;
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x88) != 0
    || a2 == (*(_QWORD *)(v6 + 288) != 0LL)
    || *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) != CurrentProcessWin32Process
    || !(unsigned int)IsImmersiveBroker(CurrentProcessWin32Process)
    || *(int *)(v5 + 12) >= 0 )
  {
    goto LABEL_14;
  }
  if ( a2 )
  {
    HMAssignmentLock(v6 + 288, a1);
    return 1LL;
  }
  v8 = *(_QWORD *)(v6 + 288);
  if ( *(_QWORD *)(*(_QWORD *)(v8 + 16) + 384LL) != v5 )
  {
LABEL_14:
    v7 = 5;
    goto LABEL_15;
  }
  if ( v8 == a1 )
  {
    HMAssignmentUnlock(v6 + 288);
    return 1LL;
  }
LABEL_2:
  v7 = 87;
LABEL_15:
  UserSetLastError(v7);
  return 0LL;
}
