/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00740F0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0026180 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026B68 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C0028D90 (NtGdiDeleteObjectApp.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002F4A0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     GreGetDeviceCaps @ 0x1C0034D30 (GreGetDeviceCaps.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0049D3C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     GreSfmOpenTokenEvent @ 0x1C004E0D0 (GreSfmOpenTokenEvent.c)
 *     GreSfmGetNotificationTokens @ 0x1C004E1C0 (GreSfmGetNotificationTokens.c)
 *     DrvEnumDisplaySettings @ 0x1C0062AF0 (DrvEnumDisplaySettings.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0065808 (DrvNotifyModeChangeStartStop.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0075F70 (GreLockVisRgnSharedOrExclusive.c)
 *     GreLockVisRgnShared @ 0x1C0076310 (GreLockVisRgnShared.c)
 *     ?DxgkEngVisRgnUniq@@YAIXZ @ 0x1C007D6E0 (-DxgkEngVisRgnUniq@@YAIXZ.c)
 *     DxEngLockShareSem @ 0x1C00C3B40 (DxEngLockShareSem.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C4EA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     EngAcquireSemaphoreShared @ 0x1C00CA7F0 (EngAcquireSemaphoreShared.c)
 * Callees:
 *     Template_pz @ 0x1C00CC434 (Template_pz.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreShared(__int64 a1)
{
  __int64 result; // rax

  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return Template_pz(a1, &LockAcquireShared);
  }
  return result;
}
