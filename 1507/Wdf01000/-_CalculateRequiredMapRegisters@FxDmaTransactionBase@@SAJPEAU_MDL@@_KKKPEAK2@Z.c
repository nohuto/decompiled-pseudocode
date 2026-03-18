/*
 * XREFs of ?_CalculateRequiredMapRegisters@FxDmaTransactionBase@@SAJPEAU_MDL@@_KKKPEAK2@Z @ 0x1C006354C
 * Callers:
 *     ?InitializeResources@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C00618A0 (-InitializeResources@FxDmaScatterGatherTransaction@@UEAAJXZ.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C0061F90 (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ @ 0x1C0062AD0 (-StageTransfer@FxDmaScatterGatherTransaction@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxDmaTransactionBase::_CalculateRequiredMapRegisters(
        _MDL *Mdl,
        unsigned __int64 CurrentOffset,
        unsigned int Length,
        unsigned int AvailableMapRegisters,
        unsigned int *PossibleTransferLength,
        unsigned int *MapRegistersRequired)
{
  unsigned int v7; // ebx
  unsigned int ByteOffset; // r10d
  unsigned int v9; // edx
  unsigned int ByteCount; // r11d
  unsigned int v11; // r8d
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v15; // edx

  v7 = Mdl->ByteCount - CurrentOffset;
  ByteOffset = ((_WORD)CurrentOffset + LOWORD(Mdl->StartVa) + LOWORD(Mdl->ByteOffset)) & 0xFFF;
  v9 = 0;
  ByteCount = v7;
  v11 = 0;
  while ( v7 < Length )
  {
    Mdl = Mdl->Next;
    if ( !Mdl )
      break;
    v12 = ByteCount + 4095;
    ByteCount = Mdl->ByteCount;
    v13 = ByteOffset + v12;
    ByteOffset = Mdl->ByteOffset;
    v9 += v13 >> 12;
    if ( v9 <= AvailableMapRegisters )
      v11 = v7;
    v7 += ByteCount;
  }
  if ( v7 + 4096 < ByteOffset + Length )
    return 3221225507LL;
  v15 = ((ByteCount + ByteOffset - v7 + Length + 4095) >> 12) + v9;
  if ( v15 <= AvailableMapRegisters )
    v11 += Length + ByteCount - v7;
  if ( PossibleTransferLength )
    *PossibleTransferLength = v11;
  *MapRegistersRequired = v15;
  return 0LL;
}
