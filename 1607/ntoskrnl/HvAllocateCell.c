/*
 * XREFs of HvAllocateCell @ 0x140401D3C
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140140F24 (CmpCreateHiveRootCell.c)
 *     CmpCreateTombstone @ 0x1401B6260 (CmpCreateTombstone.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FCD98 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     CmpSetValueDataNew @ 0x1403FF934 (CmpSetValueDataNew.c)
 *     CmpAddValueToListEx @ 0x1403FFCDC (CmpAddValueToListEx.c)
 *     CmpSetValueKeyExisting @ 0x1403FFF64 (CmpSetValueKeyExisting.c)
 *     CmpAddValueKeyNew @ 0x140401BC8 (CmpAddValueKeyNew.c)
 *     CmpAddSubKeyEx @ 0x1404B0A20 (CmpAddSubKeyEx.c)
 *     HvDuplicateCell @ 0x1404E34C8 (HvDuplicateCell.c)
 *     CmpCopyCell @ 0x1404EC0FC (CmpCopyCell.c)
 *     CmpSetValueDataExisting @ 0x1404ECA34 (CmpSetValueDataExisting.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x1405FEB44 (CmpAddValueKeyTombstone.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1406026C8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSplitLeaf @ 0x14060AFB4 (CmpSplitLeaf.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14060ECAC (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14060F280 (CmpLightWeightPrepareRenameKeyUoW.c)
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
