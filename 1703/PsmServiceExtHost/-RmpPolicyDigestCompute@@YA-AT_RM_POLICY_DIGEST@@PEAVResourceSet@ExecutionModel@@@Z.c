/*
 * XREFs of ?RmpPolicyDigestCompute@@YA?AT_RM_POLICY_DIGEST@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180012100
 * Callers:
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180011DF0 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RmpPolicyDigestCompute(__int64 a1)
{
  char v1; // r8
  __int64 v2; // r10
  unsigned __int64 v3; // rdx
  __int64 v4; // r9
  __int16 v5; // r9
  __int16 v6; // ax
  unsigned __int64 v7; // rdx
  bool v8; // r8
  int v9; // edx
  __int16 v10; // cx
  __int16 v11; // ax

  v1 = *(_BYTE *)(a1 + 1450);
  v2 = 0x11000002000LL;
  if ( (v1 & 8) != 0
    || (v3 = *(int *)(a1 + 1408), (unsigned int)v3 <= 0x27) && (v4 = 0x8800001000LL, _bittest64(&v4, v3)) )
  {
    v5 = 2;
  }
  else if ( (*(_BYTE *)(a1 + 1448) & 0x10) != 0 || (unsigned int)v3 <= 0x28 && _bittest64(&v2, v3) )
  {
    v5 = 4;
  }
  else
  {
    v5 = 1;
  }
  v6 = *(_WORD *)(a1 + 1448);
  v8 = ((v6 & 0x10) != 0 || (v7 = *(int *)(a1 + 1408), (unsigned int)v7 <= 0x28) && _bittest64(&v2, v7))
    && (v1 & 0x40) == 0;
  v9 = *(_DWORD *)(a1 + 1404) >> 7;
  v10 = v5 | 8;
  v11 = 8 * ((2 * (v6 & 3 | (8 * (v9 & 1)))) | v6 & 8);
  if ( v8 )
    v10 = v5;
  return v10 | v11;
}
