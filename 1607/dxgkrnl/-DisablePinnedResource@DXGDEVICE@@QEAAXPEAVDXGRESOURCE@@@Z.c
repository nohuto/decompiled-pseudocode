/*
 * XREFs of ?DisablePinnedResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C00E0C90
 * Callers:
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C00E0D20 (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0021384 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C00E0C3C (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DisablePinnedResource(DXGDEVICE *this, struct DXGRESOURCE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 i; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 418LL;
    WdLogEvent5_WdAssertion(v5);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (struct DXGRESOURCE *)((char *)a2 + 80));
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_387928376_59283803_FeatureDescriptorDetails) )
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  for ( i = *((_QWORD *)a2 + 3); i; i = *(_QWORD *)(i + 64) )
    DXGDEVICE::DisablePinnedAllocation(this, (struct _VIDMM_MULTI_ALLOC **)i);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
}
