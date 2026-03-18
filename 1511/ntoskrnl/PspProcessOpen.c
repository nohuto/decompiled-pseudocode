/*
 * XREFs of PspProcessOpen @ 0x14049CD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspProcessOpen(__int64 a1, char a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  unsigned __int8 v5; // al
  unsigned __int8 v6; // cl
  int v8; // ecx

  v5 = *(_BYTE *)(a4 + 1722);
  v6 = *(_BYTE *)(a3 + 1722);
  if ( a2 )
  {
    if ( (v5 & 7) != 0 )
    {
      if ( (unsigned __int8)(v6 & 7) < (unsigned __int8)(v5 & 7)
        || (v8 = *((_DWORD *)&RtlProtectedAccess + 3 * ((unsigned __int64)v6 >> 4)), !_bittest(&v8, v5 >> 4)) )
      {
        if ( (*((_DWORD *)&RtlProtectedAccess + 3 * ((unsigned __int64)v5 >> 4) + 1) & *a5) != 0 )
          return 3221225506LL;
      }
    }
  }
  if ( (*a5 & 0x400) != 0 )
    *a5 |= 0x1000u;
  if ( (*a5 & 0x200) != 0 )
    *a5 |= 0x2000u;
  return 0LL;
}
