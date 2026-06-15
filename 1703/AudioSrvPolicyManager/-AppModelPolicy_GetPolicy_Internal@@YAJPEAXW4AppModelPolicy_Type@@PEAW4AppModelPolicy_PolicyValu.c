/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x180014E58
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800117F4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, int a2, _DWORD *a3, _WORD *a4, _QWORD *a5)
{
  int PackageClaims; // r9d
  unsigned int v9; // r8d

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    PackageClaims = 0;
    *a4 = 0;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
  {
    v9 = 2;
    if ( (*(_BYTE *)a5 & 1) != 0 )
    {
      if ( (*(_BYTE *)a5 & 2) != 0 )
      {
        v9 = 4;
        if ( (*(_BYTE *)a5 & 4) == 0 )
        {
          if ( (*(_QWORD *)a4 & 4) != 0 )
            v9 = 1;
          else
            v9 = (*(_QWORD *)a4 & 8) != 0 ? 6 : 0;
        }
      }
      else
      {
        v9 = 5;
      }
    }
    *a3 = `AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table[7 * (a2 - 1) + v9];
  }
  return PackageClaims | 0x10000000u;
}
