/*
 * XREFs of MiDeleteSegmentPages @ 0x140090080
 * Callers:
 *     MiSegmentDelete @ 0x1404B81E4 (MiSegmentDelete.c)
 *     MiCopyDirectMapHeader @ 0x14065A8E0 (MiCopyDirectMapHeader.c)
 *     MiInitializeImageExtents @ 0x14065ABC4 (MiInitializeImageExtents.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004F1E0 (MiReturnResidentAvailable.c)
 *     MiDeleteSubsectionPages @ 0x140061C70 (MiDeleteSubsectionPages.c)
 */

__int64 __fastcall MiDeleteSegmentPages(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // r14
  int v8; // ebx
  __int64 v9; // rax
  KIRQL v10; // dl
  volatile LONG *v11; // rcx
  __int64 v12; // rdi
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = a1 + 16;
  v5 = 0LL;
  v6 = 0LL;
  v14 = 0LL;
  v8 = *(_DWORD *)(v3 + 12);
  if ( a1 != (__int64 *)-128LL )
  {
    do
    {
      v9 = MiDeleteSubsectionPages(v4, &v14, a3);
      v4 = (__int64 *)v4[2];
      v6 += v9;
    }
    while ( v4 );
    v5 = v14;
  }
  while ( 1 )
  {
    v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a1 + 18);
    v11 = (volatile LONG *)(a1 + 9);
    if ( !a1[4] )
      break;
    ExReleaseSpinLockExclusive(v11, v10);
    _mm_pause();
  }
  ExReleaseSpinLockExclusive(v11, v10);
  v12 = *(_QWORD *)(v3 + 16);
  if ( v12 )
  {
    MiReturnCommit((__int64)MiSystemPartition, v12 - v5);
    if ( (v8 & 0x1000) != 0 )
      MiReturnResidentAvailable(v12 - v5);
    _InterlockedExchangeAdd64(&qword_140327918, -v12);
  }
  return v6;
}
