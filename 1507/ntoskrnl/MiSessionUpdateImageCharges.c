/*
 * XREFs of MiSessionUpdateImageCharges @ 0x140155F24
 * Callers:
 *     MiDriverLoadSucceeded @ 0x140574F44 (MiDriverLoadSucceeded.c)
 * Callees:
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiSessionLookupImage @ 0x1400FEA40 (MiSessionLookupImage.c)
 *     MiCountSystemImageCommitment @ 0x140155F9C (MiCountSystemImageCommitment.c)
 */

__int64 __fastcall MiSessionUpdateImageCharges(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbx

  v2 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
  v3 = MiCountSystemImageCommitment(a1);
  v4 = v2[9] - v3;
  if ( v4 )
  {
    MiReturnCommit((__int64)MiSystemPartition, v4);
    v2[9] = v3;
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 48),
      -v4);
  }
  return 0LL;
}
