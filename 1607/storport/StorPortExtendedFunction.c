/*
 * XREFs of StorPortExtendedFunction @ 0x1C0007ED0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0002BC8 (RaidAdapterFindUnit.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0003544 (RaidUnitCheckAndAcquirePoFx.c)
 *     StorpRequestTimer @ 0x1C0009378 (StorpRequestTimer.c)
 *     StorpAcquireMSISpinLock @ 0x1C0009C40 (StorpAcquireMSISpinLock.c)
 *     StorpReleaseMSISpinLock @ 0x1C0009CDC (StorpReleaseMSISpinLock.c)
 *     RaidGetD3ColdInterface @ 0x1C00104A4 (RaidGetD3ColdInterface.c)
 *     StorpAllocatePool @ 0x1C0017764 (StorpAllocatePool.c)
 *     StorpInitializeTimer @ 0x1C00177B4 (StorpInitializeTimer.c)
 *     StorpGetMSIInfo @ 0x1C0018114 (StorpGetMSIInfo.c)
 *     StorpInitializeWorkItem @ 0x1C0018568 (StorpInitializeWorkItem.c)
 *     RaidGetD3ColdCapability @ 0x1C001899C (RaidGetD3ColdCapability.c)
 *     RaidGetStartIoPerfParams @ 0x1C0018AE0 (RaidGetStartIoPerfParams.c)
 *     RaidInitializePerfOpts @ 0x1C0018D9C (RaidInitializePerfOpts.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C0019138 (StorpAdapterInitializePoFxPower.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C0019940 (StorPortpInvokeAcpiMethod.c)
 *     RaidNtStatusToStorStatus @ 0x1C00199C4 (RaidNtStatusToStorStatus.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C0019D24 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorpGetRequestInfo @ 0x1C001A1C8 (StorpGetRequestInfo.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00276B0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidInitializeRpmb @ 0x1C002A1E4 (RaidInitializeRpmb.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002A39C (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     Template_pqqq @ 0x1C002A8DC (Template_pqqq.c)
 *     WPP_SF_ @ 0x1C002AE28 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1C002AE50 (WPP_SF_D.c)
 *     RaidAdapterCacheOperationalPowerRange @ 0x1C002CDF8 (RaidAdapterCacheOperationalPowerRange.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C002CE94 (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C002CEF4 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C002D044 (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorBuildScatterGatherListProxy @ 0x1C002D210 (StorBuildScatterGatherListProxy.c)
 *     StorDelayExecution @ 0x1C002D270 (StorDelayExecution.c)
 *     StorEtwMiniportEventProxy @ 0x1C002D2A8 (StorEtwMiniportEventProxy.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNode @ 0x1C002E5CC (StorpAllocateContiguousMemorySpecifyCacheNode.c)
 *     StorpAllocateHostMemoryBuffer @ 0x1C002E634 (StorpAllocateHostMemoryBuffer.c)
 *     StorpAllocateMdl @ 0x1C002E874 (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C002E9A4 (StorpBuildMdlForNonPagedPool.c)
 *     StorpCompleteServiceIrp @ 0x1C002EB8C (StorpCompleteServiceIrp.c)
 *     StorpFlushDataBufferMdl @ 0x1C002EBD8 (StorpFlushDataBufferMdl.c)
 *     StorpFreeHostMemoryBuffer @ 0x1C002EC34 (StorpFreeHostMemoryBuffer.c)
 *     StorpFreeMdl @ 0x1C002EC98 (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C002ED34 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C002EF54 (StorpFreeWorkItem.c)
 *     StorpGetActiveNodeCount @ 0x1C002F114 (StorpGetActiveNodeCount.c)
 *     StorpGetDataInSgList @ 0x1C002F194 (StorpGetDataInSgList.c)
 *     StorpGetOriginalMdl @ 0x1C002F3B0 (StorpGetOriginalMdl.c)
 *     StorpGetSystemAddress @ 0x1C002F428 (StorpGetSystemAddress.c)
 *     StorpLogSystemEvent @ 0x1C002F598 (StorpLogSystemEvent.c)
 *     StorpPutScatterGatherList @ 0x1C002F6CC (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C002F7C8 (StorpQueueWorkItem.c)
 *     StorpSetUnitAttributes @ 0x1C002F8F4 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C002F9A8 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterPerfStates @ 0x1C0030C00 (RaidRegisterPerfStates.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C003D7B0 (StorpLogRegisterAdapterPerfStates.c)
 */

__int64 __fastcall StorPortExtendedFunction(
        __int64 a1,
        __int64 a2,
        struct _PROCESSOR_NUMBER *a3,
        GUID *a4,
        GUID *a5,
        PULONG a6,
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        _QWORD *a9,
        __int64 a10,
        __int64 a11)
{
  unsigned __int64 Mask; // rdi
  unsigned int v12; // r15d
  __int64 v13; // r14
  unsigned int v14; // ebx
  PDEVICE_OBJECT v16; // r10
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  struct _GROUP_AFFINITY *v19; // r8
  _QWORD *v20; // rcx
  struct _GROUP_AFFINITY *v21; // rbx
  USHORT v22; // r14
  PPROCESSOR_NUMBER v23; // rbx
  PPROCESSOR_NUMBER v24; // rbx
  struct _GROUP_AFFINITY *v25; // rbx
  ULONG ProcessorIndexFromNumber; // eax
  NTSTATUS LogicalProcessorRelationship; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  struct _GROUP_AFFINITY *v30; // rbx
  struct _GROUP_AFFINITY *v31; // rbx
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX v32; // rbx
  struct _GROUP_AFFINITY *v33; // rbx
  __int64 v34; // rax
  PPROCESSOR_NUMBER v35; // rcx
  LARGE_INTEGER *v36; // rbx
  union _LARGE_INTEGER *v37; // rcx
  int v38; // r15d
  unsigned int v39; // r12d
  __int64 v40; // r9
  char v41; // al
  unsigned __int8 CurrentIrql; // r14
  __int64 Unit; // rax
  __int64 v44; // rsi
  __int64 v45; // r8
  __int64 v46; // r8
  unsigned int v47; // r15d
  __int64 v48; // r8
  __int64 v49; // rax
  unsigned int v50; // ebx
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX v51; // r15
  __int64 v52; // r8
  __int64 v53; // rax
  _QWORD *v54; // rcx
  unsigned int v55; // eax
  _QWORD *v56; // rcx
  unsigned int v57; // edx
  unsigned int v58; // ebx
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX v59; // r15
  __int64 v60; // r8
  __int64 v61; // rax
  _QWORD *v62; // rcx
  unsigned int v63; // eax
  _QWORD *v64; // rcx
  unsigned int v65; // edx
  __int64 v66; // r8
  struct _GROUP_AFFINITY *v67; // r15
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX v68; // r12
  PULONG v69; // r13
  _QWORD *v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rdi
  unsigned int v73; // eax
  _QWORD *v74; // rcx
  __int64 v75; // rsi
  __int64 v76; // rbx
  _QWORD *v77; // rcx
  int v78; // ecx
  unsigned int v79; // r15d
  PHYSICAL_ADDRESS v80; // rsi
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 *v85; // rcx
  unsigned __int8 v86; // r9
  unsigned __int8 v87; // al
  __int64 v88; // rcx
  PPROCESSOR_NUMBER v89; // rdx
  struct _GROUP_AFFINITY *v90; // r15
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX v91; // rsi
  __int64 v92; // rcx
  PPROCESSOR_NUMBER v93; // rdx
  struct _GROUP_AFFINITY *v94; // rsi
  __int64 v95; // rcx
  __int64 v96; // rax
  struct _DEVICE_OBJECT *v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rcx
  unsigned int v102; // eax
  __int64 v103; // rcx
  unsigned int v104; // [rsp+50h] [rbp-19h]
  PHYSICAL_ADDRESS v105; // [rsp+58h] [rbp-11h]
  PHYSICAL_ADDRESS v106; // [rsp+60h] [rbp-9h] BYREF
  __int64 v107; // [rsp+68h] [rbp-1h]
  PPROCESSOR_NUMBER v109; // [rsp+E0h] [rbp+77h] BYREF
  struct _GROUP_AFFINITY *v110; // [rsp+E8h] [rbp+7Fh]

  v109 = a3;
  v110 = (struct _GROUP_AFFINITY *)a4;
  Mask = 0LL;
  v12 = a1;
  v13 = a2;
  v14 = -1056964606;
  if ( !a2 )
    return 3238002694LL;
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      79LL,
      &WPP_adf5a490639137350fe391398fd0549f_Traceguids,
      (unsigned int)a1);
    v16 = WPP_GLOBAL_Control;
    v13 = a2;
  }
  v17 = 0x1C0000000uLL;
  switch ( v12 )
  {
    case 0u:
      return (unsigned int)StorpAllocatePool(a1, (unsigned int)v109, (unsigned int)v110, a5);
    case 1u:
      v14 = 0;
      if ( !v109 )
      {
        if ( v16 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v16->Timer) & 0x10) != 0 && BYTE1(v16->Timer) >= 2u )
        {
          v18 = (unsigned int)((_DWORD)v109 + 29);
          goto LABEL_14;
        }
        return (unsigned int)-1056964602;
      }
      if ( KeGetCurrentIrql() <= 2u )
      {
        ExFreePoolWithTag(v109, 0);
        return v14;
      }
      if ( v16 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v16->Timer) & 0x10) != 0 && BYTE1(v16->Timer) >= 2u )
      {
        WPP_SF_(v16->AttachedDevice, 30LL, &WPP_adf5a490639137350fe391398fd0549f_Traceguids, a4);
        return (unsigned int)-1056964600;
      }
      return (unsigned int)-1056964600;
    case 2u:
      return (unsigned int)StorpAllocateMdl(a1, v109, (unsigned int)v110, a5);
    case 3u:
      return (unsigned int)StorpFreeMdl(a1, v109);
    case 4u:
      return (unsigned int)StorpBuildMdlForNonPagedPool(a1, v109);
    case 5u:
      return (unsigned int)StorpGetSystemAddress(a1, v109, 0LL, v110);
    case 6u:
      return (unsigned int)StorpGetOriginalMdl(a1, v109, 0LL, v110);
    case 7u:
      return (unsigned int)StorpCompleteServiceIrp(v13, v109);
    case 8u:
      v14 = 0;
      v19 = v110;
      a4 = a5;
      if ( v13 )
      {
        if ( v109 )
        {
          if ( v110 )
          {
            if ( a5 )
            {
              v20 = **(_QWORD ***)(v13 - 16);
              *(_QWORD *)&v109->Group = v20[1];
              v19->Mask = v20[4];
              *(_QWORD *)&a4->Data1 = v20[3];
              return v14;
            }
            if ( v16 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(v16->Timer) & 0x10) != 0
              && BYTE1(v16->Timer) >= 2u )
            {
              v18 = (unsigned int)((_DWORD)a5 + 48);
              goto LABEL_14;
            }
          }
          else if ( v16 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(v16->Timer) & 0x10) != 0
                 && BYTE1(v16->Timer) >= 2u )
          {
            v18 = (unsigned int)((_DWORD)v110 + 47);
            goto LABEL_14;
          }
        }
        else if ( v16 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(v16->Timer) & 0x10) != 0
               && BYTE1(v16->Timer) >= 2u )
        {
          v18 = 46LL;
          goto LABEL_14;
        }
      }
      else if ( v16 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(v16->Timer) & 0x10) != 0
             && BYTE1(v16->Timer) >= 2u )
      {
        v18 = 45LL;
LABEL_14:
        WPP_SF_(v16->AttachedDevice, v18, &WPP_adf5a490639137350fe391398fd0549f_Traceguids, a4);
        return (unsigned int)-1056964602;
      }
      return (unsigned int)-1056964602;
    case 9u:
      return (unsigned int)StorBuildScatterGatherListProxy(v13, &v109);
    case 0xAu:
      return (unsigned int)StorpPutScatterGatherList(v13, v109, (unsigned __int8)v110);
    case 0xBu:
      return (unsigned int)StorpAcquireMSISpinLock(v13, (unsigned int)v109, v110);
    case 0xCu:
      return (unsigned int)StorpReleaseMSISpinLock(v13, (unsigned int)v109, (unsigned int)v110);
    case 0xDu:
      return (unsigned int)StorpGetMSIInfo(v13, (unsigned int)v109, v110);
    case 0xEu:
      return (unsigned int)RaidInitializePerfOpts(v13, (unsigned __int8)v109, v110);
    case 0xFu:
      return (unsigned int)RaidGetStartIoPerfParams(v13, v109, v110);
    case 0x10u:
      return (unsigned int)StorpLogSystemEvent(v13, v109, v110);
    case 0x11u:
      if ( !v109 )
        return (unsigned int)-1056964602;
      KeGetCurrentProcessorNumberEx(v109);
      return 0;
    case 0x12u:
      v23 = v109;
      if ( !v109 )
        return (unsigned int)-1056964602;
      v23->Group = KeQueryActiveGroupCount();
      return 0;
    case 0x13u:
      v21 = v110;
      v22 = (unsigned __int16)v109;
      if ( !v110 )
        return (unsigned int)-1056964602;
      if ( v22 > KeQueryActiveGroupCount() )
        return (unsigned int)-1056964607;
      v21->Mask = KeQueryGroupAffinity(v22);
      return 0;
    case 0x14u:
      return (unsigned int)StorpGetActiveNodeCount(a1, v109);
    case 0x15u:
      if ( !v110 || (unsigned int)v109 > 0xFFFF )
        return (unsigned int)-1056964602;
      KeQueryNodeActiveAffinity((USHORT)v109, v110, 0LL);
      return 0;
    case 0x16u:
      v24 = v109;
      if ( !v109 )
        return (unsigned int)-1056964602;
      *v24 = (struct _PROCESSOR_NUMBER)KeQueryHighestNodeNumber();
      return 0;
    case 0x17u:
      LogicalProcessorRelationship = KeQueryLogicalProcessorRelationship(
                                       v109,
                                       (LOGICAL_PROCESSOR_RELATIONSHIP)v110,
                                       (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)a5,
                                       a6);
      if ( LogicalProcessorRelationship == -1073741820 )
        return (unsigned int)-1056964604;
      if ( LogicalProcessorRelationship == -1073741811 )
        return (unsigned int)-1056964602;
      return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
    case 0x18u:
      return (unsigned int)StorpAllocateContiguousMemorySpecifyCacheNode(
                             (_DWORD)a9,
                             (_DWORD)v109,
                             (_DWORD)v110,
                             (_DWORD)a5,
                             (__int64)a6,
                             LowAddress.LowPart,
                             HighAddress.LowPart,
                             (__int64)a9);
    case 0x19u:
      MmFreeContiguousMemorySpecifyCache(v109, (SIZE_T)v110, (MEMORY_CACHING_TYPE)a5);
      return 0;
    case 0x1Au:
      return (unsigned int)StorPortpSetPowerSettingNotificationGuids(v13, (unsigned int)v109, v110);
    case 0x1Bu:
      return (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD))StorPortpInvokeAcpiMethod)(
                             v13,
                             v109,
                             (PHYSICAL_ADDRESS)LowAddress.QuadPart,
                             a5,
                             (_DWORD)a6,
                             (PHYSICAL_ADDRESS)LowAddress.QuadPart,
                             HighAddress.LowPart,
                             a9);
    case 0x1Cu:
      return (unsigned int)StorpGetRequestInfo(a1, v109, v110);
    case 0x1Du:
      return (unsigned int)StorpInitializeWorkItem(v13, v109);
    case 0x1Eu:
      return (unsigned int)StorpQueueWorkItem(v13, v109, v110, a5);
    case 0x1Fu:
      return (unsigned int)StorpFreeWorkItem(v13, v109);
    case 0x20u:
      return (unsigned int)StorpInitializeTimer(v13, v109);
    case 0x21u:
      return (unsigned int)StorpRequestTimer(
                             v13,
                             (_DWORD)v109,
                             (_DWORD)v110,
                             (_DWORD)a5,
                             (__int64)a6,
                             LowAddress.QuadPart);
    case 0x22u:
      return (unsigned int)StorpFreeTimer(v13, v109);
    case 0x23u:
      InitializeSListHead((PSLIST_HEADER)v109);
      return 0;
    case 0x24u:
      v30 = v110;
      v30->Mask = (unsigned __int64)ExpInterlockedFlushSList((PSLIST_HEADER)v109);
      return 0;
    case 0x25u:
      v31 = v110;
      v31->Mask = (unsigned __int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v109);
      return 0;
    case 0x26u:
      v32 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)a5;
      *(_QWORD *)&v32->Relationship = ExpInterlockedPushEntrySList((PSLIST_HEADER)v109, (PSLIST_ENTRY)v110);
      return 0;
    case 0x27u:
      v33 = v110;
      LOWORD(v33->Mask) = ExQueryDepthSList((PSLIST_HEADER)v109);
      return 0;
    case 0x28u:
      if ( !v109 || !v110 )
        return (unsigned int)-1056964602;
      if ( v109->Number == 40 )
      {
        v28 = *(_QWORD *)&v109[20].Group;
      }
      else
      {
        v29 = *(_QWORD *)&v109[12].Group;
        if ( !v29 || *(_DWORD *)v29 != 523124044 )
          goto LABEL_99;
        v28 = *(_QWORD *)(v29 + 176);
      }
      if ( v28 )
      {
        v14 = -1056964607;
        if ( (int)IoGetActivityIdIrp(v28, v110) >= 0 )
          return 0;
        return v14;
      }
LABEL_99:
      v14 = -1056964607;
      if ( EtwActivityIdControl(3u, (LPGUID)v110) >= 0 )
        return 0;
      return v14;
    case 0x29u:
      v34 = *(_QWORD *)(v13 - 16);
      v35 = v109;
      if ( *(_DWORD *)(*(_QWORD *)v34 + 56LL) == -1 )
        return (unsigned int)-1056964599;
      if ( !v109 || v109->Group != 1 || *(_DWORD *)&v109[1] < 4u )
        return (unsigned int)-1056964602;
      v14 = 0;
      *(_WORD *)&v109->Number = *(_WORD *)(*(_QWORD *)v34 + 56LL);
      v35[2].Group = -1;
      v35[2].Number = -1;
      return v14;
    case 0x2Au:
      LOBYTE(a3) = 1;
      return (unsigned int)StorpGetOriginalMdl(a1, v109, a3, v110);
    case 0x2Bu:
      LOBYTE(a3) = 1;
      return (unsigned int)StorpGetSystemAddress(a1, v109, a3, v110);
    case 0x2Cu:
      return (unsigned int)StorpGetDataInSgList(a1, v109, v110);
    case 0x2Eu:
      return (unsigned int)StorpSetUnitAttributes(v13, v109, (unsigned int)v110);
    case 0x2Fu:
      v36 = (LARGE_INTEGER *)v110;
      v37 = (union _LARGE_INTEGER *)v109;
      if ( !v110 )
        return (unsigned int)-1056964602;
      if ( v109 )
        *(_QWORD *)&v109->Group = 1LL;
      if ( UseQPCTime )
        *v36 = KeQueryPerformanceCounter(v37);
      else
        v36->QuadPart = KeQueryUnbiasedInterruptTime();
      return 0;
    case 0x30u:
      if ( KeGetCurrentIrql() )
        return (unsigned int)-1056964600;
      if ( v109 )
        return (unsigned int)StorpUnitInitializePoFxPower(v13, v109, v110, a5);
      else
        return (unsigned int)StorpAdapterInitializePoFxPower(v13, v110, a5);
    case 0x31u:
      v38 = 0;
      v14 = 0;
      v39 = (unsigned int)a5;
      v40 = **(_QWORD **)(v13 - 16);
      if ( !v110 )
        goto LABEL_144;
      v41 = BYTE2(v110->Mask);
      if ( v41 == 40 )
        Mask = v110[6].Mask;
      else
        Mask = v110[3].Mask;
      if ( !Mask || *(_DWORD *)Mask != 523124044 )
        return (unsigned int)-1056964602;
      if ( v41 == 40 )
        v38 = *(_DWORD *)&v110[1].Group;
      else
        v38 = *(_DWORD *)&v110->Reserved[1];
LABEL_144:
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 2u )
        return (unsigned int)-1056964600;
      if ( (_DWORD)a6 )
        return (unsigned int)-1056964602;
      if ( v109 )
      {
        if ( v109->Group != 1 )
          return (unsigned int)-1056964602;
        if ( *(_DWORD *)&v109[1] < 4u )
          return (unsigned int)-1056964602;
        LOWORD(v104) = v109[2].Group;
        BYTE2(v104) = v109[2].Number;
        Unit = RaidAdapterFindUnit(v40, v104, (unsigned int)a6, v40);
        v44 = Unit;
        if ( !Unit )
          return (unsigned int)-1056964602;
        if ( (v38 & 0x100800) == 0 )
          goto LABEL_155;
        if ( RaidUnitCheckAndAcquirePoFx(Unit) )
          goto LABEL_199;
        if ( *(_QWORD *)(*(_QWORD *)(v44 + 24) + 5088LL) )
        {
LABEL_155:
          if ( CurrentIrql == 2 || (*(_BYTE *)(v44 + 153) & 1) != 0 || *(char *)(v44 + 152) < 0 )
            v45 = 2LL;
          else
            v45 = 0LL;
          v14 = RaidUnitPoFxActivateComponentFromMiniport(v44, v39, v45);
          if ( Mask )
            *(_BYTE *)(Mask + 16) |= 0x80u;
        }
      }
      else
      {
        if ( !*(_QWORD *)(v40 + 5088) || (v38 & 0x100800) != 0 )
          return (unsigned int)-1056964601;
        if ( CurrentIrql == 2 || (*(_BYTE *)(v40 + 108) & 3) != 0 )
          v46 = 2LL;
        else
          v46 = 0LL;
        v14 = RaidAdapterPoFxActivateComponentFromMiniport(v40, (unsigned int)a5, v46);
        if ( Mask )
          *(_BYTE *)(Mask + 16) |= 0x80u;
      }
      return v14;
    case 0x32u:
      v14 = 0;
      v47 = (unsigned int)a5;
      v48 = **(_QWORD **)(v13 - 16);
      if ( !v110 )
        goto LABEL_175;
      if ( BYTE2(v110->Mask) == 40 )
        Mask = v110[6].Mask;
      else
        Mask = v110[3].Mask;
      if ( !Mask || *(_DWORD *)Mask != 523124044 )
        return (unsigned int)-1056964602;
      if ( *(char *)(Mask + 16) >= 0 )
        return v14;
LABEL_175:
      if ( KeGetCurrentIrql() > 2u && !Mask )
        return (unsigned int)-1056964600;
      if ( (_DWORD)a6 )
        return (unsigned int)-1056964602;
      if ( !v109 )
      {
        if ( !*(_QWORD *)(v48 + 5088) )
          return (unsigned int)-1056964601;
        if ( KeGetCurrentIrql() <= 2u )
        {
          return (unsigned int)RaidAdapterPoFxIdleComponentFromMiniport(**(_QWORD **)(v13 - 16), (unsigned int)a5);
        }
        else
        {
          *(_BYTE *)(Mask + 17) |= 1u;
          v14 = -1056964596;
          *(_DWORD *)(Mask + 748) = v47;
        }
        return v14;
      }
      if ( v109->Group == 1 && *(_DWORD *)&v109[1] >= 4u )
      {
        LOWORD(v104) = v109[2].Group;
        BYTE2(v104) = v109[2].Number;
        v49 = RaidAdapterFindUnit(v48, v104, v48, (unsigned int)a6);
        if ( v49 )
        {
          if ( KeGetCurrentIrql() <= 2u )
          {
            return (unsigned int)RaidUnitPoFxIdleComponentFromMiniport(v49, v47);
          }
          else
          {
            *(_BYTE *)(Mask + 17) |= 2u;
            v14 = -1056964596;
            *(_DWORD *)(Mask + 748) = v47;
          }
          return v14;
        }
      }
      return (unsigned int)-1056964602;
    case 0x33u:
      v50 = (unsigned int)v110;
      v51 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)a5;
      v52 = **(_QWORD **)(v13 - 16);
      if ( KeGetCurrentIrql() > 2u )
        return (unsigned int)-1056964600;
      if ( !v109 )
      {
        v56 = *(_QWORD **)(v52 + 5088);
        if ( !v56 )
          return (unsigned int)-1056964601;
        v57 = *(_DWORD *)(v56[1] + 8LL);
        if ( (int)v110 + 1 >= v57 && (int)v110 + 1 <= v57 )
        {
          PoFxSetComponentLatency(*v56, (unsigned int)v110, a5);
          return 0;
        }
        return (unsigned int)-1056964602;
      }
      if ( v109->Group != 1 )
        return (unsigned int)-1056964602;
      if ( *(_DWORD *)&v109[1] < 4u )
        return (unsigned int)-1056964602;
      LOWORD(v104) = v109[2].Group;
      BYTE2(v104) = v109[2].Number;
      v53 = RaidAdapterFindUnit(v52, v104, v52, (__int64)a4);
      v44 = v53;
      if ( !v53 )
        return (unsigned int)-1056964602;
      if ( !RaidUnitCheckAndAcquirePoFx(v53) )
        return (unsigned int)-1056964601;
      v54 = *(_QWORD **)(v44 + 1456);
      v55 = *(_DWORD *)(v54[1] + 8LL);
      if ( v50 + 1 >= v55 && v50 + 1 <= v55 )
      {
        PoFxSetComponentLatency(*v54, v50, v51);
        v14 = 0;
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v44 + 1448));
        return v14;
      }
      goto LABEL_198;
    case 0x34u:
      v58 = (unsigned int)v110;
      v59 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)a5;
      v60 = **(_QWORD **)(v13 - 16);
      if ( KeGetCurrentIrql() > 2u )
        return (unsigned int)-1056964600;
      if ( !v109 )
      {
        v64 = *(_QWORD **)(v60 + 5088);
        if ( !v64 )
          return (unsigned int)-1056964601;
        v65 = *(_DWORD *)(v64[1] + 8LL);
        if ( (int)v110 + 1 >= v65 && (int)v110 + 1 <= v65 )
        {
          PoFxSetComponentResidency(*v64, (unsigned int)v110, a5);
          return 0;
        }
        return (unsigned int)-1056964602;
      }
      if ( v109->Group != 1 )
        return (unsigned int)-1056964602;
      if ( *(_DWORD *)&v109[1] < 4u )
        return (unsigned int)-1056964602;
      LOWORD(v104) = v109[2].Group;
      BYTE2(v104) = v109[2].Number;
      v61 = RaidAdapterFindUnit(v60, v104, v60, (__int64)a4);
      v44 = v61;
      if ( !v61 )
        return (unsigned int)-1056964602;
      if ( !RaidUnitCheckAndAcquirePoFx(v61) )
        return (unsigned int)-1056964601;
      v62 = *(_QWORD **)(v44 + 1456);
      v63 = *(_DWORD *)(v62[1] + 8LL);
      if ( v58 + 1 < v63 || v58 + 1 > v63 )
      {
LABEL_198:
        v14 = -1056964602;
LABEL_199:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v44 + 1448));
      }
      else
      {
        PoFxSetComponentResidency(*v62, v58, v59);
        v14 = 0;
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v44 + 1448));
      }
      return v14;
    case 0x35u:
      v66 = **(_QWORD **)(v13 - 16);
      v67 = v110;
      v68 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)a5;
      v69 = a6;
      v70 = a9;
      v106 = LowAddress;
      v105 = HighAddress;
      if ( KeGetCurrentIrql() > 2u )
      {
        if ( a9 )
          *a9 = 0LL;
        return (unsigned int)-1056964600;
      }
      if ( !v109 )
      {
        v74 = *(_QWORD **)(v66 + 5088);
        if ( v74 )
        {
          LogicalProcessorRelationship = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                                           *v74,
                                           v110,
                                           a5,
                                           a6,
                                           (PHYSICAL_ADDRESS)LowAddress.QuadPart,
                                           (PHYSICAL_ADDRESS)HighAddress.QuadPart,
                                           a9);
          return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
        }
        return (unsigned int)-1056964601;
      }
      if ( v109->Group == 1 && *(_DWORD *)&v109[1] >= 4u )
      {
        LOWORD(v104) = v109[2].Group;
        BYTE2(v104) = v109[2].Number;
        v71 = RaidAdapterFindUnit(v66, v104, v66, HighAddress.QuadPart);
        v72 = v71;
        if ( v71 )
        {
          if ( RaidUnitCheckAndAcquirePoFx(v71) )
          {
            v73 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                    **(_QWORD **)(v72 + 1456),
                    v67,
                    v68,
                    v69,
                    (PHYSICAL_ADDRESS)v106.QuadPart,
                    (PHYSICAL_ADDRESS)v105.QuadPart,
                    v70);
            v14 = RaidNtStatusToStorStatus(v73);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v72 + 1448));
            return v14;
          }
          return (unsigned int)-1056964601;
        }
      }
      return (unsigned int)-1056964602;
    case 0x36u:
      return (unsigned int)StorpFlushDataBufferMdl(a1, v109);
    case 0x37u:
      v89 = v109;
      v90 = v110;
      v91 = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX)a5;
      v92 = **(_QWORD **)(v13 - 16);
      if ( !a5 )
        return (unsigned int)-1056964602;
      if ( !v92 )
        return (unsigned int)-1056964602;
      a5->Data1 = 0;
      if ( v89 )
      {
        if ( v89->Group != 1 )
          return (unsigned int)-1056964602;
        if ( *(_DWORD *)&v89[1] < 4u )
          return (unsigned int)-1056964602;
        LOWORD(v104) = v89[2].Group;
        BYTE2(v104) = v89[2].Number;
        if ( !RaidAdapterFindUnit(v92, v104, (__int64)a3, (__int64)a4) )
          return (unsigned int)-1056964602;
      }
      if ( v90->Mask == 0x481F895FDCAF9C10LL && *(_QWORD *)&v90->Group == 0x3356F5D2CED492A4LL )
      {
        v14 = 0;
        v91->Relationship = (unsigned __int8)g_InWinPE;
      }
      return v14;
    case 0x38u:
      v25 = v110;
      if ( !v109 || !v110 )
        return (unsigned int)-1056964602;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(v109);
      LODWORD(v25->Mask) = ProcessorIndexFromNumber;
      if ( ProcessorIndexFromNumber == -1 )
        LODWORD(Mask) = -1056964602;
      return (unsigned int)Mask;
    case 0x39u:
      v75 = (unsigned int)v110;
      if ( v109 )
        return 3238002694LL;
      v76 = **(_QWORD **)(v13 - 16);
      if ( !v76 )
        return (unsigned int)-1056964602;
      v77 = *(_QWORD **)(v76 + 5088);
      if ( !v77 )
        return (unsigned int)-1056964602;
      if ( (*(_BYTE *)(v76 + 108) & 0x40) != 0 )
        return (unsigned int)-1056964607;
      *(_DWORD *)(v76 + 5104) = (_DWORD)v110;
      PoFxSetDeviceIdleTimeout(*v77, 10000 * v75);
      if ( !StorEtwLoggingEnabled || (Microsoft_Windows_StorPortEnableBits & 0x100000) == 0 )
        return 0;
      Template_pqqq(
        v78,
        (unsigned int)&EventAdapterIdleTimeoutSet,
        0,
        **(_QWORD **)(v76 + 5088),
        *(_DWORD *)(v76 + 56),
        v75,
        *(_DWORD *)(v76 + 5104));
      return 0;
    case 0x3Au:
    case 0x3Bu:
    case 0x3Cu:
      if ( !StorEtwLoggingEnabled || !_bittest((const signed __int32 *)&Microsoft_Windows_StorPortEnableBits, 0x1Cu) )
        return 0;
      return (unsigned int)StorEtwMiniportEventProxy(v13, v12, &v109);
    case 0x3Du:
      if ( !v109 )
        return (unsigned int)-1056964602;
      v14 = 0;
      LOBYTE(v109->Group) = g_OSisUpgrade;
      return v14;
    case 0x3Eu:
      LOBYTE(v17) = 1;
      return (unsigned int)StorAdapterDeviceRegistryKeyProxy(v13, v17, &v109);
    case 0x3Fu:
      return (unsigned int)StorAdapterDeviceRegistryKeyProxy(v13, 0LL, &v109);
    case 0x40u:
      v98 = **(_QWORD **)(v13 - 16);
      if ( !v98 || (unsigned int)v109 >= 0x13 )
        return (unsigned int)-1056964602;
      if ( (*(_BYTE *)(v98 + 544) & 1) == 0 )
        return (unsigned int)-1056964607;
      *(_DWORD *)(v98 + 4356) = (_DWORD)v109;
      return 0;
    case 0x41u:
      v79 = (unsigned int)a6;
      v80 = LowAddress;
      if ( v109 )
        return 3238002694LL;
      v81 = **(_QWORD **)(v13 - 16);
      if ( !v81 )
        return 3238002694LL;
      v82 = *(_QWORD *)(v81 + 5088);
      if ( !v82 || *(_BYTE *)(v82 + 24) )
        return 3238002689LL;
      LogicalProcessorRelationship = RaidRegisterPerfStates(
                                       *(_QWORD *)(v81 + 8),
                                       (_DWORD)v110,
                                       (_DWORD)a5,
                                       (_DWORD)a6,
                                       LowAddress.QuadPart,
                                       *(_QWORD *)v82);
      if ( LogicalProcessorRelationship < 0 )
        return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
      if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterCacheOperationalPowerRange)(
                              *(_QWORD *)(v81 + 5088),
                              v79,
                              (PHYSICAL_ADDRESS)v80.QuadPart) )
      {
        *(_QWORD *)(*(_QWORD *)(v81 + 5088) + 48LL) = -1LL;
        *(_QWORD *)(*(_QWORD *)(v81 + 5088) + 56LL) = -1LL;
        *(_QWORD *)(*(_QWORD *)(v81 + 5088) + 64LL) = -1LL;
      }
      *(_BYTE *)(*(_QWORD *)(v81 + 5088) + 24LL) = v79;
      ((void (__fastcall *)(_QWORD, _QWORD))StorpLogRegisterAdapterPerfStates)(v81, (PHYSICAL_ADDRESS)v80.QuadPart);
      return 0;
    case 0x42u:
      v83 = (unsigned int)a5;
      if ( v109 || (_DWORD)a5 )
        return 3238002694LL;
      v84 = *(_QWORD *)(v13 - 16);
      if ( !*(_QWORD *)v84 )
        return v14;
      v85 = *(__int64 **)(*(_QWORD *)v84 + 5088LL);
      if ( !v85 )
        return v14;
      v86 = KeGetCurrentIrql();
      v106.LowPart = 0;
      v107 = 0LL;
      v87 = *((_BYTE *)v85 + 24);
      if ( !v87 || (unsigned int)a6 >= v87 )
        return 3238002694LL;
      v106.LowPart = (unsigned int)a6;
      LODWORD(v107) = LowAddress.LowPart;
      v88 = *v85;
      if ( v86 >= 2u )
        v83 = 2LL;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxIssueComponentPerfStateChange)(
        v88,
        v83,
        (unsigned int)v110,
        &v106,
        (PHYSICAL_ADDRESS)HighAddress.QuadPart);
      return 0;
    case 0x43u:
      if ( KeGetCurrentIrql() )
        return 3238002696LL;
      v93 = v109;
      v14 = -1056964602;
      v94 = v110;
      if ( !v110 )
        return v14;
      LOBYTE(v110->Mask) = 0;
      v95 = **(_QWORD **)(a2 - 16);
      if ( !v95 )
        return v14;
      if ( v93 )
      {
        if ( v93->Group != 1 )
          return v14;
        if ( *(_DWORD *)&v93[1] < 4u )
          return v14;
        LOWORD(v104) = v93[2].Group;
        BYTE2(v104) = v93[2].Number;
        v96 = RaidAdapterFindUnit(v95, v104, (__int64)a3, (__int64)a4);
        if ( !v96 )
          return v14;
        v97 = *(struct _DEVICE_OBJECT **)(v96 + 8);
      }
      else
      {
        v97 = *(struct _DEVICE_OBJECT **)(v95 + 8);
      }
      if ( !v97 )
        return v14;
      LogicalProcessorRelationship = RaidGetD3ColdInterface(v97);
      if ( LogicalProcessorRelationship >= 0 )
      {
        LOBYTE(v94->Mask) = RaidGetD3ColdCapability(0LL);
        return 0;
      }
      return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
    case 0x44u:
      if ( v109 )
        return (unsigned int)-1056964601;
      return (unsigned int)RaidInitializeRpmb(v13, v110);
    case 0x45u:
      return (unsigned int)StorpAllocateHostMemoryBuffer(
                             v13,
                             (int)v109,
                             (int)v110,
                             (int)a5,
                             (int)a6,
                             LowAddress,
                             HighAddress,
                             (__int64)a9,
                             a10,
                             a11);
    case 0x46u:
      return (unsigned int)StorpFreeHostMemoryBuffer(v13);
    case 0x47u:
      v99 = **(_QWORD **)(v13 - 16);
      if ( !v99 )
        return (unsigned int)-1056964602;
      if ( !*(_BYTE *)(v99 + 500) )
        return (unsigned int)-1056964601;
      if ( !v109 || !v110 )
        return (unsigned int)-1056964602;
      if ( v109->Number == 40 )
      {
        v100 = *(_QWORD *)&v109[20].Group;
      }
      else
      {
        v101 = *(_QWORD *)&v109[12].Group;
        if ( !v101 || *(_DWORD *)v101 != 523124044 )
          return (unsigned int)-1056964602;
        v100 = *(_QWORD *)(v101 + 176);
      }
      if ( !v100 )
        return (unsigned int)-1056964602;
      if ( KeGetCurrentIrql() > 2u )
        return (unsigned int)-1056964600;
      if ( (_DWORD)a5 )
      {
        v102 = IoPropagateIrpExtension();
        return (unsigned int)RaidNtStatusToStorStatus(v102);
      }
      else
      {
        return 0;
      }
    case 0x50u:
      v103 = **(_QWORD **)(v13 - 16);
      if ( !v103 )
        return (unsigned int)-1056964602;
      if ( (*(_BYTE *)(v103 + 104) & 0x10) == 0 )
        return (unsigned int)-1056964601;
      v14 = 0;
      *(_DWORD *)(v103 + 508) = (_DWORD)v109;
      return v14;
    case 0x51u:
      StorDelayExecution((unsigned int)v109);
      return 0;
    default:
      if ( v16 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v16->Timer) & 0x10) != 0 && BYTE1(v16->Timer) >= 2u )
        WPP_SF_D(v16->AttachedDevice, 80LL, &WPP_adf5a490639137350fe391398fd0549f_Traceguids, v12);
      return v14;
  }
}
