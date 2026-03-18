/*
 * XREFs of ACPIRootInitialize @ 0x1C006640C
 * Callers:
 *     ACPITableLoad @ 0x1C0006510 (ACPITableLoad.c)
 * Callees:
 *     AMLISetNSObjectContext @ 0x1C000452C (AMLISetNSObjectContext.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x1C00048D4 (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x1C0004958 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x1C0004AE4 (ACPIFixedFeatureButtonInitialize.c)
 *     IsHypervisorLpiCapable @ 0x1C00051DC (IsHypervisorLpiCapable.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C00089D4 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIGetParent @ 0x1C000B88C (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     AMLIGetNameSpaceObject @ 0x1C000DA28 (AMLIGetNameSpaceObject.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     _ACPIInternalError @ 0x1C0036CD8 (_ACPIInternalError.c)
 *     ACPIPccLegacyInitialize @ 0x1C0065E90 (ACPIPccLegacyInitialize.c)
 *     ACPIEvaluateOscWheaMethodOnRootBus @ 0x1C0065FEC (ACPIEvaluateOscWheaMethodOnRootBus.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0066098 (ACPIAmliEvaluateOsc.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1C006692C (ACPIWriteOscSupportToRegistry.c)
 *     IsHypervisorCpcCapable @ 0x1C007EEDC (IsHypervisorCpcCapable.c)
 */

__int64 ACPIRootInitialize()
{
  unsigned int v0; // edi
  unsigned int v1; // r14d
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 *v5; // rcx
  volatile signed __int32 *v6; // rbx
  __int64 *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // r9
  bool v12; // bl
  __int64 v13; // r8
  unsigned int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  char v19; // al
  __int64 *v20; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+38h] [rbp-38h] BYREF
  int v22[4]; // [rsp+40h] [rbp-30h] BYREF
  int v23[4]; // [rsp+50h] [rbp-20h] BYREF

  v0 = 0;
  v21 = 0;
  v20 = 0LL;
  v1 = 0;
  v2 = 0;
  if ( (int)AMLIGetNameSpaceObject("\\_SB") < 0 )
    ACPIInternalError(0x110992uLL);
  ACPIInitReferenceDeviceExtension(RootDeviceExtension);
  v3 = RootDeviceExtension;
  v4 = (__int64)v20;
  v5 = v20;
  *(_QWORD *)(RootDeviceExtension + 704) = v20;
  AMLISetNSObjectContext(v5, v3);
  ACPIRootDeviceNotifyPepDiscoverDevice();
  ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice();
  ACPIFixedFeatureButtonInitialize();
  v6 = (volatile signed __int32 *)AMLIGetParent(v4);
  v7 = (__int64 *)AMLIGetNamedChild((__int64)v6, 1229867359);
  AMLIDereferenceHandleEx(v6);
  if ( v7 )
  {
    AMLIAsyncEvalObject(v7, 0LL, 0, 0LL, 0LL, 0LL);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v7);
  }
  if ( (AcpiOverrideAttributes & 0x4000) == 0 )
  {
    LODWORD(v20) = 0;
    if ( !(unsigned int)ACPIEvaluateOscWheaMethodOnRootBus(v9, v8, v10, v11, (int *)&v20) )
      v1 = 1;
  }
  ACPIPccLegacyInitialize(v9);
  v12 = IsHypervisorLpiCapable();
  HviGetHypervisorFeatures(v23);
  if ( (*(_QWORD *)v23 & 0x100000000000LL) != 0 )
  {
    v19 = IsHypervisorCpcCapable();
    v14 = AcpiRootFeaturesSupported;
    if ( !v19 )
    {
      v14 = AcpiRootFeaturesSupported & 0xFFFFFF9F;
      AcpiRootFeaturesSupported &= 0xFFFFFF9F;
    }
    if ( !v12 )
    {
      v14 &= ~1u;
      AcpiRootFeaturesSupported = v14;
    }
    v21 |= 1u;
  }
  else
  {
    v14 = AcpiRootFeaturesSupported;
  }
  HIDWORD(v20) = v14;
  LODWORD(v20) = 0;
  v15 = *(_QWORD *)(RootDeviceExtension + 704);
  *(_OWORD *)v22 = SB_OSC_UUID;
  if ( !(unsigned int)ACPIAmliEvaluateOsc(v15, (__int64)v22, v13, 2u, &v20) )
  {
    if ( (AcpiRootFeaturesSupported & 0x10) != 0 )
    {
      v1 = 1;
      v0 = 1;
    }
    if ( (AcpiRootFeaturesSupported & 0x20) != 0 )
      v2 = ((AcpiRootFeaturesSupported & 0x40) != 0) + 1;
  }
  v17 = *(_QWORD *)(RootDeviceExtension + 704);
  *(_OWORD *)v23 = SB_OSC_IOV_UUID;
  ACPIAmliEvaluateOsc(v17, (__int64)v23, v16, 1u, &v21);
  ACPIWriteOscSupportToRegistry(v1, v0, v2);
  return 0LL;
}
