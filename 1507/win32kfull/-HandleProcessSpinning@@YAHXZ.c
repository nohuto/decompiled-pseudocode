/*
 * XREFs of ?HandleProcessSpinning@@YAHXZ @ 0x1C006B090
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     UpdateProcessPriorityForSpinning @ 0x1C0046FF4 (UpdateProcessPriorityForSpinning.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 HandleProcessSpinning(void)
{
  __int64 v0; // rax
  BOOL v1; // r8d
  int v2; // edx
  int v3; // eax

  v0 = *(_QWORD *)(gptiCurrent + 440LL);
  v1 = *(_QWORD *)(v0 + 8) >= 0x64uLL;
  if ( *(_QWORD *)(v0 + 8) >= 0x64uLL )
  {
    *(_QWORD *)(v0 + 8) = 0LL;
    v2 = *(_DWORD *)(gptiCurrent + 448LL);
    if ( (v2 & 0x400) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 28LL) = v2 | 0x400;
  }
  if ( v1 )
  {
    v3 = *(_DWORD *)(gptiCurrent + 448LL);
    if ( (v3 & 0x400) == 0 )
    {
      *(_DWORD *)(gptiCurrent + 448LL) = v3 | 0x400;
      UpdateProcessPriorityForSpinning(gptiCurrent);
    }
  }
  return 1LL;
}
