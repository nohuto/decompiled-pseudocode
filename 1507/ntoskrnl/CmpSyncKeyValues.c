/*
 * XREFs of CmpSyncKeyValues @ 0x140585640
 * Callers:
 *     CmpCopySyncTree2 @ 0x1405850E0 (CmpCopySyncTree2.c)
 *     CmpMergeKeyValues @ 0x14065FFA8 (CmpMergeKeyValues.c)
 * Callees:
 *     CmpFreeSecurityDescriptor @ 0x14044A4C8 (CmpFreeSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpCopyCell @ 0x1404A0A38 (CmpCopyCell.c)
 *     CmpAddValueToListEx @ 0x1404A1188 (CmpAddValueToListEx.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404CC7A0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1404F2FA0 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1404F300C (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCopyValue @ 0x140585A20 (CmpCopyValue.c)
 *     CmpFreeKeyValues @ 0x140585C38 (CmpFreeKeyValues.c)
 *     CmpGetSecurityDescriptorNode @ 0x1406597E0 (CmpGetSecurityDescriptorNode.c)
 */

char __fastcall CmpSyncKeyValues(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  unsigned int v8; // r15d
  int v9; // r12d
  __int64 v12; // r14
  __int64 v14; // rdx
  char v15; // di
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int *v18; // r13
  unsigned int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rcx
  bool v23; // zf
  unsigned int v24; // ecx
  __int64 v25; // rax
  int *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // r12d
  unsigned int v30; // r13d
  unsigned int *v31; // r12
  unsigned int v32; // esi
  unsigned int v33; // eax
  int v34; // r13d
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r14
  int v38; // [rsp+30h] [rbp-40h] BYREF
  int v39; // [rsp+34h] [rbp-3Ch] BYREF
  unsigned int v40; // [rsp+38h] [rbp-38h]
  unsigned int v41; // [rsp+3Ch] [rbp-34h]
  unsigned int v42; // [rsp+40h] [rbp-30h]
  int v43; // [rsp+44h] [rbp-2Ch] BYREF
  unsigned int BugCheckParameter3; // [rsp+48h] [rbp-28h]
  int BugCheckParameter3_4; // [rsp+4Ch] [rbp-24h] BYREF
  int v46; // [rsp+50h] [rbp-20h] BYREF
  __int64 v47; // [rsp+58h] [rbp-18h]
  __int64 v48; // [rsp+60h] [rbp-10h]
  __int64 v49; // [rsp+68h] [rbp-8h]
  unsigned int v50; // [rsp+A8h] [rbp+38h] BYREF

  v50 = a2;
  BugCheckParameter3_4 = -1;
  v43 = -1;
  a7 = 0;
  v8 = -1;
  v41 = -1;
  v9 = -1;
  v46 = -1;
  CmpLockTwoSecurityCachesExclusiveShared(a4, a1, a3, a4);
  v12 = a6;
  if ( !(unsigned __int8)CmpFreeKeyValues(a4) )
  {
    CmpUnlockTwoSecurityCaches(a4, a1);
    return 0;
  }
  v42 = a5 >> 31;
  if ( !*(_WORD *)(a3 + 74) || (v14 = *(unsigned int *)(a3 + 48), (_DWORD)v14 == -1) )
  {
LABEL_8:
    *(_DWORD *)(v12 + 48) = v9;
    if ( !CmpFindSecurityCellCacheIndex(a1, *(_DWORD *)(a3 + 44), &v50) )
    {
      CmpUnlockTwoSecurityCaches(a4, a1);
      v15 = 0;
      goto LABEL_15;
    }
    v18 = (unsigned int *)(v12 + 44);
    v19 = *(_DWORD *)(v12 + 44);
    v20 = a5;
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 3056) + 16LL * v50 + 8);
    *(_DWORD *)(v12 + 44) = -1;
    if ( (int)CmpGetSecurityDescriptorNode(a4, v20, v12, v21 + 32, 0, v12 + 44) < 0 )
    {
      *v18 = v19;
LABEL_12:
      v22 = a4;
LABEL_13:
      CmpUnlockTwoSecurityCaches(v22, a1);
LABEL_14:
      v15 = a7;
LABEL_15:
      if ( v41 != -1 )
        HvFreeCell(a4, v41, v16, v17);
      return v15;
    }
    v23 = (*(_BYTE *)(v12 + 2) & 4) == 0;
    v24 = *v18;
    v40 = *v18;
    *v18 = v19;
    if ( v23 || v24 == v19 )
    {
      v29 = v24;
    }
    else
    {
      v50 = -1;
      v38 = -1;
      v39 = -1;
      v48 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned int *))(a4 + 8))(a4, v24, &v50);
      v22 = a4;
      if ( !v48 )
        goto LABEL_13;
      v25 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, int *))(a4 + 8))(a4, v19, &v38);
      v47 = v25;
      if ( !v25 )
      {
        (*(void (__fastcall **)(unsigned __int64, unsigned int *))(a4 + 16))(a4, &v50);
        goto LABEL_12;
      }
      BugCheckParameter3 = *(_DWORD *)(v25 + 8);
      v49 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, int *))(a4 + 8))(a4, BugCheckParameter3, &v39);
      if ( !v49 )
      {
        (*(void (__fastcall **)(unsigned __int64, unsigned int *))(a4 + 16))(a4, &v50);
        v26 = &v38;
LABEL_25:
        (*(void (__fastcall **)(unsigned __int64, int *))(a4 + 16))(a4, v26);
        goto LABEL_12;
      }
      if ( !HvpMarkCellDirty(a4, v19, 0, 0LL) || !HvpMarkCellDirty(a4, BugCheckParameter3, 0, 0LL) )
      {
        (*(void (__fastcall **)(unsigned __int64, unsigned int *))(a4 + 16))(a4, &v50);
        (*(void (__fastcall **)(unsigned __int64, int *))(a4 + 16))(a4, &v38);
        v26 = &v39;
        goto LABEL_25;
      }
      v27 = v48;
      *(_DWORD *)(v48 + 8) = BugCheckParameter3;
      v28 = v47;
      *(_DWORD *)(v27 + 4) = v19;
      v29 = v40;
      *(_DWORD *)(v28 + 8) = v40;
      *(_DWORD *)(v49 + 4) = v29;
      (*(void (__fastcall **)(unsigned __int64, unsigned int *))(a4 + 16))(a4, &v50);
      (*(void (__fastcall **)(unsigned __int64, int *))(a4 + 16))(a4, &v38);
      (*(void (__fastcall **)(unsigned __int64, int *))(a4 + 16))(a4, &v39);
    }
    CmpFreeSecurityDescriptor(a4, a5);
    *v18 = v29;
    CmpUnlockTwoSecurityCaches(a4, a1);
    v30 = *(_DWORD *)(a3 + 36);
    *(_DWORD *)(v12 + 40) = -1;
    *(_DWORD *)(v12 + 36) = 0;
    *(_DWORD *)(v12 + 60) = *(_DWORD *)(a3 + 60);
    *(_DWORD *)(v12 + 64) = *(_DWORD *)(a3 + 64);
    v50 = v30;
    if ( !v30 )
      return 1;
    v31 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, int *))(a1 + 8))(
                            a1,
                            *(unsigned int *)(a3 + 40),
                            &BugCheckParameter3_4);
    if ( v31 )
    {
      v32 = 0;
      while ( 1 )
      {
        v33 = CmpCopyValue(a1, *v31, a4, v42);
        v34 = v33;
        if ( v33 == -1 || !(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, int *))(a4 + 8))(a4, v33, &v46) )
        {
          v8 = *(_DWORD *)(v12 + 40);
          goto LABEL_40;
        }
        if ( (int)CmpAddValueToListEx(a4, v34, v32, v42, (unsigned int *)(v12 + 36), 1) < 0 )
          break;
        ++v32;
        ++v31;
        if ( v32 >= v50 )
        {
          a7 = 1;
          goto LABEL_40;
        }
      }
      v8 = *(_DWORD *)(v12 + 40);
      if ( v8 != -1 )
      {
        v37 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, int *))(a4 + 8))(a4, v8, &v43);
        if ( v37 )
        {
          while ( v32 )
            HvFreeCell(a4, *(unsigned int *)(v37 + 4LL * --v32), v35, v36);
          (*(void (__fastcall **)(unsigned __int64, int *))(a4 + 16))(a4, &v43);
        }
      }
LABEL_40:
      (*(void (__fastcall **)(unsigned __int64, int *))(a1 + 16))(a1, &BugCheckParameter3_4);
      v15 = a7;
      if ( a7 )
        return v15;
      if ( v8 != -1 )
        HvFreeCell(a4, v8, v16, v17);
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  v41 = CmpCopyCell(a1, v14, a4, a5 >> 31);
  if ( v41 != -1 )
  {
    v9 = v41;
    *(_WORD *)(v12 + 74) = *(_WORD *)(a3 + 74);
    goto LABEL_8;
  }
  CmpUnlockTwoSecurityCaches(a4, a1);
  return 0;
}
