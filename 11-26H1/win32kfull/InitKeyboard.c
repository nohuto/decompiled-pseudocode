/*
 * XREFs of InitKeyboard @ 0x14025E904
 * Callers:
 *     RawInputThread @ 0x140270B00 (RawInputThread.c)
 *     xxxRemoteReconnect @ 0x1402D3988 (xxxRemoteReconnect.c)
 * Callees:
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     ?ClearCachedHotkeyModifiers@@YAXXZ @ 0x140252A18 (-ClearCachedHotkeyModifiers@@YAXXZ.c)
 *     ?GetBiosNumLockStatus@@YAXXZ @ 0x14026E024 (-GetBiosNumLockStatus@@YAXXZ.c)
 */

void __fastcall InitKeyboard(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( !IsRemoteConnection(a1, a2) )
  {
    GetBiosNumLockStatus();
    ClearCachedHotkeyModifiers(v3, v2);
  }
}
