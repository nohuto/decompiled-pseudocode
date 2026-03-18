/*
 * XREFs of ACPIRootInitialize @ 0x1C0081114
 * Callers:
 *     ACPITableLoad @ 0x1C00064E0 (ACPITableLoad.c)
 * Callees:
 *     AMLISetNSObjectContext @ 0x1C00040A8 (AMLISetNSObjectContext.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C0004ED0 (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C0005180 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x1C000530C (ACPIFixedFeatureButtonInitialize.c)
 *     IsHypervisorLpiCapable @ 0x1C0007784 (IsHypervisorLpiCapable.c)
 *     AMLIGetParent @ 0x1C000D028 (AMLIGetParent.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C000D860 (ACPIInitReferenceDeviceExtension.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     _ACPIInternalError @ 0x1C0048348 (_ACPIInternalError.c)
 *     ACPIPccLegacyInitialize @ 0x1C008131C (ACPIPccLegacyInitialize.c)
 *     ACPIEvaluateOscWheaMethodOnRootBus @ 0x1C0081474 (ACPIEvaluateOscWheaMethodOnRootBus.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0081520 (ACPIAmliEvaluateOsc.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C008CFE4 (ACPIWriteOscSupportToRegistry.c)
 *     IsHypervisorCpcCapable @ 0x1C00A0B2C (IsHypervisorCpcCapable.c)
 */

__int64 ACPIRootInitialize()
{
  unsigned int v0; // edi
  unsigned int v1; // r14d
  unsigned int v2; // esi
  int v3; // edx
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 *v6; // rbx
  __int64 *v7; // r15
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  bool v12; // bl
  USHORT HighestNodeNumber; // ax
  int v14; // r8d
  unsigned __int16 v15; // r15
  USHORT v16; // bx
  USHORT v17; // r12
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // rcx
  char v23; // al
  unsigned int v24; // ecx
  USHORT Count[2]; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v26[3]; // [rsp+34h] [rbp-3Ch] BYREF
  int v27[4]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-20h] BYREF

  v0 = 0;
  v26[0] = 0;
  v28[0] = 0LL;
  v1 = 0;
  v2 = 0;
  if ( (int)AMLIGetNameSpaceObject("\\_SB") < 0 )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      22,
      29,
      (__int64)&WPP_5441e56d220835a776220f48a79793ac_Traceguids);
    ACPIInternalError(0x11098BuLL);
  }
  ACPIInitReferenceDeviceExtension(RootDeviceExtension);
  v4 = v28[0];
  v5 = (__int64 *)v28[0];
  *(_QWORD *)(RootDeviceExtension + 712) = v28[0];
  AMLISetNSObjectContext(v5, RootDeviceExtension);
  ACPIRootDeviceNotifyPepDiscoverDevice();
  ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice();
  ACPIFixedFeatureButtonInitialize();
  v6 = (__int64 *)AMLIGetParent(v4);
  v7 = AMLIGetNamedChild(v6, 1229867359);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v6, 0LL);
  if ( v7 )
  {
    AMLIAsyncEvalObject(v7, 0LL, 0, 0LL, 0LL, 0LL);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v7, 0LL);
  }
  if ( (AcpiOverrideAttributes & 0x4000) == 0 )
  {
    LODWORD(v28[0]) = 0;
    if ( !(unsigned int)ACPIEvaluateOscWheaMethodOnRootBus(v9, v8, v10, v11, (__int64)v28) )
      v1 = 1;
  }
  ACPIPccLegacyInitialize();
  v12 = IsHypervisorLpiCapable();
  HviGetHypervisorFeatures(v28);
  if ( (v28[0] & 0x100000000000LL) != 0 )
  {
    v23 = IsHypervisorCpcCapable();
    v24 = AcpiRootFeaturesSupported;
    if ( !v23 )
    {
      v24 = AcpiRootFeaturesSupported & 0xFFFFEF9F;
      AcpiRootFeaturesSupported &= 0xFFFFEF9F;
    }
    if ( !v12 )
      AcpiRootFeaturesSupported = v24 & 0xFFFFFFFE;
    v26[0] |= 1u;
  }
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v15 = 0;
  v16 = 0;
  v17 = HighestNodeNumber + 1;
  if ( HighestNodeNumber == 0xFFFF )
    goto LABEL_13;
  do
  {
    KeQueryNodeActiveAffinity(v16, 0LL, Count);
    if ( Count[0] )
      ++v15;
    ++v16;
  }
  while ( v16 < v17 );
  if ( v15 <= 1u )
  {
LABEL_13:
    v18 = AcpiRootFeaturesSupported;
  }
  else
  {
    v18 = AcpiRootFeaturesSupported & 0xFFFFEFFF;
    AcpiRootFeaturesSupported &= ~0x1000u;
  }
  HIDWORD(v28[0]) = v18;
  LODWORD(v28[0]) = 0;
  v19 = *(_QWORD *)(RootDeviceExtension + 712);
  *(_OWORD *)v27 = SB_OSC_UUID;
  if ( !(unsigned int)ACPIAmliEvaluateOsc(v19, (int)v27, v14, 2, v28) )
  {
    if ( (AcpiRootFeaturesSupported & 0x10) != 0 )
    {
      v1 = 1;
      v0 = 1;
    }
    if ( (AcpiRootFeaturesSupported & 0x20) != 0 )
      v2 = ((AcpiRootFeaturesSupported & 0x40) != 0) + 1;
  }
  v21 = *(_QWORD *)(RootDeviceExtension + 712);
  *(_OWORD *)v27 = SB_OSC_IOV_UUID;
  ACPIAmliEvaluateOsc(v21, (int)v27, v20, 1, v26);
  ACPIWriteOscSupportToRegistry(v1, v0, v2);
  return 0LL;
}
