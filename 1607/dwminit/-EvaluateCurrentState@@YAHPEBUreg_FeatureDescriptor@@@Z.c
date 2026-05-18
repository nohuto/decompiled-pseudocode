/*
 * XREFs of ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x180004B1C
 * Callers:
 *     ??1CApiPortClient@@QEAA@XZ @ 0x180004BD4 (--1CApiPortClient@@QEAA@XZ.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x180004E1C (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x1800050E4 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ??0CPortClient@@QEAA@IPEAX@Z @ 0x18000544C (--0CPortClient@@QEAA@IPEAX@Z.c)
 *     ??1CPortClient@@UEAA@XZ @ 0x180005558 (--1CPortClient@@UEAA@XZ.c)
 *     ?Disconnect@CPortClient@@QEAAXXZ @ 0x1800055EC (-Disconnect@CPortClient@@QEAAXXZ.c)
 *     ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x1800056E0 (-SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z.c)
 *     ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x1800057C0 (-SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXI1FPEAJ@Z @ 0x180005970 (-SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXI1FPEAJ@Z.c)
 *     ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x180005C00 (-ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z.c)
 * Callees:
 *     ?EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z @ 0x180004AA0 (-EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z.c)
 */

_BOOL8 __fastcall EvaluateCurrentState(const struct reg_FeatureDescriptor *a1)
{
  EvaluateFeature(a1);
  return *(_DWORD *)g_Feature_2566179129_57566008_FeatureDescriptorDetails != 1;
}
