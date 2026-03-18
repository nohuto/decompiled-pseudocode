/*
 * XREFs of MiSessionUpdateImageCharges @ 0x14011FF3C
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1403CD204 (MiDriverLoadSucceeded.c)
 * Callees:
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiCountSystemImageCommitment @ 0x14011FFB4 (MiCountSystemImageCommitment.c)
 *     MiSessionLookupImage @ 0x140120308 (MiSessionLookupImage.c)
 */

__int64 __fastcall MiSessionUpdateImageCharges(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r8
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx

  v1 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
  v3 = MiCountSystemImageCommitment(v2);
  v4 = *(_QWORD *)(v1 + 72) - v3;
  if ( v4 )
  {
    MiReturnCommit((__int64)MiSystemPartition, v4);
    *(_QWORD *)(v1 + 72) = v3;
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 48),
      -(__int64)v4);
  }
  return 0LL;
}
