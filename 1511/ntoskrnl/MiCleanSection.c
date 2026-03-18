/*
 * XREFs of MiCleanSection @ 0x140107088
 * Callers:
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 *     MiAttemptSectionDelete @ 0x1400E96DC (MiAttemptSectionDelete.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiInsertUnusedSegment @ 0x1400A8590 (MiInsertUnusedSegment.c)
 *     MiDestroySection @ 0x1401070FC (MiDestroySection.c)
 *     MiRemoveWakeListEntry @ 0x1401D1884 (MiRemoveWakeListEntry.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 */

__int64 __fastcall MiCleanSection(__int64 a1, __int64 a2, char a3)
{
  KIRQL v4; // r14
  int v6; // esi
  int v8; // r12d
  __int64 inserted; // rbx
  _DWORD v10[4]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v11; // [rsp+50h] [rbp-30h] BYREF
  int v12; // [rsp+58h] [rbp-28h]
  int v13; // [rsp+5Ch] [rbp-24h]
  __int16 v14; // [rsp+60h] [rbp-20h]
  char v15; // [rsp+62h] [rbp-1Eh]
  int v16; // [rsp+64h] [rbp-1Ch]
  _QWORD v17[3]; // [rsp+68h] [rbp-18h] BYREF

  v4 = a2;
  v6 = 1;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      goto LABEL_3;
    v13 = 0;
    v16 = 0;
    v17[1] = v17;
    v12 = 4;
    v17[0] = v17;
    v11 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v11;
    v14 = 263;
    v15 = 6;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v4);
    v8 = MiFlushSectionInternal(0LL, 0LL, (__int64 *)(a1 + 120), 0LL, 0LL, 0x80000000, v10);
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    MiRemoveWakeListEntry(a1, &v11);
    if ( !v13 )
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
    inserted = MiInsertUnusedSegment(a1);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v4);
  if ( inserted )
    MiReturnSubsectionCharges(inserted);
  return 0LL;
}
