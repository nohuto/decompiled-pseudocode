/*
 * XREFs of ndisPnPRemoveDevice @ 0x1C00E6FA8
 * Callers:
 *     ndisPnPRemoveDeviceEx @ 0x1C009E398 (ndisPnPRemoveDeviceEx.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00D2120 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPIrpStopDevice @ 0x1C00D44EC (ndisPnPIrpStopDevice.c)
 * Callees:
 *     NdisResetEvent @ 0x1C000FE70 (NdisResetEvent.c)
 *     ndisCancelWaitWake @ 0x1C0012DFC (ndisCancelWaitWake.c)
 *     ndisDereferenceDriver @ 0x1C001331C (ndisDereferenceDriver.c)
 *     ndisIovDeleteDefaultNicSwitch @ 0x1C0013450 (ndisIovDeleteDefaultNicSwitch.c)
 *     ndisSetupWmiNode @ 0x1C00181A0 (ndisSetupWmiNode.c)
 *     ndisReferenceDriver @ 0x1C001BDD0 (ndisReferenceDriver.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003EDD0 (Template_jqxq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_Zq @ 0x1C004EAC4 (WPP_SF_Zq.c)
 *     ndisIMDeleteIfStackEntry @ 0x1C005D7F8 (ndisIMDeleteIfStackEntry.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     ndisMInvokeRemoveDevice @ 0x1C009E590 (ndisMInvokeRemoveDevice.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C009E760 (ndisMCleanupMiniportBlockOnStop.c)
 *     ndisMHaltMiniport @ 0x1C009E8F8 (ndisMHaltMiniport.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C009EB9C (ndisMSetMiniportReadyForBinding.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A46C8 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A4714 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C00A6CF0 (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ndisIovTeardownVf @ 0x1C00D958C (ndisIovTeardownVf.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00E30E0 (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 */

void __fastcall ndisPnPRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  _UNICODE_STRING *v2; // rdi
  char v4; // r13
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi
  KIRQL v7; // al
  struct _NDIS_MINIPORT_BLOCK *i; // r14
  const void **pAdapterInstanceName; // rdx
  PVOID v10; // r14
  unsigned __int16 *v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  char v14; // r15
  struct _NDIS_MINIPORT_BLOCK *v15; // rdx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  void (__fastcall *VpciInterfaceDereference)(void *); // rax
  Rtl::KString *p; // rax
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  PVOID WnodeEventItem[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v21[20]; // [rsp+60h] [rbp-A0h] BYREF
  char v22; // [rsp+100h] [rbp+0h] BYREF

  v2 = 0LL;
  v4 = 0;
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(0x55u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)a1, a2);
  ndisReferencePackage((__int64)&ndisPkgs);
  DriverHandle = a1->DriverHandle;
  if ( DriverHandle )
  {
    if ( (DriverHandle->Flags & 1) != 0 )
    {
      KeWaitForSingleObject(&DriverHandle->IMStartRemoveMutex, Executive, 0, 0, 0LL);
      v4 = 1;
      DriverHandle->IMStartRemoveMutexOwnerThread = KeGetCurrentThread();
    }
    ndisCancelWaitWake((__int64)a1);
    v7 = KeAcquireSpinLockRaiseToDpc(&DriverHandle->Ref.SpinLock);
    for ( i = DriverHandle->MiniportQueue; i && i != a1; i = i->NextMiniport )
      ;
    KeReleaseSpinLock(&DriverHandle->Ref.SpinLock, v7);
    if ( i != a1 || a1->Ref.Closing == 1 )
    {
      a1->Ref.Closing = 1;
    }
    else
    {
      ndisReferenceDriver((__int64)DriverHandle, 1u);
      NdisResetEvent(&a1->OpenReadyEvent);
      pAdapterInstanceName = (const void **)a1->pAdapterInstanceName;
      if ( pAdapterInstanceName )
      {
        ndisSetupWmiNode(
          (__int64)a1,
          pAdapterInstanceName,
          a1->MiniportName.Length + 2,
          (__int128 *)&GUID_NDIS_NOTIFY_ADAPTER_REMOVAL,
          WnodeEventItem);
        v10 = WnodeEventItem[0];
        if ( WnodeEventItem[0] )
        {
          v11 = (unsigned __int16 *)((char *)WnodeEventItem[0] + *((unsigned int *)WnodeEventItem[0] + 14));
          *v11 = a1->MiniportName.Length;
          memmove(v11 + 1, a1->MiniportName.Buffer, a1->MiniportName.Length);
          v12 = IoWMIWriteEvent(v10);
          v14 = v12;
          if ( v12 < 0 )
          {
            if ( (unsigned __int8)byte_1C00895D9 >= 2u )
              WPP_SF_(0x56u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids);
            if ( (Microsoft_Windows_NDISEnableBits & 0x1000) != 0 )
              Template_jqxq(
                v13,
                &IndicateAdapterRemovalFailed,
                &a1->InterfaceGuid,
                (unsigned __int64)&a1->InterfaceGuid,
                a1->IfIndex,
                a1->NetLuid.Value,
                v14);
            ExFreePoolWithTag(v10, 0);
          }
        }
      }
      Ndis::BindEngine::BeginPolicyUpdates(&a1->BindEngine);
      if ( Ndis::BindState::SetPause(&a1->Bindings.Miniport, DatapathPaused, PauseReason_RemovingMiniport)
        && (unsigned __int8)byte_1C00895E3 >= 4u )
      {
        ndisGetBindLinkNameForTracing(a1, (struct NDIS_PNPTRACE_LOCALS *)v21);
        WPP_SF_Zq(0x57u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (unsigned __int16 *)v21[1], v21[0]);
      }
      Ndis::BindEngine::EndPolicyUpdates(&a1->BindEngine, v15);
      Ndis::BindEngine::ApplyBindChanges(&a1->BindEngine, RunSynchronous, 0);
      SriovCurrentCapabilities = a1->SriovCurrentCapabilities;
      if ( SriovCurrentCapabilities && (SriovCurrentCapabilities->SriovCapabilities & 5) == 5 )
        ndisIovTeardownVf((__int64)a1);
      ndisMSetMiniportReadyForBinding(a1, 0, Reason_RemovingMiniport, RunSynchronous);
      if ( (a1->PnPFlags & 0x8000000) != 0 )
        ndisIMDeleteIfStackEntry((__int64)a1);
      ndisIovDeleteDefaultNicSwitch(a1);
      ndisMHaltMiniport((ULONG_PTR)a1);
      ndisMCleanupMiniportBlockOnStop((__int64)a1);
      ndisDereferenceDriver((__int64)DriverHandle, 0);
      *(_DWORD *)&DestinationString.Length = 0x1000000;
      DestinationString.Buffer = (wchar_t *)&v22;
      RtlCopyUnicodeString(&DestinationString, &ndisDosDevicesStr);
      if ( RtlAppendUnicodeStringToString(&DestinationString, &a1->BaseName) >= 0 )
        IoDeleteSymbolicLink(&DestinationString);
    }
    if ( v4 == 1 )
    {
      DriverHandle->IMStartRemoveMutexOwnerThread = 0LL;
      KeReleaseMutex(&DriverHandle->IMStartRemoveMutex, 0);
    }
  }
  if ( a2 )
  {
    VpciInterfaceDereference = a1->VpciInterfaceDereference;
    if ( VpciInterfaceDereference )
      VpciInterfaceDereference(a1->VpciInterfaceContext);
    ndisMInvokeRemoveDevice((__int64)a1);
    p = a1->ExportName._p;
    if ( p )
      v2 = &p->_UNICODE_STRING;
    IoDeleteSymbolicLink(v2);
  }
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x58u, &WPP_31395673df433bc870ce0871a9c25aaa_Traceguids, (__int64)a1);
}
