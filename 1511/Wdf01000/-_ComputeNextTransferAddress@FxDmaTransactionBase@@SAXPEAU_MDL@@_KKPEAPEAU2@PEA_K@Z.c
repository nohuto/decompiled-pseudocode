/*
 * XREFs of ?_ComputeNextTransferAddress@FxDmaTransactionBase@@SAXPEAU_MDL@@_KKPEAPEAU2@PEA_K@Z @ 0x1C005C740
 * Callers:
 *     ?InitializeResources@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C005ACF0 (-InitializeResources@FxDmaScatterGatherTransaction@@UEAAJXZ.c)
 *     ?StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C005BE50 (-StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxDmaTransactionBase::_ComputeNextTransferAddress(
        _MDL *CurrentMdl,
        unsigned __int64 CurrentOffset,
        unsigned int Transferred,
        _MDL **NextMdl,
        unsigned __int64 *NextOffset)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r10
  _MDL *Next; // rax
  unsigned __int64 ByteCount; // rcx

  v5 = CurrentMdl->ByteCount - CurrentOffset;
  if ( Transferred >= v5 )
  {
    v6 = Transferred - v5;
    Next = CurrentMdl->Next;
    while ( 1 )
    {
      ByteCount = Next->ByteCount;
      if ( v6 < ByteCount )
        break;
      Next = Next->Next;
      v6 -= ByteCount;
    }
    *NextMdl = Next;
    *NextOffset = v6;
  }
  else
  {
    *NextMdl = CurrentMdl;
    *NextOffset = Transferred + CurrentOffset;
  }
}
