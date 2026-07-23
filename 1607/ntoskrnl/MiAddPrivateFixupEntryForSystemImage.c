/*
 * XREFs of MiAddPrivateFixupEntryForSystemImage @ 0x1401313D4
 * Callers:
 *     MiGetSystemAddressForImage @ 0x1404B2908 (MiGetSystemAddressForImage.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiInitializePrivateFixupBitmap @ 0x14047F724 (MiInitializePrivateFixupBitmap.c)
 *     MiCreateSessionDriverProtos @ 0x140664698 (MiCreateSessionDriverProtos.c)
 */

__int64 __fastcall MiAddPrivateFixupEntryForSystemImage(_DWORD *a1, unsigned __int64 a2)
{
  PVOID PoolWithTag; // rsi
  _QWORD *v5; // rbx
  void *v6; // rcx
  KIRQL v7; // al
  _QWORD *v8; // rcx

  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNx,
                  8
                * (((*(_DWORD *)(*(_QWORD *)a1 + 8LL) & 0x3F) != 0)
                 + ((unsigned __int64)*(unsigned int *)(*(_QWORD *)a1 + 8LL) >> 6))
                + 16,
                  0x69536D4Du);
  if ( !PoolWithTag )
    return 0LL;
  v5 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6946694Du);
  v6 = PoolWithTag;
  if ( !v5 )
  {
LABEL_7:
    ExFreePoolWithTag(v6, 0);
    return 0LL;
  }
  MiInitializePrivateFixupBitmap(PoolWithTag, a1);
  v5[5] = PoolWithTag;
  v5[6] = a1;
  v5[2] = a2;
  v5[3] = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) << 12) + a2 - 1;
  v5[4] = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( a2 >= qword_140326950
    && a2 < qword_140326950 + 0x8000000000LL
    && (a1[14] & 0x800) == 0
    && !(unsigned int)MiCreateSessionDriverProtos(a1, a2, v5) )
  {
    ExFreePoolWithTag(v5, 0);
    v6 = PoolWithTag;
    goto LABEL_7;
  }
  v7 = ExAcquireSpinLockExclusive(&dword_140326800);
  v8 = (_QWORD *)qword_140326810;
  if ( *(__int64 **)qword_140326810 != &qword_140326808 )
    __fastfail(3u);
  *v5 = &qword_140326808;
  v5[1] = v8;
  *v8 = v5;
  qword_140326810 = (__int64)v5;
  ExReleaseSpinLockExclusive(&dword_140326800, v7);
  return 1LL;
}
