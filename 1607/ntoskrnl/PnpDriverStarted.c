/*
 * XREFs of PnpDriverStarted @ 0x140538ADC
 * Callers:
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 * Callees:
 *     PnpIsAnyDeviceInstanceEnabled @ 0x140538B38 (PnpIsAnyDeviceInstanceEnabled.c)
 *     PnpDriverLoadingFailed @ 0x14057FD04 (PnpDriverLoadingFailed.c)
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
