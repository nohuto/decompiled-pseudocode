/*
 * XREFs of CmpSyncKeyValues @ 0x14060990C
 * Callers:
 *     CmpCopySyncTree2 @ 0x1406082F4 (CmpCopySyncTree2.c)
 *     CmpMergeKeyValues @ 0x14060903C (CmpMergeKeyValues.c)
 * Callees:
 *     CmpGetSecurityDescriptorNode @ 0x1403FC310 (CmpGetSecurityDescriptorNode.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FCE20 (CmpFindSecurityCellCacheIndex.c)
 *     CmpAddValueToListEx @ 0x1403FEB9C (CmpAddValueToListEx.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmpFreeSecurityDescriptor @ 0x1404BCD30 (CmpFreeSecurityDescriptor.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1404CE0B4 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1404CE120 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCopyCell @ 0x1404CE184 (CmpCopyCell.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpCopyValue @ 0x140608A14 (CmpCopyValue.c)
 *     CmpFreeKeyValues @ 0x140608CBC (CmpFreeKeyValues.c)
 */

char __fastcall CmpSyncKeyValues(
        unsigned __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rdi
  unsigned int v8; // r15d
  int v9; // r12d
  __int64 v12; // r14
  __int64 v14; // rdx
  char v15; // di
  int *v16; // r12
  unsigned int v17; // r13d
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rcx
  bool v21; // zf
  unsigned int v22; // ecx
  __int64 v23; // rax
  _DWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // r13d
  unsigned int v28; // r13d
  unsigned int *v29; // r12
  unsigned int v30; // esi
  unsigned int v31; // r13d
  unsigned int v32; // eax
  __int64 v33; // r14
  unsigned int BugCheckParameter3; // [rsp+38h] [rbp-51h]
  unsigned int BugCheckParameter3a; // [rsp+38h] [rbp-51h]
  unsigned int BugCheckParameter3_4; // [rsp+3Ch] [rbp-4Dh]
  _DWORD v37[2]; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v38[2]; // [rsp+48h] [rbp-41h] BYREF
  _DWORD v39[2]; // [rsp+50h] [rbp-39h] BYREF
  _DWORD v40[2]; // [rsp+58h] [rbp-31h] BYREF
  _DWORD v41[2]; // [rsp+60h] [rbp-29h] BYREF
  unsigned int v42; // [rsp+68h] [rbp-21h]
  _DWORD v43[2]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v44; // [rsp+78h] [rbp-11h]
  __int64 v45; // [rsp+80h] [rbp-9h]
  __int64 v46; // [rsp+88h] [rbp-1h]
  int v48; // [rsp+E0h] [rbp+57h] BYREF

  v48 = a2;
  v7 = a1;
  a7 = 0;
  v41[0] = -1;
  v8 = -1;
  v40[0] = -1;
  v9 = -1;
  BugCheckParameter3_4 = -1;
  v43[0] = -1;
  v41[1] = 0;
  v40[1] = 0;
  v43[1] = 0;
  CmpLockTwoSecurityCachesExclusiveShared(a4, a1);
  v12 = a6;
  if ( !CmpFreeKeyValues(a4, a5, a6) )
  {
    CmpUnlockTwoSecurityCaches(a4, v7);
    return 0;
  }
  v42 = a5 >> 31;
  if ( !*(_WORD *)(a3 + 74) || (v14 = *(unsigned int *)(a3 + 48), (_DWORD)v14 == -1) )
  {
LABEL_8:
    *(_DWORD *)(v12 + 48) = v9;
    if ( !CmpFindSecurityCellCacheIndex(v7, *(_DWORD *)(a3 + 44), (unsigned int *)&v48) )
    {
      CmpUnlockTwoSecurityCaches(a4, v7);
      v15 = 0;
      goto LABEL_48;
    }
    v16 = (int *)(v12 + 44);
    v17 = *(_DWORD *)(v12 + 44);
    v18 = a5;
    v19 = *(_QWORD *)(*(_QWORD *)(v7 + 3056) + 16LL * (unsigned int)v48 + 8);
    *(_DWORD *)(v12 + 44) = -1;
    if ( (int)CmpGetSecurityDescriptorNode(a4, v18, v12, (void *)(v19 + 32), 0, v12 + 44) < 0 )
    {
      *v16 = v17;
LABEL_12:
      v20 = a4;
LABEL_13:
      CmpUnlockTwoSecurityCaches(v20, v7);
      v15 = a7;
      goto LABEL_48;
    }
    v21 = (*(_BYTE *)(v12 + 2) & 4) == 0;
    v22 = *v16;
    v48 = *v16;
    *v16 = v17;
    if ( v21 || v22 == v17 )
    {
      v27 = v22;
    }
    else
    {
      v37[1] = 0;
      v38[1] = 0;
      v39[1] = 0;
      v37[0] = -1;
      v38[0] = -1;
      v39[0] = -1;
      v44 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, v22, v37);
      v20 = a4;
      if ( !v44 )
        goto LABEL_13;
      v23 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, v17, v38);
      v45 = v23;
      if ( !v23 )
      {
        (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v37);
        goto LABEL_12;
      }
      BugCheckParameter3 = *(_DWORD *)(v23 + 8);
      v46 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, BugCheckParameter3, v39);
      if ( !v46 )
      {
        (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v37);
        v24 = v38;
LABEL_21:
        (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v24);
        goto LABEL_12;
      }
      if ( !HvpMarkCellDirty(a4, v17, 0) || !HvpMarkCellDirty(a4, BugCheckParameter3, 0) )
      {
        (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v37);
        (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v38);
        v24 = v39;
        goto LABEL_21;
      }
      v25 = v44;
      *(_DWORD *)(v44 + 8) = BugCheckParameter3;
      v26 = v45;
      *(_DWORD *)(v25 + 4) = v17;
      v27 = v48;
      *(_DWORD *)(v26 + 8) = v48;
      *(_DWORD *)(v46 + 4) = v27;
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v37);
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v38);
      (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v39);
    }
    CmpFreeSecurityDescriptor(a4, a5);
    *v16 = v27;
    CmpUnlockTwoSecurityCaches(a4, v7);
    v28 = *(_DWORD *)(a3 + 36);
    *(_DWORD *)(v12 + 40) = -1;
    *(_DWORD *)(v12 + 36) = 0;
    *(_DWORD *)(v12 + 60) = *(_DWORD *)(a3 + 60);
    *(_DWORD *)(v12 + 64) = *(_DWORD *)(a3 + 64);
    BugCheckParameter3a = v28;
    if ( !v28 )
      return 1;
    v29 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v7 + 8))(
                            v7,
                            *(unsigned int *)(a3 + 40),
                            v41);
    if ( v29 )
    {
      v30 = 0;
      v31 = v42;
      while ( 1 )
      {
        v32 = CmpCopyValue(v7, *v29, a4, v31);
        v48 = v32;
        if ( v32 == -1 || !(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, v32, v43) )
        {
          v8 = *(_DWORD *)(v12 + 40);
          goto LABEL_37;
        }
        if ( (int)CmpAddValueToListEx(a4, v48, v30, v31, (unsigned int *)(v12 + 36), 1) < 0 )
          break;
        ++v30;
        ++v29;
        if ( v30 >= BugCheckParameter3a )
        {
          a7 = 1;
          goto LABEL_37;
        }
      }
      v8 = *(_DWORD *)(v12 + 40);
      if ( v8 != -1 )
      {
        v33 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _DWORD *))(a4 + 8))(a4, v8, v40);
        if ( v33 )
        {
          if ( v30 )
          {
            do
              HvFreeCell(a4, *(unsigned int *)(v33 + 4LL * --v30));
            while ( v30 );
            v7 = a1;
          }
          (*(void (__fastcall **)(unsigned __int64, _DWORD *))(a4 + 16))(a4, v40);
        }
      }
LABEL_37:
      (*(void (__fastcall **)(__int64, _DWORD *))(v7 + 16))(v7, v41);
      v15 = a7;
      if ( a7 )
        return v15;
      if ( v8 != -1 )
        HvFreeCell(a4, v8);
    }
    else
    {
      v15 = 0;
    }
LABEL_48:
    if ( BugCheckParameter3_4 != -1 )
      HvFreeCell(a4, BugCheckParameter3_4);
    return v15;
  }
  BugCheckParameter3_4 = CmpCopyCell(v7, v14, a4, a5 >> 31);
  if ( BugCheckParameter3_4 != -1 )
  {
    v9 = BugCheckParameter3_4;
    *(_WORD *)(v12 + 74) = *(_WORD *)(a3 + 74);
    goto LABEL_8;
  }
  CmpUnlockTwoSecurityCaches(a4, v7);
  return 0;
}
