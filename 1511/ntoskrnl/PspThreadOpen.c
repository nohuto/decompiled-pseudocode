/*
 * XREFs of PspThreadOpen @ 0x1404A44EC
 * Callers:
 *     <none>
 * Callees:
 *     PspCheckForInvalidAccessByProtection @ 0x1404A4564 (PspCheckForInvalidAccessByProtection.c)
 */

__int64 __fastcall PspThreadOpen(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned __int8 v5; // r8

  LOBYTE(a1) = a2;
  LOBYTE(a2) = *(_BYTE *)(a3 + 1722);
  LOBYTE(a3) = *(_BYTE *)(*(_QWORD *)(a4 + 544) + 1722LL);
  if ( (unsigned __int8)PspCheckForInvalidAccessByProtection(a1, a2, a3)
    && (*((_DWORD *)qword_1406A2198 + 3 * ((unsigned __int64)v5 >> 4)) & *a5) != 0 )
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
