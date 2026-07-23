/*
 * XREFs of RtlAvlRemoveNode @ 0x140028080
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MiRemoveFaultNode @ 0x14008AF78 (MiRemoveFaultNode.c)
 *     MiUpdatePageFileSectionList @ 0x14008F97C (MiUpdatePageFileSectionList.c)
 *     MiDereferenceIoPages @ 0x14009B770 (MiDereferenceIoPages.c)
 *     MiRemoveUnmappedIoNode @ 0x14009BFD8 (MiRemoveUnmappedIoNode.c)
 *     MiDecrementCloneBlockReference @ 0x1400B6B30 (MiDecrementCloneBlockReference.c)
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 *     MiDeleteStaleCacheMaps @ 0x1400BC55C (MiDeleteStaleCacheMaps.c)
 *     MiRemoveFromSystemSpace @ 0x1400FDE10 (MiRemoveFromSystemSpace.c)
 *     MiRemoveMappingNode @ 0x14011103C (MiRemoveMappingNode.c)
 *     MiUnlinkSessionList @ 0x140126E54 (MiUnlinkSessionList.c)
 *     MiSessionRemoveImage @ 0x1401309B0 (MiSessionRemoveImage.c)
 *     MiUpdatePageFileList @ 0x1401431BC (MiUpdatePageFileList.c)
 *     MiFreeMdlTracker @ 0x1401E2BA0 (MiFreeMdlTracker.c)
 *     MiMakeIoRangePermanent @ 0x1401E6844 (MiMakeIoRangePermanent.c)
 *     MiActOnPartitionNodePages @ 0x1401F05D0 (MiActOnPartitionNodePages.c)
 *     MiDeletePartitionResources @ 0x1401F11FC (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x1401F18AC (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1401F19A0 (MiInsertPartitionPages.c)
 *     MiUpdatePerSessionProto @ 0x1401F5170 (MiUpdatePerSessionProto.c)
 *     MiCombiningInProgress @ 0x1401F8460 (MiCombiningInProgress.c)
 *     MiFreeCombineBlock @ 0x1401F9A50 (MiFreeCombineBlock.c)
 *     MiSectionDelete @ 0x14042D110 (MiSectionDelete.c)
 *     MiRemoveSharedCommitNode @ 0x14042D940 (MiRemoveSharedCommitNode.c)
 *     ExpWnfDeleteNameInstance @ 0x1404AE36C (ExpWnfDeleteNameInstance.c)
 *     MiAweViewRemover @ 0x14065C234 (MiAweViewRemover.c)
 *     MiHotAddPartitionMemory @ 0x1406606BC (MiHotAddPartitionMemory.c)
 *     MiProcessCrcList @ 0x140663EAC (MiProcessCrcList.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x140026CC0 (RtlpTreeDoubleRotateNodes.c)
 */

void __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // r10
  unsigned __int64 v6; // rdx
  char v7; // cl
  char v8; // r8
  _BYTE *v9; // rdi
  char v10; // bl
  unsigned __int64 v11; // rsi
  bool v12; // zf
  char v13; // al
  _QWORD *v14; // rax
  unsigned __int64 v15; // r11
  unsigned int v16; // esi
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r8
  unsigned __int64 v20; // r8
  _BOOL8 v21; // rax
  unsigned __int64 v22; // r14
  unsigned int v23; // r9d
  char v24; // r8
  __int64 v25; // r10
  _QWORD *v26; // r11
  __int64 v27; // r9
  __int64 v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rax

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 )
  {
    if ( v4 )
    {
      v7 = 1;
      if ( (*(_BYTE *)(a2 + 16) & 3) == 3 )
      {
        v29 = *(_QWORD **)(v2 + 8);
        v16 = 0;
        v15 = *(_QWORD *)a2;
        v6 = *(_QWORD *)a2;
        if ( v29 )
        {
          v16 = 1;
          do
          {
            v6 = v15;
            v15 = (unsigned __int64)v29;
            v29 = (_QWORD *)v29[1];
          }
          while ( v29 );
        }
        v17 = *(_QWORD *)v15;
      }
      else
      {
        v14 = *(_QWORD **)v4;
        v15 = *(_QWORD *)(a2 + 8);
        v6 = v15;
        v16 = 1;
        if ( *(_QWORD *)v4 )
        {
          v16 = 0;
          do
          {
            v6 = v15;
            v15 = (unsigned __int64)v14;
            v14 = (_QWORD *)*v14;
          }
          while ( v14 );
        }
        v17 = *(_QWORD *)(v15 + 8);
      }
      *(_QWORD *)v15 = v2;
      *(_QWORD *)(v15 + 8) = v4;
      v18 = *(_QWORD *)(v2 + 16);
      if ( (v18 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)(v2 + 16) = v15 | v18 & 3;
      v19 = *(_QWORD *)(v4 + 16);
      if ( (v19 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)(v4 + 16) = v15 | v19 & 3;
      if ( (*(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
        __fastfail(0x1Du);
      *(_QWORD *)(v6 + 8LL * v16) = v17;
      if ( v17 )
      {
        if ( *(_QWORD *)(v17 + 16) != v15 )
          __fastfail(0x1Du);
        *(_QWORD *)(v17 + 16) = v6;
      }
      *(_QWORD *)(v15 + 16) = *(_QWORD *)(a2 + 16);
      if ( v16 )
        v7 = 3;
      v20 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 8) == a2;
        if ( *(_QWORD *)(v20 + 8 * v21) != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)(v20 + 8 * v21) = v15;
      }
      else
      {
        if ( *a1 != a2 )
          __fastfail(0x1Du);
        *a1 = v15;
      }
      while ( 1 )
      {
LABEL_7:
        v8 = *(_BYTE *)(v6 + 16);
        v9 = (_BYTE *)(v6 + 16);
        v10 = v8 & 3;
        if ( (v8 & 3) == ((unsigned __int8)v7 ^ 2) )
        {
          *v9 = v8 & 0xFC;
          v11 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        else
        {
          if ( !v10 )
          {
            *(_BYTE *)(v6 + 16) ^= (*(_BYTE *)(v6 + 16) ^ v7) & 3;
            return;
          }
          v22 = *(_QWORD *)v6;
          v11 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v7 == 1 )
            v22 = *(_QWORD *)(v6 + 8);
          v23 = 0;
          v24 = *(_BYTE *)(v22 + 16) & 3;
          if ( v24 == ((unsigned __int8)v7 ^ 2) )
          {
            LOBYTE(v23) = v7 == 1;
            v30 = RtlpTreeDoubleRotateNodes(a1, v6, v22, v23);
            *v9 &= 0xFCu;
            v6 = v30;
            *(_BYTE *)(v22 + 16) &= 0xFCu;
            if ( v10 == (*(_BYTE *)(v30 + 16) & 3) )
            {
              *v9 ^= (*v9 ^ v10 ^ 0xFE) & 3;
              *(_BYTE *)(v30 + 16) &= 0xFCu;
            }
            else
            {
              if ( v10 == ((*(unsigned __int8 *)(v30 + 16) ^ 0xFFFFFFFE) & 3) )
                *(_BYTE *)(v22 + 16) ^= (v10 ^ *(_BYTE *)(v22 + 16)) & 3;
              *(_BYTE *)(v30 + 16) &= 0xFCu;
            }
          }
          else
          {
            LOBYTE(v23) = v7 != 1;
            if ( (*(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
              __fastfail(0x1Du);
            v25 = v23;
            v26 = (_QWORD *)(v6 + 8 * (v23 ^ 1LL));
            if ( *v26 != v22 )
              __fastfail(0x1Du);
            if ( v11 )
            {
              if ( *(_QWORD *)(v11 + 8) == v6 )
              {
                *(_QWORD *)(v11 + 8) = v22;
              }
              else
              {
                if ( *(_QWORD *)v11 != v6 )
                  __fastfail(0x1Du);
                *(_QWORD *)v11 = v22;
              }
            }
            else
            {
              if ( *a1 != v6 )
                __fastfail(0x1Du);
              *a1 = v22;
            }
            *(_QWORD *)(v22 + 16) = v11 | *(_DWORD *)(v22 + 16) & 3;
            v27 = *(_QWORD *)(v22 + 8LL * v23);
            if ( v27 )
            {
              v28 = *(_QWORD *)(v27 + 16);
              if ( (v28 & 0xFFFFFFFFFFFFFFFCuLL) != v22 )
                __fastfail(0x1Du);
              *(_QWORD *)(v27 + 16) = v6 | v28 & 3;
            }
            *v26 = v27;
            *(_QWORD *)(v22 + 8 * v25) = v6;
            *(_QWORD *)v9 = v22 | *(_DWORD *)v9 & 3;
            if ( !v24 )
            {
              *(_BYTE *)(v22 + 16) ^= (v7 ^ *(_BYTE *)(v22 + 16) ^ 0xFE) & 3;
              return;
            }
            *(_BYTE *)(v22 + 16) &= 0xFCu;
            v6 = v22;
            *v9 &= 0xFCu;
          }
        }
        if ( !v11 )
          return;
        v12 = *(_QWORD *)(v11 + 8) == v6;
        v13 = 1;
        v6 = v11;
        if ( v12 )
          v13 = 3;
        v7 = v13;
      }
    }
  }
  else
  {
    v2 = *(_QWORD *)(a2 + 8);
  }
  v6 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 16) != a2 )
      __fastfail(0x1Du);
    *(_QWORD *)(v2 + 16) = v6;
  }
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 8) == a2 )
    {
      v7 = 3;
      *(_QWORD *)(v6 + 8) = v2;
    }
    else
    {
      if ( *(_QWORD *)v6 != a2 )
        __fastfail(0x1Du);
      v7 = 1;
      *(_QWORD *)v6 = v2;
    }
    goto LABEL_7;
  }
  if ( *a1 != a2 )
    __fastfail(0x1Du);
  *a1 = v2;
}
