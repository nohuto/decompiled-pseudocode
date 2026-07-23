/*
 * XREFs of HvAllocateCell @ 0x140400BFC
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140141494 (CmpCreateHiveRootCell.c)
 *     CmpCreateTombstone @ 0x1401B6144 (CmpCreateTombstone.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FBC58 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpSetValueDataNew @ 0x1403FE7F4 (CmpSetValueDataNew.c)
 *     CmpAddValueToListEx @ 0x1403FEB9C (CmpAddValueToListEx.c)
 *     CmpSetValueKeyExisting @ 0x1403FEE24 (CmpSetValueKeyExisting.c)
 *     CmpAddValueKeyNew @ 0x140400A88 (CmpAddValueKeyNew.c)
 *     CmpAddSubKeyEx @ 0x14049AE00 (CmpAddSubKeyEx.c)
 *     HvDuplicateCell @ 0x1404C642C (HvDuplicateCell.c)
 *     CmpCopyCell @ 0x1404CE184 (CmpCopyCell.c)
 *     CmpSetValueDataExisting @ 0x1404CEBA0 (CmpSetValueDataExisting.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x1405FEBF8 (CmpAddValueKeyTombstone.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14060277C (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSplitLeaf @ 0x14060B068 (CmpSplitLeaf.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14060ED60 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14060F334 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x1407AE788 (CmpCreateRootNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvAllocateCell(ULONG_PTR a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // r10d

  v5 = 0x4000;
  v6 = (a2 + 11) & 0xFFFFFFF8;
  v7 = 0;
  if ( v6 > 0x4000 )
  {
    do
    {
      v5 *= 2;
      ++v7;
    }
    while ( v6 > v5 );
    if ( v7 )
      v6 = v5;
  }
  if ( v6 > 0x100000 )
    return 0xFFFFFFFFLL;
  else
    return HvpDoAllocateCell(a1, a5);
}
