/*
 * XREFs of ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0062380
 * Callers:
 *     DriverEntry @ 0x1C013B110 (DriverEntry.c)
 * Callees:
 *     IsShutdownNavigationWindowRegistrySupported_0 @ 0x1C0002638 (IsShutdownNavigationWindowRegistrySupported_0.c)
 *     ShutdownNavigationWindowRegistry_0 @ 0x1C0002640 (ShutdownNavigationWindowRegistry_0.c)
 *     IsCleanupDwmInputProcessingSupported_0 @ 0x1C0002648 (IsCleanupDwmInputProcessingSupported_0.c)
 *     CleanupDwmInputProcessing_0 @ 0x1C0002650 (CleanupDwmInputProcessing_0.c)
 *     IsDDCCICleanUpSupported_0 @ 0x1C0002658 (IsDDCCICleanUpSupported_0.c)
 *     DDCCICleanUpWrap_0 @ 0x1C0002660 (DDCCICleanUpWrap_0.c)
 *     IsMagContextDestroySupported_0 @ 0x1C0002668 (IsMagContextDestroySupported_0.c)
 *     MagContextDestroy_0 @ 0x1C0002670 (MagContextDestroy_0.c)
 *     IsUserkTraceLoggingSupported_0 @ 0x1C0002678 (IsUserkTraceLoggingSupported_0.c)
 *     DisableUserkTraceLogging_0 @ 0x1C0002680 (DisableUserkTraceLogging_0.c)
 *     IsCleanupMediaChangeSupported_0 @ 0x1C0002688 (IsCleanupMediaChangeSupported_0.c)
 *     CleanupMediaChange_0 @ 0x1C0002690 (CleanupMediaChange_0.c)
 *     IsUninitializeWin32PoolTrackingSupported_0 @ 0x1C0002698 (IsUninitializeWin32PoolTrackingSupported_0.c)
 *     UninitializeWin32PoolTracking_0 @ 0x1C00026A0 (UninitializeWin32PoolTracking_0.c)
 *     IsUninitializeWin32CrossSessionGlobalsSupported_0 @ 0x1C00026A8 (IsUninitializeWin32CrossSessionGlobalsSupported_0.c)
 *     UninitializeWin32CrossSessionGlobals_0 @ 0x1C00026B0 (UninitializeWin32CrossSessionGlobals_0.c)
 *     IsCheckSessionPoolAllocationsSupported_0 @ 0x1C00026B8 (IsCheckSessionPoolAllocationsSupported_0.c)
 *     CheckSessionPoolAllocations_0 @ 0x1C00026C0 (CheckSessionPoolAllocations_0.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0013C08 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C0045FB0 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     RIMUnInitialize @ 0x1C00626C0 (RIMUnInitialize.c)
 *     McGenEventUnregister @ 0x1C0062768 (McGenEventUnregister.c)
 *     WinSqmEndSession @ 0x1C0062790 (WinSqmEndSession.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00632A8 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     MultiUserNtGreCleanup @ 0x1C0063BC4 (MultiUserNtGreCleanup.c)
 *     ??1CMutex@@QEAA@XZ @ 0x1C0067B90 (--1CMutex@@QEAA@XZ.c)
 *     ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C007E0A0 (-OPMFreeMemory@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     Win32UnmapViewInSessionSpace @ 0x1C00AB098 (Win32UnmapViewInSessionSpace.c)
 */

void __fastcall Win32KDriverUnload(struct _DRIVER_OBJECT *a1)
{
  _DWORD *v1; // rbx
  unsigned int i; // edi
  __int64 v3; // rsi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  void (*j)(void); // rdi
  unsigned int v9; // ebx
  PVOID v10; // rcx
  ULONGLONG *v11; // rcx
  int v12; // ebx

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
  v1 = qword_1C01045D8;
  if ( qword_1C01045D8 )
  {
    CMutex::~CMutex((CMutex *)((char *)qword_1C01045D8 + 24));
    for ( i = 0; i < v1[3]; *(_QWORD *)(*(_QWORD *)v1 + 8 * v3) = 0LL )
    {
      v3 = i;
      v4 = *(void (__fastcall ****)(_QWORD, __int64))(*(_QWORD *)v1 + 8LL * i);
      if ( v4 )
        (**v4)(v4, 1LL);
      ++i;
    }
    OPMFreeMemory(*(void **)v1);
    OPMFreeMemory(v1);
  }
  gdwHydraHint |= 0x80u;
  qword_1C01045D8 = 0LL;
  MultiUserNtGreCleanup();
  gdwHydraHint |= 0x100u;
  if ( gpepCSRSS )
  {
    ObfDereferenceObject(gpepCSRSS);
    gpepCSRSS = 0LL;
  }
  if ( gpDispInfo )
  {
    v5 = *(_QWORD **)(gpDispInfo + 64);
    if ( v5 )
    {
      do
      {
        v6 = (_QWORD *)*v5;
        Win32FreePool();
        v5 = v6;
      }
      while ( v6 );
      *(_QWORD *)(gpDispInfo + 64) = 0LL;
    }
  }
  Win32kNtUserCleanup();
  v7 = qword_1C0102D48;
  if ( qword_1C0102D48 )
  {
    gbInDestroyHandleTableObjects = 1;
    for ( j = (void (*)(void))DestroyHandleFirstPass; ; j = (void (*)(void))DestroyHandleSecondPass )
    {
      v9 = 0;
      do
      {
        if ( *(_BYTE *)(v7 + 24LL * v9 + 16) )
        {
          j();
          v7 = qword_1C0102D48;
        }
        ++v9;
      }
      while ( v9 <= giheLast );
      if ( (char *)j != (char *)DestroyHandleFirstPass )
        break;
    }
    gbInDestroyHandleTableObjects = 0;
  }
  gdwHydraHint |= 0x200u;
  if ( CsrApiPort )
  {
    ObfDereferenceObject(CsrApiPort);
    CsrApiPort = 0LL;
  }
  v10 = ghSectionShared;
  if ( ghSectionShared )
  {
    gpsi = 0LL;
    if ( gpvSharedBase )
    {
      RtlDestroyHeap(gpvSharedAlloc);
      Win32UnmapViewInSessionSpace(gpvSharedBase);
      v10 = ghSectionShared;
    }
    CompositionObject::Release(v10);
  }
  if ( (int)IsMagContextDestroySupported_0() >= 0 )
    MagContextDestroy_0();
  WinSqmEndSession();
  if ( (int)IsUserkTraceLoggingSupported_0() >= 0 )
    DisableUserkTraceLogging_0();
  if ( gbTraceLoggingInitialized )
  {
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    hProvider = 0;
  }
  McGenEventUnregister(v11);
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
    v12 = 0;
  else
    v12 = UninitializeWin32PoolTracking_0();
  if ( (int)IsUninitializeWin32CrossSessionGlobalsSupported_0() >= 0 )
    UninitializeWin32CrossSessionGlobals_0();
  if ( !v12 && (int)IsCheckSessionPoolAllocationsSupported_0() >= 0 )
    CheckSessionPoolAllocations_0();
  EtwUnregister(qword_1C0101D30);
  qword_1C0101D30 = 0LL;
  dword_1C0101D10 = 0;
}
