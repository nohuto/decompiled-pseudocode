/*
 * XREFs of GreLockDwmState @ 0x1C0045760
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003430 (NtDCompositionRegisterThumbnailVisual.c)
 *     UserReferenceDwmApiPort @ 0x1C000B010 (UserReferenceDwmApiPort.c)
 *     ?CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ @ 0x1C000B1B8 (-CreateDwmHandle@CSharedSectionMarshaler@DirectComposition@@QEAAPEAXXZ.c)
 *     CheckOrAcquireDwmStateLock @ 0x1C00456A8 (CheckOrAcquireDwmStateLock.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0070294 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007F924 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     DwmSetProcessBreakOnTerminate @ 0x1C00C04F0 (DwmSetProcessBreakOnTerminate.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C00D4080 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     Template_pqz @ 0x1C00BEC08 (Template_pqz.c)
 */

__int64 __fastcall GreLockDwmState(__int64 a1, int a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  __int64 result; // rax

  v3 = ghsemDwmState;
  if ( ghsemDwmState )
  {
    PsEnterPriorityRegion(a1);
    result = (__int64)ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
    LODWORD(v3) = (_DWORD)ghsemDwmState;
  }
  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return Template_pqz(a1, a2, a3, (_DWORD)v3, 7, (__int64)L"ghsemDwmState");
  }
  return result;
}
