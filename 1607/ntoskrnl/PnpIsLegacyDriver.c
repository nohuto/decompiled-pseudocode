/*
 * XREFs of PnpIsLegacyDriver @ 0x1404D17C4
 * Callers:
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140538F54 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopUnloadDriver @ 0x140545368 (IopUnloadDriver.c)
 *     IovpBuildDriverObjectList @ 0x140701188 (IovpBuildDriverObjectList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpIsLegacyDriver(__int64 a1)
{
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) )
    return 0LL;
  else
    return (*(unsigned __int8 *)(a1 + 16) >> 1) & 1;
}
