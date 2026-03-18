/*
 * XREFs of CmpCopyKeyPartial @ 0x1404B3BE4
 * Callers:
 *     CmpReorganizeHive @ 0x1403D0DDC (CmpReorganizeHive.c)
 *     CmpCommitAddKeyUoW @ 0x1404B3A00 (CmpCommitAddKeyUoW.c)
 *     CmpCopySyncTree2 @ 0x14050F068 (CmpCopySyncTree2.c)
 *     CmpDuplicateKey @ 0x1405E0AE4 (CmpDuplicateKey.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 *     CmSaveKey @ 0x1405E9ED0 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1405EA0F8 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x1405EA5F4 (CmpLoadHiveVolatile.c)
 * Callees:
 *     CmpAddValueToListEx @ 0x1403D86A0 (CmpAddValueToListEx.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpAssignSecurityDescriptor @ 0x1403DFF74 (CmpAssignSecurityDescriptor.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FB310 (CmpFindSecurityCellCacheIndex.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1404B3E98 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1404B3F04 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCopyCell @ 0x1404B3F68 (CmpCopyCell.c)
 *     CmpCopyValue @ 0x14050F7B0 (CmpCopyValue.c)
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
  int v18; // ebx
  int v19; // eax
  char v20; // bl
  unsigned int *v22; // rax
  unsigned int v23; // r15d
  unsigned int v24; // ebx
  unsigned int v25; // eax
  __int64 v26; // r15
  int v27; // [rsp+20h] [rbp-40h]
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-30h] BYREF
  int v29; // [rsp+38h] [rbp-28h] BYREF
  int v30; // [rsp+3Ch] [rbp-24h] BYREF
  int v31; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v32; // [rsp+44h] [rbp-1Ch]
  int v33; // [rsp+48h] [rbp-18h] BYREF
  unsigned int *v34; // [rsp+50h] [rbp-10h]
  unsigned int *v35; // [rsp+58h] [rbp-8h]
  int v36; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v37; // [rsp+A8h] [rbp+48h]

  v37 = a2;
  v7 = a7;
  v8 = 0LL;
  v35 = 0LL;
  a6 = 0;
  BugCheckParameter3 = -1LL;
  v29 = -1;
  v12 = -1;
  v31 = -1;
  v33 = -1;
  v30 = -1;
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
  LODWORD(v34) = *(_DWORD *)(v13 + 44);
  v32 = *(_DWORD *)(v13 + 48);
  v36 = *(unsigned __int16 *)(v13 + 74);
  if ( (a5 & 2) == 0 )
  {
    v32 = -1;
    v36 = 0;
  }
  v15 = CmpCopyCell(a1, v37, a3, v7);
  LODWORD(a7) = v15;
  if ( v15 == -1 )
    goto LABEL_49;
  if ( !v36 )
    goto LABEL_9;
  LODWORD(BugCheckParameter3) = CmpCopyCell(a1, v32, a3, v7);
  if ( (_DWORD)BugCheckParameter3 == -1 )
  {
LABEL_49:
    v20 = 0;
    goto LABEL_21;
  }
  v15 = a7;
LABEL_9:
  v16 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a3 + 8))(a3, v15, &v29);
  v8 = v16;
  if ( !v16 )
    goto LABEL_41;
  *(_DWORD *)(v16 + 48) = BugCheckParameter3;
  *(_WORD *)(v16 + 74) = v36;
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
    if ( !CmpFindSecurityCellCacheIndex(a1, (int)v34, (unsigned int *)&v36) )
    {
      CmpUnlockTwoSecurityCaches(a3, a1);
      goto LABEL_41;
    }
    LOBYTE(v27) = 0;
    v18 = CmpAssignSecurityDescriptor(
            a3,
            (unsigned int)a7,
            v8,
            (void *)(*(_QWORD *)(*(_QWORD *)(a1 + 3056) + 16LL * (unsigned int)v36 + 8) + 32LL));
    CmpUnlockTwoSecurityCaches(a3, a1);
    if ( v18 < 0 )
      goto LABEL_41;
  }
  if ( (*(_BYTE *)(v14 + 2) & 0x40) != 0 )
    v19 = 0;
  else
    v19 = *(_DWORD *)(v14 + 36);
  *(_DWORD *)(v8 + 36) = 0;
  v36 = v19;
  *(_DWORD *)(v8 + 40) = -1;
  if ( !v19 || (a5 & 4) == 0 )
    goto LABEL_20;
  v22 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(
                          a1,
                          *(unsigned int *)(v14 + 40),
                          &v31);
  v35 = v22;
  if ( !v22 )
  {
LABEL_41:
    v20 = a6;
    goto LABEL_21;
  }
  v23 = v36;
  v24 = 0;
  if ( v36 )
  {
    v34 = v22;
    while ( 1 )
    {
      v25 = CmpCopyValue(a1, *v22, a3, v7, v27);
      v36 = v25;
      if ( v25 == -1 || !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a3 + 8))(a3, v25, &v30) )
      {
        v12 = *(_DWORD *)(v8 + 40);
        goto LABEL_41;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v30);
      if ( (int)CmpAddValueToListEx(a3, v36, v24, v7, (unsigned int *)(v8 + 36), v23) < 0 )
        break;
      ++v24;
      v22 = ++v34;
      if ( v24 >= v23 )
        goto LABEL_20;
    }
    v12 = *(_DWORD *)(v8 + 40);
    if ( v12 != -1 )
    {
      v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(a3 + 8))(a3, v12, &v33);
      if ( v26 )
      {
        while ( v24 )
          HvFreeCell(a3, *(unsigned int *)(v26 + 4LL * --v24));
        (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v33);
      }
    }
    goto LABEL_41;
  }
LABEL_20:
  v20 = 1;
LABEL_21:
  (*(void (__fastcall **)(__int64, char *))(a1 + 16))(a1, (char *)&BugCheckParameter3 + 4);
  if ( v8 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v29);
  if ( v35 )
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v31);
  if ( v20 )
    return (unsigned int)a7;
  if ( v12 != -1 )
    HvFreeCell(a3, v12);
  if ( (_DWORD)BugCheckParameter3 != -1 )
    HvFreeCell(a3, (unsigned int)BugCheckParameter3);
  if ( (_DWORD)a7 != -1 )
    HvFreeCell(a3, (unsigned int)a7);
  return 0xFFFFFFFFLL;
}
