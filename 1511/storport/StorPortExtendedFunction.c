/*
 * XREFs of StorPortExtendedFunction @ 0x1C0006190
 * Callers:
 *     <none>
 * Callees:
 *     StorpRequestTimer @ 0x1C00064C0 (StorpRequestTimer.c)
 *     RaidAdapterFindUnit @ 0x1C0006838 (RaidAdapterFindUnit.c)
 *     StorpAcquireMSISpinLock @ 0x1C000746C (StorpAcquireMSISpinLock.c)
 *     StorpReleaseMSISpinLock @ 0x1C0007504 (StorpReleaseMSISpinLock.c)
 *     StorpInitializeTimer @ 0x1C00098CC (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C000A02C (StorpInitializeWorkItem.c)
 *     RaidGetD3ColdCapability @ 0x1C000A0D8 (RaidGetD3ColdCapability.c)
 *     RaidGetD3ColdInterface @ 0x1C000C0F4 (RaidGetD3ColdInterface.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0011408 (RaidUnitCheckAndAcquirePoFx.c)
 *     StorpAllocatePool @ 0x1C0013B04 (StorpAllocatePool.c)
 *     StorpGetMSIInfo @ 0x1C00142D4 (StorpGetMSIInfo.c)
 *     RaidGetStartIoPerfParams @ 0x1C0014A80 (RaidGetStartIoPerfParams.c)
 *     StorpGetRequestInfo @ 0x1C00152C0 (StorpGetRequestInfo.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00242C4 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidInitializePerfOpts @ 0x1C00266E4 (RaidInitializePerfOpts.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0026EF8 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     Template_pqqq @ 0x1C002725C (Template_pqqq.c)
 *     WPP_SF_ @ 0x1C00277A8 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1C0027BA0 (WPP_SF_D.c)
 *     RaidAdapterCacheOperationalPowerRange @ 0x1C002927C (RaidAdapterCacheOperationalPowerRange.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C0029318 (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C00294FC (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidpIsControlledWinPEEnvironment @ 0x1C0029570 (RaidpIsControlledWinPEEnvironment.c)
 *     RaidpIsCurrentOsInstallationUpgrade @ 0x1C00295E4 (RaidpIsCurrentOsInstallationUpgrade.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C002A91C (StorPortpInvokeAcpiMethod.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C002A9D4 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C002AA9C (StorpAdapterInitializePoFxPower.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNode @ 0x1C002AD2C (StorpAllocateContiguousMemorySpecifyCacheNode.c)
 *     StorpAllocateMdl @ 0x1C002AD94 (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C002AEC4 (StorpBuildMdlForNonPagedPool.c)
 *     StorpBuildScatterGatherList @ 0x1C002AF60 (StorpBuildScatterGatherList.c)
 *     StorpCompleteServiceIrp @ 0x1C002B0AC (StorpCompleteServiceIrp.c)
 *     StorpFlushDataBufferMdl @ 0x1C002B0F8 (StorpFlushDataBufferMdl.c)
 *     StorpFreeMdl @ 0x1C002B154 (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C002B1F0 (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C002B414 (StorpFreeWorkItem.c)
 *     StorpGetActiveNodeCount @ 0x1C002B5D4 (StorpGetActiveNodeCount.c)
 *     StorpGetDataInSgList @ 0x1C002B654 (StorpGetDataInSgList.c)
 *     StorpGetOriginalMdl @ 0x1C002B870 (StorpGetOriginalMdl.c)
 *     StorpGetSystemAddress @ 0x1C002B8E8 (StorpGetSystemAddress.c)
 *     StorpLogSystemEvent @ 0x1C002BA58 (StorpLogSystemEvent.c)
 *     StorpPutScatterGatherList @ 0x1C002BB8C (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C002BC88 (StorpQueueWorkItem.c)
 *     StorpSetUnitAttributes @ 0x1C002BDB4 (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C002BE68 (StorpUnitInitializePoFxPower.c)
 *     RaidRegisterPerfStates @ 0x1C002D3B8 (RaidRegisterPerfStates.c)
 *     RaidNtStatusToStorStatus @ 0x1C003136C (RaidNtStatusToStorStatus.c)
 *     StorEtwMiniportEvent @ 0x1C00376C0 (StorEtwMiniportEvent.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C00399DC (StorpLogRegisterAdapterPerfStates.c)
 *     PortRegistryReadDeviceKey @ 0x1C0051E90 (PortRegistryReadDeviceKey.c)
 *     PortRegistryWriteDeviceKey @ 0x1C0053944 (PortRegistryWriteDeviceKey.c)
 */

__int64 __fastcall StorPortExtendedFunction(
        __int64 a1,
        __int64 a2,
        struct _PROCESSOR_NUMBER *a3,
        struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *a4,
        struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *a5,
        ULONG *a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9,
        int a10)
{
  unsigned int v10; // r14d
  __int64 v11; // rsi
  unsigned int v12; // ebx
  PDEVICE_OBJECT v13; // r10
  unsigned __int64 v16; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v21; // r14d
  NTSTATUS LogicalProcessorRelationship; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r14
  int v27; // r15d
  __int64 v28; // r9
  char v29; // al
  unsigned __int8 CurrentIrql; // si
  __int64 Unit; // rax
  __int64 v32; // rdi
  __int64 v33; // r8
  unsigned int v34; // eax
  __int64 v35; // r8
  __int64 v36; // r14
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // rax
  _QWORD *v41; // rcx
  unsigned int v42; // edx
  _QWORD *v43; // rcx
  unsigned int v44; // r8d
  __int64 v45; // r8
  __int64 v46; // rax
  _QWORD *v47; // rcx
  unsigned int v48; // edx
  _QWORD *v49; // rcx
  unsigned int v50; // r8d
  __int64 v51; // r8
  _QWORD *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rdi
  unsigned int v55; // eax
  _QWORD *v56; // rcx
  __int64 v57; // rbx
  _QWORD *v58; // rcx
  int v59; // ecx
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // r10
  unsigned __int8 v67; // r9
  unsigned __int8 v68; // al
  __int64 v69; // rdi
  struct _UNICODE_STRING *p_UnicodeString; // rdx
  unsigned int DeviceKey; // ebx
  __int64 v72; // rcx
  __int64 v73; // rdi
  struct _UNICODE_STRING *v74; // rdx
  struct _PROCESSOR_NUMBER *v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  struct _DEVICE_OBJECT *v80; // rcx
  __int64 v81; // r10
  unsigned __int16 **v82; // rdi
  _QWORD *v83; // r12
  unsigned int v84; // ecx
  __int64 v85; // r14
  __int64 v86; // r11
  unsigned __int16 *v87; // rax
  __int64 v88; // rcx
  struct _UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v90; // [rsp+78h] [rbp-90h] BYREF
  struct _STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING v92; // [rsp+98h] [rbp-70h] BYREF
  char v93[64]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v94[8]; // [rsp+E8h] [rbp-20h] BYREF
  struct _PROCESSOR_NUMBER *v96; // [rsp+198h] [rbp+90h]
  SIZE_T v97; // [rsp+1A0h] [rbp+98h]

  v96 = a3;
  v97 = (SIZE_T)a4;
  v10 = a1;
  v11 = a2;
  v12 = -1056964606;
  if ( !a2 )
    return 3238002694LL;
  v13 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      79LL,
      &WPP_a7c96fc4c7d54bab161cb0c6c8756061_Traceguids,
      (unsigned int)a1);
    v13 = WPP_GLOBAL_Control;
    v11 = a2;
  }
  if ( v10 != 15 )
  {
    v16 = 0x1C0000000uLL;
    switch ( v10 )
    {
      case 0u:
        return (unsigned int)StorpAllocatePool(a1, (unsigned int)v96, (unsigned int)v97, a5);
      case 1u:
        v12 = 0;
        if ( !v96 )
        {
          if ( v13 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(v13->Timer) & 0x10) != 0
            && BYTE1(v13->Timer) >= 2u )
          {
            v19 = 29LL;
            goto LABEL_36;
          }
          return (unsigned int)-1056964602;
        }
        if ( KeGetCurrentIrql() <= 2u )
        {
          ExFreePoolWithTag(v96, 0);
          return v12;
        }
        if ( v13 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v13->Timer) & 0x10) != 0 && BYTE1(v13->Timer) >= 2u )
        {
          WPP_SF_(v13->AttachedDevice, 30LL, &WPP_a7c96fc4c7d54bab161cb0c6c8756061_Traceguids, a4);
          return (unsigned int)-1056964600;
        }
        return (unsigned int)-1056964600;
      case 2u:
        return (unsigned int)StorpAllocateMdl(a1, v96, (unsigned int)v97, a5);
      case 3u:
        return (unsigned int)StorpFreeMdl(a1, v96);
      case 4u:
        return (unsigned int)StorpBuildMdlForNonPagedPool(a1, v96);
      case 5u:
        return (unsigned int)StorpGetSystemAddress(a1, v96, 0LL, v97);
      case 6u:
        return (unsigned int)StorpGetOriginalMdl(a1, v96, 0LL, v97);
      case 7u:
        return (unsigned int)StorpCompleteServiceIrp(v11, v96);
      case 8u:
        v12 = 0;
        a4 = a5;
        if ( v11 )
        {
          if ( v96 )
          {
            if ( v97 )
            {
              if ( a5 )
              {
                v18 = **(_QWORD ***)(v11 - 16);
                *(_QWORD *)&v96->Group = v18[1];
                *(_QWORD *)v97 = v18[4];
                *(_QWORD *)&a5->Relationship = v18[3];
                return v12;
              }
              if ( v13 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(v13->Timer) & 0x10) != 0
                && BYTE1(v13->Timer) >= 2u )
              {
                v19 = 48LL;
                goto LABEL_36;
              }
              return (unsigned int)-1056964602;
            }
            if ( v13 == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(v13->Timer) & 0x10) == 0
              || BYTE1(v13->Timer) < 2u )
            {
              return (unsigned int)-1056964602;
            }
            v19 = 47LL;
          }
          else
          {
            if ( v13 == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(v13->Timer) & 0x10) == 0
              || BYTE1(v13->Timer) < 2u )
            {
              return (unsigned int)-1056964602;
            }
            v19 = 46LL;
          }
        }
        else
        {
          if ( v13 == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || (HIDWORD(v13->Timer) & 0x10) == 0 || BYTE1(v13->Timer) < 2u )
            return (unsigned int)-1056964602;
          v19 = 45LL;
        }
LABEL_36:
        WPP_SF_(v13->AttachedDevice, v19, &WPP_a7c96fc4c7d54bab161cb0c6c8756061_Traceguids, a4);
        return (unsigned int)-1056964602;
      case 9u:
        return (unsigned int)StorpBuildScatterGatherList(
                               v11,
                               (_DWORD)v96,
                               v97,
                               (_DWORD)a5,
                               (__int64)a6,
                               a7,
                               a8,
                               (__int64)a9,
                               a10);
      case 0xAu:
        return (unsigned int)StorpPutScatterGatherList(v11, v96, (unsigned __int8)v97);
      case 0xBu:
        return (unsigned int)StorpAcquireMSISpinLock(v11, (unsigned int)v96, v97);
      case 0xCu:
        return (unsigned int)StorpReleaseMSISpinLock(v11, (unsigned int)v96, (unsigned int)v97);
      case 0xDu:
        return (unsigned int)StorpGetMSIInfo(v11, (unsigned int)v96, v97);
      case 0xEu:
        return (unsigned int)RaidInitializePerfOpts(v11, (unsigned __int8)v96, v97);
      case 0xFu:
        break;
      case 0x10u:
        return (unsigned int)StorpLogSystemEvent(v11, v96, v97);
      case 0x11u:
        if ( !v96 )
          return (unsigned int)-1056964602;
        KeGetCurrentProcessorNumberEx(v96);
        return 0;
      case 0x12u:
        if ( !v96 )
          return (unsigned int)-1056964602;
        v96->Group = KeQueryActiveGroupCount();
        return 0;
      case 0x13u:
        if ( !v97 )
          return (unsigned int)-1056964602;
        if ( (unsigned __int16)v96 > KeQueryActiveGroupCount() )
          return (unsigned int)-1056964607;
        *(_QWORD *)v97 = KeQueryGroupAffinity((USHORT)v96);
        return 0;
      case 0x14u:
        return (unsigned int)StorpGetActiveNodeCount(a1, v96);
      case 0x15u:
        if ( !v97 || (unsigned int)v96 > 0xFFFF )
          return (unsigned int)-1056964602;
        KeQueryNodeActiveAffinity((USHORT)v96, (PGROUP_AFFINITY)v97, 0LL);
        return 0;
      case 0x16u:
        if ( !v96 )
          return (unsigned int)-1056964602;
        *v96 = (struct _PROCESSOR_NUMBER)KeQueryHighestNodeNumber();
        return 0;
      case 0x17u:
        LogicalProcessorRelationship = KeQueryLogicalProcessorRelationship(
                                         v96,
                                         (LOGICAL_PROCESSOR_RELATIONSHIP)v97,
                                         a5,
                                         a6);
        if ( LogicalProcessorRelationship == -1073741820 )
          return (unsigned int)-1056964604;
        if ( LogicalProcessorRelationship == -1073741811 )
          return (unsigned int)-1056964602;
        return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
      case 0x18u:
        return (unsigned int)StorpAllocateContiguousMemorySpecifyCacheNode(
                               (_DWORD)a9,
                               (_DWORD)v96,
                               v97,
                               (_DWORD)a5,
                               (__int64)a6,
                               a7,
                               a8,
                               (__int64)a9);
      case 0x19u:
        MmFreeContiguousMemorySpecifyCache(v96, v97, (MEMORY_CACHING_TYPE)a5);
        return 0;
      case 0x1Au:
        return (unsigned int)StorPortpSetPowerSettingNotificationGuids(v11, (unsigned int)v96, v97);
      case 0x1Bu:
        return (unsigned int)StorPortpInvokeAcpiMethod(v11, v96, a7, a5, (_DWORD)a6, a7, a8, a9);
      case 0x1Cu:
        return (unsigned int)StorpGetRequestInfo(a1, v96, v97);
      case 0x1Du:
        return (unsigned int)StorpInitializeWorkItem(v11, v96);
      case 0x1Eu:
        return (unsigned int)StorpQueueWorkItem(v11, v96, v97, a5);
      case 0x1Fu:
        return (unsigned int)StorpFreeWorkItem(v11, v96);
      case 0x20u:
        return (unsigned int)StorpInitializeTimer(v11, v96);
      case 0x21u:
        return (unsigned int)StorpRequestTimer(v11, (_DWORD)v96, v97, (_DWORD)a5, (__int64)a6, a7);
      case 0x22u:
        return (unsigned int)StorpFreeTimer(v11, v96);
      case 0x23u:
        InitializeSListHead((PSLIST_HEADER)v96);
        return 0;
      case 0x24u:
        *(_QWORD *)v97 = ExpInterlockedFlushSList((PSLIST_HEADER)v96);
        return 0;
      case 0x25u:
        *(_QWORD *)v97 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v96);
        return 0;
      case 0x26u:
        *(_QWORD *)&a5->Relationship = ExpInterlockedPushEntrySList((PSLIST_HEADER)v96, (PSLIST_ENTRY)v97);
        return 0;
      case 0x27u:
        *(_WORD *)v97 = ExQueryDepthSList((PSLIST_HEADER)v96);
        return 0;
      case 0x28u:
        if ( !v96 || !v97 )
          return (unsigned int)-1056964602;
        if ( v96->Number == 40 )
        {
          v23 = *(_QWORD *)&v96[20].Group;
        }
        else
        {
          v24 = *(_QWORD *)&v96[12].Group;
          if ( !v24 || *(_DWORD *)v24 != 523124044 )
            goto LABEL_109;
          v23 = *(_QWORD *)(v24 + 176);
        }
        if ( v23 )
        {
          v12 = -1056964607;
          if ( (int)IoGetActivityIdIrp(v23, v97) >= 0 )
            return 0;
          return v12;
        }
LABEL_109:
        v12 = -1056964607;
        if ( EtwActivityIdControl(3u, (LPGUID)v97) >= 0 )
          return 0;
        return v12;
      case 0x29u:
        v25 = *(_QWORD *)(v11 - 16);
        if ( *(_DWORD *)(*(_QWORD *)v25 + 56LL) == -1 )
          return (unsigned int)-1056964599;
        if ( !v96 || v96->Group != 1 || *(_DWORD *)&v96[1] < 4u )
          return (unsigned int)-1056964602;
        *(_WORD *)&v96->Number = *(_WORD *)(*(_QWORD *)v25 + 56LL);
        v12 = 0;
        v96[2].Group = -1;
        v96[2].Number = -1;
        return v12;
      case 0x2Au:
        LOBYTE(a3) = 1;
        return (unsigned int)StorpGetOriginalMdl(a1, v96, a3, v97);
      case 0x2Bu:
        LOBYTE(a3) = 1;
        return (unsigned int)StorpGetSystemAddress(a1, v96, a3, v97);
      case 0x2Cu:
        return (unsigned int)StorpGetDataInSgList(a1, v96, v97);
      case 0x2Eu:
        return (unsigned int)StorpSetUnitAttributes(v11, v96, (unsigned int)v97);
      case 0x2Fu:
        if ( !v97 )
          return (unsigned int)-1056964602;
        if ( v96 )
          *(_QWORD *)&v96->Group = 1LL;
        if ( LOBYTE(WPP_MAIN_CB.DeviceObjectExtension) )
          PerformanceCounter = KeQueryPerformanceCounter((PLARGE_INTEGER)v96);
        else
          PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
        *(LARGE_INTEGER *)v97 = PerformanceCounter;
        return 0;
      case 0x30u:
        if ( KeGetCurrentIrql() )
          return (unsigned int)-1056964600;
        if ( v96 )
          return (unsigned int)StorpUnitInitializePoFxPower(v11, v96, v97, a5);
        else
          return (unsigned int)StorpAdapterInitializePoFxPower(v11, v97, a5);
      case 0x31u:
        v26 = 0LL;
        v27 = 0;
        v12 = 0;
        v28 = **(_QWORD **)(v11 - 16);
        if ( !v97 )
          goto LABEL_145;
        v29 = *(_BYTE *)(v97 + 2);
        if ( v29 == 40 )
          v26 = *(_QWORD *)(v97 + 96);
        else
          v26 = *(_QWORD *)(v97 + 48);
        if ( !v26 || *(_DWORD *)v26 != 523124044 )
          return (unsigned int)-1056964602;
        if ( v29 == 40 )
          v27 = *(_DWORD *)(v97 + 24);
        else
          v27 = *(_DWORD *)(v97 + 12);
LABEL_145:
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql > 2u )
          return (unsigned int)-1056964600;
        if ( (_DWORD)a6 )
          return (unsigned int)-1056964602;
        if ( v96 )
        {
          if ( v96->Group != 1 )
            return (unsigned int)-1056964602;
          if ( *(_DWORD *)&v96[1] < 4u )
            return (unsigned int)-1056964602;
          UnicodeString.Length = v96[2].Group;
          LOBYTE(UnicodeString.MaximumLength) = v96[2].Number;
          Unit = RaidAdapterFindUnit(v28, *(unsigned int *)&UnicodeString.Length, (unsigned int)a6);
          v32 = Unit;
          if ( !Unit )
            return (unsigned int)-1056964602;
          if ( (v27 & 0x100800) != 0 )
          {
            if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(Unit) )
              goto LABEL_201;
            if ( !*(_QWORD *)(*(_QWORD *)(v32 + 24) + 5088LL) )
              return v12;
          }
          if ( CurrentIrql == 2 || (*(_BYTE *)(v32 + 145) & 1) != 0 || *(char *)(v32 + 144) < 0 )
            v33 = 2LL;
          else
            v33 = 0LL;
          v34 = RaidUnitPoFxActivateComponentFromMiniport(v32, (unsigned int)a5, v33);
        }
        else
        {
          if ( !*(_QWORD *)(v28 + 5088) || (v27 & 0x100800) != 0 )
            return (unsigned int)-1056964601;
          if ( CurrentIrql == 2 || (*(_BYTE *)(v28 + 108) & 3) != 0 )
            v35 = 2LL;
          else
            v35 = 0LL;
          v34 = RaidAdapterPoFxActivateComponentFromMiniport(v28, (unsigned int)a5, v35);
        }
        v12 = v34;
        if ( v26 )
          *(_BYTE *)(v26 + 16) |= 0x80u;
        return v12;
      case 0x32u:
        v36 = 0LL;
        v12 = 0;
        v37 = **(_QWORD **)(v11 - 16);
        if ( !v97 )
          goto LABEL_177;
        if ( *(_BYTE *)(v97 + 2) == 40 )
          v36 = *(_QWORD *)(v97 + 96);
        else
          v36 = *(_QWORD *)(v97 + 48);
        if ( !v36 || *(_DWORD *)v36 != 523124044 )
          return (unsigned int)-1056964602;
        if ( *(char *)(v36 + 16) >= 0 )
          return v12;
LABEL_177:
        if ( KeGetCurrentIrql() > 2u && !v36 )
          return (unsigned int)-1056964600;
        if ( (_DWORD)a6 )
          return (unsigned int)-1056964602;
        if ( v96 )
        {
          if ( v96->Group != 1 )
            return (unsigned int)-1056964602;
          if ( *(_DWORD *)&v96[1] < 4u )
            return (unsigned int)-1056964602;
          UnicodeString.Length = v96[2].Group;
          LOBYTE(UnicodeString.MaximumLength) = v96[2].Number;
          v38 = RaidAdapterFindUnit(v37, *(unsigned int *)&UnicodeString.Length, v37);
          if ( !v38 )
            return (unsigned int)-1056964602;
          if ( KeGetCurrentIrql() > 2u )
          {
            *(_BYTE *)(v36 + 17) |= 2u;
            v12 = -1056964596;
            *(_DWORD *)(v36 + 748) = (_DWORD)a5;
            return v12;
          }
          return (unsigned int)RaidUnitPoFxIdleComponentFromMiniport(v38, (unsigned int)a5);
        }
        else
        {
          if ( !*(_QWORD *)(v37 + 5088) )
            return (unsigned int)-1056964601;
          if ( KeGetCurrentIrql() > 2u )
          {
            *(_BYTE *)(v36 + 17) |= 1u;
            v12 = -1056964596;
            *(_DWORD *)(v36 + 748) = (_DWORD)a5;
            return v12;
          }
          return (unsigned int)RaidAdapterPoFxIdleComponentFromMiniport(
                                 **(_QWORD **)(v11 - 16),
                                 (unsigned int)a5,
                                 v37,
                                 (unsigned int)a6);
        }
      case 0x33u:
        v39 = **(_QWORD **)(v11 - 16);
        if ( KeGetCurrentIrql() > 2u )
          return (unsigned int)-1056964600;
        if ( !v96 )
        {
          v43 = *(_QWORD **)(v39 + 5088);
          if ( !v43 )
            return (unsigned int)-1056964601;
          v44 = *(_DWORD *)(v43[1] + 8LL);
          if ( (int)v97 + 1 >= v44 && (int)v97 + 1 <= v44 )
          {
            PoFxSetComponentLatency(*v43, (unsigned int)v97, a5);
            return 0;
          }
          return (unsigned int)-1056964602;
        }
        if ( v96->Group != 1 )
          return (unsigned int)-1056964602;
        if ( *(_DWORD *)&v96[1] < 4u )
          return (unsigned int)-1056964602;
        UnicodeString.Length = v96[2].Group;
        LOBYTE(UnicodeString.MaximumLength) = v96[2].Number;
        v40 = RaidAdapterFindUnit(v39, *(unsigned int *)&UnicodeString.Length, v39);
        v32 = v40;
        if ( !v40 )
          return (unsigned int)-1056964602;
        if ( !(unsigned __int8)RaidUnitCheckAndAcquirePoFx(v40) )
          return (unsigned int)-1056964601;
        v41 = *(_QWORD **)(v32 + 1456);
        v42 = *(_DWORD *)(v41[1] + 8LL);
        if ( (int)v97 + 1 >= v42 && (int)v97 + 1 <= v42 )
        {
          PoFxSetComponentLatency(*v41, (unsigned int)v97, a5);
          v12 = 0;
          goto LABEL_201;
        }
        goto LABEL_200;
      case 0x34u:
        v45 = **(_QWORD **)(v11 - 16);
        if ( KeGetCurrentIrql() > 2u )
          return (unsigned int)-1056964600;
        if ( !v96 )
        {
          v49 = *(_QWORD **)(v45 + 5088);
          if ( !v49 )
            return (unsigned int)-1056964601;
          v50 = *(_DWORD *)(v49[1] + 8LL);
          if ( (int)v97 + 1 >= v50 && (int)v97 + 1 <= v50 )
          {
            PoFxSetComponentResidency(*v49, (unsigned int)v97, a5);
            return 0;
          }
          return (unsigned int)-1056964602;
        }
        if ( v96->Group != 1 )
          return (unsigned int)-1056964602;
        if ( *(_DWORD *)&v96[1] < 4u )
          return (unsigned int)-1056964602;
        UnicodeString.Length = v96[2].Group;
        LOBYTE(UnicodeString.MaximumLength) = v96[2].Number;
        v46 = RaidAdapterFindUnit(v45, *(unsigned int *)&UnicodeString.Length, v45);
        v32 = v46;
        if ( !v46 )
          return (unsigned int)-1056964602;
        if ( !(unsigned __int8)RaidUnitCheckAndAcquirePoFx(v46) )
          return (unsigned int)-1056964601;
        v47 = *(_QWORD **)(v32 + 1456);
        v48 = *(_DWORD *)(v47[1] + 8LL);
        if ( (int)v97 + 1 < v48 || (int)v97 + 1 > v48 )
        {
LABEL_200:
          v12 = -1056964602;
        }
        else
        {
          PoFxSetComponentResidency(*v47, (unsigned int)v97, a5);
          v12 = 0;
        }
LABEL_201:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v32 + 1448));
        return v12;
      case 0x35u:
        v51 = **(_QWORD **)(v11 - 16);
        v52 = a9;
        *(_QWORD *)&v92.Length = a8;
        if ( KeGetCurrentIrql() > 2u )
        {
          if ( a9 )
            *a9 = 0LL;
          return (unsigned int)-1056964600;
        }
        if ( v96 )
        {
          if ( v96->Group != 1 )
            return (unsigned int)-1056964602;
          if ( *(_DWORD *)&v96[1] < 4u )
            return (unsigned int)-1056964602;
          UnicodeString.Length = v96[2].Group;
          LOBYTE(UnicodeString.MaximumLength) = v96[2].Number;
          v53 = RaidAdapterFindUnit(v51, *(unsigned int *)&UnicodeString.Length, v51);
          v54 = v53;
          if ( !v53 )
            return (unsigned int)-1056964602;
          if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(v53) )
          {
            v55 = PoFxPowerControl(**(_QWORD **)(v54 + 1456), v97, a5, a6, a7, *(_QWORD *)&v92.Length, v52);
            v12 = RaidNtStatusToStorStatus(v55);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v54 + 1448));
            return v12;
          }
        }
        else
        {
          v56 = *(_QWORD **)(v51 + 5088);
          if ( v56 )
          {
            LogicalProcessorRelationship = PoFxPowerControl(*v56, v97, a5, a6, a7, a8, a9);
            return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
          }
        }
        return (unsigned int)-1056964601;
      case 0x36u:
        return (unsigned int)StorpFlushDataBufferMdl(a1, v96);
      case 0x37u:
        v75 = v96;
        v76 = **(_QWORD **)(v11 - 16);
        if ( KeGetCurrentIrql() )
          return (unsigned int)-1056964600;
        if ( !a5 )
          return (unsigned int)-1056964602;
        a5->Relationship = RelationProcessorCore;
        if ( v96 )
        {
          if ( v96->Group != 1 )
            return (unsigned int)-1056964602;
          if ( *(_DWORD *)&v96[1] < 4u )
            return (unsigned int)-1056964602;
          UnicodeString.Length = v96[2].Group;
          LOBYTE(UnicodeString.MaximumLength) = v96[2].Number;
          if ( !RaidAdapterFindUnit(v76, *(unsigned int *)&UnicodeString.Length, v76) )
            return (unsigned int)-1056964602;
        }
        v77 = *(_QWORD *)v97 - 0x481F895FDCAF9C10LL;
        if ( *(_QWORD *)v97 == 0x481F895FDCAF9C10LL )
          v77 = *(_QWORD *)(v97 + 8) - 0x3356F5D2CED492A4LL;
        if ( !v77 )
        {
          v12 = 0;
          a5->Relationship = (unsigned __int8)RaidpIsControlledWinPEEnvironment(v75, v16, v76, a4);
        }
        return v12;
      case 0x38u:
        if ( !v96 || !v97 )
          return (unsigned int)-1056964602;
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(v96);
        v21 = 0;
        *(_DWORD *)v97 = ProcessorIndexFromNumber;
        if ( ProcessorIndexFromNumber == -1 )
          return (unsigned int)-1056964602;
        return v21;
      case 0x39u:
        if ( v96 )
          return 3238002694LL;
        v57 = **(_QWORD **)(v11 - 16);
        if ( !v57 )
          return (unsigned int)-1056964602;
        v58 = *(_QWORD **)(v57 + 5088);
        if ( !v58 )
          return (unsigned int)-1056964602;
        if ( (*(_BYTE *)(v57 + 108) & 0x40) != 0 )
        {
          return (unsigned int)-1056964607;
        }
        else
        {
          *(_DWORD *)(v57 + 5104) = v97;
          PoFxSetDeviceIdleTimeout(*v58, 10000LL * (unsigned int)v97);
          if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
          {
            Template_pqqq(
              v59,
              (unsigned int)&EventAdapterIdleTimeoutSet,
              0,
              **(_QWORD **)(v57 + 5088),
              *(_DWORD *)(v57 + 56),
              v97,
              *(_DWORD *)(v57 + 5104));
            return 0;
          }
          else
          {
            return 0;
          }
        }
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
        if ( !StorEtwLoggingEnabled || !_bittest((const signed __int32 *)&WPP_MAIN_CB.Dpc.DpcData, 0x1Cu) )
          return 0;
        v81 = **(_QWORD **)(v11 - 16);
        if ( !v81 )
          return (unsigned int)-1056964602;
        v82 = (unsigned __int16 **)&a9;
        v83 = a9;
        if ( v10 == 58 )
        {
          v84 = 2;
        }
        else
        {
          v84 = 8;
          if ( v10 == 59 )
            v84 = 4;
        }
        v85 = 0LL;
        v86 = v84;
        do
        {
          v87 = v82[1];
          v82 += 2;
          v94[v85++] = v87;
          *(unsigned __int16 **)((char *)&v92.Buffer + v85 * 8) = *v82;
          --v86;
        }
        while ( v86 );
        v72 = (unsigned int)StorEtwMiniportEvent(
                              v81,
                              (_DWORD)v96,
                              v97,
                              (_DWORD)a5,
                              (__int64)a6,
                              a7,
                              a8,
                              (__int64)v83,
                              v84,
                              (__int64)v94,
                              (__int64)v93);
        return (unsigned int)RaidNtStatusToStorStatus(v72);
      case 0x3Du:
        if ( KeGetCurrentIrql() )
          return (unsigned int)-1056964600;
        if ( !v96 )
          return (unsigned int)-1056964602;
        LOBYTE(v96->Group) = 0;
        LOBYTE(v96->Group) = RaidpIsCurrentOsInstallationUpgrade();
        return 0;
      case 0x3Eu:
        UnicodeString.Length = 0;
        *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
        *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
        HIWORD(UnicodeString.Buffer) = 0;
        *(_QWORD *)&v92.Length = a7;
        if ( KeGetCurrentIrql() )
          return (unsigned int)-1056964600;
        v69 = **(_QWORD **)(v11 - 16);
        if ( v96 )
        {
          RtlInitAnsiString(&DestinationString, (PCSZ)v96);
          LogicalProcessorRelationship = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
          if ( LogicalProcessorRelationship < 0 )
            return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
        }
        RtlInitAnsiString(&DestinationString, (PCSZ)v97);
        LogicalProcessorRelationship = RtlAnsiStringToUnicodeString(&v90, &DestinationString, 1u);
        if ( LogicalProcessorRelationship < 0 )
          return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
        p_UnicodeString = &UnicodeString;
        if ( !v96 )
          LODWORD(p_UnicodeString) = 0;
        DeviceKey = PortRegistryReadDeviceKey(
                      *(_QWORD *)(v69 + 32),
                      (_DWORD)p_UnicodeString,
                      (unsigned int)&v90,
                      (_DWORD)a5,
                      (__int64)a6,
                      *(__int64 *)&v92.Length);
        if ( UnicodeString.Buffer )
          RtlFreeUnicodeString(&UnicodeString);
        if ( v90.Buffer )
          goto LABEL_269;
        goto LABEL_270;
      case 0x3Fu:
        v92.Length = 0;
        *(_QWORD *)&v92.MaximumLength = 0LL;
        *(_DWORD *)((char *)&v92.Buffer + 2) = 0;
        HIWORD(v92.Buffer) = 0;
        *(_DWORD *)&UnicodeString.Length = a7;
        if ( KeGetCurrentIrql() )
          return (unsigned int)-1056964600;
        v73 = **(_QWORD **)(v11 - 16);
        if ( v96 )
        {
          RtlInitAnsiString(&DestinationString, (PCSZ)v96);
          LogicalProcessorRelationship = RtlAnsiStringToUnicodeString(&v92, &DestinationString, 1u);
          if ( LogicalProcessorRelationship < 0 )
            return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
        }
        RtlInitAnsiString(&DestinationString, (PCSZ)v97);
        LogicalProcessorRelationship = RtlAnsiStringToUnicodeString(&v90, &DestinationString, 1u);
        if ( LogicalProcessorRelationship < 0 )
          return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
        v74 = &v92;
        if ( !v96 )
          LODWORD(v74) = 0;
        DeviceKey = PortRegistryWriteDeviceKey(
                      *(_QWORD *)(v73 + 32),
                      (_DWORD)v74,
                      (unsigned int)&v90,
                      (_DWORD)a5,
                      (__int64)a6,
                      *(_DWORD *)&UnicodeString.Length);
        if ( v92.Buffer )
          RtlFreeUnicodeString(&v92);
        if ( v90.Buffer )
LABEL_269:
          RtlFreeUnicodeString(&v90);
LABEL_270:
        v72 = DeviceKey;
        return (unsigned int)RaidNtStatusToStorStatus(v72);
      case 0x40u:
        v88 = **(_QWORD **)(v11 - 16);
        if ( !v88 || (unsigned int)v96 >= 0x13 )
          return (unsigned int)-1056964602;
        if ( (*(_BYTE *)(v88 + 544) & 1) == 0 )
          return (unsigned int)-1056964607;
        *(_DWORD *)(v88 + 4356) = (_DWORD)v96;
        return 0;
      case 0x41u:
        if ( v96 )
          return 3238002694LL;
        v60 = **(_QWORD **)(v11 - 16);
        if ( !v60 )
          return 3238002694LL;
        v61 = *(_QWORD *)(v60 + 5088);
        if ( !v61 || *(_BYTE *)(v61 + 24) )
          return 3238002689LL;
        LogicalProcessorRelationship = RaidRegisterPerfStates(
                                         *(_QWORD *)(v60 + 8),
                                         v97,
                                         (_DWORD)a5,
                                         (_DWORD)a6,
                                         a7,
                                         *(_QWORD *)v61);
        if ( LogicalProcessorRelationship < 0 )
          return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
        if ( (unsigned __int8)RaidAdapterCacheOperationalPowerRange(*(_QWORD *)(v60 + 5088), (unsigned int)a6, a7) )
        {
          v62 = 48LL;
          v63 = 3LL;
          do
          {
            v62 += 8LL;
            *(_QWORD *)(v62 + *(_QWORD *)(v60 + 5088) - 8) = -1LL;
            --v63;
          }
          while ( v63 );
        }
        *(_BYTE *)(*(_QWORD *)(v60 + 5088) + 24LL) = (_BYTE)a6;
        StorpLogRegisterAdapterPerfStates(v60, a7);
        return 0;
      case 0x42u:
        v64 = (unsigned int)a5;
        if ( v96 || (_DWORD)a5 )
          return 3238002694LL;
        v65 = *(_QWORD *)(v11 - 16);
        if ( !*(_QWORD *)v65 )
          return v12;
        v66 = *(_QWORD *)(*(_QWORD *)v65 + 5088LL);
        if ( !v66 )
          return v12;
        v67 = KeGetCurrentIrql();
        *(_DWORD *)&v92.Length = 0;
        v92.Buffer = 0LL;
        v68 = *(_BYTE *)(v66 + 24);
        if ( !v68 || (unsigned int)a6 >= v68 )
          return 3238002694LL;
        *(_DWORD *)&v92.Length = (_DWORD)a6;
        LODWORD(v92.Buffer) = a7;
        if ( v67 >= 2u )
          v64 = 2LL;
        PoFxIssueComponentPerfStateChange(*(_QWORD *)v66, v64, (unsigned int)v97, &v92, a8);
        return 0;
      case 0x43u:
        if ( KeGetCurrentIrql() )
          return 3238002696LL;
        v12 = -1056964602;
        if ( !v97 )
          return v12;
        *(_BYTE *)v97 = 0;
        v78 = **(_QWORD **)(a2 - 16);
        if ( !v78 )
          return v12;
        if ( v96 )
        {
          if ( v96->Group != 1 )
            return v12;
          if ( *(_DWORD *)&v96[1] < 4u )
            return v12;
          UnicodeString.Length = v96[2].Group;
          LOBYTE(UnicodeString.MaximumLength) = v96[2].Number;
          v79 = RaidAdapterFindUnit(v78, *(unsigned int *)&UnicodeString.Length, a3);
          if ( !v79 )
            return v12;
          v80 = *(struct _DEVICE_OBJECT **)(v79 + 8);
        }
        else
        {
          v80 = *(struct _DEVICE_OBJECT **)(v78 + 8);
        }
        if ( !v80 )
          return v12;
        *(_QWORD *)&UnicodeString.Length = 0LL;
        LogicalProcessorRelationship = RaidGetD3ColdInterface(v80);
        if ( LogicalProcessorRelationship >= 0 )
        {
          *(_BYTE *)v97 = RaidGetD3ColdCapability(*(_QWORD *)&UnicodeString.Length);
          return 0;
        }
        return (unsigned int)RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
      default:
        if ( v13 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v13->Timer) & 0x10) != 0 && BYTE1(v13->Timer) >= 2u )
          WPP_SF_D(v13->AttachedDevice, 80LL, &WPP_a7c96fc4c7d54bab161cb0c6c8756061_Traceguids, v10);
        return v12;
    }
  }
  return (unsigned int)RaidGetStartIoPerfParams(v11, v96, v97);
}
