/*
 * XREFs of MiCleanSection @ 0x140112210
 * Callers:
 *     MiCheckControlArea @ 0x140027A60 (MiCheckControlArea.c)
 *     MiAttemptSectionDelete @ 0x1400A7650 (MiAttemptSectionDelete.c)
 * Callees:
 *     MiInsertUnusedSegment @ 0x140026B6C (MiInsertUnusedSegment.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiDestroySection @ 0x140112284 (MiDestroySection.c)
 *     MiRemoveWakeListEntry @ 0x1401DF188 (MiRemoveWakeListEntry.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 */

__int64 __fastcall MiCleanSection(__int64 a1, __int64 a2, char a3)
{
  KIRQL v4; // r14
  int v6; // esi
  int v8; // r12d
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 inserted; // rbx
  __int64 v12; // [rsp+40h] [rbp-40h] BYREF
  __int64 v13; // [rsp+50h] [rbp-30h] BYREF
  int v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+5Ch] [rbp-24h]
  __int16 v16; // [rsp+60h] [rbp-20h]
  char v17; // [rsp+62h] [rbp-1Eh]
  int v18; // [rsp+64h] [rbp-1Ch]
  _QWORD v19[3]; // [rsp+68h] [rbp-18h] BYREF

  v4 = a2;
  v6 = 1;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      goto LABEL_3;
    v15 = 0;
    v18 = 0;
    v19[1] = v19;
    v14 = 4;
    v19[0] = v19;
    v13 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v13;
    v16 = 263;
    v17 = 6;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v4);
    v8 = MiFlushSectionInternal(0LL, 0LL, (__int64 *)(a1 + 128), 0LL, 0LL, 0x80000000, &v12);
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    MiRemoveWakeListEntry(a1, &v13);
    if ( !v15 )
      break;
    if ( *(_QWORD *)(a1 + 40) != 1LL || *(_QWORD *)(a1 + 24) )
      goto LABEL_10;
  }
  if ( v8 >= 0 )
  {
LABEL_3:
    *(_QWORD *)(a1 + 40) = 0LL;
    LOBYTE(a2) = v4;
    MiDestroySection(a1, a2, 0LL);
    return 1LL;
  }
  v6 = 2;
LABEL_10:
  --*(_QWORD *)(a1 + 40);
  if ( a3 )
    *(_DWORD *)(a1 + 56) |= 0x40000u;
  inserted = 0LL;
  if ( v6 == 2 )
    inserted = MiInsertUnusedSegment(a1, a2, v9, v10);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v4);
  if ( inserted )
    MiReturnSubsectionCharges(inserted);
  return 0LL;
}
