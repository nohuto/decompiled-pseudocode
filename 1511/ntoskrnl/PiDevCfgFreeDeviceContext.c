/*
 * XREFs of PiDevCfgFreeDeviceContext @ 0x14053B1A8
 * Callers:
 *     PiDevCfgInitDeviceContext @ 0x14051047C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgProcessDevice @ 0x140511A60 (PiDevCfgProcessDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14053B0A0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x140608D10 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x14060CEF4 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceClass @ 0x14060CF64 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14060D284 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14060D8F8 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 */

void __fastcall PiDevCfgFreeDeviceContext(__int64 a1)
{
  UNICODE_STRING *v2; // rbx
  __int64 v3; // rdi
  void *v4; // rcx

  if ( *(int *)a1 < 0 )
  {
    v4 = *(void **)(a1 + 16);
    if ( v4 )
      ZwClose(v4);
  }
  v2 = (UNICODE_STRING *)(a1 + 24);
  v3 = 3LL;
  do
  {
    RtlFreeAnsiString(v2++);
    --v3;
  }
  while ( v3 );
}
