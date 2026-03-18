/*
 * XREFs of ?cTotalCurves@EPATHOBJ@@QEAAKXZ @ 0x1C00472C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EPATHOBJ::cTotalCurves(EPATHOBJ *this)
{
  unsigned int v1; // r8d
  __int64 *i; // rcx
  int v3; // eax

  v1 = 0;
  for ( i = *(__int64 **)(*((_QWORD *)this + 1) + 32LL); i; i = (__int64 *)*i )
  {
    v3 = *((_DWORD *)i + 4);
    if ( (v3 & 8) != 0 )
      ++v1;
    if ( (v3 & 0x10) != 0 )
    {
      v1 += *((_DWORD *)i + 5) / 3u;
    }
    else
    {
      v1 += *((_DWORD *)i + 5);
      if ( (v3 & 1) != 0 )
        --v1;
    }
  }
  return v1;
}
