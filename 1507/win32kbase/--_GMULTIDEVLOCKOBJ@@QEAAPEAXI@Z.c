/*
 * XREFs of ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C0063E60
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0063D8C (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 */

MULTIDEVLOCKOBJ *__fastcall MULTIDEVLOCKOBJ::`scalar deleting destructor'(
        MULTIDEVLOCKOBJ *this,
        __int64 a2,
        __int64 a3)
{
  MULTIDEVLOCKOBJ::vUnlock(this, a2, a3);
  if ( (*(_DWORD *)this & 2) != 0 )
    Win32FreePool();
  Win32FreePool();
  return this;
}
