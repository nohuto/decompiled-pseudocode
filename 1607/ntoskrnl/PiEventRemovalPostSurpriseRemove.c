/*
 * XREFs of PiEventRemovalPostSurpriseRemove @ 0x140483B1C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpUnlinkDeviceRemovalRelations @ 0x140485654 (PnpUnlinkDeviceRemovalRelations.c)
 */

__int64 __fastcall PiEventRemovalPostSurpriseRemove(_QWORD *a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  PnpUnlinkDeviceRemovalRelations(a1, *a4);
  if ( !a1[2] )
  {
    ++*(_DWORD *)(a1[81] + 656LL);
    a1[81] |= 1uLL;
  }
  return PnpQueuePendingSurpriseRemoval(a1[4], a4, *(unsigned int *)(a2 + 16), a3);
}
