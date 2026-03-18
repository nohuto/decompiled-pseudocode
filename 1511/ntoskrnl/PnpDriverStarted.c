/*
 * XREFs of PnpDriverStarted @ 0x140507F48
 * Callers:
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 * Callees:
 *     PnpIsAnyDeviceInstanceEnabled @ 0x140507FA4 (PnpIsAnyDeviceInstanceEnabled.c)
 *     PnpDriverLoadingFailed @ 0x140549F80 (PnpDriverLoadingFailed.c)
 */

__int64 __fastcall PnpDriverStarted(__int64 a1, void *a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !*(_QWORD *)(a1 + 8)
    && *(_QWORD *)(a3 + 8)
    && !(unsigned int)PnpIsAnyDeviceInstanceEnabled(a3)
    && (*(_DWORD *)(a1 + 16) & 0x808) == 0 )
  {
    PnpDriverLoadingFailed(a2);
    return (unsigned int)-1073741218;
  }
  return v3;
}
