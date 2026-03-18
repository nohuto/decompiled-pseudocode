/*
 * XREFs of RtlAvlInsertNodeEx @ 0x14008AD50
 * Callers:
 *     MiInsertClone @ 0x140001A08 (MiInsertClone.c)
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 *     MiInsertSubsectionNode @ 0x14002EB28 (MiInsertSubsectionNode.c)
 *     MiUpdatePageFileSectionList @ 0x140082D08 (MiUpdatePageFileSectionList.c)
 *     MiInsertVad @ 0x14008AC30 (MiInsertVad.c)
 *     MiInsertInSystemSpace @ 0x1400F8C80 (MiInsertInSystemSpace.c)
 *     MiDereferenceIoPages @ 0x140116398 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140116704 (MiReferenceIoPages.c)
 *     MiFlowThroughInsertNode @ 0x14012F998 (MiFlowThroughInsertNode.c)
 *     MiSessionInsertImage @ 0x140154248 (MiSessionInsertImage.c)
 *     MiUpdatePageFileList @ 0x14016BE74 (MiUpdatePageFileList.c)
 *     MiAddMdlTracker @ 0x140213DCC (MiAddMdlTracker.c)
 *     MiUpdatePerSessionProto @ 0x14021CBD0 (MiUpdatePerSessionProto.c)
 *     MiCombiningInProgress @ 0x1402282C0 (MiCombiningInProgress.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 *     MiInsertSharedCommitNode @ 0x1404B7640 (MiInsertSharedCommitNode.c)
 *     ExpWnfCreateNameInstance @ 0x1405023B4 (ExpWnfCreateNameInstance.c)
 *     MiAweViewInserter @ 0x1406A5BEC (MiAweViewInserter.c)
 *     MiProcessCrcList @ 0x1406A8BBC (MiProcessCrcList.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x14010DF30 (RtlpTreeDoubleRotateNodes.c)
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
