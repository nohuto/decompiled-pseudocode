/*
 * XREFs of MiRestrictRangeToNode @ 0x14015F6F4
 * Callers:
 *     MiDescribePageRun @ 0x14015F634 (MiDescribePageRun.c)
 *     MxCreateFreePfns @ 0x1407C5084 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x1407C56C0 (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x1407C59A0 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x1407C6010 (MxComputeFreeNodeDescriptorRequirements.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall MiRestrictRangeToNode(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // si
  int v5; // ett
  int v6; // edx
  int v8; // r9d
  unsigned __int64 v9; // r9
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdx
  void *retaddr; // [rsp+70h] [rbp+68h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034E8B0);
  }
  else
  {
    _m_prefetchw(&dword_14034E8B0);
    v5 = dword_14034E8B0 & 0x7FFFFFFF;
    if ( v5 != _InterlockedCompareExchange(
                 &dword_14034E8B0,
                 (dword_14034E8B0 & 0x7FFFFFFF) + 1,
                 dword_14034E8B0 & 0x7FFFFFFF) )
      ExpWaitForSpinLockSharedAndAcquire(&dword_14034E8B0);
  }
  v6 = 0;
  if ( qword_14034EB80 )
  {
    v8 = 0;
    if ( a1 >= *(_QWORD *)(qword_14034EB80 + 16) )
    {
      v10 = 1;
      do
      {
        ++v10;
        ++v8;
      }
      while ( a1 >= *(_QWORD *)(qword_14034EB80 + 16LL * v10) );
    }
    v9 = *(_QWORD *)(qword_14034EB80 + 16LL * (unsigned int)(v8 + 1));
    if ( a1 + a2 > v9 )
      a2 = v9 - a1;
  }
  if ( qword_14034EB90 )
  {
    if ( a1 >= *(_QWORD *)(qword_14034EB90 + 16) )
    {
      v11 = 1;
      do
      {
        ++v11;
        ++v6;
      }
      while ( a1 >= *(_QWORD *)(qword_14034EB90 + 16LL * v11) );
    }
    v12 = *(_QWORD *)(qword_14034EB90 + 16LL * (unsigned int)(v6 + 1));
    if ( a1 + a2 > v12 )
      a2 = v12 - a1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034E8B0, retaddr);
  }
  else
  {
    _InterlockedAnd(&dword_14034E8B0, 0xBFFFFFFF);
    _InterlockedDecrement(&dword_14034E8B0);
  }
  __writecr8(CurrentIrql);
  return a2;
}
