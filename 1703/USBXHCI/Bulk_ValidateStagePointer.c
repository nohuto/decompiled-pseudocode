/*
 * XREFs of Bulk_ValidateStagePointer @ 0x1C00025F0
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000BA50 (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0002AF8 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0007F60 (WPP_RECORDER_SF_ddd.c)
 */

char __fastcall Bulk_ValidateStagePointer(__int64 a1, __int64 a2)
{
  char v2; // di
  int v5; // edx
  __int64 NextStage; // rax
  __int64 *v7; // r11
  KSPIN_LOCK *v9; // rsi
  __int64 *v10; // r14

  v2 = 0;
  if ( a2 )
  {
    v9 = (KSPIN_LOCK *)(a1 + 88);
    v10 = (__int64 *)(a1 + 320);
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v7 = *(__int64 **)(a1 + 320);
LABEL_6:
    if ( v10 != v7 )
    {
      *((_BYTE *)v7 + 117) = *((_BYTE *)v7 + 116);
      *((_BYTE *)v7 + 118) = *((_BYTE *)v7 + 114);
      do
      {
        NextStage = StageQueue_ForwardScanGetNextStage(v7 + 14);
        if ( !NextStage )
        {
          v7 = (__int64 *)*v7;
          goto LABEL_6;
        }
      }
      while ( NextStage != a2 );
      v2 = 1;
    }
    KeReleaseSpinLock(v9, *(_BYTE *)(a1 + 96));
  }
  else
  {
    v5 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v5,
      13,
      42,
      (__int64)&WPP_d7490787d28e3e661d2cad56214ea32b_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64));
  }
  return v2;
}
