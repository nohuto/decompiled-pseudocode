/*
 * XREFs of memmove @ 0x1C002BE80
 * Callers:
 *     RunContext @ 0x1C0002440 (RunContext.c)
 *     ACPIMapNamedTable @ 0x1C0004DA0 (ACPIMapNamedTable.c)
 *     ACPIIoctlCalculateOutputBuffer @ 0x1C0007CD4 (ACPIIoctlCalculateOutputBuffer.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C0009194 (ACPIThermalCompletePendingIrps.c)
 *     ACPIInitStartDevice @ 0x1C0009FCC (ACPIInitStartDevice.c)
 *     ACPIBuildProcessorExtension @ 0x1C000AFE0 (ACPIBuildProcessorExtension.c)
 *     ACPIBusIrpQueryInterface @ 0x1C000B550 (ACPIBusIrpQueryInterface.c)
 *     ACPIDetectPdoDevices @ 0x1C000D384 (ACPIDetectPdoDevices.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C000FA70 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ParseString @ 0x1C001373C (ParseString.c)
 *     GetNameSpaceObject @ 0x1C00140F8 (GetNameSpaceObject.c)
 *     ACPIDockIsDockDevice @ 0x1C0014200 (ACPIDockIsDockDevice.c)
 *     AMLIGetNameSpaceObject @ 0x1C0014844 (AMLIGetNameSpaceObject.c)
 *     Method @ 0x1C00149E0 (Method.c)
 *     ReadField @ 0x1C0015220 (ReadField.c)
 *     ParseField @ 0x1C0015710 (ParseField.c)
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     CreateNameSpaceObject @ 0x1C00175D0 (CreateNameSpaceObject.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0017B60 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0017D40 (ParseSuperName.c)
 *     Return @ 0x1C00189D0 (Return.c)
 *     DupObjData @ 0x1C0018AF0 (DupObjData.c)
 *     WriteObject @ 0x1C00191F0 (WriteObject.c)
 *     FindNSObj @ 0x1C0019470 (FindNSObj.c)
 *     PushAccFieldObj @ 0x1C0019C90 (PushAccFieldObj.c)
 *     WriteFieldObj @ 0x1C001AB70 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x1C001C410 (ReadFieldObj.c)
 *     AccessBaseField @ 0x1C001CA40 (AccessBaseField.c)
 *     WriteSystemMem @ 0x1C001DFF0 (WriteSystemMem.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C001E144 (AMLIGetNameSpaceObjectPath.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C001E22C (ACPIAmliBuildObjectPathname.c)
 *     ACPIDetectDockDevices @ 0x1C001EB70 (ACPIDetectDockDevices.c)
 *     ReadSystemMem @ 0x1C001F00C (ReadSystemMem.c)
 *     AMLIFindNameSpaceObject @ 0x1C0020F88 (AMLIFindNameSpaceObject.c)
 *     FindNSObjMainNoLock @ 0x1C00210AC (FindNSObjMainNoLock.c)
 *     ACPIIoctlEnumChildren @ 0x1C0021170 (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C0021380 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C00236A4 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C002499C (ACPIIoctlEvalPreProcessingEx.c)
 *     ACPIIoctlCalculateOutputBufferEx @ 0x1C0024C20 (ACPIIoctlCalculateOutputBufferEx.c)
 *     Buffer @ 0x1C0026AA0 (Buffer.c)
 *     CopyObjBuffer @ 0x1C0026B8C (CopyObjBuffer.c)
 *     ACPIGetWorkerForBuffer @ 0x1C0026F40 (ACPIGetWorkerForBuffer.c)
 *     ParseObjName @ 0x1C002745C (ParseObjName.c)
 *     ConvertToInteger @ 0x1C0027AE4 (ConvertToInteger.c)
 *     ParseInteger @ 0x1C00283B8 (ParseInteger.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00286B8 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C002B530 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C00461DC (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDetectEjectDevices @ 0x1C0048368 (ACPIDetectEjectDevices.c)
 *     AcpiDeviceResetInterface @ 0x1C004BB60 (AcpiDeviceResetInterface.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C004F360 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C0050858 (ACPIIoctlGetDeviceInformation.c)
 *     IpmiOpRegionHandler @ 0x1C0050E80 (IpmiOpRegionHandler.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C0052F44 (AcpiConvertMethodArgumentsToObjData.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0054EC0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIVectorGetEntry @ 0x1C0057D5C (ACPIVectorGetEntry.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C005BB00 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C005BBEC (AMLICreateOverrideObjectDep.c)
 *     RawFieldAccess @ 0x1C005DA7C (RawFieldAccess.c)
 *     Concat @ 0x1C005E940 (Concat.c)
 *     LoadTable @ 0x1C005F290 (LoadTable.c)
 *     ToDecStr @ 0x1C00603C0 (ToDecStr.c)
 *     ToHexStr @ 0x1C0060760 (ToHexStr.c)
 *     ConvertToBuffer @ 0x1C0060D94 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C0060F58 (ConvertToString.c)
 *     ParseFieldConnection @ 0x1C00614D8 (ParseFieldConnection.c)
 *     LinkNodepRunSrsWorker @ 0x1C0061CB0 (LinkNodepRunSrsWorker.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C0080000 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0081520 (ACPIAmliEvaluateOsc.c)
 *     ACPIThermalBuildConstraints @ 0x1C00817DC (ACPIThermalBuildConstraints.c)
 *     IrqTranslatorEjectInterface @ 0x1C0083B58 (IrqTranslatorEjectInterface.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C0084F60 (ACPIFilterIrpQueryInterface.c)
 *     ACPIInternalGrowBuffer @ 0x1C0085724 (ACPIInternalGrowBuffer.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008614C (PnpBiosResourcesToNtResources.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C00872CC (ACPIProcessPhysicalDeviceLocation.c)
 *     ArbAddOrdering @ 0x1C00885B0 (ArbAddOrdering.c)
 *     IrqArbpSetDeviceProperties @ 0x1C0088E18 (IrqArbpSetDeviceProperties.c)
 *     OSReadRegValue @ 0x1C008D4A4 (OSReadRegValue.c)
 *     ACPIGetPnpLocationString @ 0x1C008E4E0 (ACPIGetPnpLocationString.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C008EEB4 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C008F2C0 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C008FBC4 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIDockIrpQueryInterface @ 0x1C0098AC0 (ACPIDockIrpQueryInterface.c)
 *     WppTraceCallback @ 0x1C0099190 (WppTraceCallback.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C0099468 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcConnectHandler @ 0x1C009B0F0 (ACPIEcConnectHandler.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C009C6B4 (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C009C754 (ACPIIoctlTranslateBiosResources.c)
 *     ACPIGetUniqueId @ 0x1C009CBD0 (ACPIGetUniqueId.c)
 *     ACPIQuerySpareDsm @ 0x1C009CE2C (ACPIQuerySpareDsm.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C009D54C (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C009E090 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C009E2CC (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1C009E764 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C009E948 (OSReadNextRegValue.c)
 *     PnpiAddSidebandResources @ 0x1C009EB0C (PnpiAddSidebandResources.c)
 *     BuildTranslatorRanges @ 0x1C00A1028 (BuildTranslatorRanges.c)
 *     LinkNodeGetPossibleResources @ 0x1C00A1D18 (LinkNodeGetPossibleResources.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00A2AA4 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbPruneOrdering @ 0x1C00A2F54 (ArbPruneOrdering.c)
 *     ArbQueryConflict @ 0x1C00A30F0 (ArbQueryConflict.c)
 *     AMLIInitialize @ 0x1C00A6000 (AMLIInitialize.c)
 *     RtlDuplicateCmResourceList @ 0x1C00A9BB4 (RtlDuplicateCmResourceList.c)
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
