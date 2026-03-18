/*
 * XREFs of ?HandleProcessSpinning@@YAHXZ @ 0x1C005AD60
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     UpdateProcessPriorityForSpinning @ 0x1C00815F4 (UpdateProcessPriorityForSpinning.c)
 */

__int64 HandleProcessSpinning(void)
{
  __int64 v0; // rax
  BOOL v1; // r8d
  int v2; // edx
  int v3; // eax

  v0 = *(_QWORD *)(gptiCurrent + 432LL);
  v1 = *(_QWORD *)(v0 + 8) >= 0x64uLL;
  if ( *(_QWORD *)(v0 + 8) >= 0x64uLL )
  {
    *(_QWORD *)(v0 + 8) = 0LL;
    v2 = *(_DWORD *)(gptiCurrent + 440LL);
    if ( (v2 & 0x400) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 28LL) = v2 | 0x400;
  }
  if ( v1 )
  {
    v3 = *(_DWORD *)(gptiCurrent + 440LL);
    if ( (v3 & 0x400) == 0 )
    {
      *(_DWORD *)(gptiCurrent + 440LL) = v3 | 0x400;
      UpdateProcessPriorityForSpinning();
    }
  }
  return 1LL;
}
