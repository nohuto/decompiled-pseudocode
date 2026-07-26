/*
 * XREFs of ndisDmaAddCpuNotify @ 0x1C00475D8
 * Callers:
 *     ndisCpuHotAddHandler @ 0x1C00C6A30 (ndisCpuHotAddHandler.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     PplHotAddProcCompleteNotify @ 0x1C006EF14 (PplHotAddProcCompleteNotify.c)
 *     PplHotAddProcStartNotify @ 0x1C006EFB4 (PplHotAddProcStartNotify.c)
 */

__int64 __fastcall ndisDmaAddCpuNotify(char a1, int a2, unsigned int a3)
{
  int started; // edi
  KIRQL v7; // al
  struct _NDIS_MINIPORT_BLOCK *v8; // rbx
  KIRQL v9; // si
  unsigned int PnPDeviceState; // eax
  int v11; // ecx
  KIRQL v12; // bp
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rcx
  void *SGListLookasideList; // rcx

  started = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v8 = ndisMiniportList;
  v9 = v7;
  while ( v8 && started >= 0 )
  {
    PnPDeviceState = v8->PnPDeviceState;
    if ( PnPDeviceState > 5 || (v11 = 41, !_bittest(&v11, PnPDeviceState)) )
    {
      if ( ndisReferenceMiniport((__int64)v8) )
      {
        KeReleaseSpinLock(&ndisMiniportListLock, v9);
        v12 = KeAcquireSpinLockRaiseToDpc(&v8->Lock);
        MiniportSGDmaBlock = v8->MiniportSGDmaBlock;
        v8->MiniportThread = KeGetCurrentThread();
        v8->LockDbg = 1837227;
        if ( MiniportSGDmaBlock )
        {
          SGListLookasideList = MiniportSGDmaBlock->SGListLookasideList;
          if ( SGListLookasideList )
          {
            if ( a1 )
              started = PplHotAddProcStartNotify(SGListLookasideList, (unsigned int)(a2 + 1));
            else
              PplHotAddProcCompleteNotify(SGListLookasideList, a3);
          }
        }
        v8->MiniportThread = 0LL;
        v8->LockDbg = 0;
        KeReleaseSpinLock(&v8->Lock, v12);
        v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
        ndisDereferenceMiniport((__int64)v8, 0x41u);
      }
    }
    v8 = v8->NextGlobalMiniport;
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v9);
  return (unsigned int)started;
}
