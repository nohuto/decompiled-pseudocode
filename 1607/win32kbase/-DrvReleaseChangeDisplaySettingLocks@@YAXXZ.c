/*
 * XREFs of ?DrvReleaseChangeDisplaySettingLocks@@YAXXZ @ 0x1C0066E88
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00747D8 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     GetghsemEnableEUDC_0 @ 0x1C0001798 (GetghsemEnableEUDC_0.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 */

void DrvReleaseChangeDisplaySettingLocks(void)
{
  struct _ERESOURCE *v0; // rax

  EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn");
  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock");
  GreReleaseSemaphoreInternal(ghsemGreLock);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDynamicModeChange);
  GetghsemEnableEUDC_0();
  EtwTraceGreLockReleaseSemaphore(L"GetghsemEnableEUDC()");
  v0 = (struct _ERESOURCE *)GetghsemEnableEUDC_0();
  GreReleaseSemaphoreInternal(v0);
}
