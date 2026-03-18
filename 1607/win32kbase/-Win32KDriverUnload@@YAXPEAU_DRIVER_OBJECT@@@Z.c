/*
 * XREFs of ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C006EFD0
 * Callers:
 *     DriverEntry @ 0x1C0154670 (DriverEntry.c)
 * Callees:
 *     IsShutdownNavigationWindowRegistrySupported_0 @ 0x1C00025D8 (IsShutdownNavigationWindowRegistrySupported_0.c)
 *     ShutdownNavigationWindowRegistry_0 @ 0x1C00025E0 (ShutdownNavigationWindowRegistry_0.c)
 *     IsCleanupDwmInputProcessingSupported_0 @ 0x1C00025E8 (IsCleanupDwmInputProcessingSupported_0.c)
 *     CleanupDwmInputProcessing_0 @ 0x1C00025F0 (CleanupDwmInputProcessing_0.c)
 *     IsDDCCICleanUpSupported_0 @ 0x1C00025F8 (IsDDCCICleanUpSupported_0.c)
 *     DDCCICleanUpWrap_0 @ 0x1C0002600 (DDCCICleanUpWrap_0.c)
 *     IsRemoveThreadSwitchWindowInfoSupported_0 @ 0x1C0002608 (IsRemoveThreadSwitchWindowInfoSupported_0.c)
 *     RemoveThreadSwitchWindowInfo_0 @ 0x1C0002610 (RemoveThreadSwitchWindowInfo_0.c)
 *     IsMagContextDestroySupported_0 @ 0x1C0002618 (IsMagContextDestroySupported_0.c)
 *     MagContextDestroy_0 @ 0x1C0002620 (MagContextDestroy_0.c)
 *     IsUserkTraceLoggingSupported_0 @ 0x1C0002628 (IsUserkTraceLoggingSupported_0.c)
 *     DisableUserkTraceLogging_0 @ 0x1C0002630 (DisableUserkTraceLogging_0.c)
 *     IsCleanupMediaChangeSupported_0 @ 0x1C0002638 (IsCleanupMediaChangeSupported_0.c)
 *     CleanupMediaChange_0 @ 0x1C0002640 (CleanupMediaChange_0.c)
 *     IsUninitializeWin32PoolTrackingSupported_0 @ 0x1C0002648 (IsUninitializeWin32PoolTrackingSupported_0.c)
 *     UninitializeWin32PoolTracking_0 @ 0x1C0002650 (UninitializeWin32PoolTracking_0.c)
 *     IsUninitializeWin32CrossSessionGlobalsSupported_0 @ 0x1C0002658 (IsUninitializeWin32CrossSessionGlobalsSupported_0.c)
 *     UninitializeWin32CrossSessionGlobals_0 @ 0x1C0002660 (UninitializeWin32CrossSessionGlobals_0.c)
 *     IsCheckSessionPoolAllocationsSupported_0 @ 0x1C0002668 (IsCheckSessionPoolAllocationsSupported_0.c)
 *     CheckSessionPoolAllocations_0 @ 0x1C0002670 (CheckSessionPoolAllocations_0.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0018814 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ??1CMutex@@QEAA@XZ @ 0x1C0052F80 (--1CMutex@@QEAA@XZ.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C006CFF4 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     MultiUserNtGreCleanup @ 0x1C006D778 (MultiUserNtGreCleanup.c)
 *     RIMUnInitialize @ 0x1C006F360 (RIMUnInitialize.c)
 *     ?CoreMsgUninitialize@@YAXXZ @ 0x1C006F3F0 (-CoreMsgUninitialize@@YAXXZ.c)
 *     McGenEventUnregister @ 0x1C006F4BC (McGenEventUnregister.c)
 *     TlgUnregisterAggregateProvider @ 0x1C006F4E4 (TlgUnregisterAggregateProvider.c)
 *     WinSqmEndSession @ 0x1C006F750 (WinSqmEndSession.c)
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C00819B0 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32KDriverUnload(struct _DRIVER_OBJECT *a1)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdi
  unsigned int i; // esi
  __int64 v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  void (*j)(void); // rdi
  unsigned int v8; // ebx
  PVOID v9; // rcx
  PREGHANDLE v10; // rcx
  int v11; // ebx

  if ( (int)IsShutdownNavigationWindowRegistrySupported_0() >= 0 )
    ShutdownNavigationWindowRegistry_0();
  if ( (int)IsCleanupDwmInputProcessingSupported_0() >= 0 )
    CleanupDwmInputProcessing_0();
  if ( DirectComposition::CConnection::s_pSessionConnection )
    DirectComposition::CConnection::`scalar deleting destructor'(DirectComposition::CConnection::s_pSessionConnection);
  if ( DirectComposition::CConnection::s_pSessionConnectionLock )
  {
    ExDeleteResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
    Win32FreePool();
    DirectComposition::CConnection::s_pSessionConnectionLock = 0LL;
  }
  if ( DirectComposition::CSynchronizationManager::s_pSyncTable )
    Win32FreePool();
  if ( DirectComposition::CSynchronizationManager::s_pSyncTableLock )
  {
    ExDeleteResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
    Win32FreePool();
  }
  if ( (int)IsDDCCICleanUpSupported_0() >= 0 )
    DDCCICleanUpWrap_0();
  DeviceObjectExtension = WPP_MAIN_CB.DeviceObjectExtension;
  if ( WPP_MAIN_CB.DeviceObjectExtension )
  {
    CMutex::~CMutex((void **)&WPP_MAIN_CB.DeviceObjectExtension->Dope);
    for ( i = 0;
          i < HIDWORD(DeviceObjectExtension->DeviceObject);
          *(_QWORD *)(*(_QWORD *)&DeviceObjectExtension->Type + 8 * v3) = 0LL )
    {
      v3 = i;
      OPMFreeMemory(*(void **)(*(_QWORD *)&DeviceObjectExtension->Type + 8LL * i++));
    }
    OPMFreeMemory(*(void **)&DeviceObjectExtension->Type);
    OPMFreeMemory(DeviceObjectExtension);
  }
  gdwHydraHint |= 0x80u;
  WPP_MAIN_CB.DeviceObjectExtension = 0LL;
  MultiUserNtGreCleanup();
  gdwHydraHint |= 0x100u;
  if ( gpepCSRSS )
  {
    ObfDereferenceObject(gpepCSRSS);
    gpepCSRSS = 0LL;
  }
  v4 = (_QWORD *)gpDispInfo;
  if ( gpDispInfo )
  {
    v4 = *(_QWORD **)(gpDispInfo + 64);
    if ( v4 )
    {
      do
      {
        v5 = (_QWORD *)*v4;
        Win32FreePool();
        v4 = v5;
      }
      while ( v5 );
      *(_QWORD *)(gpDispInfo + 64) = 0LL;
    }
  }
  Win32kNtUserCleanup((__int64)v4);
  v6 = qword_1C011A128;
  if ( qword_1C011A128 )
  {
    gbInDestroyHandleTableObjects = 1;
    for ( j = (void (*)(void))DestroyHandleFirstPass; ; j = (void (*)(void))DestroyHandleSecondPass )
    {
      v8 = 0;
      do
      {
        if ( *(_BYTE *)(v6 + 24LL * v8 + 16) )
        {
          j();
          v6 = qword_1C011A128;
        }
        ++v8;
      }
      while ( v8 <= giheLast );
      if ( (char *)j != (char *)DestroyHandleFirstPass )
        break;
    }
    gbInDestroyHandleTableObjects = 0;
  }
  if ( (int)IsRemoveThreadSwitchWindowInfoSupported_0() >= 0 )
    RemoveThreadSwitchWindowInfo_0();
  gdwHydraHint |= 0x200u;
  if ( CsrApiPort )
  {
    ObfDereferenceObject(CsrApiPort);
    CsrApiPort = 0LL;
  }
  v9 = ghSectionShared;
  if ( ghSectionShared )
  {
    gpsi = 0LL;
    if ( gpvSharedBase )
    {
      RtlDestroyHeap(gpvSharedAlloc);
      MmUnmapViewInSessionSpace(gpvSharedBase);
      v9 = ghSectionShared;
    }
    ObfDereferenceObject(v9);
  }
  if ( (int)IsMagContextDestroySupported_0() >= 0 )
    MagContextDestroy_0();
  WinSqmEndSession();
  if ( (int)IsUserkTraceLoggingSupported_0() >= 0 )
    DisableUserkTraceLogging_0();
  if ( gbTraceLoggingInitialized )
  {
    EtwUnregister(qword_1C01187F0);
    qword_1C01187F0 = 0LL;
    dword_1C01187D0 = 0;
    EtwUnregister(qword_1C01187B0);
    qword_1C01187B0 = 0LL;
    dword_1C0118790 = 0;
    EtwUnregister(qword_1C0118730);
    qword_1C0118730 = 0LL;
    dword_1C0118710 = 0;
  }
  TlgUnregisterAggregateProvider();
  McGenEventUnregister(v10);
  if ( (int)IsCleanupMediaChangeSupported_0() >= 0 )
    CleanupMediaChange_0();
  CoreMsgUninitialize();
  RIMUnInitialize();
  if ( gpW32FastMutex )
  {
    ExFreePoolWithTag(gpW32FastMutex, 0);
    gpW32FastMutex = 0LL;
  }
  if ( !gSessionId )
  {
    KeRemoveSystemServiceTable(1LL);
    if ( !gSessionId )
      KeRemoveSystemServiceTable(2LL);
  }
  if ( gpCountTable )
  {
    ExFreePoolWithTag(gpCountTable, 0);
    gpCountTable = 0LL;
  }
  if ( (int)IsUninitializeWin32PoolTrackingSupported_0() < 0 )
    v11 = 0;
  else
    v11 = UninitializeWin32PoolTracking_0();
  if ( (int)IsUninitializeWin32CrossSessionGlobalsSupported_0() >= 0 )
    UninitializeWin32CrossSessionGlobals_0();
  if ( !v11 && (int)IsCheckSessionPoolAllocationsSupported_0() >= 0 )
    CheckSessionPoolAllocations_0();
  EtwUnregister(qword_1C0118060);
  qword_1C0118060 = 0LL;
  hProvider = 0;
}
