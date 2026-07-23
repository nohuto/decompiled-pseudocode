/*
 * XREFs of SepMakeTokenEffectiveOnly @ 0x1404AF78C
 * Callers:
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepMakeTokenEffectiveOnly(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  unsigned int v3; // r8d
  __int64 v4; // r10

  result = *(_QWORD *)(a1 + 72);
  v2 = 1;
  *(_QWORD *)(a1 + 64) &= result;
  *(_QWORD *)(a1 + 80) &= result;
  v3 = *(_DWORD *)(a1 + 124);
  if ( v3 > 1 )
  {
    do
    {
      v4 = *(_QWORD *)(a1 + 152);
      result = *(unsigned int *)(v4 + 16LL * v2 + 8);
      if ( (result & 0x34) != 0 )
      {
        ++v2;
      }
      else
      {
        if ( v2 == *(_DWORD *)(a1 + 144) )
          *(_DWORD *)(a1 + 144) = 0;
        if ( v2 == *(_DWORD *)(a1 + 208) )
          *(_DWORD *)(a1 + 208) = -1;
        if ( --v3 == *(_DWORD *)(a1 + 208) )
          *(_DWORD *)(a1 + 208) = v2;
        if ( v3 == *(_DWORD *)(a1 + 144) )
          *(_DWORD *)(a1 + 144) = v2;
        result = 2LL * v3;
        *(_OWORD *)(v4 + 16LL * v2) = *(_OWORD *)(v4 + 16LL * v3);
      }
    }
    while ( v2 < v3 );
  }
  *(_DWORD *)(a1 + 124) = v3;
  return result;
}
