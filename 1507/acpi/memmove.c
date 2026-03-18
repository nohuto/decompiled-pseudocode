/*
 * XREFs of memmove @ 0x1C0023800
 * Callers:
 *     RunContext @ 0x1C0002900 (RunContext.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C0003E30 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIMapNamedTable @ 0x1C0004360 (ACPIMapNamedTable.c)
 *     ACPIBuildProcessorExtension @ 0x1C00071B0 (ACPIBuildProcessorExtension.c)
 *     ACPIBusIrpQueryInterface @ 0x1C0007730 (ACPIBusIrpQueryInterface.c)
 *     ACPIInitStartDevice @ 0x1C0007D8C (ACPIInitStartDevice.c)
 *     ACPIDetectPdoDevices @ 0x1C0008528 (ACPIDetectPdoDevices.c)
 *     ACPIIoctlCalculateOutputBuffer @ 0x1C0009F18 (ACPIIoctlCalculateOutputBuffer.c)
 *     ACPIIoctlCalculateOutputBufferEx @ 0x1C000A700 (ACPIIoctlCalculateOutputBufferEx.c)
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C000BCA8 (ACPIIoctlEvalPreProcessingEx.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C000BE10 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ParseString @ 0x1C000C8B4 (ParseString.c)
 *     GetNameSpaceObject @ 0x1C000D6F8 (GetNameSpaceObject.c)
 *     ACPIDockIsDockDevice @ 0x1C000D7C8 (ACPIDockIsDockDevice.c)
 *     AMLIGetNameSpaceObject @ 0x1C000DA28 (AMLIGetNameSpaceObject.c)
 *     ParseField @ 0x1C000DD70 (ParseField.c)
 *     ParseTerm @ 0x1C000E250 (ParseTerm.c)
 *     CreateNameSpaceObject @ 0x1C000F9D0 (CreateNameSpaceObject.c)
 *     GetNameSpaceObjectNoLock @ 0x1C000FF00 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C00100D0 (ParseSuperName.c)
 *     Method @ 0x1C0010C60 (Method.c)
 *     WriteFieldObj @ 0x1C0011C60 (WriteFieldObj.c)
 *     PushAccFieldObj @ 0x1C0012040 (PushAccFieldObj.c)
 *     FindNSObj @ 0x1C0012550 (FindNSObj.c)
 *     WriteObject @ 0x1C0012B10 (WriteObject.c)
 *     Return @ 0x1C0013F20 (Return.c)
 *     DupObjData @ 0x1C0014040 (DupObjData.c)
 *     ReadFieldObj @ 0x1C0014A40 (ReadFieldObj.c)
 *     AccessBaseField @ 0x1C0015020 (AccessBaseField.c)
 *     ReadField @ 0x1C0015DD0 (ReadField.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C00167B0 (AMLIGetNameSpaceObjectPath.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C0016898 (ACPIAmliBuildObjectPathname.c)
 *     CopyObjBuffer @ 0x1C0016958 (CopyObjBuffer.c)
 *     ACPIDetectDockDevices @ 0x1C0016AE8 (ACPIDetectDockDevices.c)
 *     ReadSystemMem @ 0x1C0016E34 (ReadSystemMem.c)
 *     Buffer @ 0x1C0016F20 (Buffer.c)
 *     WriteSystemMem @ 0x1C0017FA0 (WriteSystemMem.c)
 *     AMLIFindNameSpaceObject @ 0x1C0018E08 (AMLIFindNameSpaceObject.c)
 *     FindNSObjMainNoLock @ 0x1C0018F2C (FindNSObjMainNoLock.c)
 *     ACPIIoctlEnumChildren @ 0x1C0018FF0 (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C0019200 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C001D13C (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C001E4C0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIGetWorkerForBuffer @ 0x1C0020070 (ACPIGetWorkerForBuffer.c)
 *     ParseObjName @ 0x1C0020370 (ParseObjName.c)
 *     ConvertToInteger @ 0x1C0020850 (ConvertToInteger.c)
 *     ParseInteger @ 0x1C0020D14 (ParseInteger.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0035A7C (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDetectEjectDevices @ 0x1C0036CF8 (ACPIDetectEjectDevices.c)
 *     AcpiDeviceResetInterface @ 0x1C0039030 (AcpiDeviceResetInterface.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C003CA70 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C003D708 (ACPIIoctlGetDeviceInformation.c)
 *     IpmiOpRegionHandler @ 0x1C003DAD0 (IpmiOpRegionHandler.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C003F20C (AcpiConvertMethodArgumentsToObjData.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C00403E0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIVectorGetEntry @ 0x1C004180C (ACPIVectorGetEntry.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C0044954 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0044A40 (AMLICreateOverrideObjectDep.c)
 *     RawFieldAccess @ 0x1C0046A3C (RawFieldAccess.c)
 *     Concat @ 0x1C0047810 (Concat.c)
 *     LoadTable @ 0x1C0048080 (LoadTable.c)
 *     ToDecStr @ 0x1C0049080 (ToDecStr.c)
 *     ToHexStr @ 0x1C0049400 (ToHexStr.c)
 *     ConvertToBuffer @ 0x1C00499AC (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0049B70 (ConvertToString.c)
 *     ParseFieldConnection @ 0x1C004A0F0 (ParseFieldConnection.c)
 *     LinkNodepRunSrsWorker @ 0x1C004A810 (LinkNodepRunSrsWorker.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C00652E4 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0066098 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalBuildConstraints @ 0x1C0066214 (ACPIThermalBuildConstraints.c)
 *     OSReadRegValue @ 0x1C0066670 (OSReadRegValue.c)
 *     PnpBiosResourcesToNtResources @ 0x1C0067DC4 (PnpBiosResourcesToNtResources.c)
 *     ACPIInternalGrowBuffer @ 0x1C006841C (ACPIInternalGrowBuffer.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C00690E0 (ACPIFilterIrpQueryInterface.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0069EBC (ACPIProcessPhysicalDeviceLocation.c)
 *     IrqArbpSetDeviceProperties @ 0x1C006B1D4 (IrqArbpSetDeviceProperties.c)
 *     ArbAddOrdering @ 0x1C0070894 (ArbAddOrdering.c)
 *     ACPIGetPnpLocationString @ 0x1C0070AA0 (ACPIGetPnpLocationString.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0071048 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C007140C (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C0071E90 (ACPIBusIrpQueryInstanceId.c)
 *     IrqTranslatorEjectInterface @ 0x1C007336C (IrqTranslatorEjectInterface.c)
 *     ACPIDockIrpQueryInterface @ 0x1C0078880 (ACPIDockIrpQueryInterface.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0078B7C (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcConnectHandler @ 0x1C007A200 (ACPIEcConnectHandler.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C007B27C (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C007B31C (ACPIIoctlTranslateBiosResources.c)
 *     ACPIGetUniqueId @ 0x1C007B790 (ACPIGetUniqueId.c)
 *     ACPIQuerySpareDsm @ 0x1C007B9EC (ACPIQuerySpareDsm.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C007C09C (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C007CA18 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C007CC28 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1C007D09C (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C007D220 (OSReadNextRegValue.c)
 *     PnpiAddSidebandResources @ 0x1C007D384 (PnpiAddSidebandResources.c)
 *     BuildTranslatorRanges @ 0x1C007F3D8 (BuildTranslatorRanges.c)
 *     LinkNodeGetPossibleResources @ 0x1C007FFF8 (LinkNodeGetPossibleResources.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C0080CC4 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbPruneOrdering @ 0x1C0081174 (ArbPruneOrdering.c)
 *     ArbQueryConflict @ 0x1C0081310 (ArbQueryConflict.c)
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 *     RtlDuplicateCmResourceList @ 0x1C00871B8 (RtlDuplicateCmResourceList.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto xmov40;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
xmov40:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto xcpy40;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
xcpy40:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}
