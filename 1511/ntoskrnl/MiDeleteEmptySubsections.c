/*
 * XREFs of MiDeleteEmptySubsections @ 0x1400E755C
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1401389A0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MI_UNUSED_SUBSECTIONS_COUNT_REMOVE @ 0x14003A580 (MI_UNUSED_SUBSECTIONS_COUNT_REMOVE.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400DAD80 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteEmptySubsections(__int64 a1)
{
  volatile LONG *v1; // rbx
  KIRQL v3; // al
  _QWORD *v4; // r14
  _QWORD *v5; // rdx
  KIRQL v6; // si
  __int64 v7; // rdi
  __int64 v8; // r12
  void *v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx

  v1 = (volatile LONG *)(a1 + 1536);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1536));
  v4 = (_QWORD *)(a1 + 1440);
  while ( 1 )
  {
    v5 = (_QWORD *)*v4;
    v6 = v3;
    if ( (_QWORD *)*v4 == v4 )
      break;
    v7 = (__int64)(v5 - 10);
    v8 = *(v5 - 10);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v8 + 72)) )
    {
      if ( (*(_BYTE *)(v7 + 34) & 8) != 0 )
      {
        v9 = *(void **)(v7 + 8);
        v10 = (_QWORD *)(v7 + 80);
        *(_QWORD *)(v7 + 8) = 0LL;
        v11 = *(_QWORD *)(v7 + 80);
        v12 = *(_QWORD **)(v7 + 88);
        if ( *(_QWORD *)(v11 + 8) != v7 + 80 || (_QWORD *)*v12 != v10 )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        *(_WORD *)(v7 + 34) &= ~8u;
        *(_QWORD *)(v7 + 88) = v7 + 80;
        *v10 = v10;
        MI_UNUSED_SUBSECTIONS_COUNT_REMOVE(v7);
      }
      else
      {
        v9 = 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 72), v6);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
    }
    else
    {
      ExReleaseSpinLockExclusive(v1, v6);
    }
    v3 = ExAcquireSpinLockExclusive(v1);
  }
  *(_QWORD *)(a1 + 1264) = 0LL;
  ExReleaseSpinLockExclusive(v1, v3);
}
