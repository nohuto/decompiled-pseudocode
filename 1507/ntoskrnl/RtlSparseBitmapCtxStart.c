/*
 * XREFs of RtlSparseBitmapCtxStart @ 0x1402730F0
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400D8CFC (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSparseBitmapCtxStart(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // r10
  unsigned int v6; // ecx

  v2 = *(_DWORD *)(a2 + 40);
  if ( (v2 & 2) != 0 )
    return (unsigned int)-1073741811;
  v4 = *(unsigned int *)(a2 + 12);
  v5 = (v4 + *(_QWORD *)a2 - 1LL) / v4;
  if ( v5 - 1 > 0xFFFFFFFE )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v6 = 0;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 52) = v5;
    *(_DWORD *)(a1 + 56) = v4;
    *(_DWORD *)(a1 + 64) = 4 * ((v4 + 31) >> 5) + 24;
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(a1 + 72) ^= ((unsigned __int8)v2 ^ (unsigned __int8)*(_DWORD *)(a1 + 72)) & 7;
    *(_DWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return v6;
}
