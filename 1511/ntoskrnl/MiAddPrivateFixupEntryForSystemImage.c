/*
 * XREFs of MiAddPrivateFixupEntryForSystemImage @ 0x140126394
 * Callers:
 *     MiGetSystemAddressForImage @ 0x1403CC454 (MiGetSystemAddressForImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiInitializePrivateFixupBitmap @ 0x1403D0478 (MiInitializePrivateFixupBitmap.c)
 *     MiCreateSessionDriverProtos @ 0x140621578 (MiCreateSessionDriverProtos.c)
 */

__int64 __fastcall MiAddPrivateFixupEntryForSystemImage(__int64 a1, __int64 a2)
{
  PVOID PoolWithTag; // rsi
  _QWORD *v5; // rbx
  void *v6; // rcx
  KIRQL v7; // al
  __int64 **v8; // rcx

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
LABEL_6:
    ExFreePoolWithTag(v6, 0);
    return 0LL;
  }
  MiInitializePrivateFixupBitmap(PoolWithTag, a1);
  v5[5] = PoolWithTag;
  v5[6] = a1;
  v5[2] = a2;
  v5[3] = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) << 12) + a2 - 1;
  v5[4] = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( (unsigned __int64)(a2 + 0x70000000000LL) <= 0x7FFFFFFFFFLL
    && (*(_BYTE *)(*(_QWORD *)a1 + 14LL) & 1) == 0
    && !(unsigned int)MiCreateSessionDriverProtos(a1, a2, v5) )
  {
    ExFreePoolWithTag(v5, 0);
    v6 = PoolWithTag;
    goto LABEL_6;
  }
  v7 = ExAcquireSpinLockExclusive(&dword_1402FE500);
  v8 = (__int64 **)qword_1402FE510;
  *v5 = &qword_1402FE508;
  v5[1] = v8;
  if ( *v8 != &qword_1402FE508 )
    __fastfail(3u);
  *v8 = v5;
  qword_1402FE510 = (__int64)v5;
  ExReleaseSpinLockExclusive(&dword_1402FE500, v7);
  return 1LL;
}
