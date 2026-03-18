/*
 * XREFs of ShowAutorunCursor @ 0x14029A5E0
 * Callers:
 *     ?DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1402521D0 (-DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 * Callees:
 *     SetRITTimer @ 0x1401F74F0 (SetRITTimer.c)
 */

__int64 __fastcall ShowAutorunCursor(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx

  EnterCrit(1LL, 0LL);
  UserSessionState = W32GetUserSessionState(v3, v2);
  v5 = SetRITTimer(*(_QWORD *)(UserSessionState + 62704), a1, (__int64)HideAutorunCursor, 1);
  *(_QWORD *)(W32GetUserSessionState(v7, v6) + 62704) = v5;
  return UserSessionSwitchLeaveCrit(v8);
}
