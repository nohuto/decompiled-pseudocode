/*
 * XREFs of MiReferencePfBackedSection @ 0x14000E638
 * Callers:
 *     MiTrimSharedPage @ 0x1400081F8 (MiTrimSharedPage.c)
 *     MiGetPageFileSectionForReservation @ 0x14010880C (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     MiReleaseControlAreaWaiters @ 0x14000C640 (MiReleaseControlAreaWaiters.c)
 *     MiBuildWakeList @ 0x14003AAEC (MiBuildWakeList.c)
 *     MiRemoveUnusedSegment @ 0x14003AB30 (MiRemoveUnusedSegment.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 */

_QWORD *__fastcall MiReferencePfBackedSection(unsigned __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  KIRQL v4; // al
  _QWORD *v5; // rdx
  KIRQL v6; // r15
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r12
  __int64 v9; // rdi
  KIRQL v10; // al
  KIRQL v11; // r14
  __int64 v12; // rax

  v2 = 0LL;
  v3 = 0LL;
  v4 = ExAcquireSpinLockShared(&dword_1402FE3E8);
  v5 = (_QWORD *)qword_1402FE3E0;
  v6 = v4;
  while ( v5 )
  {
    v7 = *(v5 - 6);
    if ( a1 < v7 )
    {
      v5 = (_QWORD *)*v5;
    }
    else
    {
      if ( a1 < v7 + 8LL * *((unsigned int *)v5 - 3) )
      {
        v8 = v5 - 7;
        v9 = *(v5 - 7);
        v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72));
        v11 = v10;
        if ( *(_BYTE *)(v9 + 56) & 1 | ((*(_DWORD *)(v9 + 56) & 2) != 0) )
        {
          ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72), v10);
        }
        else
        {
          v12 = MiBuildWakeList(v9, 4LL);
          ++*(_DWORD *)(v9 + 76);
          v2 = (_QWORD *)v12;
          MiRemoveUnusedSegment(v9);
          ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72), v11);
          v3 = v8;
        }
        break;
      }
      v5 = (_QWORD *)v5[1];
    }
  }
  ExReleaseSpinLockShared(&dword_1402FE3E8, v6);
  if ( v2 )
    MiReleaseControlAreaWaiters(v2);
  return v3;
}
