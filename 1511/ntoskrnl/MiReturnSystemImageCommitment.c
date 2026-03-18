/*
 * XREFs of MiReturnSystemImageCommitment @ 0x1404C616C
 * Callers:
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 * Callees:
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReturnSystemImageCommitment(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbx

  v2 = a2;
  if ( *a1 )
  {
    v3 = a1[25];
    v4 = a1[26];
  }
  else
  {
    v3 = *(unsigned int *)(*(_QWORD *)MiSectionControlArea(a1[14]) + 8LL);
    v4 = v3;
  }
  MiReturnCommit((__int64)MiSystemPartition, v3 - *(_QWORD *)(v2 + 8));
  if ( v4 )
  {
    MiReturnResidentAvailable(v4);
    _InterlockedExchangeAdd64(&qword_1402FF540, v4);
  }
}
