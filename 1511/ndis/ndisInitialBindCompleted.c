/*
 * XREFs of ndisInitialBindCompleted @ 0x1C001F328
 * Callers:
 *     ndisMSetMiniportReadyForBinding @ 0x1C00A6E98 (ndisMSetMiniportReadyForBinding.c)
 * Callees:
 *     ?ndisIsSystemBooting@@YAEXZ @ 0x1C00A96B8 (-ndisIsSystemBooting@@YAEXZ.c)
 */

void __fastcall ndisInitialBindCompleted(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rcx

  if ( *(_BYTE *)(a1 + 1995) )
  {
    if ( !ndisIsSystemBooting() )
      ndisMExitInitMode(v1, RunSynchronous);
  }
}
