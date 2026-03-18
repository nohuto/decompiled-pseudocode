/*
 * XREFs of KeSetExecuteOptions @ 0x1400967CC
 * Callers:
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     KiAcquireProcessLockExclusive @ 0x14002AB2C (KiAcquireProcessLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall KeSetExecuteOptions(__int64 a1, int a2)
{
  char v2; // bl
  unsigned int v4; // esi
  char v5; // al
  char v6; // al
  unsigned __int8 v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( (a2 & 0xFFFFFF80) != 0 || !*(_QWORD *)(a1 + 1064) )
    return 3221225485LL;
  v4 = -1073741790;
  KiAcquireProcessLockExclusive(a1, &v8);
  v5 = *(_BYTE *)(a1 + 447);
  if ( (v5 & 8) == 0 )
  {
    v6 = v5 & 0xFE;
    if ( (v2 & 1) != 0 )
      v6 = v6 & 0xFC | 1;
    if ( (v2 & 4) != 0 )
      v6 |= 4u;
    if ( (v2 & 2) != 0 )
      v6 |= 2u;
    if ( (v2 & 0x10) != 0 )
      v6 |= 0x10u;
    if ( (v2 & 0x20) != 0 )
      v6 |= 0x20u;
    if ( (v2 & 0x40) != 0 )
      v6 |= 0x40u;
    if ( (v2 & 8) != 0 )
      v6 |= 8u;
    if ( (v6 & 2) != 0 )
      v6 |= 0x30u;
    *(_BYTE *)(a1 + 447) = v6;
    v4 = 0;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  __writecr8(v8);
  return v4;
}
