/*
 * XREFs of RtlSidHashInitialize @ 0x14000EC10
 * Callers:
 *     SepTokenFromAccessInformation @ 0x14000C610 (SepTokenFromAccessInformation.c)
 *     SepCreateTokenEx @ 0x14007FBC8 (SepCreateTokenEx.c)
 *     SepDuplicateToken @ 0x140412BD0 (SepDuplicateToken.c)
 *     SepSetTokenCapabilities @ 0x140478A4C (SepSetTokenCapabilities.c)
 *     SepCreateClaimAttributes @ 0x140479608 (SepCreateClaimAttributes.c)
 *     SepFilterToken @ 0x14047AFF4 (SepFilterToken.c)
 *     SepCopyTokenAccessInformation @ 0x1404A05F8 (SepCopyTokenAccessInformation.c)
 *     CmpBuildAdminInformation @ 0x14060049C (CmpBuildAdminInformation.c)
 *     SepDuplicateClaimAttributes @ 0x140695A80 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 */

__int64 __fastcall RtlSidHashInitialize(__int64 *a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rcx

  if ( !a3 )
    return 3221225485LL;
  memset(a3, 0, 0x110uLL);
  if ( a1 && a2 )
  {
    a3[1] = a1;
    *(_DWORD *)a3 = a2;
    if ( a2 > 0x40 )
      a2 = 64;
    v6 = 1LL;
    v7 = a2;
    do
    {
      v8 = *a1;
      a1 += 2;
      v9 = *(unsigned __int8 *)(v8 + 4LL * (*(unsigned __int8 *)(v8 + 1) - 1) + 8);
      v10 = *(_BYTE *)(v8 + 4LL * (*(unsigned __int8 *)(v8 + 1) - 1) + 8) & 0xF;
      a3[v10 + 2] |= v6;
      a3[(int)((v9 >> 4) + 16) + 2] |= v6;
      v6 = __ROL8__(v6, 1);
      --v7;
    }
    while ( v7 );
  }
  return 0LL;
}
