/*
 * XREFs of CmpCopyKeyPartial @ 0x1404F2C38
 * Callers:
 *     CmpReorganizeHive @ 0x1404AD5C4 (CmpReorganizeHive.c)
 *     CmpCommitAddKeyUoW @ 0x1404F2A54 (CmpCommitAddKeyUoW.c)
 *     CmpCopySyncTree2 @ 0x1405850E0 (CmpCopySyncTree2.c)
 *     CmpDuplicateKey @ 0x140656794 (CmpDuplicateKey.c)
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 *     CmSaveKey @ 0x140661710 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x140661980 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140661E7C (CmpLoadHiveVolatile.c)
 * Callees:
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpCopyCell @ 0x1404A0A38 (CmpCopyCell.c)
 *     CmpAddValueToListEx @ 0x1404A1188 (CmpAddValueToListEx.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404CC7A0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1404F2FA0 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1404F300C (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCopyValue @ 0x140585A20 (CmpCopyValue.c)
 *     CmpGetSecurityDescriptorNode @ 0x1406597E0 (CmpGetSecurityDescriptorNode.c)
 */

__int64 __fastcall CmpCopyKeyPartial(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4,
        char a5,
        char a6,
        ULONG_PTR a7)
{
  unsigned int v7; // r12d
  __int64 v8; // rsi
  unsigned int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned int v15; // eax
  __int64 v16; // rax
  bool v17; // zf
  char v18; // bl
  int SecurityDescriptorNode; // ebx
  int v20; // eax
  unsigned int *v21; // rax
  unsigned int v22; // r15d
  unsigned int v23; // ebx
  unsigned int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r15
  __int64 v28; // r8
  __int64 v29; // r9
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-30h] BYREF
  int v32; // [rsp+38h] [rbp-28h] BYREF
  int v33; // [rsp+3Ch] [rbp-24h] BYREF
  int v34; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v35; // [rsp+44h] [rbp-1Ch]
  int v36; // [rsp+48h] [rbp-18h] BYREF
  unsigned int *v37; // [rsp+50h] [rbp-10h]
  unsigned int *v38; // [rsp+58h] [rbp-8h]
  int v39; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v40; // [rsp+A8h] [rbp+48h]

  v40 = a2;
  v7 = a7;
  v8 = 0LL;
  v38 = 0LL;
  a6 = 0;
  BugCheckParameter3 = -1LL;
  v32 = -1;
  v12 = -1;
  v34 = -1;
  v36 = -1;
  v33 = -1;
  if ( (_DWORD)a7 == 2 )
  {
    if ( a4 == -1 )
      v7 = 0;
    else
      v7 = a4 >> 31;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(a1 + 8))(a1, a2, (char *)&BugCheckParameter3 + 4);
  v14 = v13;
  if ( !v13 )
    return 0xFFFFFFFFLL;
  LODWORD(v37) = *(_DWORD *)(v13 + 44);
  v35 = *(_DWORD *)(v13 + 48);
  v39 = *(unsigned __int16 *)(v13 + 74);
  if ( (a5 & 2) == 0 )
  {
    v35 = -1;
    v39 = 0;
  }
  v15 = CmpCopyCell(a1, v40, a3, v7);
  LODWORD(a7) = v15;
  if ( v15 == -1 )
    goto LABEL_42;
  if ( v39 )
  {
    LODWORD(BugCheckParameter3) = CmpCopyCell(a1, v35, a3, v7);
    if ( (_DWORD)BugCheckParameter3 != -1 )
    {
      v15 = a7;
      goto LABEL_12;
    }
LABEL_42:
    v18 = 0;
    goto LABEL_43;
  }
LABEL_12:
  v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a3 + 8))(a3, v15, &v32);
  v8 = v16;
  if ( !v16 )
  {
LABEL_20:
    v18 = a6;
    goto LABEL_43;
  }
  *(_DWORD *)(v16 + 48) = BugCheckParameter3;
  *(_WORD *)(v16 + 74) = v39;
  *(_DWORD *)(v16 + 44) = -1;
  *(_DWORD *)(v16 + 20) = 0;
  *(_DWORD *)(v16 + 24) = 0;
  *(_DWORD *)(v16 + 28) = -1;
  *(_DWORD *)(v16 + 32) = -1;
  *(_DWORD *)(v16 + 12) = 0;
  *(_DWORD *)(v16 + 16) = a4;
  v17 = (a5 & 0x20) == 0;
  *(_WORD *)(v16 + 2) = *(_WORD *)(v14 + 2) & 0x30;
  if ( !v17 )
    *(_WORD *)(v16 + 2) = *(_WORD *)(v14 + 2) & 0xFFBF;
  if ( a4 == -1 )
    *(_WORD *)(v16 + 2) |= 0xCu;
  if ( (a5 & 0x10) == 0 )
  {
    CmpLockTwoSecurityCachesExclusiveShared(a3, a1);
    if ( !CmpFindSecurityCellCacheIndex(a1, (int)v37, (unsigned int *)&v39) )
    {
      CmpUnlockTwoSecurityCaches(a3, a1);
      goto LABEL_20;
    }
    SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                               a3,
                               (unsigned int)a7,
                               v8,
                               *(_QWORD *)(*(_QWORD *)(a1 + 3056) + 16LL * (unsigned int)v39 + 8) + 32LL,
                               0,
                               v8 + 44);
    CmpUnlockTwoSecurityCaches(a3, a1);
    if ( SecurityDescriptorNode < 0 )
      goto LABEL_20;
  }
  if ( (*(_BYTE *)(v14 + 2) & 0x40) != 0 )
    v20 = 0;
  else
    v20 = *(_DWORD *)(v14 + 36);
  *(_DWORD *)(v8 + 36) = 0;
  v39 = v20;
  *(_DWORD *)(v8 + 40) = -1;
  if ( v20 && (a5 & 4) != 0 )
  {
    v21 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(
                            a1,
                            *(unsigned int *)(v14 + 40),
                            &v34);
    v38 = v21;
    if ( !v21 )
      goto LABEL_20;
    v22 = v39;
    v23 = 0;
    if ( v39 )
    {
      v37 = v21;
      while ( 1 )
      {
        v24 = CmpCopyValue(a1, *v21, a3, v7);
        v39 = v24;
        if ( v24 == -1 || !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a3 + 8))(a3, v24, &v33) )
        {
          v12 = *(_DWORD *)(v8 + 40);
          goto LABEL_20;
        }
        (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v33);
        if ( (int)CmpAddValueToListEx(a3, v39, v23, v7, (unsigned int *)(v8 + 36), v22) < 0 )
          break;
        ++v23;
        v21 = ++v37;
        if ( v23 >= v22 )
          goto LABEL_34;
      }
      v12 = *(_DWORD *)(v8 + 40);
      if ( v12 != -1 )
      {
        v27 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a3 + 8))(a3, v12, &v36);
        if ( v27 )
        {
          while ( v23 )
            HvFreeCell(a3, *(unsigned int *)(v27 + 4LL * --v23), v25, v26);
          (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v36);
        }
      }
      goto LABEL_20;
    }
  }
LABEL_34:
  v18 = 1;
LABEL_43:
  (*(void (__fastcall **)(__int64, char *))(a1 + 16))(a1, (char *)&BugCheckParameter3 + 4);
  if ( v8 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v32);
  if ( v38 )
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v34);
  if ( !v18 )
  {
    if ( v12 != -1 )
      HvFreeCell(a3, v12, v28, v29);
    if ( (_DWORD)BugCheckParameter3 != -1 )
      HvFreeCell(a3, (unsigned int)BugCheckParameter3, v28, v29);
    if ( (_DWORD)a7 != -1 )
      HvFreeCell(a3, (unsigned int)a7, v28, v29);
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)a7;
}
