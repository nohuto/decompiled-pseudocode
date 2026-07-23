/*
 * XREFs of CmpCopySyncTree2 @ 0x1406082F4
 * Callers:
 *     CmpCopySyncTree @ 0x140608258 (CmpCopySyncTree.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpFindSubKeyByNumber @ 0x140437590 (CmpFindSubKeyByNumber.c)
 *     CmpAddSubKeyEx @ 0x14049AE00 (CmpAddSubKeyEx.c)
 *     CmpCopyKeyPartial @ 0x1404CDE74 (CmpCopyKeyPartial.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404F54C0 (CmpFindSubKeyByNameWithStatus.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpInitializeKeyNameString @ 0x140608D88 (CmpInitializeKeyNameString.c)
 *     CmpMarkKeyParentDirty @ 0x140608E04 (CmpMarkKeyParentDirty.c)
 *     CmpMergeKeyValues @ 0x14060903C (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x14060990C (CmpSyncKeyValues.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140609D10 (CmpSyncSubKeysAfterDelete.c)
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
  __int64 v8; // r8
  unsigned int v9; // r14d
  _OWORD *v10; // r13
  int v11; // r12d
  PVOID PoolWithTag; // rax
  __int64 v13; // r15
  unsigned int *v14; // rsi
  _DWORD *v15; // r14
  _DWORD *v16; // rax
  int SubKeyByNumber; // eax
  __int64 v18; // r9
  unsigned __int64 v19; // r12
  ULONG_PTR v20; // rax
  __int64 v21; // rax
  unsigned int v22; // r14d
  __int64 v23; // rax
  char v24; // al
  int v25; // ecx
  __int64 v26; // r9
  int v27; // ecx
  __int64 v28; // r12
  PVOID v29; // r14
  __int64 v30; // rcx
  char v31; // al
  int v32; // r14d
  __int64 v33; // r8
  int v34; // edx
  int v35; // eax
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rdx
  ULONG_PTR v39; // rsi
  __int64 v40; // r15
  char v41; // al
  char v42; // r15
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // rcx
  char v46; // al
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rax
  unsigned __int16 v50; // dx
  __int64 v52; // [rsp+30h] [rbp-B9h]
  __int16 v53; // [rsp+48h] [rbp-A1h]
  ULONG_PTR v54; // [rsp+50h] [rbp-99h]
  int v55; // [rsp+58h] [rbp-91h]
  int v56; // [rsp+68h] [rbp-81h]
  int v57; // [rsp+6Ch] [rbp-7Dh]
  unsigned int v58; // [rsp+70h] [rbp-79h]
  _DWORD v59[2]; // [rsp+78h] [rbp-71h] BYREF
  _DWORD v60[2]; // [rsp+80h] [rbp-69h] BYREF
  int v61; // [rsp+88h] [rbp-61h]
  _DWORD v62[2]; // [rsp+90h] [rbp-59h] BYREF
  _DWORD v63[2]; // [rsp+98h] [rbp-51h] BYREF
  _DWORD v64[2]; // [rsp+A0h] [rbp-49h] BYREF
  _DWORD v65[2]; // [rsp+A8h] [rbp-41h] BYREF
  _DWORD v66[2]; // [rsp+B0h] [rbp-39h] BYREF
  _DWORD *v67; // [rsp+B8h] [rbp-31h]
  _DWORD v68[2]; // [rsp+C0h] [rbp-29h] BYREF
  PVOID P; // [rsp+C8h] [rbp-21h]
  int v70; // [rsp+D0h] [rbp-19h] BYREF
  unsigned int v71; // [rsp+D4h] [rbp-15h] BYREF
  int v72; // [rsp+D8h] [rbp-11h]
  __m128i v73[4]; // [rsp+E0h] [rbp-9h] BYREF
  char v75; // [rsp+140h] [rbp+57h]
  bool v76; // [rsp+148h] [rbp+5Fh]

  v57 = 1;
  v55 = 0;
  v53 = a6 & 1;
  v8 = a1;
  v75 = 0;
  v9 = 0;
  v60[0] = -1;
  v60[1] = 0;
  v64[0] = -1;
  v10 = 0LL;
  v64[1] = 0;
  v11 = -1;
  v63[0] = -1;
  v63[1] = 0;
  v66[0] = -1;
  v66[1] = 0;
  v65[0] = -1;
  v65[1] = 0;
  v61 = -1;
  P = 0LL;
  v76 = (unsigned int)(a7 - 1) <= 1;
  v59[0] = -1;
  v59[1] = 0;
  v58 = 0;
  v56 = -1;
  v67 = 0LL;
  v54 = 0LL;
  if ( (unsigned int)(a7 - 1) <= 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6E5A6D43u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      return (char)PoolWithTag;
    v8 = a1;
  }
LABEL_4:
  LODWORD(v13) = v11 + 1;
  v14 = (unsigned int *)(v8 + 20LL * v9);
  v14[2] = 0;
LABEL_5:
  v15 = v67;
  while ( 1 )
  {
    if ( v15 )
      (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v63);
    v16 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a4 + 8))(a4, *v14, v63);
    v67 = v16;
    v15 = v16;
    if ( !v16 )
      break;
    SubKeyByNumber = CmpFindSubKeyByNumber(a4, v16, v14[2], &v70);
    v18 = 0LL;
    if ( SubKeyByNumber < 0 )
      goto LABEL_86;
    ++v14[2];
    v19 = (unsigned int)v70;
    if ( v70 == -1 || !(_BYTE)v53 && v70 < 0 )
    {
      if ( v76 && a7 != 2 )
      {
        v26 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *, _QWORD))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v14[1],
                v66,
                0LL);
        if ( !v26 )
          goto LABEL_86;
        if ( (_BYTE)v53 )
          v27 = v15[6];
        else
          v27 = 0;
        if ( *(_DWORD *)(v26 + 20) + *(_DWORD *)(v26 + 24) > (unsigned int)(v15[5] + v27) )
          CmpSyncSubKeysAfterDelete(a4, (_DWORD)v15, BugCheckParameter2, v26, (__int64)P);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v66);
      }
      LODWORD(v28) = v56;
      if ( (v14[4] & 1) != 0 )
      {
        v28 = (unsigned int)(v56 + 1);
        LODWORD(v13) = v13 + 1;
        v56 = v28;
        v72 = v13;
        if ( (unsigned int)v28 >= v58 )
        {
          v13 = v58 + (v58 >> 1);
          if ( v58 + 1 > (unsigned int)v13 )
            v13 = v58 + 1;
          v29 = ExAllocatePoolWithTag(PagedPool, 20 * v13, 0x20204D43u);
          if ( !v29 )
            goto LABEL_86;
          memmove(v29, v10, 20LL * v58);
          if ( v10 )
            ExFreePoolWithTag(v10, 0);
          v58 = v13;
          v10 = v29;
          LODWORD(v13) = v72;
        }
        v30 = 5 * v28;
        v31 = v57 ^ v14[3];
        v14[2] = 0;
        v14[3] ^= v31 & 7;
        *((_BYTE *)v14 + 16) &= ~1u;
        *(_OWORD *)((char *)v10 + 4 * v30) = *(_OWORD *)v14;
        *((_DWORD *)v10 + v30 + 4) = v14[4];
      }
      v32 = v55;
      if ( v55 )
      {
        v33 = a1;
      }
      else
      {
        if ( (_DWORD)v28 == -1 )
        {
          if ( (a6 & 0x40) != 0 )
            *(_DWORD *)(BugCheckParameter2 + 6024) = *(_DWORD *)(BugCheckParameter2 + 1400);
          HIBYTE(v53) = 1;
          goto LABEL_86;
        }
        v13 = (unsigned int)(v13 - 1);
        v32 = 1;
        v56 = v28 - 1;
        if ( ((*((_BYTE *)v10 + 12) ^ *((_BYTE *)v10 + 20 * (unsigned int)v28 + 12)) & 7) != 0 )
        {
          *(_OWORD *)a1 = *v10;
          *(_DWORD *)(a1 + 16) = *((_DWORD *)v10 + 4);
          memmove(v10, (char *)v10 + 20, 20 * v13);
          v33 = a1;
        }
        else
        {
          v33 = a1;
          *(_OWORD *)a1 = *(_OWORD *)((char *)v10 + 20 * (unsigned int)v28);
          *(_DWORD *)(a1 + 16) = *((_DWORD *)v10 + 5 * (unsigned int)v28 + 4);
        }
        v34 = v57;
        if ( v57 == (int)(*(_DWORD *)(v33 + 12) << 29) >> 29 )
        {
          v35 = *(_DWORD *)(BugCheckParameter2 + 1400);
          ++v57;
          if ( v34 == 1 )
            *(_DWORD *)(BugCheckParameter2 + 6016) = v35;
          else
            *(_DWORD *)(BugCheckParameter2 + 6020) = v35;
        }
      }
      v36 = (unsigned int)(v32 - 1);
      v55 = v36;
      v14 = (unsigned int *)(v33 + 20 * v36);
      if ( v75 && (_DWORD)v36 == v61 )
      {
        v76 = 1;
        v75 = 0;
      }
      goto LABEL_5;
    }
    if ( v76 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, _QWORD))(a4 + 8))(a4, (unsigned int)v70, v60, 0LL);
      v54 = v20;
      if ( !v20 )
      {
        v39 = 0LL;
        goto LABEL_87;
      }
      CmpInitializeKeyNameString(v20);
      v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v14[1],
              v65);
      if ( !v21 )
        goto LABEL_86;
      CmpFindSubKeyByNameWithStatus(BugCheckParameter2, v21, v73, &v71);
      v22 = v71;
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v65);
      if ( v22 != -1 )
      {
        v37 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v22,
                v64);
        v39 = v54;
        v40 = v37;
        if ( v37 )
        {
          if ( a7 != 2 )
          {
            if ( *(_QWORD *)(v37 + 4) < *(_QWORD *)(v54 + 4) )
            {
              v52 = v37;
              v41 = CmpSyncKeyValues(a4, v38, v54, BugCheckParameter2, v22);
              goto LABEL_63;
            }
LABEL_65:
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v64);
            (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v60);
            v54 = 0LL;
            v42 = 0;
LABEL_66:
            v43 = v55;
LABEL_67:
            v44 = (unsigned int)(v43 + 1);
            v55 = v44;
            if ( (unsigned int)v44 < 0x200 )
            {
              v8 = a1;
              v45 = 5 * v44;
              v46 = *(_BYTE *)(a1 + 20 * v44 + 16);
              *(_DWORD *)(a1 + 4 * v45 + 12) &= 0xFFFFFFF8;
              *(_DWORD *)(a1 + 4 * v45) = v19;
              v11 = v56;
              *(_DWORD *)(a1 + 4 * v45 + 4) = v22;
              v9 = v55;
              *(_BYTE *)(a1 + 4 * v45 + 16) = v46 & 0xFC | (2 * (v42 & 1));
              goto LABEL_4;
            }
            goto LABEL_86;
          }
          v41 = CmpMergeKeyValues(a4, v38, v54, BugCheckParameter2, v22, v37);
LABEL_63:
          if ( v41 )
          {
            *(_QWORD *)(v40 + 4) = *(_QWORD *)(v54 + 4);
            goto LABEL_65;
          }
        }
LABEL_88:
        (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v63);
        if ( v39 )
          (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v60);
        if ( v40 )
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v64);
        break;
      }
      (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v60);
      v15 = v67;
      v54 = 0LL;
      v75 = 1;
    }
    if ( (a6 & 0x40) == 0 )
      goto LABEL_70;
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(a4 + 8))(a4, (unsigned int)v19, v59, v18);
    if ( !v23 )
      goto LABEL_86;
    v24 = *(_BYTE *)(v23 + 12);
    if ( (v24 & 2) != 0 )
      v25 = 1;
    else
      v25 = ((v24 & 1) == 0) | 2;
    if ( v25 <= v57 )
    {
      if ( v25 <= (int)(v14[3] << 29) >> 29 )
      {
        (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v59);
        goto LABEL_5;
      }
      (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v59);
LABEL_70:
      v22 = CmpCopyKeyPartial(a4, (unsigned int)v19, BugCheckParameter2, v14[1], a6 | 4u, v52, 2u);
      if ( v22 == -1 )
        goto LABEL_86;
      v42 = 1;
      if ( (v14[4] & 2) != 0 )
      {
LABEL_74:
        if ( !CmpAddSubKeyEx(BugCheckParameter2, v14[1], v22, v67[(v19 >> 31) + 5]) )
          goto LABEL_86;
        v62[1] = 0;
        v62[0] = -1;
        v68[0] = -1;
        v47 = v14[1];
        v68[1] = 0;
        v48 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v47,
                v62);
        if ( !v48 )
          goto LABEL_86;
        v49 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v22,
                v68);
        if ( !v49 )
        {
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v62);
          goto LABEL_86;
        }
        v50 = *(_WORD *)(v49 + 72);
        if ( (*(_BYTE *)(v49 + 2) & 0x20) != 0 )
          v50 *= 2;
        if ( (unsigned __int16)*(_DWORD *)(v48 + 52) < (unsigned int)v50 )
          *(_WORD *)(v48 + 52) = v50;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v68);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v62);
        if ( !v76 || !v75 )
          goto LABEL_66;
        if ( !(unsigned __int8)CmpMarkKeyParentDirty(BugCheckParameter2) )
          goto LABEL_86;
        v43 = v55;
        v61 = v55;
        v76 = 0;
        goto LABEL_67;
      }
      if ( HvpMarkCellDirty(BugCheckParameter2, v14[1], 0) )
      {
        *((_BYTE *)v14 + 16) |= 2u;
        goto LABEL_74;
      }
LABEL_86:
      v39 = v54;
LABEL_87:
      v40 = 0LL;
      goto LABEL_88;
    }
    *((_BYTE *)v14 + 16) |= 1u;
    (*(void (__fastcall **)(__int64, _DWORD *))(a4 + 16))(a4, v59);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  LOBYTE(PoolWithTag) = HIBYTE(v53);
  return (char)PoolWithTag;
}
