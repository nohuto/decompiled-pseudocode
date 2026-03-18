/*
 * XREFs of MiRestrictRangeToNode @ 0x140131AC8
 * Callers:
 *     MiDescribePageRun @ 0x140131A08 (MiDescribePageRun.c)
 *     MxCreateFreePfns @ 0x140746A50 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140746FA8 (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x140747288 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x1407477A8 (MxComputeFreeNodeDescriptorRequirements.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 */

unsigned __int64 __fastcall MiRestrictRangeToNode(unsigned __int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  int v5; // edx
  int v7; // r9d
  unsigned __int64 v8; // r9
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned __int64 v11; // r9

  v4 = ExAcquireSpinLockShared(&dword_1402FE3E8);
  v5 = 0;
  if ( qword_1402FE6D0 )
  {
    v7 = 0;
    if ( a1 >= *(_QWORD *)(qword_1402FE6D0 + 16) )
    {
      v9 = 1;
      do
      {
        ++v9;
        ++v7;
      }
      while ( a1 >= *(_QWORD *)(qword_1402FE6D0 + 16LL * v9) );
    }
    v8 = *(_QWORD *)(qword_1402FE6D0 + 16LL * (unsigned int)(v7 + 1));
    if ( a1 + a2 > v8 )
      a2 = v8 - a1;
  }
  if ( qword_1402FE6E0 )
  {
    if ( a1 >= *(_QWORD *)(qword_1402FE6E0 + 16) )
    {
      v10 = 1;
      do
      {
        ++v10;
        ++v5;
      }
      while ( a1 >= *(_QWORD *)(qword_1402FE6E0 + 16LL * v10) );
    }
    v11 = *(_QWORD *)(qword_1402FE6E0 + 16LL * (unsigned int)(v5 + 1));
    if ( a1 + a2 > v11 )
      a2 = v11 - a1;
  }
  ExReleaseSpinLockShared(&dword_1402FE3E8, v4);
  return a2;
}
