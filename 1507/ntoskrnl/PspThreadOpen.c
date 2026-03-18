/*
 * XREFs of PspThreadOpen @ 0x1405216B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspThreadOpen(__int64 a1, char a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned __int8 v5; // cl
  unsigned __int8 v6; // al
  int v8; // ecx

  v5 = *(_BYTE *)(a3 + 1714);
  v6 = *(_BYTE *)(*(_QWORD *)(a4 + 544) + 1714LL);
  if ( a2 )
  {
    if ( (v6 & 7) != 0 )
    {
      if ( (unsigned __int8)(v5 & 7) < (unsigned __int8)(v6 & 7)
        || (v8 = *((_DWORD *)&RtlProtectedAccess + 3 * ((unsigned __int64)v5 >> 4)), !_bittest(&v8, v6 >> 4)) )
      {
        if ( (*((_DWORD *)&RtlProtectedAccess + 3 * ((unsigned __int64)v6 >> 4) + 2) & *a5) != 0 )
          return 3221225506LL;
      }
    }
  }
  if ( (*a5 & 0x40) != 0 )
    *a5 |= 0x800u;
  if ( (*a5 & 0x20) != 0 )
    *a5 |= 0x400u;
  if ( (*a5 & 2) != 0 )
    *a5 |= 0x1000u;
  return 0LL;
}
