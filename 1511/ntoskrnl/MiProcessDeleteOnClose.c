/*
 * XREFs of MiProcessDeleteOnClose @ 0x1401D1414
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1401389A0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseControlAreaWaiters @ 0x14000C640 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertUnusedSegment @ 0x1400A8590 (MiInsertUnusedSegment.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400DAD80 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiSetTimerEx @ 0x1400E78B8 (KiSetTimerEx.c)
 *     MiDestroySection @ 0x1401070FC (MiDestroySection.c)
 *     MiFlushControlArea @ 0x1401D0FFC (MiFlushControlArea.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 */

void __fastcall MiProcessDeleteOnClose(__int64 a1)
{
  volatile LONG *v1; // rbp
  KIRQL v3; // al
  int v4; // r12d
  volatile signed __int32 **v5; // r15
  volatile signed __int32 *v6; // rbx
  KIRQL v7; // r14
  volatile signed __int32 *v8; // rsi
  volatile signed __int32 *v9; // rdx
  volatile signed __int32 **v10; // rcx
  __int64 v11; // rcx
  __int64 inserted; // rbx
  struct _FILE_OBJECT *v13; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+78h] [rbp+10h] BYREF

  v1 = (volatile LONG *)(a1 + 1536);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1536));
  v4 = *(_DWORD *)(a1 + 1404);
  v5 = (volatile signed __int32 **)(a1 + 1320);
  v6 = *(volatile signed __int32 **)(a1 + 1320);
  v7 = v3;
  do
  {
    while ( 1 )
    {
      if ( v6 == (volatile signed __int32 *)v5 )
      {
LABEL_17:
        *(_BYTE *)(a1 + 1400) = 0;
        goto LABEL_18;
      }
      v8 = v6 - 2;
      if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v6 + 16) )
        break;
      if ( !--v4 )
        goto LABEL_19;
      v6 = *(volatile signed __int32 **)v6;
    }
    --*(_DWORD *)(a1 + 1404);
    v9 = *(volatile signed __int32 **)v6;
    v10 = (volatile signed __int32 **)*((_QWORD *)v8 + 2);
    if ( *(volatile signed __int32 **)(*(_QWORD *)v6 + 8LL) != v6 || *v10 != v6 )
      __fastfail(3u);
    *v10 = v9;
    *((_QWORD *)v9 + 1) = v10;
    *((_DWORD *)v8 + 14) &= ~0x8000000u;
    *((_QWORD *)v6 + 1) = v6;
    *(_QWORD *)v6 = v6;
    ExReleaseSpinLockExclusiveFromDpcLevel(v1);
    v11 = (__int64)(v6 - 2);
    if ( *((_DWORD *)v8 + 19) )
    {
      inserted = MiInsertUnusedSegment(v11);
      ExReleaseSpinLockExclusive(v8 + 18, v7);
      if ( inserted )
        MiReturnSubsectionCharges(inserted);
    }
    else
    {
      v13 = 0LL;
      if ( (unsigned int)MiFlushControlArea(v11, v7, (__int64 *)&v14, &v13) == 1 )
        MiDestroySection((__int64)(v6 - 2), v7, v13);
      if ( v14 )
        MiReleaseControlAreaWaiters(v14);
    }
    ExAcquireSpinLockExclusive(v1);
    v6 = *v5;
    if ( *v5 == (volatile signed __int32 *)v5 )
      goto LABEL_17;
    --v4;
  }
  while ( v4 );
LABEL_19:
  KiSetTimerEx(a1 + 1336, Mi10Milliseconds.QuadPart, 0LL, 0, 0LL);
LABEL_18:
  ExReleaseSpinLockExclusive(v1, v7);
}
