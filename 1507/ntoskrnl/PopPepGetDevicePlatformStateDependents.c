/*
 * XREFs of PopPepGetDevicePlatformStateDependents @ 0x14023B56C
 * Callers:
 *     PopDiagTraceDeviceVerboseRundown @ 0x1406B8F48 (PopDiagTraceDeviceVerboseRundown.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

char __fastcall PopPepGetDevicePlatformStateDependents(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // rbx
  unsigned __int8 CurrentIrql; // r14
  signed __int32 v6; // ett
  bool v7; // bp
  int *v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0;
  v2 = a1 + 16;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(a1 + 16);
  }
  else
  {
    _m_prefetchw(v2);
    v6 = *v2 & 0x7FFFFFFF;
    if ( v6 != _InterlockedCompareExchange(v2, v6 + 1, v6) )
      ExpWaitForSpinLockSharedAndAcquire(v2);
  }
  v7 = a1[40] == 2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2, retaddr);
  }
  else
  {
    _InterlockedAnd(v2, 0xBFFFFFFF);
    _InterlockedDecrement(v2);
  }
  __writecr8(CurrentIrql);
  if ( v7 )
  {
    v8 = a1 + 36;
    v9 = 3LL;
    do
    {
      v10 = *v8++;
      *a2 |= v10;
      --v9;
    }
    while ( v9 );
    if ( a1[42] )
    {
      do
      {
        v11 = 0LL;
        v12 = 50LL * (unsigned int)v9;
        if ( a1[v12 + 91] )
        {
          do
          {
            v13 = 3 * v11;
            v11 = (unsigned int)(v11 + 1);
            *a2 |= *(_DWORD *)(*(_QWORD *)&a1[v12 + 92] + 8 * v13 + 16);
          }
          while ( (unsigned int)v11 < a1[v12 + 91] );
        }
        LODWORD(v9) = v9 + 1;
      }
      while ( (unsigned int)v9 < a1[42] );
    }
  }
  return 0;
}
