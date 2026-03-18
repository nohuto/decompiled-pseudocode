/*
 * XREFs of xxxGetCursorPos @ 0x1C008AC40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     LogicalCursorPos @ 0x1C0056358 (LogicalCursorPos.c)
 *     CheckWinstaAttributeAccess @ 0x1C008AD60 (CheckWinstaAttributeAccess.c)
 */

__int64 __fastcall xxxGetCursorPos(__int64 *a1, int a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  __int64 *v8; // rdx

  if ( !(unsigned int)CheckWinstaAttributeAccess(2u) )
    return 0LL;
  v4 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( v4 && v4 != grpdeskRitInput )
  {
    UserSetLastError(5);
    return 0LL;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    v6 = *(_QWORD *)(gpsi + 3976LL);
    v7 = 0;
    if ( v4 )
      v7 = *(_DWORD *)(*(_QWORD *)(v4 + 8) + 244LL) & 1;
    if ( v7 )
    {
      v4 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 376LL) + 776LL);
      if ( (v4 & 0x2000) != 0 )
      {
        v6 = *(_QWORD *)(gpsi + 3960LL);
      }
      else if ( (v4 & 0x6000) == 0 )
      {
        v6 = *(_QWORD *)(gpsi + 3952LL);
      }
    }
    goto LABEL_10;
  }
  if ( v5 != 1 )
    return 0LL;
  v6 = LogicalCursorPos(gptiCurrent);
LABEL_10:
  if ( ((PsGetCurrentProcessWow64Process(v4) != 0 ? 0 : 3) & (unsigned int)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = a1;
  if ( (unsigned __int64)a1 >= W32UserProbeAddress )
    v8 = (__int64 *)W32UserProbeAddress;
  *(_BYTE *)v8 = *(_BYTE *)v8;
  *((_BYTE *)v8 + 7) = *((_BYTE *)v8 + 7);
  *a1 = v6;
  return 1LL;
}
