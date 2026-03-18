/*
 * XREFs of FxVerifierGetObjectDebugInfo @ 0x1C0079A7C
 * Callers:
 *     FxDriverGlobalsInitializeDebugExtension @ 0x1C0079920 (FxDriverGlobalsInitializeDebugExtension.c)
 * Callees:
 *     ?_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z @ 0x1C0023958 (-_VerifyMultiSzString@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAGK@Z.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C002C4B8 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     FxVerifyAllocateDebugInfo @ 0x1C0079C4C (FxVerifyAllocateDebugInfo.c)
 */

FxObjectDebugInfo *__fastcall FxVerifierGetObjectDebugInfo(void *Key, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxObjectDebugInfo *DebugInfo; // rdi
  int v5; // eax
  wchar_t *Value; // rbx
  unsigned int length; // [rsp+40h] [rbp-40h] BYREF
  unsigned int type; // [rsp+44h] [rbp-3Ch] BYREF
  _UNICODE_STRING valueName; // [rsp+48h] [rbp-38h] BYREF
  wchar_t valueName_buffer[16]; // [rsp+58h] [rbp-28h] BYREF

  valueName.Buffer = valueName_buffer;
  DebugInfo = 0LL;
  *(_DWORD *)&valueName.Length = 1703960;
  type = 7;
  wcscpy(valueName_buffer, L"TrackHandles");
  length = 0;
  v5 = FxRegKey::_QueryValue(FxDriverGlobals, Key, &valueName, 0, 0LL, &length, &type);
  if ( v5 != -2147483643 && v5 != -1073741789 )
    return 0LL;
  Value = (wchar_t *)ExAllocatePoolWithTag(PagedPool, length, FxDriverGlobals->Tag);
  if ( !Value )
    return 0LL;
  if ( (int)FxRegKey::_QueryValue(FxDriverGlobals, Key, &valueName, length, Value, &length, &type) >= 0
    && (int)FxRegKey::_VerifyMultiSzString(FxDriverGlobals, &valueName, Value, length) >= 0 )
  {
    DebugInfo = FxVerifyAllocateDebugInfo(Value, FxDriverGlobals);
  }
  ExFreePoolWithTag(Value, 0);
  return DebugInfo;
}
