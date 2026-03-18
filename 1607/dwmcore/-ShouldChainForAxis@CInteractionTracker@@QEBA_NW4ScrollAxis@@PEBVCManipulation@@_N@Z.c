/*
 * XREFs of ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18014BF84
 * Callers:
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z @ 0x18014C0D4 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z.c)
 *     _lambda_aa746e2ed241174a5cc881b0a8c3db18_::operator() @ 0x1801687F0 (_lambda_aa746e2ed241174a5cc881b0a8c3db18_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

char __fastcall CInteractionTracker::ShouldChainForAxis(__int64 a1, int a2, __int64 a3, unsigned __int8 a4)
{
  char v4; // r10
  int v5; // edx
  __int64 v6; // rcx
  bool v7; // zf
  __m256i v9; // [rsp+10h] [rbp-59h]
  __int128 v10; // [rsp+90h] [rbp+27h]
  int v11; // [rsp+A0h] [rbp+37h]

  v4 = 0;
  v9 = *(__m256i *)(a3 + 268);
  v10 = *(_OWORD *)(a3 + 396);
  v11 = *(_DWORD *)(a3 + 412);
  if ( !a2 )
  {
    if ( (*(_BYTE *)(a3 + 428) & 1) == 0 || (v11 & 1) != 0 )
      return v4;
    if ( !(a4 | ((~(_BYTE)v11 & 8) != 0)) )
    {
      v7 = DWORD2(v10) == 1;
LABEL_18:
      if ( !v7 )
        return v4;
    }
    return 1;
  }
  v5 = a2 - 1;
  if ( !v5 )
  {
    if ( (*(_BYTE *)(a3 + 429) & 1) == 0 || (v11 & 2) != 0 )
      return v4;
    if ( !(a4 | ((~(_BYTE)v11 & 0x10) != 0)) )
    {
      v7 = DWORD2(v10) == 2;
      goto LABEL_18;
    }
    return 1;
  }
  if ( v5 == 1 && (*(_BYTE *)(a3 + 430) & 1) != 0 && (v11 & 4) == 0 )
  {
    v6 = *(__int64 *)((char *)&v9.m256i_i64[1] + 4) - 0x3F8000003F800000LL;
    if ( *(__int64 *)((char *)&v9.m256i_i64[1] + 4) == 0x3F8000003F800000LL )
      v6 = v9.m256i_u32[5] - 1065353216LL;
    if ( v6 )
      return 1;
  }
  return v4;
}
