/*
 * XREFs of memmove @ 0x1C0024E80
 * Callers:
 *     RunContext @ 0x1C00028F0 (RunContext.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C0003E60 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIMapNamedTable @ 0x1C0004920 (ACPIMapNamedTable.c)
 *     ACPIInitStartDevice @ 0x1C00083A0 (ACPIInitStartDevice.c)
 *     ACPIIoctlCalculateOutputBuffer @ 0x1C0009D7C (ACPIIoctlCalculateOutputBuffer.c)
 *     ACPIIoctlCalculateOutputBufferEx @ 0x1C000A7D0 (ACPIIoctlCalculateOutputBufferEx.c)
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C000C1B8 (ACPIIoctlEvalPreProcessingEx.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C000C320 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ParseString @ 0x1C000CDDC (ParseString.c)
 *     CopyObjBuffer @ 0x1C000D384 (CopyObjBuffer.c)
 *     GetNameSpaceObject @ 0x1C000DDCC (GetNameSpaceObject.c)
 *     ACPIDockIsDockDevice @ 0x1C000DE9C (ACPIDockIsDockDevice.c)
 *     AMLIGetNameSpaceObject @ 0x1C000E05C (AMLIGetNameSpaceObject.c)
 *     WriteObject @ 0x1C000EC20 (WriteObject.c)
 *     ParseField @ 0x1C000EF50 (ParseField.c)
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     CreateNameSpaceObject @ 0x1C0010A20 (CreateNameSpaceObject.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0010F50 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0011120 (ParseSuperName.c)
 *     FindNSObj @ 0x1C0012060 (FindNSObj.c)
 *     PushAccFieldObj @ 0x1C00131C0 (PushAccFieldObj.c)
 *     WriteFieldObj @ 0x1C00132F0 (WriteFieldObj.c)
 *     Method @ 0x1C0014540 (Method.c)
 *     Return @ 0x1C0014E50 (Return.c)
 *     DupObjData @ 0x1C0014F70 (DupObjData.c)
 *     ReadFieldObj @ 0x1C0015970 (ReadFieldObj.c)
 *     AccessBaseField @ 0x1C0016130 (AccessBaseField.c)
 *     ReadField @ 0x1C0016EB0 (ReadField.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C001768C (AMLIGetNameSpaceObjectPath.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C0017774 (ACPIAmliBuildObjectPathname.c)
 *     ACPIDetectDockDevices @ 0x1C0017930 (ACPIDetectDockDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0017A20 (ACPIDetectPdoDevices.c)
 *     ReadSystemMem @ 0x1C001821C (ReadSystemMem.c)
 *     WriteSystemMem @ 0x1C0018348 (WriteSystemMem.c)
 *     AMLIFindNameSpaceObject @ 0x1C0018D3C (AMLIFindNameSpaceObject.c)
 *     FindNSObjMainNoLock @ 0x1C0018E60 (FindNSObjMainNoLock.c)
 *     ACPIIoctlEnumChildren @ 0x1C0018F24 (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C001918C (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C001A42C (ACPIThermalCompletePendingIrps.c)
 *     ACPIBusIrpQueryInterface @ 0x1C001D4E0 (ACPIBusIrpQueryInterface.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C001DFC8 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C001F350 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     Buffer @ 0x1C0020230 (Buffer.c)
 *     ACPIGetWorkerForBuffer @ 0x1C0020640 (ACPIGetWorkerForBuffer.c)
 *     ParseObjName @ 0x1C0020940 (ParseObjName.c)
 *     ConvertToInteger @ 0x1C0020E10 (ConvertToInteger.c)
 *     ACPIBuildProcessorExtension @ 0x1C00214D0 (ACPIBuildProcessorExtension.c)
 *     ParseInteger @ 0x1C002161C (ParseInteger.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0024420 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C003673C (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDetectEjectDevices @ 0x1C00378E8 (ACPIDetectEjectDevices.c)
 *     AcpiDeviceResetInterface @ 0x1C0039C30 (AcpiDeviceResetInterface.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C003D2F8 (ACPIIoctlGetDeviceInformation.c)
 *     IpmiOpRegionHandler @ 0x1C003D6C0 (IpmiOpRegionHandler.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C003ED4C (AcpiConvertMethodArgumentsToObjData.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C003FE90 (InternalRawAccessOpRegionHandler.c)
 *     ACPIVectorGetEntry @ 0x1C004124C (ACPIVectorGetEntry.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C0044374 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C0044460 (AMLICreateOverrideObjectDep.c)
 *     RawFieldAccess @ 0x1C004635C (RawFieldAccess.c)
 *     Concat @ 0x1C0047120 (Concat.c)
 *     LoadTable @ 0x1C0047990 (LoadTable.c)
 *     ToDecStr @ 0x1C0048990 (ToDecStr.c)
 *     ToHexStr @ 0x1C0048D10 (ToHexStr.c)
 *     ConvertToBuffer @ 0x1C00492BC (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0049480 (ConvertToString.c)
 *     ParseFieldConnection @ 0x1C0049A00 (ParseFieldConnection.c)
 *     LinkNodepRunSrsWorker @ 0x1C004A120 (LinkNodepRunSrsWorker.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C00652F4 (ACPIBusIrpQueryHardwareId.c)
 *     OSReadRegValue @ 0x1C006630C (OSReadRegValue.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0066990 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalBuildConstraints @ 0x1C0066D3C (ACPIThermalBuildConstraints.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C00674BC (ACPIProcessPhysicalDeviceLocation.c)
 *     IrqArbpSetDeviceProperties @ 0x1C0068D0C (IrqArbpSetDeviceProperties.c)
 *     ArbAddOrdering @ 0x1C006E4F4 (ArbAddOrdering.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C006ECA0 (ACPIFilterIrpQueryInterface.c)
 *     PnpBiosResourcesToNtResources @ 0x1C006FE94 (PnpBiosResourcesToNtResources.c)
 *     ACPIInternalGrowBuffer @ 0x1C00704EC (ACPIInternalGrowBuffer.c)
 *     IrqTranslatorEjectInterface @ 0x1C0070808 (IrqTranslatorEjectInterface.c)
 *     ACPIGetPnpLocationString @ 0x1C0070990 (ACPIGetPnpLocationString.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0070F38 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C00712FC (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C0071D80 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIDockIrpQueryInterface @ 0x1C00789E0 (ACPIDockIrpQueryInterface.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0078CDC (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcConnectHandler @ 0x1C007A360 (ACPIEcConnectHandler.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C007B45C (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C007B4FC (ACPIIoctlTranslateBiosResources.c)
 *     ACPIGetUniqueId @ 0x1C007B970 (ACPIGetUniqueId.c)
 *     ACPIQuerySpareDsm @ 0x1C007BBCC (ACPIQuerySpareDsm.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C007C27C (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C007CBF8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C007CE08 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1C007D27C (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C007D400 (OSReadNextRegValue.c)
 *     PnpiAddSidebandResources @ 0x1C007D564 (PnpiAddSidebandResources.c)
 *     BuildTranslatorRanges @ 0x1C007F5B8 (BuildTranslatorRanges.c)
 *     LinkNodeGetPossibleResources @ 0x1C00801D8 (LinkNodeGetPossibleResources.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C0080EA4 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbPruneOrdering @ 0x1C0081354 (ArbPruneOrdering.c)
 *     ArbQueryConflict @ 0x1C00814F0 (ArbQueryConflict.c)
 *     AMLIInitialize @ 0x1C0084CC0 (AMLIInitialize.c)
 *     RtlDuplicateCmResourceList @ 0x1C00871D8 (RtlDuplicateCmResourceList.c)
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
