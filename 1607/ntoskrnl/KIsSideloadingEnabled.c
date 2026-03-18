/*
 * XREFs of KIsSideloadingEnabled @ 0x1406BC168
 * Callers:
 *     SepIsLockedDown @ 0x14068C9DC (SepIsLockedDown.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x14015C480 (ZwQueryLicenseValue.c)
 *     KIsUnlockSettingEnabled @ 0x1404E8370 (KIsUnlockSettingEnabled.c)
 */

__int64 __fastcall KIsSideloadingEnabled(_BYTE *a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp-28h] BYREF
  const wchar_t *v4; // [rsp+38h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+70h] [rbp+18h] BYREF
  int v7; // [rsp+78h] [rbp+20h]
  int v8; // [rsp+80h] [rbp+28h] BYREF
  char v9; // [rsp+88h] [rbp+30h] BYREF

  *a1 = 0;
  v3 = 2621478;
  v4 = L"AllowAllTrustedApps";
  v6 = 0xFFFF;
  result = KIsUnlockSettingEnabled((__int64)&v3, &v6);
  if ( (int)result >= 0 )
  {
    if ( v6 == 1 )
      goto LABEL_7;
    if ( v6 != 0xFFFF )
      return result;
    RtlInitUnicodeString(&DestinationString, L"AppXDeploymentServer-License-AllowAllTrustedApps");
    result = ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v9, (__int64)&v8);
    if ( (int)result >= 0 && v7 == 4 && v8 == 1 )
LABEL_7:
      *a1 = 1;
    else
      return 0LL;
  }
  return result;
}
