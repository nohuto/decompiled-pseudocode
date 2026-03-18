/*
 * XREFs of HvAllocateCell @ 0x14049FC48
 * Callers:
 *     CmpSplitLeaf @ 0x140409E3C (CmpSplitLeaf.c)
 *     CmpSetValueKeyExisting @ 0x14042B410 (CmpSetValueKeyExisting.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14044B704 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCopyCell @ 0x1404A0A38 (CmpCopyCell.c)
 *     CmpAddValueKeyNew @ 0x1404A0F2C (CmpAddValueKeyNew.c)
 *     CmpAddValueToListEx @ 0x1404A1188 (CmpAddValueToListEx.c)
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 *     HvDuplicateCell @ 0x1404F3250 (HvDuplicateCell.c)
 *     CmpAddSubKeyEx @ 0x1405335D0 (CmpAddSubKeyEx.c)
 *     CmpSetValueDataNew @ 0x14054384C (CmpSetValueDataNew.c)
 *     CmpSetValueDataExisting @ 0x1405583F0 (CmpSetValueDataExisting.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmpCreateEmptyKey @ 0x140658120 (CmpCreateEmptyKey.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140659810 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCommitRenameKeyUoW @ 0x140664408 (CmpCommitRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x1407D79B4 (CmpCreateRootNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvAllocateCell(ULONG_PTR a1, int a2, __int64 a3, __int64 a4, _DWORD *a5)
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
    return HvpDoAllocateCell(a1, v6, a3, a4, a5);
}
