/*
 * XREFs of PnpIsLegacyDriver @ 0x140572950
 * Callers:
 *     IopUnloadDriver @ 0x140539658 (IopUnloadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405724D8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     IovpBuildDriverObjectList @ 0x1407354B0 (IovpBuildDriverObjectList.c)
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
