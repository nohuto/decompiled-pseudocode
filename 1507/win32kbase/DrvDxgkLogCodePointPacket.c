/*
 * XREFs of DrvDxgkLogCodePointPacket @ 0x1C006AC90
 * Callers:
 *     PowerOnMonitor @ 0x1C000A210 (PowerOnMonitor.c)
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C001B424 (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 *     LogDiagSDC @ 0x1C001BD78 (LogDiagSDC.c)
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C005EFE0 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     PowerOffMonitor @ 0x1C006A170 (PowerOffMonitor.c)
 *     ?LogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C00BA770 (-LogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z.c)
 *     DrvDisplaySwitchHandler @ 0x1C00BB850 (DrvDisplaySwitchHandler.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall DrvDxgkLogCodePointPacket(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-50h] BYREF

  memset(v9, 0, sizeof(v9));
  memset(&v9[1], 0, 36);
  v9[0] = 0x4000000006LL;
  v9[6] = __PAIR64__(a2, a1);
  v9[7] = __PAIR64__(a4, a3);
  return ((__int64 (__fastcall *)(_QWORD *))qword_1C0101398)(v9);
}
