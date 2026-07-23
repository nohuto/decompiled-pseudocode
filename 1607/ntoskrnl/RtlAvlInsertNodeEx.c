/*
 * XREFs of RtlAvlInsertNodeEx @ 0x140026F30
 * Callers:
 *     MiInsertVad @ 0x1400424D0 (MiInsertVad.c)
 *     MiBeginLargePageAccessor @ 0x14008A4F8 (MiBeginLargePageAccessor.c)
 *     MiUpdatePageFileSectionList @ 0x14008F97C (MiUpdatePageFileSectionList.c)
 *     MiDereferenceIoPages @ 0x14009B770 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x14009BB00 (MiReferenceIoPages.c)
 *     MiFlowThroughInsertNode @ 0x1400B24E8 (MiFlowThroughInsertNode.c)
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 *     MiInsertSubsectionNode @ 0x1400FB238 (MiInsertSubsectionNode.c)
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     MiInsertClone @ 0x14010A4DC (MiInsertClone.c)
 *     MiInsertMappingNode @ 0x1401110D4 (MiInsertMappingNode.c)
 *     MiSessionInsertImage @ 0x1401300DC (MiSessionInsertImage.c)
 *     MiUpdatePageFileList @ 0x1401431BC (MiUpdatePageFileList.c)
 *     MiAddMdlTracker @ 0x1401E298C (MiAddMdlTracker.c)
 *     MiMakeIoRangePermanent @ 0x1401E6844 (MiMakeIoRangePermanent.c)
 *     MiInsertSessionWorkingSet @ 0x1401EC754 (MiInsertSessionWorkingSet.c)
 *     MiActOnPartitionNodePages @ 0x1401F05D0 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x1401F0BB8 (MiAddRangeToPartitionTree.c)
 *     MiDeletePartitionResources @ 0x1401F11FC (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x1401F19A0 (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x1401F1CB8 (MiMergePageNodes.c)
 *     MiUpdatePerSessionProto @ 0x1401F5170 (MiUpdatePerSessionProto.c)
 *     MiCombiningInProgress @ 0x1401F8460 (MiCombiningInProgress.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 *     MiInsertSharedCommitNode @ 0x14042D550 (MiInsertSharedCommitNode.c)
 *     ExpWnfCreateNameInstance @ 0x140461464 (ExpWnfCreateNameInstance.c)
 *     MiAweViewInserter @ 0x14065C15C (MiAweViewInserter.c)
 *     MiProcessCrcList @ 0x140663EAC (MiProcessCrcList.c)
 *     MiCreateEnclaveRegions @ 0x1407A682C (MiCreateEnclaveRegions.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x140026CC0 (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  __int64 v5; // rax
  bool v6; // r9
  _BYTE *v8; // r8
  char v9; // cl
  char v10; // bl
  _BOOL8 v11; // r8
  _QWORD *v12; // r9
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r10

  LOBYTE(v5) = 0;
  v6 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 16) = a2;
  if ( a2 )
  {
    v5 = a3;
    v8 = (_BYTE *)(a2 + 16);
    *(_QWORD *)(a2 + 8 * v5) = a4;
    LOBYTE(v5) = 2 * v6;
    v9 = (-1 - 2 * v6) & 3;
    v10 = *(_BYTE *)(a2 + 16) & 3;
    if ( v10 )
    {
LABEL_5:
      if ( v10 == v9 )
      {
        if ( (*(_BYTE *)(a4 + 16) & 3) == v10 )
        {
          if ( (*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
            __fastfail(0x1Du);
          v11 = !v6;
          v12 = (_QWORD *)(a2 + 8LL * v6);
          if ( *v12 != a4 )
            __fastfail(0x1Du);
          v13 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v13 )
          {
            if ( *(_QWORD *)(v13 + 8) == a2 )
            {
              *(_QWORD *)(v13 + 8) = a4;
            }
            else
            {
              if ( *(_QWORD *)v13 != a2 )
                __fastfail(0x1Du);
              *(_QWORD *)v13 = a4;
            }
          }
          else
          {
            if ( *a1 != a2 )
              __fastfail(0x1Du);
            *a1 = a4;
          }
          *(_QWORD *)(a4 + 16) = v13 | *(_DWORD *)(a4 + 16) & 3;
          v14 = *(_QWORD *)(a4 + 8 * v11);
          if ( v14 )
          {
            v17 = *(_QWORD *)(v14 + 16);
            if ( (v17 & 0xFFFFFFFFFFFFFFFCuLL) != a4 )
              __fastfail(0x1Du);
            *(_QWORD *)(v14 + 16) = a2 | v17 & 3;
          }
          *v12 = v14;
          *(_QWORD *)(a4 + 8 * v11) = a2;
          v5 = a4 | *(_DWORD *)(a2 + 16) & 3;
          *(_QWORD *)(a2 + 16) = v5;
          *(_BYTE *)(a4 + 16) &= 0xFCu;
          *(_BYTE *)(a2 + 16) &= 0xFCu;
        }
        else
        {
          v5 = RtlpTreeDoubleRotateNodes(a1, a2, a4, v6);
          *(_BYTE *)(v15 + 16) &= 0xFCu;
          v16 = v5;
          *(_BYTE *)(a4 + 16) &= 0xFCu;
          if ( v10 == (*(_BYTE *)(v5 + 16) & 3) )
          {
            *(_BYTE *)(v15 + 16) ^= (v10 ^ *(_BYTE *)(v15 + 16) ^ 0xFE) & 3;
            *(_BYTE *)(v5 + 16) &= 0xFCu;
          }
          else
          {
            if ( v10 == ((*(_BYTE *)(v5 + 16) ^ 0xFE) & 3) )
            {
              LOBYTE(v5) = *(_BYTE *)(a4 + 16) ^ (v10 ^ *(_BYTE *)(a4 + 16)) & 3;
              *(_BYTE *)(a4 + 16) = v5;
            }
            *(_BYTE *)(v16 + 16) &= 0xFCu;
          }
        }
      }
      else
      {
        *(_BYTE *)(a2 + 16) &= 0xFCu;
      }
    }
    else
    {
      while ( 1 )
      {
        a4 = a2;
        LOBYTE(v5) = (v9 ^ *v8) & 3;
        *v8 ^= v5;
        a2 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !a2 )
          break;
        v8 = (_BYTE *)(a2 + 16);
        v6 = *(_QWORD *)a2 != a4;
        LOBYTE(v5) = 2 * v6;
        v9 = (-1 - 2 * v6) & 3;
        v10 = *(_BYTE *)(a2 + 16) & 3;
        if ( v10 )
          goto LABEL_5;
      }
    }
  }
  else
  {
    *a1 = a4;
  }
  return v5;
}
