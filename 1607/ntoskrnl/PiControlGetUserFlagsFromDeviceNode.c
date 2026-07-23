/*
 * XREFs of PiControlGetUserFlagsFromDeviceNode @ 0x1403F3A2C
 * Callers:
 *     PiControlGetSetDeviceStatus @ 0x1403F3760 (PiControlGetSetDeviceStatus.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x14000932C (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoaded @ 0x140009350 (PipAreDriversLoaded.c)
 *     _CmIsRootEnumeratedDevice @ 0x1403F3B14 (_CmIsRootEnumeratedDevice.c)
 */

__int64 __fastcall PiControlGetUserFlagsFromDeviceNode(__int64 a1, int *a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 result; // rax

  v4 = 25165824;
  if ( (unsigned int)PipAreDriversLoaded(a1) )
    v4 = 25165826;
  if ( PipIsDevNodeDNStarted(a1) )
    v4 |= 8u;
  if ( (unsigned __int8)CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48)) )
    v4 |= 1u;
  if ( (*(_DWORD *)(a1 + 560) & 0x10) != 0 )
    v4 |= 0x4000u;
  v5 = *(_DWORD *)(a1 + 400);
  if ( (v5 & 1) != 0 )
    v4 |= 0x40000u;
  if ( (v5 & 2) != 0 )
    v4 |= 0x40000000u;
  if ( (v5 & 0x40) != 0 )
    v4 |= 0x2000000u;
  if ( (v5 & 4) != 0 )
    v4 |= 0x100u;
  result = *(unsigned int *)(a1 + 396);
  if ( (result & 0x4000) != 0 )
    v4 |= 0x8000u;
  if ( (result & 0x2000) != 0 )
    v4 |= 0x400u;
  if ( (result & 0x100000) != 0 )
    v4 |= 0x40u;
  if ( (result & 0x1000) != 0 )
    v4 |= 0x1000u;
  if ( (result & 0x200000) != 0 )
    v4 |= 0x200u;
  if ( !*(_DWORD *)(a1 + 600) )
    v4 |= 0x2000u;
  *a2 = v4;
  return result;
}
