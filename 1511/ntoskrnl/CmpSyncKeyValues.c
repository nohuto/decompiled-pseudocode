/*
 * XREFs of CmpSyncKeyValues @ 0x14050F5B0
 * Callers:
 *     CmpCopySyncTree2 @ 0x14050F068 (CmpCopySyncTree2.c)
 *     CmpMergeKeyValues @ 0x1405E8A90 (CmpMergeKeyValues.c)
 * Callees:
 *     CmpAddValueToListEx @ 0x1403D86A0 (CmpAddValueToListEx.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmpFreeSecurityDescriptor @ 0x1403DA6FC (CmpFreeSecurityDescriptor.c)
 *     CmpAssignSecurityDescriptor @ 0x1403DFF74 (CmpAssignSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1403FB310 (CmpFindSecurityCellCacheIndex.c)
 *     CmpUnlockTwoSecurityCaches @ 0x1404B3E98 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1404B3F04 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpCopyCell @ 0x1404B3F68 (CmpCopyCell.c)
 *     CmpCopyValue @ 0x14050F7B0 (CmpCopyValue.c)
 *     CmpFreeKeyValues @ 0x14050F9C8 (CmpFreeKeyValues.c)
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
  __int64 v12; // rsi
  unsigned int v13; // r13d
  unsigned int v14; // r12d
  __int64 v15; // r9
  bool v16; // zf
  unsigned int v17; // r13d
  unsigned int v18; // r13d
  unsigned int *v19; // r12
  unsigned int v20; // r14d
  unsigned int v21; // eax
  int v22; // r13d
  char v23; // di
  __int64 v25; // rdx
  int *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rsi
  int v32; // [rsp+20h] [rbp-50h]
  int v33; // [rsp+30h] [rbp-40h] BYREF
  int v34; // [rsp+34h] [rbp-3Ch] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v36; // [rsp+40h] [rbp-30h]
  unsigned int v37; // [rsp+44h] [rbp-2Ch]
  int v38; // [rsp+48h] [rbp-28h] BYREF
  int v39; // [rsp+4Ch] [rbp-24h] BYREF
  __int64 v40; // [rsp+50h] [rbp-20h]
  __int64 v41; // [rsp+58h] [rbp-18h]
  __int64 v42; // [rsp+60h] [rbp-10h]
  unsigned int v43; // [rsp+A8h] [rbp+38h] BYREF

  v43 = a2;
  a7 = 0;
  v38 = -1;
  v8 = -1;
  v9 = -1;
  BugCheckParameter3 = -1LL;
  v39 = -1;
  CmpLockTwoSecurityCachesExclusiveShared(a4, a1);
  v12 = a6;
  v13 = a5;
  if ( (unsigned __int8)CmpFreeKeyValues(a4) )
  {
    v37 = v13 >> 31;
    if ( *(_WORD *)(a3 + 74) )
    {
      v25 = *(unsigned int *)(a3 + 48);
      if ( (_DWORD)v25 != -1 )
      {
        LODWORD(BugCheckParameter3) = CmpCopyCell(a1, v25, a4, v13 >> 31);
        if ( (_DWORD)BugCheckParameter3 == -1 )
        {
          CmpUnlockTwoSecurityCaches(a4, a1);
          return a7;
        }
        v9 = BugCheckParameter3;
        *(_WORD *)(v12 + 74) = *(_WORD *)(a3 + 74);
      }
    }
    *(_DWORD *)(v12 + 48) = v9;
    if ( !CmpFindSecurityCellCacheIndex(a1, *(_DWORD *)(a3 + 44), &v43) )
      goto LABEL_24;
    v14 = *(_DWORD *)(v12 + 44);
    LOBYTE(v32) = 0;
    v15 = *(_QWORD *)(*(_QWORD *)(a1 + 3056) + 16LL * v43 + 8);
    *(_DWORD *)(v12 + 44) = -1;
    if ( (int)CmpAssignSecurityDescriptor(a4, v13, v12, (void *)(v15 + 32)) < 0 )
    {
      *(_DWORD *)(v12 + 44) = v14;
    }
    else
    {
      v16 = (*(_BYTE *)(v12 + 2) & 4) == 0;
      v17 = *(_DWORD *)(v12 + 44);
      *(_DWORD *)(v12 + 44) = v14;
      if ( v16 || v17 == v14 )
        goto LABEL_6;
      v43 = -1;
      v33 = -1;
      v34 = -1;
      v41 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned int *))(a4 + 8))(a4, v17, &v43);
      v27 = a4;
      if ( !v41 )
        goto LABEL_25;
      v28 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, int *))(a4 + 8))(a4, v14, &v33);
      v40 = v28;
      if ( !v28 )
      {
        (*(void (__fastcall **)(unsigned __int64, unsigned int *))(a4 + 16))(a4, &v43);
        goto LABEL_24;
      }
      v36 = *(_DWORD *)(v28 + 8);
      v42 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, int *))(a4 + 8))(a4, v36, &v34);
      if ( v42 )
      {
        if ( HvpMarkCellDirty(a4, v14, 0) && HvpMarkCellDirty(a4, v36, 0) )
        {
          v29 = v41;
          *(_DWORD *)(v41 + 8) = v36;
          v30 = v40;
          *(_DWORD *)(v29 + 4) = v14;
          *(_DWORD *)(v30 + 8) = v17;
          *(_DWORD *)(v42 + 4) = v17;
          (*(void (__fastcall **)(unsigned __int64, unsigned int *))(a4 + 16))(a4, &v43);
          (*(void (__fastcall **)(unsigned __int64, int *))(a4 + 16))(a4, &v33);
          (*(void (__fastcall **)(unsigned __int64, int *))(a4 + 16))(a4, &v34);
LABEL_6:
          CmpFreeSecurityDescriptor(a4, a5);
          *(_DWORD *)(v12 + 44) = v17;
          CmpUnlockTwoSecurityCaches(a4, a1);
          v18 = *(_DWORD *)(a3 + 36);
          *(_DWORD *)(v12 + 40) = -1;
          *(_DWORD *)(v12 + 36) = 0;
          *(_DWORD *)(v12 + 60) = *(_DWORD *)(a3 + 60);
          *(_DWORD *)(v12 + 64) = *(_DWORD *)(a3 + 64);
          v43 = v18;
          if ( !v18 )
            return 1;
          v19 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, int *))(a1 + 8))(
                                  a1,
                                  *(unsigned int *)(a3 + 40),
                                  &v38);
          if ( v19 )
          {
            v20 = 0;
            while ( 1 )
            {
              v21 = CmpCopyValue(a1, *v19, a4, v37, v32);
              v22 = v21;
              if ( v21 == -1 || !(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, int *))(a4 + 8))(a4, v21, &v39) )
              {
                v8 = *(_DWORD *)(v12 + 40);
                goto LABEL_14;
              }
              if ( (int)CmpAddValueToListEx(a4, v22, v20, v37, (unsigned int *)(v12 + 36), 1) < 0 )
                break;
              ++v20;
              ++v19;
              if ( v20 >= v43 )
              {
                a7 = 1;
                goto LABEL_14;
              }
            }
            v8 = *(_DWORD *)(v12 + 40);
            if ( v8 != -1 )
            {
              v31 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, char *))(a4 + 8))(
                      a4,
                      v8,
                      (char *)&BugCheckParameter3 + 4);
              if ( v31 )
              {
                while ( v20 )
                  HvFreeCell(a4, *(unsigned int *)(v31 + 4LL * --v20));
                (*(void (__fastcall **)(unsigned __int64, char *))(a4 + 16))(a4, (char *)&BugCheckParameter3 + 4);
              }
            }
LABEL_14:
            (*(void (__fastcall **)(unsigned __int64, int *))(a1 + 16))(a1, &v38);
            v23 = a7;
            if ( a7 )
              return v23;
            if ( v8 != -1 )
              HvFreeCell(a4, v8);
          }
          else
          {
            v23 = 0;
          }
LABEL_46:
          if ( (_DWORD)BugCheckParameter3 != -1 )
            HvFreeCell(a4, (unsigned int)BugCheckParameter3);
          return v23;
        }
        (*(void (__fastcall **)(unsigned __int64, unsigned int *))(a4 + 16))(a4, &v43);
        (*(void (__fastcall **)(unsigned __int64, int *))(a4 + 16))(a4, &v33);
        v26 = &v34;
      }
      else
      {
        (*(void (__fastcall **)(unsigned __int64, unsigned int *))(a4 + 16))(a4, &v43);
        v26 = &v33;
      }
      (*(void (__fastcall **)(unsigned __int64, int *))(a4 + 16))(a4, v26);
    }
LABEL_24:
    v27 = a4;
LABEL_25:
    CmpUnlockTwoSecurityCaches(v27, a1);
    v23 = a7;
    goto LABEL_46;
  }
  CmpUnlockTwoSecurityCaches(a4, a1);
  return 0;
}
