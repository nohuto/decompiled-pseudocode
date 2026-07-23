/*
 * XREFs of MiRestrictRangeToNode @ 0x14013BB78
 * Callers:
 *     MiDescribePageRun @ 0x14013B830 (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x1401E1B1C (MiInitializeDynamicPfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x14078E924 (MxInitializeFreeNodeDescriptors.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x14078EA78 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiSwitchToPfns @ 0x1407965E0 (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x140796AA8 (MxCreateFreePfns.c)
 *     MxMapPfnRange @ 0x14079720C (MxMapPfnRange.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

unsigned __int64 __fastcall MiRestrictRangeToNode(unsigned __int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  int v5; // edx
  int v7; // r9d
  unsigned int v8; // ecx
  unsigned __int64 v9; // r9
  unsigned int v10; // ecx
  unsigned __int64 v11; // r9

  v4 = ExAcquireSpinLockShared(&dword_1403266F0);
  v5 = 0;
  if ( qword_140326A00 )
  {
    v7 = 0;
    if ( a1 >= *(_QWORD *)(qword_140326A00 + 16) )
    {
      v8 = 1;
      do
      {
        ++v8;
        ++v7;
      }
      while ( a1 >= *(_QWORD *)(qword_140326A00 + 16LL * v8) );
    }
    v9 = *(_QWORD *)(qword_140326A00 + 16LL * (unsigned int)(v7 + 1));
    if ( a1 + a2 > v9 )
      a2 = v9 - a1;
  }
  if ( qword_140326A10 )
  {
    if ( a1 >= *(_QWORD *)(qword_140326A10 + 16) )
    {
      v10 = 1;
      do
      {
        ++v10;
        ++v5;
      }
      while ( a1 >= *(_QWORD *)(qword_140326A10 + 16LL * v10) );
    }
    v11 = *(_QWORD *)(qword_140326A10 + 16LL * (unsigned int)(v5 + 1));
    if ( a1 + a2 > v11 )
      a2 = v11 - a1;
  }
  ExReleaseSpinLockShared(&dword_1403266F0, v4);
  return a2;
}
