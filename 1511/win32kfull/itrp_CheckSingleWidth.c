/*
 * XREFs of itrp_CheckSingleWidth @ 0x1C014470C
 * Callers:
 *     itrp_MDRP @ 0x1C00B5EF0 (itrp_MDRP.c)
 *     itrp_MIRP @ 0x1C00B70D0 (itrp_MIRP.c)
 * Callees:
 *     FixMul @ 0x1C00AFF84 (FixMul.c)
 *     itrp_GetCVTScale @ 0x1C00B0D08 (itrp_GetCVTScale.c)
 */

__int64 __fastcall itrp_CheckSingleWidth(int a1)
{
  __int64 v1; // rdi
  unsigned int fixed; // ecx
  signed int v4; // eax
  int v6; // ebx
  signed int v7; // eax
  int CVTScale; // eax

  v1 = qword_1C0323E30;
  if ( dword_1C0323E70 == 2 )
  {
    fixed = *(_DWORD *)(qword_1C0323E30 + 112);
  }
  else if ( dword_1C0323E70 == 3 )
  {
    CVTScale = itrp_GetCVTScale();
    fixed = FixMul(*(_DWORD *)(qword_1C0323E30 + 112), CVTScale);
  }
  else
  {
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
    fixed = 0;
  }
  if ( a1 < 0 )
  {
    v6 = -a1;
    v7 = v6 - fixed;
    if ( (int)(v6 - fixed) < 0 )
      v7 = fixed - v6;
    if ( v7 < *(_DWORD *)(v1 + 108) )
      v6 = fixed;
    return (unsigned int)-v6;
  }
  else
  {
    v4 = a1 - fixed;
    if ( (int)(a1 - fixed) < 0 )
      v4 = fixed - a1;
    if ( v4 < *(_DWORD *)(v1 + 108) )
      return fixed;
  }
  return (unsigned int)a1;
}
