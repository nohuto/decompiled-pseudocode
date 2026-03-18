/*
 * XREFs of ShowAutorunCursor @ 0x1C01E69D0
 * Callers:
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01DD900 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 * Callees:
 *     SetRITTimer @ 0x1C0079F80 (SetRITTimer.c)
 */

__int64 __fastcall ShowAutorunCursor(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  EnterCrit(1LL);
  gtmridAutorunCursor = SetRITTimer(gtmridAutorunCursor, a1, (int)HideAutorunCursor, 1);
  return UserSessionSwitchLeaveCrit(v3, v2);
}
