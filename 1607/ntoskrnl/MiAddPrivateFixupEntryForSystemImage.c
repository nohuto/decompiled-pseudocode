/*
 * XREFs of MiAddPrivateFixupEntryForSystemImage @ 0x140130E64
 * Callers:
 *     MiGetSystemAddressForImage @ 0x1404CCEDC (MiGetSystemAddressForImage.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiInitializePrivateFixupBitmap @ 0x1404809D0 (MiInitializePrivateFixupBitmap.c)
 *     MiCreateSessionDriverProtos @ 0x1406645B4 (MiCreateSessionDriverProtos.c)
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
  if ( a2 >= qword_140326910
    && a2 < qword_140326910 + 0x8000000000LL
    && (a1[14] & 0x800) == 0
    && !(unsigned int)MiCreateSessionDriverProtos(a1, a2, v5) )
  {
    ExFreePoolWithTag(v5, 0);
    v6 = PoolWithTag;
    goto LABEL_7;
  }
  v7 = ExAcquireSpinLockExclusive(&dword_1403267C0);
  v8 = (_QWORD *)qword_1403267D0;
  if ( *(__int64 **)qword_1403267D0 != &qword_1403267C8 )
    __fastfail(3u);
  *v5 = &qword_1403267C8;
  v5[1] = v8;
  *v8 = v5;
  qword_1403267D0 = (__int64)v5;
  ExReleaseSpinLockExclusive(&dword_1403267C0, v7);
  return 1LL;
}
