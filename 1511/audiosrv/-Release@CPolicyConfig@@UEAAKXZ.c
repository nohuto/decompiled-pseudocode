/*
 * XREFs of ?Release@CPolicyConfig@@UEAAKXZ @ 0x180043160
 * Callers:
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x180042ABC (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     ??1?$CComPtr@UIPolicyConfig@@@ATL@@QEAA@XZ @ 0x180066410 (--1-$CComPtr@UIPolicyConfig@@@ATL@@QEAA@XZ.c)
 *     ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x18006D620 (-Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18008A848 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x180096C4C (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPolicyConfig::Release(CPolicyConfig *this)
{
  return CRefCountedObject::Release((CPolicyConfig *)((char *)this + 8));
}
