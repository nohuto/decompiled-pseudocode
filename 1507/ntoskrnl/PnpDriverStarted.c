/*
 * XREFs of PnpDriverStarted @ 0x140571F30
 * Callers:
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 * Callees:
 *     PnpIsAnyDeviceInstanceEnabled @ 0x140571E34 (PnpIsAnyDeviceInstanceEnabled.c)
 *     PnpDriverLoadingFailed @ 0x1405C1A3C (PnpDriverLoadingFailed.c)
 */

__int64 __fastcall PnpDriverStarted(__int64 a1, void *a2, UNICODE_STRING *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !*(_QWORD *)(a1 + 8)
    && a3->Buffer
    && !(unsigned int)PnpIsAnyDeviceInstanceEnabled(a3)
    && (*(_DWORD *)(a1 + 16) & 0x808) == 0 )
  {
    PnpDriverLoadingFailed(a2);
    return (unsigned int)-1073741218;
  }
  return v3;
}
