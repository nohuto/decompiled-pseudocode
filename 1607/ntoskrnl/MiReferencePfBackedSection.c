/*
 * XREFs of MiReferencePfBackedSection @ 0x14008F2E0
 * Callers:
 *     MiTrimSharedPage @ 0x14008DE44 (MiTrimSharedPage.c)
 *     MiGetPageFileSectionForReservation @ 0x140115FF8 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x140026868 (MiReleaseControlAreaWaiters.c)
 *     MiRemoveUnusedSegment @ 0x140026894 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x1400268F0 (MiBuildWakeList.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

_QWORD *__fastcall MiReferencePfBackedSection(unsigned __int64 a1)
{
  __int64 *v2; // rbx
  _QWORD *v3; // rbp
  KIRQL v4; // al
  _QWORD *v5; // rdx
  KIRQL v6; // r15
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r12
  __int64 v9; // rdi
  KIRQL v10; // al
  KIRQL v11; // r14
  __int64 *v12; // rax

  v2 = 0LL;
  v3 = 0LL;
  v4 = ExAcquireSpinLockShared(&dword_1403266F0);
  v5 = (_QWORD *)qword_1403266E8;
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
          v12 = MiBuildWakeList(v9, 4);
          ++*(_DWORD *)(v9 + 76);
          v2 = v12;
          MiRemoveUnusedSegment(v9);
          ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72), v11);
          v3 = v8;
        }
        break;
      }
      v5 = (_QWORD *)v5[1];
    }
  }
  ExReleaseSpinLockShared(&dword_1403266F0, v6);
  if ( v2 )
    MiReleaseControlAreaWaiters(v2);
  return v3;
}
