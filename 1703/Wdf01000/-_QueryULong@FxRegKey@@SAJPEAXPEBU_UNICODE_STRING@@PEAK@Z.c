/*
 * XREFs of ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0017610
 * Callers:
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1C0017448 (FxLibraryGlobalsQueryRegistrySettings.c)
 *     FxInitialize @ 0x1C0019B00 (FxInitialize.c)
 *     FxRegistrySettingsInitialize @ 0x1C0019FF0 (FxRegistrySettingsInitialize.c)
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0024630 (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     FxVerifierGetObjectDebugInfo @ 0x1C008028C (FxVerifierGetObjectDebugInfo.c)
 *     FxVerifierQueryTrackPower @ 0x1C008047C (FxVerifierQueryTrackPower.c)
 *     ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1C0097B14 (-PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 */

__int64 __fastcall FxRegKey::_QueryULong(void *Key, _UNICODE_STRING *ValueName, unsigned int *Value)
{
  NTSTATUS v4; // edx
  unsigned int length; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int8 buffer[16]; // [rsp+38h] [rbp-30h] BYREF

  length = 16;
  v4 = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, buffer, 0x10u, &length);
  if ( ((int)(v4 + 0x80000000) < 0 || v4 == -2147483643) && *(_DWORD *)&buffer[4] != 4 )
    v4 = -1073741788;
  if ( v4 >= 0 )
    *Value = *(_DWORD *)&buffer[12];
  return (unsigned int)v4;
}
