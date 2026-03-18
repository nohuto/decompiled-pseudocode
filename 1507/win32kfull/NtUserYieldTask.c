/*
 * XREFs of NtUserYieldTask @ 0x1C0221DD0
 * Callers:
 *     <none>
 * Callees:
 *     UpdateProcessPriorityForSpinning @ 0x1C0046FF4 (UpdateProcessPriorityForSpinning.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxUserYield @ 0x1C01E9B0C (xxxUserYield.c)
 */

__int64 NtUserYieldTask()
{
  __int64 v0; // rcx
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx

  EnterCrit(1LL);
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 8LL);
  v0 = *(_QWORD *)(gptiCurrent + 440LL);
  if ( *(_QWORD *)(v0 + 8) >= 0x64uLL )
  {
    *(_QWORD *)(v0 + 8) = 0LL;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 28LL) |= 0x400u;
    *(_DWORD *)(gptiCurrent + 448LL) |= 0x400u;
    UpdateProcessPriorityForSpinning(gptiCurrent);
  }
  v1 = xxxUserYield(gptiCurrent);
  UserSessionSwitchLeaveCrit(v3, v2);
  return v1;
}
