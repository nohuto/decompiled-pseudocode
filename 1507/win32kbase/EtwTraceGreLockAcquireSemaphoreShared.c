/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreShared @ 0x1C000B5B0
 * Callers:
 *     GreSfmOpenTokenEvent @ 0x1C000E5D0 (GreSfmOpenTokenEvent.c)
 *     GreSfmGetNotificationTokens @ 0x1C000E6C0 (GreSfmGetNotificationTokens.c)
 *     GreLockVisRgnShared @ 0x1C000ECC0 (GreLockVisRgnShared.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C001E608 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C0022200 (DrvEnumDisplaySettings.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C003A070 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreGetDeviceCaps @ 0x1C0056DB0 (GreGetDeviceCaps.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0061290 (DrvNotifyModeChangeStartStop.c)
 *     ?DxgkEngVisRgnUniq@@YAIXZ @ 0x1C0085600 (-DxgkEngVisRgnUniq@@YAIXZ.c)
 *     DxEngLockShareSem @ 0x1C00B5FC0 (DxEngLockShareSem.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00B72F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     EngAcquireSemaphoreShared @ 0x1C00BD3B0 (EngAcquireSemaphoreShared.c)
 * Callees:
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreShared(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return Template_pz(a1, &LockAcquireShared, a3, a2, a1);
  }
  return result;
}
