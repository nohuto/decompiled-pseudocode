/*
 * XREFs of PnpIsLegacyDriver @ 0x140493A14
 * Callers:
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     IopUnloadDriver @ 0x140493DE4 (IopUnloadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140503A70 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IovpBuildDriverObjectList @ 0x1406B5320 (IovpBuildDriverObjectList.c)
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
