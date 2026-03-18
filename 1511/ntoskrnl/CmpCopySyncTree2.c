/*
 * XREFs of CmpCopySyncTree2 @ 0x14050F068
 * Callers:
 *     CmpCopySyncTree @ 0x14050EEBC (CmpCopySyncTree.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpAddSubKeyEx @ 0x1403D7E1C (CmpAddSubKeyEx.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1403FE290 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpCopyKeyPartial @ 0x1404B3BE4 (CmpCopyKeyPartial.c)
 *     CmpSyncSubKeysAfterDelete @ 0x14050EF5C (CmpSyncSubKeysAfterDelete.c)
 *     CmpInitializeKeyNameString @ 0x14050F568 (CmpInitializeKeyNameString.c)
 *     CmpSyncKeyValues @ 0x14050F5B0 (CmpSyncKeyValues.c)
 *     CmpMarkKeyParentDirty @ 0x14050FC18 (CmpMarkKeyParentDirty.c)
 *     CmpFindSubKeyByNumber @ 0x140523D14 (CmpFindSubKeyByNumber.c)
 *     CmpMergeKeyValues @ 0x1405E8A90 (CmpMergeKeyValues.c)
 */

char __fastcall CmpCopySyncTree2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ULONG_PTR BugCheckParameter2,
        char a6,
        int a7)
{
  unsigned int v7; // r14d
  __int64 v8; // r8
  int v9; // r12d
  _OWORD *v10; // r13
  PVOID PoolWithTag; // rax
  __int64 v13; // r15
  unsigned int *v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // r14d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // r15
  char v25; // r15
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rcx
  char v29; // al
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // ecx
  __int64 v34; // r12
  int v35; // r9d
  int v36; // r14d
  __int64 v37; // r8
  __int64 v38; // r14
  char v39; // al
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rax
  unsigned __int16 v43; // dx
  __int64 v44; // rax
  int v45; // eax
  int v46; // ecx
  PVOID v47; // r14
  __int64 v48; // rcx
  int v49; // eax
  char v51; // [rsp+30h] [rbp-89h]
  ULONG_PTR v52; // [rsp+38h] [rbp-81h]
  char v53; // [rsp+48h] [rbp-71h]
  char v54; // [rsp+49h] [rbp-70h]
  __int64 v55; // [rsp+50h] [rbp-69h]
  int v56; // [rsp+58h] [rbp-61h]
  int v57; // [rsp+68h] [rbp-51h]
  int v58; // [rsp+6Ch] [rbp-4Dh]
  int v59; // [rsp+70h] [rbp-49h] BYREF
  int v60; // [rsp+74h] [rbp-45h] BYREF
  int v61; // [rsp+78h] [rbp-41h] BYREF
  int v62; // [rsp+7Ch] [rbp-3Dh] BYREF
  int v63; // [rsp+80h] [rbp-39h] BYREF
  unsigned int v64; // [rsp+84h] [rbp-35h]
  int v65; // [rsp+88h] [rbp-31h] BYREF
  int v66; // [rsp+8Ch] [rbp-2Dh]
  int v67; // [rsp+90h] [rbp-29h] BYREF
  int v68; // [rsp+94h] [rbp-25h] BYREF
  PVOID P; // [rsp+98h] [rbp-21h]
  __int64 v70; // [rsp+A0h] [rbp-19h]
  unsigned int v71; // [rsp+A8h] [rbp-11h] BYREF
  int v72; // [rsp+ACh] [rbp-Dh] BYREF
  UNICODE_STRING v73[4]; // [rsp+B0h] [rbp-9h] BYREF
  char v75; // [rsp+110h] [rbp+57h]
  bool v76; // [rsp+118h] [rbp+5Fh]

  v7 = 0;
  P = 0LL;
  v54 = a6 & 1;
  v8 = a1;
  v61 = -1;
  v62 = -1;
  v65 = -1;
  v9 = -1;
  v67 = -1;
  v68 = -1;
  v55 = 0LL;
  v10 = 0LL;
  v66 = -1;
  v60 = -1;
  v57 = -1;
  v56 = 0;
  v53 = 0;
  v75 = 0;
  v76 = (unsigned int)(a7 - 1) <= 1;
  v64 = 0;
  v70 = 0LL;
  v58 = 1;
  if ( (unsigned int)(a7 - 1) <= 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6E5A6D43u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      return (char)PoolWithTag;
    v8 = a1;
  }
LABEL_4:
  LODWORD(v13) = v9 + 1;
  v14 = (unsigned int *)(v8 + 20LL * v7);
  v14[2] = 0;
LABEL_5:
  v15 = v70;
  while ( 1 )
  {
    if ( v15 )
      (*(void (__fastcall **)(__int64, int *))(a4 + 16))(a4, &v65);
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a4 + 8))(a4, *v14, &v65);
    v70 = v16;
    v15 = v16;
    if ( !v16 )
      break;
    if ( (int)CmpFindSubKeyByNumber(a4, v16, v14[2], &v72) < 0 )
      goto LABEL_63;
    ++v14[2];
    v17 = (unsigned int)v72;
    if ( v72 == -1 || !v54 && v72 < 0 )
    {
      if ( v76 && a7 != 2 )
      {
        v30 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v14[1],
                &v67);
        v32 = v30;
        if ( !v30 )
          goto LABEL_63;
        if ( v54 )
          v33 = *(_DWORD *)(v15 + 24);
        else
          v33 = 0;
        if ( *(_DWORD *)(v30 + 20) + *(_DWORD *)(v30 + 24) > (unsigned int)(*(_DWORD *)(v15 + 20) + v33) )
          CmpSyncSubKeysAfterDelete(a4, v15, BugCheckParameter2, v30, (__int64)P);
        (*(void (__fastcall **)(ULONG_PTR, int *, __int64, __int64))(BugCheckParameter2 + 16))(
          BugCheckParameter2,
          &v67,
          v31,
          v32);
      }
      LODWORD(v34) = v57;
      if ( (v14[4] & 1) != 0 )
      {
        v34 = (unsigned int)(v57 + 1);
        LODWORD(v13) = v13 + 1;
        v57 = v34;
        v59 = v13;
        if ( (unsigned int)v34 >= v64 )
        {
          v13 = v64 + (v64 >> 1);
          if ( v64 + 1 > (unsigned int)v13 )
            v13 = v64 + 1;
          v47 = ExAllocatePoolWithTag(PagedPool, 20 * v13, 0x20204D43u);
          if ( !v47 )
            goto LABEL_63;
          memmove(v47, v10, 20LL * v64);
          if ( v10 )
            ExFreePoolWithTag(v10, 0);
          v64 = v13;
          v10 = v47;
          LODWORD(v13) = v59;
        }
        v14[2] = 0;
        v48 = 5 * v34;
        v35 = v58;
        v14[3] ^= (v14[3] ^ v58) & 7;
        *((_BYTE *)v14 + 16) &= ~1u;
        *(_OWORD *)((char *)v10 + 4 * v48) = *(_OWORD *)v14;
        *((_DWORD *)v10 + v48 + 4) = v14[4];
      }
      else
      {
        v35 = v58;
      }
      v36 = v56;
      if ( v56 )
      {
        v37 = a1;
      }
      else
      {
        if ( (_DWORD)v34 == -1 )
        {
          if ( (a6 & 0x40) != 0 )
            *(_DWORD *)(BugCheckParameter2 + 6024) = *(_DWORD *)(BugCheckParameter2 + 1400);
          v53 = 1;
          goto LABEL_63;
        }
        v13 = (unsigned int)(v13 - 1);
        v36 = 1;
        v57 = v34 - 1;
        if ( ((*((_BYTE *)v10 + 12) ^ *((_BYTE *)v10 + 20 * (unsigned int)v34 + 12)) & 7) != 0 )
        {
          *(_OWORD *)a1 = *v10;
          *(_DWORD *)(a1 + 16) = *((_DWORD *)v10 + 4);
          memmove(v10, (char *)v10 + 20, 20 * v13);
          v37 = a1;
          v35 = v58;
        }
        else
        {
          v37 = a1;
          *(_OWORD *)a1 = *(_OWORD *)((char *)v10 + 20 * (unsigned int)v34);
          *(_DWORD *)(a1 + 16) = *((_DWORD *)v10 + 5 * (unsigned int)v34 + 4);
        }
        if ( v35 == (int)(*(_DWORD *)(v37 + 12) << 29) >> 29 )
        {
          v49 = *(_DWORD *)(BugCheckParameter2 + 1400);
          v58 = v35 + 1;
          if ( v35 == 1 )
            *(_DWORD *)(BugCheckParameter2 + 6016) = v49;
          else
            *(_DWORD *)(BugCheckParameter2 + 6020) = v49;
        }
      }
      v38 = (unsigned int)(v36 - 1);
      v56 = v38;
      v14 = (unsigned int *)(v37 + 20 * v38);
      if ( v75 && (_DWORD)v38 == v66 )
      {
        v76 = 1;
        v75 = 0;
      }
      goto LABEL_5;
    }
    if ( v76 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a4 + 8))(a4, (unsigned int)v72, &v61);
      v55 = v18;
      if ( !v18 )
      {
        v23 = 0LL;
        goto LABEL_64;
      }
      CmpInitializeKeyNameString(v18, v73, P);
      v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v14[1],
              &v68);
      if ( !v19 )
        goto LABEL_63;
      CmpFindSubKeyByNameWithStatus(BugCheckParameter2, v19, v73, &v71);
      v20 = v71;
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v68);
      if ( v20 != -1 )
      {
        v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v20,
                &v62);
        v23 = v55;
        v24 = v21;
        if ( v21 )
        {
          if ( a7 == 2 )
          {
            v39 = CmpMergeKeyValues(a4, v22, v55, BugCheckParameter2, v20, v21);
          }
          else
          {
            if ( *(_QWORD *)(v21 + 4) >= *(_QWORD *)(v55 + 4) )
              goto LABEL_20;
            v51 = v21;
            v39 = CmpSyncKeyValues(a4, v22, v55, BugCheckParameter2, v20);
          }
          if ( v39 )
          {
            *(_QWORD *)(v24 + 4) = *(_QWORD *)(v55 + 4);
LABEL_20:
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v62);
            (*(void (__fastcall **)(__int64, int *))(a4 + 16))(a4, &v61);
            v55 = 0LL;
            v25 = 0;
LABEL_21:
            v26 = v56;
LABEL_22:
            v27 = (unsigned int)(v26 + 1);
            v56 = v27;
            if ( (unsigned int)v27 < 0x200 )
            {
              v8 = a1;
              v28 = 5 * v27;
              v29 = *(_BYTE *)(a1 + 20 * v27 + 16);
              *(_DWORD *)(a1 + 4 * v28 + 12) &= 0xFFFFFFF8;
              *(_DWORD *)(a1 + 4 * v28) = v17;
              v9 = v57;
              *(_DWORD *)(a1 + 4 * v28 + 4) = v20;
              v7 = v56;
              *(_BYTE *)(a1 + 4 * v28 + 16) = v29 & 0xFC | (2 * (v25 & 1));
              goto LABEL_4;
            }
            goto LABEL_63;
          }
        }
LABEL_65:
        (*(void (__fastcall **)(__int64, int *))(a4 + 16))(a4, &v65);
        if ( v23 )
          (*(void (__fastcall **)(__int64, int *))(a4 + 16))(a4, &v61);
        if ( v24 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v62);
        break;
      }
      (*(void (__fastcall **)(__int64, int *))(a4 + 16))(a4, &v61);
      v55 = 0LL;
      v15 = v70;
      v75 = 1;
    }
    if ( (a6 & 0x40) == 0 )
      goto LABEL_44;
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a4 + 8))(a4, (unsigned int)v17, &v60);
    if ( !v44 )
      goto LABEL_63;
    v45 = *(_DWORD *)(v44 + 12);
    if ( (v45 & 2) != 0 )
      v46 = 1;
    else
      v46 = ((v45 & 1) == 0) | 2;
    if ( v46 <= v58 )
    {
      if ( v46 <= (int)(v14[3] << 29) >> 29 )
      {
        (*(void (__fastcall **)(__int64, int *))(a4 + 16))(a4, &v60);
        goto LABEL_5;
      }
      (*(void (__fastcall **)(__int64, int *))(a4 + 16))(a4, &v60);
LABEL_44:
      LODWORD(v52) = 2;
      v20 = CmpCopyKeyPartial(a4, (unsigned int)v17, BugCheckParameter2, v14[1], a6 | 4u, v51, v52);
      if ( v20 == -1 )
        goto LABEL_63;
      v25 = 1;
      if ( (v14[4] & 2) == 0 )
      {
        if ( HvpMarkCellDirty(BugCheckParameter2, v14[1], 0) )
        {
          *((_BYTE *)v14 + 16) |= 2u;
          goto LABEL_46;
        }
        goto LABEL_63;
      }
LABEL_46:
      if ( !CmpAddSubKeyEx(BugCheckParameter2, v14[1], v20, *(_DWORD *)(v70 + 4 * (v17 >> 31) + 20)) )
        goto LABEL_63;
      v40 = v14[1];
      v63 = -1;
      v59 = -1;
      v41 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v40,
              &v63);
      if ( !v41 )
        goto LABEL_63;
      v42 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v20,
              &v59);
      if ( !v42 )
      {
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v63);
        goto LABEL_63;
      }
      v43 = *(_WORD *)(v42 + 72);
      if ( (*(_BYTE *)(v42 + 2) & 0x20) != 0 )
        v43 *= 2;
      if ( (unsigned __int16)*(_DWORD *)(v41 + 52) < (unsigned int)v43 )
        *(_WORD *)(v41 + 52) = v43;
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v59);
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v63);
      if ( !v76 || !v75 )
        goto LABEL_21;
      if ( (unsigned __int8)CmpMarkKeyParentDirty(BugCheckParameter2) )
      {
        v26 = v56;
        v66 = v56;
        v76 = 0;
        goto LABEL_22;
      }
LABEL_63:
      v23 = v55;
LABEL_64:
      v24 = 0LL;
      goto LABEL_65;
    }
    *((_BYTE *)v14 + 16) |= 1u;
    (*(void (__fastcall **)(__int64, int *))(a4 + 16))(a4, &v60);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  LOBYTE(PoolWithTag) = v53;
  return (char)PoolWithTag;
}
