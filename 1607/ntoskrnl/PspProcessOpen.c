/*
 * XREFs of PspProcessOpen @ 0x1404A6FB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlTestProtectedAccess @ 0x1404A7060 (RtlTestProtectedAccess.c)
 */

__int64 __fastcall PspProcessOpen(__int64 a1, char a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v7; // r11
  unsigned __int8 v9; // r10

  v7 = a5;
  if ( a2
    && !RtlTestProtectedAccess(*(PS_PROTECTION *)(a3 + 1738), *(PS_PROTECTION *)(a4 + 1738))
    && (dword_1406EA434[3 * ((unsigned __int64)v9 >> 4)] & *v7) != 0
    || *(_QWORD *)(a4 + 1808) && !*(_QWORD *)(a3 + 1808) && a2 && (~*((_DWORD *)&xmmword_1403013E0 + 2) & *v7) != 0 )
  {
    return 3221225506LL;
  }
  if ( (*(_BYTE *)v7 & 0x28) == 40 || (*v7 & 0x400) != 0 )
    *v7 |= 0x1000u;
  if ( (*v7 & 0x200) != 0 )
    *v7 |= 0x2000u;
  return 0LL;
}
