/*
 * XREFs of xxxGetCursorPos @ 0x1C00D8460
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     LogicalCursorPos @ 0x1C0090A74 (LogicalCursorPos.c)
 */

__int64 __fastcall xxxGetCursorPos(__int64 *a1, int a2)
{
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rbx
  int v8; // eax
  __int64 *v9; // rdx
  int v11; // ecx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
  {
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x40000) == 0 )
    {
      v11 = 1459;
      goto LABEL_20;
    }
    if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 656), 2u) )
      goto LABEL_19;
  }
  v5 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( v5 )
  {
    if ( v5 != grpdeskRitInput )
    {
LABEL_19:
      v11 = 5;
LABEL_20:
      UserSetLastError(v11);
      return 0LL;
    }
  }
  v6 = a2 - 1;
  if ( !v6 )
  {
    v7 = *(_QWORD *)(gpsi + 3976LL);
    v8 = 0;
    if ( v5 )
      v8 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 260LL) & 1;
    if ( v8 )
    {
      v5 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 384LL) + 776LL);
      if ( (v5 & 0x2000) != 0 )
      {
        v7 = *(_QWORD *)(gpsi + 3960LL);
      }
      else if ( (v5 & 0x6000) == 0 )
      {
        v7 = *(_QWORD *)(gpsi + 3952LL);
      }
    }
    goto LABEL_12;
  }
  if ( v6 != 1 )
    return 0LL;
  v7 = LogicalCursorPos(gptiCurrent);
LABEL_12:
  if ( ((PsGetCurrentProcessWow64Process(v5) != 0 ? 0 : 3) & (unsigned int)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v9 = (__int64 *)W32UserProbeAddress;
  *(_BYTE *)v9 = *(_BYTE *)v9;
  *((_BYTE *)v9 + 7) = *((_BYTE *)v9 + 7);
  *a1 = v7;
  return 1LL;
}
