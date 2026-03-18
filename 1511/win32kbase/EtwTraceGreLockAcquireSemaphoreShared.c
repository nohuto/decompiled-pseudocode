/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreShared @ 0x1C006E360
 * Callers:
 *     hbmSelectBitmap @ 0x1C002DCA0 (hbmSelectBitmap.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00361E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreGetDeviceCaps @ 0x1C004AB10 (GreGetDeviceCaps.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C004C14C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     GreSfmOpenTokenEvent @ 0x1C004E600 (GreSfmOpenTokenEvent.c)
 *     GreSfmGetNotificationTokens @ 0x1C004E6F0 (GreSfmGetNotificationTokens.c)
 *     DrvEnumDisplaySettings @ 0x1C0050C50 (DrvEnumDisplaySettings.c)
 *     sub_1C0054204 @ 0x1C0054204 (sub_1C0054204.c)
 *     GreLockVisRgnShared @ 0x1C0071570 (GreLockVisRgnShared.c)
 *     ?DxgkEngVisRgnUniq@@YAIXZ @ 0x1C0079F30 (-DxgkEngVisRgnUniq@@YAIXZ.c)
 *     DxEngLockShareSem @ 0x1C00B8770 (DxEngLockShareSem.c)
 *     EngAcquireSemaphoreShared @ 0x1C00BEB20 (EngAcquireSemaphoreShared.c)
 * Callees:
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
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
