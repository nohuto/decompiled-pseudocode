/*
 * XREFs of _DrvChangeDisplaySettingsInternal_::_2_::ETW_PROFILE_EVENT::_ETW_PROFILE_EVENT @ 0x1C00A4094
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsInternal_::_2_::ETW_PROFILE_EVENT::_ETW_PROFILE_EVENT(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    return TemplateEventDescriptor(a1, &DrvChangeDisplaySettingsEnd, 0LL);
  return result;
}
