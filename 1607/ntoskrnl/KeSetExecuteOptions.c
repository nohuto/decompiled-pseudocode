/*
 * XREFs of KeSetExecuteOptions @ 0x1400ACD8C
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 * Callees:
 *     KiReleaseProcessLockExclusive @ 0x1400F0CDC (KiReleaseProcessLockExclusive.c)
 *     KiAcquireProcessLockExclusive @ 0x1400F0DA0 (KiAcquireProcessLockExclusive.c)
 */

__int64 __fastcall KeSetExecuteOptions(__int64 a1, int a2)
{
  char v2; // bl
  unsigned int v4; // esi
  __int64 v5; // rdx
  char v6; // al
  char v7; // al
  char v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( (a2 & 0xFFFFFF80) != 0 || !*(_QWORD *)(a1 + 1064) )
    return 3221225485LL;
  v4 = -1073741790;
  KiAcquireProcessLockExclusive(a1, &v9);
  v6 = *(_BYTE *)(a1 + 447);
  if ( (v6 & 8) == 0 )
  {
    v7 = v6 & 0xFE;
    if ( (v2 & 1) != 0 )
      v7 = v7 & 0xFC | 1;
    if ( (v2 & 4) != 0 )
      v7 |= 4u;
    if ( (v2 & 2) != 0 )
      v7 |= 2u;
    if ( (v2 & 0x10) != 0 )
      v7 |= 0x10u;
    if ( (v2 & 0x20) != 0 )
      v7 |= 0x20u;
    if ( (v2 & 0x40) != 0 )
      v7 |= 0x40u;
    if ( (v2 & 8) != 0 )
      v7 |= 8u;
    if ( (v7 & 2) != 0 )
      v7 |= 0x30u;
    *(_BYTE *)(a1 + 447) = v7;
    v4 = 0;
  }
  LOBYTE(v5) = v9;
  KiReleaseProcessLockExclusive(a1, v5);
  return v4;
}
