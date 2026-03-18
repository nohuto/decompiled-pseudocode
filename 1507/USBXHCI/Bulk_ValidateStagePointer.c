/*
 * XREFs of Bulk_ValidateStagePointer @ 0x1C002D0C0
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002AE7C (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0003980 (WPP_RECORDER_SF_ddd.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C001FE54 (StageQueue_ForwardScanGetNextStage.c)
 */

char __fastcall Bulk_ValidateStagePointer(__int64 a1, __int64 a2)
{
  char v2; // di
  KSPIN_LOCK *v5; // rsi
  __int64 *v6; // r14
  __int64 *v7; // r10
  __int64 NextStage; // rax

  v2 = 0;
  if ( a2 )
  {
    v5 = (KSPIN_LOCK *)(a1 + 88);
    v6 = (__int64 *)(a1 + 320);
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v7 = *(__int64 **)(a1 + 320);
LABEL_8:
    if ( v6 != v7 )
    {
      *((_BYTE *)v7 + 117) = *((_BYTE *)v7 + 116);
      *((_BYTE *)v7 + 118) = *((_BYTE *)v7 + 114);
      do
      {
        NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v7 + 112);
        if ( !NextStage )
        {
          v7 = (__int64 *)*v7;
          goto LABEL_8;
        }
      }
      while ( NextStage != a2 );
      v2 = 1;
    }
    KeReleaseSpinLock(v5, *(_BYTE *)(a1 + 96));
  }
  else
  {
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xDu,
      0x2Au,
      (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64));
  }
  return v2;
}
