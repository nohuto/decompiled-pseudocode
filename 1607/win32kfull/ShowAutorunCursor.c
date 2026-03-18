/*
 * XREFs of ShowAutorunCursor @ 0x1C01DD5E0
 * Callers:
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01D5840 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 * Callees:
 *     SetRITTimer @ 0x1C005F490 (SetRITTimer.c)
 */

__int64 __fastcall ShowAutorunCursor(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  EnterCrit(0LL, 1LL);
  gtmridAutorunCursor = SetRITTimer(gtmridAutorunCursor, a1, (__int64)HideAutorunCursor, 1);
  return UserSessionSwitchLeaveCrit(v3, v2);
}
