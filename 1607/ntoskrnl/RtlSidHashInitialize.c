/*
 * XREFs of RtlSidHashInitialize @ 0x14000E790
 * Callers:
 *     SepTokenFromAccessInformation @ 0x14000C190 (SepTokenFromAccessInformation.c)
 *     SepCreateTokenEx @ 0x14007FC48 (SepCreateTokenEx.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     SepSetTokenCapabilities @ 0x14047791C (SepSetTokenCapabilities.c)
 *     SepCreateClaimAttributes @ 0x1404784D8 (SepCreateClaimAttributes.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 *     SepCopyTokenAccessInformation @ 0x140518A04 (SepCopyTokenAccessInformation.c)
 *     CmpBuildAdminInformation @ 0x140600550 (CmpBuildAdminInformation.c)
 *     SepDuplicateClaimAttributes @ 0x140695B64 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

NTSTATUS __cdecl RtlSidHashInitialize(
        PSID_AND_ATTRIBUTES SidAttr,
        ULONG SidCount,
        PSID_AND_ATTRIBUTES_HASH SidAttrHash)
{
  __int64 v6; // rax
  __int64 v7; // r9
  _BYTE *Sid; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rcx

  if ( !SidAttrHash )
    return -1073741811;
  memset(SidAttrHash, 0, sizeof(_SID_AND_ATTRIBUTES_HASH));
  if ( SidAttr && SidCount )
  {
    SidAttrHash->SidAttr = SidAttr;
    SidAttrHash->SidCount = SidCount;
    if ( SidCount > 0x40 )
      SidCount = 64;
    v6 = 1LL;
    v7 = SidCount;
    do
    {
      Sid = SidAttr->Sid;
      ++SidAttr;
      v9 = (unsigned __int8)Sid[4 * (unsigned __int8)Sid[1] + 4];
      v10 = Sid[4 * (unsigned __int8)Sid[1] + 4] & 0xF;
      SidAttrHash->Hash[v10] |= v6;
      SidAttrHash->Hash[(v9 >> 4) + 16] |= v6;
      v6 = __ROL8__(v6, 1);
      --v7;
    }
    while ( v7 );
  }
  return 0;
}
