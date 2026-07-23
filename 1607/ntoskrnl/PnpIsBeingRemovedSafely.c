/*
 * XREFs of PnpIsBeingRemovedSafely @ 0x1404841FC
 * Callers:
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1404855C4 (PnpBuildUnsafeRemovalDeviceList.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpIsBeingRemovedSafely(_DWORD *a1, int a2)
{
  int v4; // ecx

  if ( (unsigned int)(a2 - 1) > 1 || (a1[140] & 0x200) != 0 )
    return 1;
  v4 = a1[75];
  if ( (unsigned int)(v4 - 782) <= 1 )
    v4 = a1[76];
  return v4 == 777 || v4 <= 774 || v4 >= 780;
}
