/*
 * XREFs of PspThreadOpen @ 0x1404A6EDC
 * Callers:
 *     <none>
 * Callees:
 *     PspCheckForInvalidAccessByProtection @ 0x1404A6F78 (PspCheckForInvalidAccessByProtection.c)
 */

__int64 __fastcall PspThreadOpen(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  char v5; // r11
  unsigned __int8 v8; // r10
  char v9; // r11

  v5 = a2;
  LOBYTE(a2) = *(_BYTE *)(a3 + 1738);
  LOBYTE(a1) = v5;
  if ( (unsigned __int8)PspCheckForInvalidAccessByProtection(a1, a2)
    && (*((_DWORD *)qword_1406EA438 + 3 * ((unsigned __int64)v8 >> 4)) & *a5) != 0
    || *(_QWORD *)(a4 + 1936) && !*(_QWORD *)(a3 + 1808) && v9 && (~*((_DWORD *)&xmmword_1403013E0 + 3) & *a5) != 0 )
  {
    return 3221225506LL;
  }
  if ( (*a5 & 0x40) != 0 )
    *a5 |= 0x800u;
  if ( (*a5 & 0x20) != 0 )
    *a5 |= 0x400u;
  if ( (*a5 & 2) != 0 )
    *a5 |= 0x1000u;
  return 0LL;
}
