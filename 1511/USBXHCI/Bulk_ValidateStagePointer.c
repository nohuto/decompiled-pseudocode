/*
 * XREFs of Bulk_ValidateStagePointer @ 0x1C0001414
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C000D690 (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     StageQueue_ForwardScanGetNextStage @ 0x1C00017A0 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0006BF0 (WPP_RECORDER_SF_ddd.c)
 */

char __fastcall Bulk_ValidateStagePointer(__int64 a1, __int64 a2)
{
  char v2; // di
  int v5; // edx
  KSPIN_LOCK *v6; // rsi
  __int64 *v7; // r14
  __int64 *v8; // r10
  __int64 NextStage; // rax

  v2 = 0;
  if ( a2 )
  {
    v6 = (KSPIN_LOCK *)(a1 + 88);
    v7 = (__int64 *)(a1 + 320);
    *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v8 = *(__int64 **)(a1 + 320);
LABEL_4:
    if ( v7 != v8 )
    {
      *((_BYTE *)v8 + 117) = *((_BYTE *)v8 + 116);
      *((_BYTE *)v8 + 118) = *((_BYTE *)v8 + 114);
      do
      {
        NextStage = StageQueue_ForwardScanGetNextStage(v8 + 14);
        if ( !NextStage )
        {
          v8 = (__int64 *)*v8;
          goto LABEL_4;
        }
      }
      while ( NextStage != a2 );
      v2 = 1;
    }
    KeReleaseSpinLock(v6, *(_BYTE *)(a1 + 96));
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
      (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64));
  }
  return v2;
}
