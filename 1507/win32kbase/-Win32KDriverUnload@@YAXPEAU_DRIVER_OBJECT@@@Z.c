/*
 * XREFs of ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C006AD40
 * Callers:
 *     DriverEntry @ 0x1C01372C0 (DriverEntry.c)
 * Callees:
 *     IsShutdownNavigationWindowRegistrySupported_0 @ 0x1C0002608 (IsShutdownNavigationWindowRegistrySupported_0.c)
 *     ShutdownNavigationWindowRegistry_0 @ 0x1C0002610 (ShutdownNavigationWindowRegistry_0.c)
 *     IsCleanupDwmInputProcessingSupported_0 @ 0x1C0002618 (IsCleanupDwmInputProcessingSupported_0.c)
 *     CleanupDwmInputProcessing_0 @ 0x1C0002620 (CleanupDwmInputProcessing_0.c)
 *     IsDDCCICleanUpSupported_0 @ 0x1C0002628 (IsDDCCICleanUpSupported_0.c)
 *     DDCCICleanUpWrap_0 @ 0x1C0002630 (DDCCICleanUpWrap_0.c)
 *     IsRemoveThreadSwitchWindowInfoSupported_0 @ 0x1C0002638 (IsRemoveThreadSwitchWindowInfoSupported_0.c)
 *     RemoveThreadSwitchWindowInfo_0 @ 0x1C0002640 (RemoveThreadSwitchWindowInfo_0.c)
 *     IsMagContextDestroySupported_0 @ 0x1C0002648 (IsMagContextDestroySupported_0.c)
 *     MagContextDestroy_0 @ 0x1C0002650 (MagContextDestroy_0.c)
 *     IsUserkTraceLoggingSupported_0 @ 0x1C0002658 (IsUserkTraceLoggingSupported_0.c)
 *     DisableUserkTraceLogging_0 @ 0x1C0002660 (DisableUserkTraceLogging_0.c)
 *     IsCleanupMediaChangeSupported_0 @ 0x1C0002668 (IsCleanupMediaChangeSupported_0.c)
 *     CleanupMediaChange_0 @ 0x1C0002670 (CleanupMediaChange_0.c)
 *     IsUninitializeWin32PoolTrackingSupported_0 @ 0x1C0002678 (IsUninitializeWin32PoolTrackingSupported_0.c)
 *     UninitializeWin32PoolTracking_0 @ 0x1C0002680 (UninitializeWin32PoolTracking_0.c)
 *     IsUninitializeWin32CrossSessionGlobalsSupported_0 @ 0x1C0002688 (IsUninitializeWin32CrossSessionGlobalsSupported_0.c)
 *     UninitializeWin32CrossSessionGlobals_0 @ 0x1C0002690 (UninitializeWin32CrossSessionGlobals_0.c)
 *     IsCheckSessionPoolAllocationsSupported_0 @ 0x1C0002698 (IsCheckSessionPoolAllocationsSupported_0.c)
 *     CheckSessionPoolAllocations_0 @ 0x1C00026A0 (CheckSessionPoolAllocations_0.c)
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C00134A0 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ??1CMutex@@QEAA@XZ @ 0x1C0069EA0 (--1CMutex@@QEAA@XZ.c)
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C0069F28 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C006B6A8 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     RIMUnInitialize @ 0x1C006B870 (RIMUnInitialize.c)
 *     McGenEventUnregister @ 0x1C006B918 (McGenEventUnregister.c)
 *     WinSqmEndSession @ 0x1C006B940 (WinSqmEndSession.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C006BA54 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     MultiUserNtGreCleanup @ 0x1C006C400 (MultiUserNtGreCleanup.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     Win32UnmapViewInSessionSpace @ 0x1C00A6A78 (Win32UnmapViewInSessionSpace.c)
 */

void __fastcall Win32KDriverUnload(struct _DRIVER_OBJECT *a1)
{
  unsigned int v1; // edx
  _DWORD *v2; // rbx
  unsigned int i; // edi
  __int64 v4; // rsi
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  void (*j)(void); // rdi
  unsigned int v10; // ebx
  PVOID v11; // rcx
  PREGHANDLE v12; // rcx
  int v13; // ebx

  if ( (int)IsShutdownNavigationWindowRegistrySupported_0() >= 0 )
    ShutdownNavigationWindowRegistry_0();
  if ( (int)IsCleanupDwmInputProcessingSupported_0() >= 0 )
    CleanupDwmInputProcessing_0();
  if ( DirectComposition::CConnection::s_pSessionConnection )
    DirectComposition::CConnection::`scalar deleting destructor'(
      DirectComposition::CConnection::s_pSessionConnection,
      v1);
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
  v2 = qword_1C01003A0;
  if ( qword_1C01003A0 )
  {
    CMutex::~CMutex((void **)qword_1C01003A0 + 3);
    for ( i = 0; i < v2[3]; *(_QWORD *)(*(_QWORD *)v2 + 8 * v4) = 0LL )
    {
      v4 = i;
      v5 = *(void (__fastcall ****)(_QWORD, __int64))(*(_QWORD *)v2 + 8LL * i);
      if ( v5 )
        (**v5)(v5, 1LL);
      ++i;
    }
    OPMFreeMemory(*(void **)v2);
    OPMFreeMemory(v2);
  }
  gdwHydraHint |= 0x80u;
  qword_1C01003A0 = 0LL;
  MultiUserNtGreCleanup();
  gdwHydraHint |= 0x100u;
  if ( gpepCSRSS )
  {
    ObfDereferenceObject(gpepCSRSS);
    gpepCSRSS = 0LL;
  }
  if ( gpDispInfo )
  {
    v6 = *(_QWORD **)(gpDispInfo + 64);
    if ( v6 )
    {
      do
      {
        v7 = (_QWORD *)*v6;
        Win32FreePool();
        v6 = v7;
      }
      while ( v7 );
      *(_QWORD *)(gpDispInfo + 64) = 0LL;
    }
  }
  Win32kNtUserCleanup();
  v8 = qword_1C01003E8;
  if ( qword_1C01003E8 )
  {
    gbInDestroyHandleTableObjects = 1;
    for ( j = (void (*)(void))DestroyHandleFirstPass; ; j = (void (*)(void))DestroyHandleSecondPass )
    {
      v10 = 0;
      do
      {
        if ( *(_BYTE *)(v8 + 24LL * v10 + 16) )
        {
          j();
          v8 = qword_1C01003E8;
        }
        ++v10;
      }
      while ( v10 <= giheLast );
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
  v11 = ghSectionShared;
  if ( ghSectionShared )
  {
    gpsi = 0LL;
    if ( gpvSharedBase )
    {
      RtlDestroyHeap(gpvSharedAlloc);
      Win32UnmapViewInSessionSpace(gpvSharedBase);
      v11 = ghSectionShared;
    }
    CompositionObject::Release(v11);
  }
  if ( (int)IsMagContextDestroySupported_0() >= 0 )
    MagContextDestroy_0();
  WinSqmEndSession();
  if ( (int)IsUserkTraceLoggingSupported_0() >= 0 )
    DisableUserkTraceLogging_0();
  EtwUnregister(qword_1C00FE9F0);
  qword_1C00FE9F0 = 0LL;
  hProvider = 0;
  McGenEventUnregister(v12);
  if ( (int)IsCleanupMediaChangeSupported_0() >= 0 )
    CleanupMediaChange_0();
  RIMUnInitialize();
  if ( gpW32FastMutex )
  {
    ExFreePoolWithTag(gpW32FastMutex, 0);
    gpW32FastMutex = 0LL;
  }
  if ( !gSessionId )
  {
    KeRemoveSystemServiceTable(1LL);
    if ( gpCountTable )
    {
      ExFreePoolWithTag(gpCountTable, 0);
      gpCountTable = 0LL;
    }
  }
  if ( (int)IsUninitializeWin32PoolTrackingSupported_0() < 0 )
    v13 = 0;
  else
    v13 = UninitializeWin32PoolTracking_0();
  if ( (int)IsUninitializeWin32CrossSessionGlobalsSupported_0() >= 0 )
    UninitializeWin32CrossSessionGlobals_0();
  if ( !v13 && (int)IsCheckSessionPoolAllocationsSupported_0() >= 0 )
    CheckSessionPoolAllocations_0();
  EtwUnregister(qword_1C00FE9B0);
  qword_1C00FE9B0 = 0LL;
  dword_1C00FE990 = 0;
}
