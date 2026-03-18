/*
 * XREFs of PnpDriverStarted @ 0x14053859C
 * Callers:
 *     IopLoadDriver @ 0x14049E388 (IopLoadDriver.c)
 * Callees:
 *     PnpIsAnyDeviceInstanceEnabled @ 0x1405385F8 (PnpIsAnyDeviceInstanceEnabled.c)
 *     PnpDriverLoadingFailed @ 0x14057F858 (PnpDriverLoadingFailed.c)
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
