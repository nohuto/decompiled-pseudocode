/*
 * XREFs of ?sizeSave@RGNOBJ@@QEAAKXZ @ 0x1C002D6D0
 * Callers:
 *     GreGetRegionData @ 0x1C0078730 (GreGetRegionData.c)
 *     ?GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z @ 0x1C00CB88C (-GrepGetRegionPtrData@@YAKPEAVREGION@@KPEAU_RGNDATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RGNOBJ::sizeSave(RGNOBJ *this)
{
  unsigned int v1; // edx
  int v2; // r8d
  _DWORD *i; // r9

  v1 = 0;
  v2 = *(_DWORD *)(*(_QWORD *)this + 84LL);
  for ( i = (_DWORD *)(*(_QWORD *)this + 104LL); v2; --v2 )
  {
    v1 += *i >> 1;
    i = (_DWORD *)((char *)i + (unsigned int)(4 * *i + 16));
  }
  return 16LL * v1;
}
