/*
 * XREFs of MiSessionUpdateImageCharges @ 0x14012CF48
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140482EC8 (MiDriverLoadSucceeded.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiSessionLookupImage @ 0x140087EC4 (MiSessionLookupImage.c)
 *     MiCountSystemImageCommitment @ 0x14012CFC0 (MiCountSystemImageCommitment.c)
 */

__int64 __fastcall MiSessionUpdateImageCharges(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // r8
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx

  v1 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
  v3 = MiCountSystemImageCommitment(v2);
  v4 = v1[9] - v3;
  if ( v4 )
  {
    MiReturnCommit((__int64)MiSystemPartition, v4);
    v1[9] = v3;
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 48),
      -(__int64)v4);
  }
  return 0LL;
}
