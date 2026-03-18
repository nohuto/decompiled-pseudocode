/*
 * XREFs of KiAcquireProcessLockShared @ 0x14020A50C
 * Callers:
 *     KeQueryCpuSetsProcess @ 0x1402057A0 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140205B1C (KeSetSelectedCpuSetsThread.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 */

__int64 __fastcall KiAcquireProcessLockShared(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // al
  bool v3; // zf
  _DWORD *v4; // rdx
  __int64 result; // rax
  signed __int32 v6; // ett

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
  *a2 = CurrentIrql;
  v4 = (_DWORD *)(a1 + 64);
  if ( !v3 )
    return ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 64);
  _m_prefetchw(v4);
  v6 = *v4 & 0x7FFFFFFF;
  result = (unsigned int)_InterlockedCompareExchange(v4, v6 + 1, v6);
  if ( v6 != (_DWORD)result )
    return ExpWaitForSpinLockSharedAndAcquire(v4);
  return result;
}
