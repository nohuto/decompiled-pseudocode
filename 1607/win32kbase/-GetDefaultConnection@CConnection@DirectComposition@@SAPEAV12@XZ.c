/*
 * XREFs of ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0019B0C
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C000D5B4 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ??_GCProcessData@DirectComposition@@AEAAPEAXI@Z @ 0x1C000DC00 (--_GCProcessData@DirectComposition@@AEAAPEAXI@Z.c)
 *     NtDCompositionGetFrameStatistics @ 0x1C00174F0 (NtDCompositionGetFrameStatistics.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0017B80 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C0019420 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     ?Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C0048740 (-Delete@CSharedSystemResource@DirectComposition@@MEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z.c)
 *     ?Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z @ 0x1C0048798 (-Initialize@CSharedSystemResource@DirectComposition@@IEAAJI@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00803E0 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     DCompositionForceRender @ 0x1C00E3140 (DCompositionForceRender.c)
 *     DCompositionRenderBlack @ 0x1C00E31B0 (DCompositionRenderBlack.c)
 *     NtDCompositionEnableDDASupport @ 0x1C00E3760 (NtDCompositionEnableDDASupport.c)
 *     NtDCompositionEnableMMCSS @ 0x1C00E37B0 (NtDCompositionEnableMMCSS.c)
 *     NtDCompositionSyncWait @ 0x1C00E3960 (NtDCompositionSyncWait.c)
 *     NtDesktopCaptureBits @ 0x1C00E3B00 (NtDesktopCaptureBits.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CConnection *DirectComposition::CConnection::GetDefaultConnection(void)
{
  volatile signed __int32 *v0; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rdi
  struct _ERESOURCE *v3; // rbx
  struct _ERESOURCE *v5; // rdi

  v0 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( !CurrentProcessWin32Process )
    goto LABEL_7;
  v2 = *(_QWORD *)(CurrentProcessWin32Process + 256);
  if ( !v2 )
    goto LABEL_7;
  v3 = *(struct _ERESOURCE **)(v2 + 32);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v3, 1u);
  v0 = *(volatile signed __int32 **)(v2 + 24);
  if ( v0 )
    _InterlockedIncrement(v0);
  ExReleaseResourceLite(*(PERESOURCE *)(v2 + 32));
  KeLeaveCriticalRegion();
  if ( !v0 )
  {
LABEL_7:
    v5 = DirectComposition::CConnection::s_pSessionConnectionLock;
    if ( DirectComposition::CConnection::s_pSessionConnectionLock )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v5, 1u);
      v0 = (volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection;
      if ( DirectComposition::CConnection::s_pSessionConnection )
        _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
      ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
      KeLeaveCriticalRegion();
    }
  }
  return (struct DirectComposition::CConnection *)v0;
}
