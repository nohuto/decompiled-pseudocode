/*
 * XREFs of DrvDxgkLogCodePointPacket @ 0x1C00882D0
 * Callers:
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C005FE98 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@.c)
 *     ?LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKHH_KJJW4_DXGK_DIAG_CDS_STAGE@@I1@Z @ 0x1C006277C (-LogDiagCDS@@YAXPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAXW4_MODE@@HHKH.c)
 *     DrvSetDisplayConfig @ 0x1C0063200 (DrvSetDisplayConfig.c)
 *     LogDiagSDC @ 0x1C0064918 (LogDiagSDC.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00671D4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     PowerOnMonitor @ 0x1C00700B0 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C0086340 (PowerOffMonitor.c)
 *     ?LogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C00C7CB8 (-LogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z.c)
 *     DrvDisplaySwitchHandler @ 0x1C00C8D70 (DrvDisplaySwitchHandler.c)
 * Callees:
 *     DrvDxgkWriteDiagEntry @ 0x1C0064A40 (DrvDxgkWriteDiagEntry.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall DrvDxgkLogCodePointPacket(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  _QWORD v9[8]; // [rsp+20h] [rbp-50h] BYREF

  memset(v9, 0, sizeof(v9));
  memset(&v9[1], 0, 36);
  v9[0] = 0x4000000006LL;
  v9[6] = __PAIR64__(a2, a1);
  v9[7] = __PAIR64__(a4, a3);
  return DrvDxgkWriteDiagEntry();
}
