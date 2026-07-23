/*
 * XREFs of CmpWalkOneLevel @ 0x14002D530
 * Callers:
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpDoBuildVirtualStack @ 0x140600C9C (CmpDoBuildVirtualStack.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14010BF00 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpGetKeyNodeForKcb @ 0x1404017F0 (CmpGetKeyNodeForKcb.c)
 *     CmpUnlockKcbStack @ 0x1404036E0 (CmpUnlockKcbStack.c)
 *     CmpIsKeyStackDeleted @ 0x140403FD0 (CmpIsKeyStackDeleted.c)
 *     CmpLockKcbExclusive @ 0x140420F10 (CmpLockKcbExclusive.c)
 *     CmpLockKcbStackShared @ 0x140431E30 (CmpLockKcbStackShared.c)
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 *     CmpFindKcbInHashEntryByName @ 0x140435B44 (CmpFindKcbInHashEntryByName.c)
 *     CmpLockHashEntryExclusive @ 0x140436960 (CmpLockHashEntryExclusive.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockHashEntry @ 0x140436D90 (CmpUnlockHashEntry.c)
 *     CmpUnlockKcb @ 0x1404374E0 (CmpUnlockKcb.c)
 *     CmpGetKcbAtLayerHeight @ 0x14043EF90 (CmpGetKcbAtLayerHeight.c)
 *     CmpPopulateKcbStack @ 0x14043EFE0 (CmpPopulateKcbStack.c)
 *     CmRmIsKCBVisible @ 0x1404A72C0 (CmRmIsKCBVisible.c)
 *     CmpReleaseKeyNodeForKcb @ 0x1404A9170 (CmpReleaseKeyNodeForKcb.c)
 *     CmpSetKcbAtLayerHeight @ 0x1404B0A9C (CmpSetKcbAtLayerHeight.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404F54C0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpLockHashEntryShared @ 0x14051888C (CmpLockHashEntryShared.c)
 *     CmpReferenceKeyControlBlock @ 0x140518944 (CmpReferenceKeyControlBlock.c)
 */

__int64 __fastcall CmpWalkOneLevel(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        _BYTE *a5,
        __int64 a6,
        char a7,
        unsigned int a8,
        __int64 a9,
        char a10)
{
  __int16 v10; // r14
  __int16 v11; // si
  _QWORD *v13; // r12
  _WORD *v16; // r13
  __int16 v17; // bx
  __int16 i; // si
  __int64 v19; // rax
  __int64 v20; // rbx
  unsigned __int16 v21; // bx
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 KeyNodeForKcb; // rax
  int SubKeyByNameWithStatus; // r15d
  int v26; // edx
  __int64 v27; // rax
  __int64 v29; // rcx
  _WORD *v30; // r8
  _BYTE *v31; // rax
  __int64 KcbAtLayerHeight; // r12
  unsigned int v33; // ebx
  __int64 KcbInHashEntryByName; // rax
  __int64 v35; // [rsp+50h] [rbp-48h] BYREF
  _WORD *v36; // [rsp+58h] [rbp-40h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+8h] BYREF
  _QWORD *v38; // [rsp+B0h] [rbp+18h]
  __int64 v39; // [rsp+B8h] [rbp+20h]

  v39 = a4;
  v38 = a3;
  v10 = -1;
  v11 = *(_WORD *)(a1 + 58) - 1;
  v35 = 0xFFFFFFFFLL;
  v13 = a3;
  v16 = 0LL;
  if ( v11 >= 0 )
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, (unsigned __int16)v11);
      CmpLockHashEntryShared(*(_QWORD *)(KcbAtLayerHeight + 24));
      v33 = a8;
      v37 = *(_QWORD *)(KcbAtLayerHeight + 24);
      KcbInHashEntryByName = CmpFindKcbInHashEntryByName(v37, a8, KcbAtLayerHeight, a6);
      v16 = (_WORD *)KcbInHashEntryByName;
      if ( KcbInHashEntryByName )
        break;
      CmpUnlockHashEntry(v37, v33);
      if ( --v11 < 0 )
      {
        v13 = v38;
        goto LABEL_2;
      }
    }
    CmpLockKcbExclusive(KcbInHashEntryByName);
    if ( !(unsigned __int8)CmpReferenceKeyControlBlock(v16) )
    {
      CmpUnlockKcb(v16);
      CmpUnlockHashEntry(*(_QWORD *)(KcbAtLayerHeight + 24), a8);
      return 3221225626LL;
    }
    CmpUnlockKcb(v16);
    CmpUnlockHashEntry(*(_QWORD *)(KcbAtLayerHeight + 24), a8);
    CmpPopulateKcbStack(a4, v16);
    v13 = v38;
    v17 = v16[29] + 1;
  }
  else
  {
LABEL_2:
    *(_WORD *)(a4 + 2) = -1;
    v17 = 0;
  }
  for ( i = v17; v17 <= *(__int16 *)(a1 + 58); ++v17 )
  {
    v19 = CmpGetKcbAtLayerHeight(a2, (unsigned __int16)v17);
    CmpLockHashEntryExclusive(*(_QWORD *)(v19 + 24));
    v10 = v17;
  }
  CmpLockKcbStackShared(a2);
  v20 = a9;
  if ( (unsigned __int8)CmpIsKeyStackDeleted(a2, a9) )
  {
LABEL_16:
    SubKeyByNameWithStatus = -1073741772;
  }
  else if ( (unsigned __int8)CmRmIsKCBVisible(a1, v20) )
  {
    if ( (*(_BYTE *)(a1 + 178) & 2) != 0 )
    {
      SubKeyByNameWithStatus = -1073741772;
    }
    else
    {
      if ( v16 )
        v21 = v16[29] + 1;
      else
        v21 = 0;
      if ( v21 <= *(_WORD *)(a1 + 58) )
      {
        while ( 1 )
        {
          v22 = CmpGetKcbAtLayerHeight(a2, v21);
          v23 = v22;
          if ( *(_DWORD *)(v22 + 32) == -1 )
            break;
          KeyNodeForKcb = CmpGetKeyNodeForKcb(v22, &v35, 0LL);
          SubKeyByNameWithStatus = CmpFindSubKeyByNameWithStatus(*(_QWORD *)(v23 + 24), KeyNodeForKcb, a6, &v37);
          CmpReleaseKeyNodeForKcb(v23, &v35);
          if ( SubKeyByNameWithStatus == -1073741772 )
          {
            v26 = -1;
            LODWORD(v37) = -1;
LABEL_14:
            if ( !a10 && !*(_WORD *)(a1 + 58) )
              goto LABEL_16;
            goto LABEL_24;
          }
          if ( SubKeyByNameWithStatus < 0 )
            goto LABEL_17;
          v26 = v37;
          if ( (_DWORD)v37 == -1 )
            goto LABEL_14;
LABEL_24:
          SubKeyByNameWithStatus = CmpCreateKeyControlBlock(
                                     *(_QWORD *)(v23 + 24),
                                     v26,
                                     v23,
                                     (_DWORD)v16,
                                     0,
                                     a6,
                                     a7,
                                     a8,
                                     (__int64)&v36);
          if ( SubKeyByNameWithStatus < 0 )
            goto LABEL_17;
          if ( v16 )
            CmpDereferenceKeyControlBlockUnsafe(v16);
          v16 = v36;
          v29 = v39;
          v30 = v36;
          v36 = 0LL;
          ++*(_WORD *)(v39 + 2);
          CmpSetKcbAtLayerHeight(v29, v21, v30);
          if ( v21 != *(_WORD *)(a1 + 58) )
          {
            CmpUnlockHashEntry(*(_QWORD *)(v23 + 24), a8);
            ++i;
          }
          if ( ++v21 > *(_WORD *)(a1 + 58) )
          {
            v13 = v38;
            goto LABEL_31;
          }
        }
        v26 = -1;
        LODWORD(v37) = -1;
        goto LABEL_14;
      }
LABEL_31:
      v31 = a5;
      if ( a10 )
      {
        *v13 = v16;
        --v10;
        v16 = 0LL;
        *v31 = 1;
        SubKeyByNameWithStatus = 0;
      }
      else
      {
        *v13 = v16;
        SubKeyByNameWithStatus = 0;
        v16 = 0LL;
        *v31 = 0;
      }
    }
  }
  else
  {
    SubKeyByNameWithStatus = -1073741772;
  }
LABEL_17:
  CmpUnlockKcbStack(a2);
  for ( ; i <= v10; ++i )
  {
    v27 = CmpGetKcbAtLayerHeight(a2, (unsigned __int16)i);
    CmpUnlockHashEntry(*(_QWORD *)(v27 + 24), a8);
  }
  if ( v16 )
    CmpDereferenceKeyControlBlock((ULONG_PTR)v16);
  return (unsigned int)SubKeyByNameWithStatus;
}
