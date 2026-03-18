/*
 * XREFs of CmMoveKey @ 0x140654448
 * Callers:
 *     NtCompactKeys @ 0x14064FE10 (NtCompactKeys.c)
 * Callees:
 *     CmpMarkKeyDirty @ 0x14042C620 (CmpMarkKeyDirty.c)
 *     CmpRebuildKcbCache @ 0x1404484A8 (CmpRebuildKcbCache.c)
 *     CmpCleanUpSubKeyInfo @ 0x140448E64 (CmpCleanUpSubKeyInfo.c)
 *     CmpFreeKeyByCell @ 0x140449FBC (CmpFreeKeyByCell.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     CmpDuplicateKey @ 0x140656794 (CmpDuplicateKey.c)
 *     CmpUpdateParentForEachSon @ 0x14065B4C4 (CmpUpdateParentForEachSon.c)
 */

__int64 __fastcall CmMoveKey(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // esi
  __int64 v3; // r12
  bool v4; // zf
  unsigned int v6; // r15d
  ULONG_PTR v7; // rdi
  __int64 v8; // r14
  int v9; // ebx
  __int64 v10; // rdx
  _WORD *v11; // rbx
  int *v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // r13
  _WORD *v15; // rax
  _WORD *v16; // r13
  __int64 v17; // rsi
  __int16 v18; // ax
  unsigned int v19; // ecx
  unsigned int v20; // esi
  _WORD *v21; // rax
  __int64 v22; // rbx
  unsigned int v23; // ecx
  _DWORD *v24; // rax
  _DWORD *v25; // rax
  unsigned int v26; // eax
  unsigned int *v27; // rsi
  unsigned int v28; // ebx
  unsigned int v29; // ecx
  _DWORD *v30; // rax
  unsigned int v31; // r12d
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  _WORD *v38; // r14
  unsigned int j; // r15d
  _DWORD *v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rdx
  _WORD *v43; // rsi
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned int i; // ebx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r9
  int v50; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v51; // [rsp+24h] [rbp-34h]
  int v52; // [rsp+28h] [rbp-30h]
  int v53; // [rsp+2Ch] [rbp-2Ch] BYREF
  unsigned int *v54; // [rsp+30h] [rbp-28h]
  __int64 v55; // [rsp+38h] [rbp-20h]
  _WORD *v56; // [rsp+40h] [rbp-18h]
  __int64 v57; // [rsp+48h] [rbp-10h]
  int v58; // [rsp+A0h] [rbp+48h] BYREF
  int v59; // [rsp+A8h] [rbp+50h] BYREF
  int v60; // [rsp+B0h] [rbp+58h] BYREF
  int v61; // [rsp+B8h] [rbp+60h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = 0;
  v50 = -1;
  v59 = -1;
  v3 = 0LL;
  v53 = -1;
  v61 = -1;
  v58 = -1;
  v60 = -1;
  v4 = (*(_DWORD *)(v1 + 4) & 0x20000) == 0;
  v52 = -1;
  v54 = 0LL;
  v57 = v1;
  v56 = 0LL;
  if ( !v4 )
    return (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
  v6 = *(_DWORD *)(v1 + 40);
  v7 = *(_QWORD *)(v1 + 32);
  if ( (v6 & 0x80000000) != 0 )
    return 0LL;
  if ( v6 == *(_DWORD *)(*(_QWORD *)(v7 + 64) + 36LL) )
    return 3221225485LL;
  v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, v6, &v50);
  if ( v8 )
  {
    if ( !CmpMarkKeyDirty(v7, v6, 1) )
    {
LABEL_10:
      v9 = -1073741443;
LABEL_77:
      (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v50);
      return (unsigned int)v9;
    }
    if ( (*(_BYTE *)(v8 + 2) & 0x10) != 0 )
    {
      v9 = -1073741811;
      goto LABEL_77;
    }
    v10 = *(unsigned int *)(v8 + 28);
    if ( (_DWORD)v10 != -1 )
    {
      v11 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(v7 + 8))(v7, v10, &v58);
      if ( !v11 )
      {
LABEL_15:
        v9 = -1073741670;
        goto LABEL_77;
      }
      if ( !HvpMarkCellDirty(v7, *(unsigned int *)(v8 + 28), 0, 0LL) )
        goto LABEL_17;
      if ( *v11 == 26994 && v11[1] )
      {
        while ( HvpMarkCellDirty(v7, *(unsigned int *)&v11[2 * v2 + 2], 0, 0LL) )
        {
          if ( ++v2 >= (unsigned int)(unsigned __int16)v11[1] )
            goto LABEL_22;
        }
LABEL_17:
        v9 = -1073741443;
        v12 = &v58;
LABEL_76:
        (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, v12);
        goto LABEL_77;
      }
LABEL_22:
      (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v58);
    }
    v13 = *(_DWORD *)(v8 + 16);
    v55 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, v13, &v59);
    v14 = v55;
    if ( !v55 )
      goto LABEL_15;
    if ( !HvpMarkCellDirty(v7, v13, 0, 0LL) )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v59);
      goto LABEL_10;
    }
    v15 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, *(unsigned int *)(v14 + 28), &v61);
    v16 = v15;
    if ( !v15 )
    {
LABEL_27:
      v9 = -1073741670;
LABEL_28:
      v17 = v55;
      goto LABEL_70;
    }
    v18 = *v15;
    if ( v18 == 26994 )
    {
      v19 = 0;
      v51 = 0;
      if ( v16[1] )
      {
        while ( 1 )
        {
          v20 = *(_DWORD *)&v16[2 * v19 + 2];
          v21 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, v20, &v60);
          v56 = v21;
          if ( !v21 )
            goto LABEL_27;
          v22 = 0LL;
          v23 = (unsigned __int16)v21[1];
          if ( ((*v21 - 26220) & 0xFDFF) != 0 )
          {
            if ( !v21[1] )
              goto LABEL_48;
            v24 = v21 + 2;
            while ( *v24 != v6 )
            {
              v22 = (unsigned int)(v22 + 1);
              ++v24;
              if ( (unsigned int)v22 >= v23 )
                goto LABEL_48;
            }
            if ( !HvpMarkCellDirty(v7, v20, 0, 0LL) )
              goto LABEL_51;
            v3 = (__int64)&v56[2 * v22 + 2];
          }
          else
          {
            if ( !v21[1] )
              goto LABEL_48;
            v25 = v21 + 2;
            while ( *v25 != v6 )
            {
              v22 = (unsigned int)(v22 + 1);
              v25 += 2;
              if ( (unsigned int)v22 >= v23 )
                goto LABEL_48;
            }
            if ( !HvpMarkCellDirty(v7, v20, 0, 0LL) )
            {
LABEL_51:
              v9 = -1073741443;
              goto LABEL_28;
            }
            v3 = (__int64)&v56[4 * v22 + 2];
          }
          v54 = (unsigned int *)v3;
LABEL_48:
          if ( !v3 )
          {
            (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v60);
            v56 = 0LL;
            v19 = v51 + 1;
            v26 = (unsigned __int16)v16[1];
            v51 = v19;
            if ( v19 < v26 )
              continue;
          }
          v27 = v54;
          goto LABEL_58;
        }
      }
      goto LABEL_57;
    }
    v28 = 0;
    v29 = (unsigned __int16)v16[1];
    if ( ((v18 - 26220) & 0xFDFF) != 0 )
    {
      if ( v16[1] )
      {
        v30 = v16 + 2;
        while ( *v30 != v6 )
        {
          ++v28;
          ++v30;
          if ( v28 >= v29 )
            goto LABEL_57;
        }
        v17 = v55;
        if ( HvpMarkCellDirty(v7, *(unsigned int *)(v55 + 28), 0, 0LL) )
        {
          v27 = (unsigned int *)&v16[2 * v28 + 2];
          goto LABEL_58;
        }
LABEL_87:
        v9 = -1073741443;
        goto LABEL_70;
      }
    }
    else if ( v16[1] )
    {
      v40 = v16 + 2;
      while ( *v40 != v6 )
      {
        ++v28;
        v40 += 2;
        if ( v28 >= v29 )
          goto LABEL_57;
      }
      v17 = v55;
      if ( HvpMarkCellDirty(v7, *(unsigned int *)(v55 + 28), 0, 0LL) )
      {
        v27 = (unsigned int *)&v16[4 * v28 + 2];
        goto LABEL_58;
      }
      goto LABEL_87;
    }
LABEL_57:
    v27 = 0LL;
LABEL_58:
    (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v59);
    v16 = 0LL;
    (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v61);
    v9 = CmpDuplicateKey(v7);
    if ( v9 < 0 )
    {
LABEL_72:
      if ( v56 )
        (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v60);
      if ( !v16 )
        goto LABEL_77;
      v12 = &v61;
      goto LABEL_76;
    }
    v31 = v52;
    if ( (unsigned __int8)CmpUpdateParentForEachSon(v7) )
    {
      v41 = v57;
      *v27 = v31;
      CmpCleanUpSubKeyInfo(*(_QWORD *)(v41 + 72));
      *(_DWORD *)(v41 + 40) = v31;
      CmpRebuildKcbCache(v41);
      v42 = *(unsigned int *)(v8 + 28);
      if ( (_DWORD)v42 != -1 )
      {
        v43 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(v7 + 8))(v7, v42, &v58);
        if ( *v43 == 26994 )
        {
          for ( i = 0; i < (unsigned __int16)v43[1]; HvFreeCell(v7, *(unsigned int *)&v43[2 * i++ + 2], v44, v45) )
            ;
        }
        (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v58);
        HvFreeCell(v7, *(unsigned int *)(v8 + 28), v47, v48);
      }
      *(_QWORD *)(v8 + 20) = 0LL;
      (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v50);
      CmpFreeKeyByCell(v7, v6, 0, v49);
      return 0LL;
    }
    v9 = -1073741670;
    v32 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, v31, &v53);
    v34 = v32;
    if ( v32 )
    {
      v35 = *(unsigned int *)(v32 + 28);
      if ( (_DWORD)v35 != -1 )
      {
        v38 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(v7 + 8))(v7, v35, &v58);
        if ( v38 )
        {
          if ( *v38 == 26994 )
          {
            for ( j = 0; j < (unsigned __int16)v38[1]; HvFreeCell(v7, *(unsigned int *)&v38[2 * j++ + 2], v36, v37) )
              ;
          }
          (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v58);
        }
        HvFreeCell(v7, *(unsigned int *)(v34 + 28), v36, v37);
      }
      *(_QWORD *)(v34 + 20) = 0LL;
      (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v53);
    }
    CmpFreeKeyByCell(v7, v31, 0, v33);
    v17 = 0LL;
LABEL_70:
    if ( v17 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v59);
    goto LABEL_72;
  }
  return (unsigned int)-1073741670;
}
