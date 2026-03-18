/*
 * XREFs of WdipSemLoadConfigInfo @ 0x140532A20
 * Callers:
 *     WdipSemCleanStart @ 0x140532858 (WdipSemCleanStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x140151F40 (ZwDeleteValueKey.c)
 *     WdipSemQueryValueFromRegistry @ 0x1405338F8 (WdipSemQueryValueFromRegistry.c)
 *     WdipSemOpenRegistryKey @ 0x1405339F8 (WdipSemOpenRegistryKey.c)
 */

__int64 WdipSemLoadConfigInfo()
{
  int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v3; // [rsp+60h] [rbp+18h] BYREF
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF
  int v5; // [rsp+70h] [rbp+28h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+30h]

  KeyHandle = 0LL;
  LODWORD(v4) = 0;
  v3 = 0;
  v5 = 0;
  v0 = WdipSemOpenRegistryKey(L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\Control\\WDI\\Config");
  if ( v0 < 0 )
    goto LABEL_10;
  if ( (int)WdipSemQueryValueFromRegistry(KeyHandle, &v3, (__int64)&v4) >= 0 && !v3 )
  {
    v0 = -1073741823;
    goto LABEL_10;
  }
  v0 = WdipSemQueryValueFromRegistry(KeyHandle, &v5, (__int64)&v4);
  if ( v0 < 0 )
  {
    v0 = 0;
    WdipSemTimeoutValue = 600;
  }
  else
  {
    if ( !v5 )
    {
      WdipSemTimeoutValue = 600;
      WdipSemTimeoutEnabled = 0;
      goto LABEL_8;
    }
    WdipSemTimeoutValue = 60 * v5;
  }
  WdipSemTimeoutEnabled = 1;
LABEL_8:
  if ( !KeyHandle )
    return (unsigned int)v0;
  RtlInitUnicodeString(&DestinationString, L"SEMUpdate");
  ZwDeleteValueKey(KeyHandle, &DestinationString);
LABEL_10:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v0;
}
