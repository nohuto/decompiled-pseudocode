/*
 * XREFs of CmpCopyKeyPartial @ 0x1404CDE74
 * Callers:
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B3650 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpReorganizeHive @ 0x14047E780 (CmpReorganizeHive.c)
 *     CmpDuplicateKey @ 0x1405FECC0 (CmpDuplicateKey.c)
 *     CmpCopySyncTree2 @ 0x1406082F4 (CmpCopySyncTree2.c)
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 *     CmSaveKey @ 0x14060CCD0 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14060CF28 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14060D390 (CmpLoadHiveVolatile.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14060ED60 (CmpLightWeightPrepareAddKeyUoW.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x1403FC310 (CmpGetSecurityDescriptorNode.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FCE20 (CmpFindSecurityCellCacheIndex.c)
 *     CmpAddValueToListEx @ 0x1403FEB9C (CmpAddValueToListEx.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1404CE0B4 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1404CE120 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCopyCell @ 0x1404CE184 (CmpCopyCell.c)
 *     CmpCopyValue @ 0x140608A14 (CmpCopyValue.c)
 */

__int64 __fastcall CmpCopyKeyPartial(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        unsigned int a7)
{
  unsigned int v7; // r13d
  unsigned int v10; // r12d
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r15
  int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // eax
  char v17; // al
  char v18; // al
  int SecurityDescriptorNode; // ebx
  unsigned int v20; // r12d
  char v21; // bl
  __int64 v23; // rax
  unsigned int v24; // ebx
  unsigned int *v25; // r15
  unsigned int v26; // eax
  __int64 v27; // r15
  unsigned int v28; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-3Ch]
  unsigned int v30; // [rsp+38h] [rbp-38h]
  _DWORD v31[2]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v32[2]; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v33[2]; // [rsp+50h] [rbp-20h] BYREF
  _DWORD v34[2]; // [rsp+58h] [rbp-18h] BYREF
  _DWORD v35[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v36; // [rsp+68h] [rbp-8h]
  unsigned int v37; // [rsp+B8h] [rbp+48h]
  unsigned int v39; // [rsp+E0h] [rbp+70h]

  v37 = a2;
  v7 = a7;
  v33[1] = 0;
  v29 = -1;
  v33[0] = -1;
  v10 = -1;
  v34[0] = -1;
  v11 = 0LL;
  v34[1] = 0;
  v36 = 0LL;
  v35[0] = -1;
  v35[1] = 0;
  v32[0] = -1;
  v32[1] = 0;
  v31[0] = -1;
  v31[1] = 0;
  if ( a7 == 2 )
  {
    if ( a4 == -1 )
      v7 = 0;
    else
      v7 = a4 >> 31;
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, a2, v33);
  v13 = v12;
  if ( !v12 )
    return 0xFFFFFFFFLL;
  v14 = *(unsigned __int16 *)(v12 + 74);
  v30 = *(_DWORD *)(v12 + 44);
  v28 = *(_DWORD *)(v12 + 48);
  if ( (a5 & 2) == 0 )
  {
    v28 = -1;
    v14 = 0;
  }
  v15 = CmpCopyCell(a1, v37, a3, v7);
  v39 = v15;
  if ( v15 == -1 )
    goto LABEL_30;
  if ( !v14 )
    goto LABEL_7;
  v29 = CmpCopyCell(a1, v28, a3, v7);
  if ( v29 == -1 )
  {
LABEL_30:
    v21 = 0;
    goto LABEL_21;
  }
  v15 = v39;
LABEL_7:
  v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v15, v34);
  if ( !v11 )
    goto LABEL_28;
  v16 = v29;
  *(_WORD *)(v11 + 74) = v14;
  *(_DWORD *)(v11 + 48) = v16;
  *(_DWORD *)(v11 + 44) = -1;
  *(_DWORD *)(v11 + 20) = 0;
  *(_DWORD *)(v11 + 24) = 0;
  *(_DWORD *)(v11 + 28) = -1;
  *(_DWORD *)(v11 + 32) = -1;
  *(_BYTE *)(v11 + 13) &= 0xFCu;
  v17 = *(_BYTE *)(v11 + 13);
  *(_DWORD *)(v11 + 16) = a4;
  *(_BYTE *)(v11 + 12) = 0;
  if ( a5 < 0 )
    v18 = v17 | 0x80;
  else
    v18 = v17 & 0x7F;
  *(_BYTE *)(v11 + 13) = v18;
  *(_WORD *)(v11 + 2) = *(_WORD *)(v13 + 2) & 0x30;
  if ( (a5 & 0x20) != 0 )
    *(_WORD *)(v11 + 2) = *(_WORD *)(v13 + 2) & 0xFFBF;
  if ( a4 == -1 )
    *(_WORD *)(v11 + 2) |= 0xCu;
  if ( (a5 & 0x10) == 0 )
  {
    CmpLockTwoSecurityCachesExclusiveShared(a3, a1);
    if ( CmpFindSecurityCellCacheIndex(a1, v30, &v28) )
    {
      SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                                 a3,
                                 v39,
                                 v11,
                                 (void *)(*(_QWORD *)(*(_QWORD *)(a1 + 3056) + 16LL * v28 + 8) + 32LL),
                                 0,
                                 v11 + 44);
      CmpUnlockTwoSecurityCaches(a3, a1);
      if ( SecurityDescriptorNode >= 0 )
        goto LABEL_17;
    }
    else
    {
      CmpUnlockTwoSecurityCaches(a3, a1);
    }
LABEL_28:
    v21 = 0;
    goto LABEL_21;
  }
LABEL_17:
  if ( (*(_BYTE *)(v13 + 2) & 0x40) != 0 )
    v20 = 0;
  else
    v20 = *(_DWORD *)(v13 + 36);
  *(_DWORD *)(v11 + 36) = 0;
  *(_DWORD *)(v11 + 40) = -1;
  if ( v20 && (a5 & 4) != 0 )
  {
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, *(unsigned int *)(v13 + 40), v35);
    v36 = v23;
    if ( v23 )
    {
      v24 = 0;
      v25 = (unsigned int *)v23;
      while ( 1 )
      {
        v26 = CmpCopyValue(a1, *v25, a3, v7);
        v30 = v26;
        if ( v26 == -1 || !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v26, v31) )
        {
          v10 = *(_DWORD *)(v11 + 40);
          goto LABEL_28;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v31);
        if ( (int)CmpAddValueToListEx(a3, v30, v24, v7, (unsigned int *)(v11 + 36), v20) < 0 )
          break;
        ++v24;
        ++v25;
        if ( v24 >= v20 )
          goto LABEL_20;
      }
      v10 = *(_DWORD *)(v11 + 40);
      if ( v10 != -1 )
      {
        v27 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(a3 + 8))(a3, v10, v32);
        if ( v27 )
        {
          while ( v24 )
            HvFreeCell(a3, *(unsigned int *)(v27 + 4LL * --v24));
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v32);
        }
      }
    }
    else
    {
      v10 = -1;
    }
    goto LABEL_28;
  }
LABEL_20:
  v10 = -1;
  v21 = 1;
LABEL_21:
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v33);
  if ( v11 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a3 + 16))(a3, v34);
  if ( v36 )
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v35);
  if ( v21 )
    return v39;
  if ( v10 != -1 )
    HvFreeCell(a3, v10);
  if ( v29 != -1 )
    HvFreeCell(a3, v29);
  if ( v39 != -1 )
    HvFreeCell(a3, v39);
  return 0xFFFFFFFFLL;
}
