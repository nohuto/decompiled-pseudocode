/*
 * XREFs of mth_FixXYMul @ 0x1C00BA740
 * Callers:
 *     fs_FindBitMapSize @ 0x1C00B3C18 (fs_FindBitMapSize.c)
 *     scl_ScaleAdvanceWidth @ 0x1C00E4A90 (scl_ScaleAdvanceWidth.c)
 * Callees:
 *     FixMul @ 0x1C00B6E4C (FixMul.c)
 *     CompDiv @ 0x1C00D3E04 (CompDiv.c)
 *     FracMul @ 0x1C02D8474 (FracMul.c)
 */

__int64 __fastcall mth_FixXYMul(unsigned int *a1, int *a2, int *a3)
{
  unsigned int v3; // ebp
  unsigned int v5; // r15d
  int fixed; // eax
  int v9; // r10d
  __int64 result; // rax
  int v11; // r10d
  __int64 v12; // rcx
  int v13; // r10d
  unsigned int v14; // r10d
  unsigned int v15; // r10d

  v3 = *a1;
  v5 = *a2;
  FixMul(a3[3], *a2);
  fixed = FixMul(*a3, v3);
  *a1 = fixed + v9;
  FixMul(a3[4], v5);
  result = FixMul(a3[1], v3);
  *a2 = result + v11;
  v12 = (unsigned int)a3[2];
  if ( (_DWORD)v12 || a3[5] )
  {
    FracMul(v12, v3);
    result = FracMul((unsigned int)a3[5], v5);
    v14 = a3[8] + result + v13;
    if ( (v14 & 0xFFFEFFFF) != 0 )
    {
      *a1 = CompDiv(v14, (__int64)(int)*a1 << 16);
      result = CompDiv(v15, (__int64)*a2 << 16);
      *a2 = result;
    }
  }
  return result;
}
