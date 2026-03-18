/*
 * XREFs of RtlAvlRemoveNode @ 0x14008CBF0
 * Callers:
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 *     MiDecrementCloneBlockReference @ 0x14000539C (MiDecrementCloneBlockReference.c)
 *     MiDeleteStaleCacheMaps @ 0x140011D2C (MiDeleteStaleCacheMaps.c)
 *     MiUpdatePageFileSectionList @ 0x140082D08 (MiUpdatePageFileSectionList.c)
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiRemoveFromSystemSpace @ 0x1400FA0D0 (MiRemoveFromSystemSpace.c)
 *     MiDereferenceIoPages @ 0x140116398 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x140116704 (MiReferenceIoPages.c)
 *     MiSessionRemoveImage @ 0x1401596A0 (MiSessionRemoveImage.c)
 *     MiUpdatePageFileList @ 0x14016BE74 (MiUpdatePageFileList.c)
 *     MiFreeMdlTracker @ 0x140213FEC (MiFreeMdlTracker.c)
 *     MiDereferencePerSessionProtos @ 0x14021BF98 (MiDereferencePerSessionProtos.c)
 *     MiUpdatePerSessionProto @ 0x14021CBD0 (MiUpdatePerSessionProto.c)
 *     MiCombiningInProgress @ 0x1402282C0 (MiCombiningInProgress.c)
 *     MiFreeCombineBlock @ 0x14022A730 (MiFreeCombineBlock.c)
 *     MiSectionDelete @ 0x1404B6100 (MiSectionDelete.c)
 *     MiRemoveSharedCommitNode @ 0x1404B7A60 (MiRemoveSharedCommitNode.c)
 *     ExpWnfDeleteNameInstance @ 0x14053F340 (ExpWnfDeleteNameInstance.c)
 *     MiAweViewRemover @ 0x1406A5CE0 (MiAweViewRemover.c)
 *     MiProcessCrcList @ 0x1406A8BBC (MiProcessCrcList.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x14010DF30 (RtlpTreeDoubleRotateNodes.c)
 */

void __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r9
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
  __int64 v19; // r9
  unsigned __int64 v20; // r9
  _BOOL8 v21; // rax
  unsigned __int64 v22; // r14
  __int64 v23; // r9
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
          v23 = 0LL;
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
            v25 = (unsigned int)v23;
            v26 = (_QWORD *)(v6 + 8 * ((unsigned int)v23 ^ 1LL));
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
            v27 = *(_QWORD *)(v22 + 8LL * (unsigned int)v23);
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
