/*
 * XREFs of VrpInitializeLoadedDifferencingHives @ 0x140551828
 * Callers:
 *     VRegSetup @ 0x140551B90 (VRegSetup.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 VrpInitializeLoadedDifferencingHives()
{
  unsigned int v0; // ebx
  char *PoolWithTag; // rax
  char *v2; // rdx
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r8

  v0 = 0;
  gLoadedDiffHivesLock = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x67655256u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    gLoadedDiffHives = 0;
    qword_1403225C8 = (__int64)PoolWithTag;
    dword_1403225C4 = 1024;
    v3 = 0LL;
    v4 = 32LL;
    if ( PoolWithTag >= PoolWithTag + 256 )
      v4 = 0LL;
    if ( v4 )
    {
      do
      {
        ++v3;
        *(_QWORD *)v2 = (char *)&gLoadedDiffHives + 1;
        v2 += 8;
      }
      while ( v3 < v4 );
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v0;
}
