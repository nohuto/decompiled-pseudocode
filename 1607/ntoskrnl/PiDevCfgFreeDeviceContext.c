/*
 * XREFs of PiDevCfgFreeDeviceContext @ 0x1404E9134
 * Callers:
 *     PpDevCfgProcessDeviceOperations @ 0x1404E9064 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405711DC (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x14063934C (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgInitDeviceContext @ 0x1406394B4 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgProcessDevice @ 0x14063B128 (PiDevCfgProcessDevice.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1406412DC (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceClass @ 0x140641360 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140641684 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x140641D00 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
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
