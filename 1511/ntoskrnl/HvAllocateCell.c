/*
 * XREFs of HvAllocateCell @ 0x1403F45FC
 * Callers:
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     CmpAddSubKeyEx @ 0x1403D7E1C (CmpAddSubKeyEx.c)
 *     CmpAddValueToListEx @ 0x1403D86A0 (CmpAddValueToListEx.c)
 *     CmpSetValueKeyExisting @ 0x1403DA0F4 (CmpSetValueKeyExisting.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmpAssignSecurityDescriptor @ 0x1403DFF74 (CmpAssignSecurityDescriptor.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403E09B8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpAddValueKeyNew @ 0x1403F448C (CmpAddValueKeyNew.c)
 *     CmpSetValueDataNew @ 0x1404AFE2C (CmpSetValueDataNew.c)
 *     CmpCopyCell @ 0x1404B3F68 (CmpCopyCell.c)
 *     CmpSetValueDataExisting @ 0x1404B8C18 (CmpSetValueDataExisting.c)
 *     HvDuplicateCell @ 0x1404BD9A0 (HvDuplicateCell.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmpCreateEmptyKey @ 0x1405E1F44 (CmpCreateEmptyKey.c)
 *     CmpSplitLeaf @ 0x1405E4300 (CmpSplitLeaf.c)
 *     CmpCommitRenameKeyUoW @ 0x1405EBE70 (CmpCommitRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x140745B5C (CmpCreateRootNode.c)
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
