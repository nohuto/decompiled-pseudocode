/*
 * XREFs of ?GetSpecialTargetInfo@CSSCrossFade@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x180091390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSSCrossFade::GetSpecialTargetInfo(__int64 a1, __int16 a2)
{
  unsigned int v2; // r8d
  int v3; // ecx
  int v4; // edx
  _DWORD *i; // r9

  v2 = 0;
  v3 = 0;
  v4 = a2 & 0xFFF;
  for ( i = `CSSCrossFade::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable; (*i & 0xFFF) != v4; i += 2 )
  {
    if ( (unsigned __int64)++v3 >= 7 )
      return v2;
  }
  return (unsigned int)`CSSCrossFade::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable[2 * v3 + 1];
}
