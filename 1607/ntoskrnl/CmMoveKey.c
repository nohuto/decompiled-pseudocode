/*
 * XREFs of CmMoveKey @ 0x1405FD05C
 * Callers:
 *     NtCompactKeys @ 0x1405F94B4 (NtCompactKeys.c)
 * Callees:
 *     CmpRebuildKcbCache @ 0x1403FC920 (CmpRebuildKcbCache.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403FCAE8 (CmpCleanUpSubKeyInfo.c)
 *     CmpMarkKeyDirty @ 0x1403FF10C (CmpMarkKeyDirty.c)
 *     CmpFreeKeyByCell @ 0x1403FF488 (CmpFreeKeyByCell.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpDuplicateKey @ 0x1405FECC0 (CmpDuplicateKey.c)
 *     CmpFreeIndexByCell @ 0x14060A00C (CmpFreeIndexByCell.c)
 *     CmpUpdateParentForEachSon @ 0x14060B310 (CmpUpdateParentForEachSon.c)
 */

__int64 __fastcall CmMoveKey(__int64 a1)
{
  unsigned __int64 v2; // r15
  ULONG_PTR v3; // rsi
  unsigned int v5; // r14d
  ULONG_PTR v6; // rdi
  __int64 v7; // r12
  int v8; // ebx
  __int64 v9; // rdx
  _WORD *v10; // rbx
  int *v11; // rdx
  int v12; // esi
  unsigned int v13; // ebx
  _DWORD *v14; // rsi
  _WORD *v15; // rax
  __int64 v16; // r8
  _WORD *v17; // r13
  __int64 v18; // rsi
  __int16 v19; // ax
  unsigned int v20; // esi
  _WORD *v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // ebx
  _DWORD *v24; // rax
  __int64 v25; // rax
  unsigned int v26; // ebx
  _DWORD *v27; // rax
  unsigned int v28; // ebx
  unsigned int v29; // ecx
  _DWORD *v30; // rax
  _DWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdx
  _WORD *v35; // r14
  unsigned int i; // r12d
  ULONG_PTR v37; // rbx
  ULONG_PTR v38; // rdx
  __int64 v39; // [rsp+20h] [rbp-48h]
  _DWORD v40[2]; // [rsp+28h] [rbp-40h] BYREF
  _DWORD v41[2]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v42[2]; // [rsp+38h] [rbp-30h] BYREF
  _DWORD v43[2]; // [rsp+40h] [rbp-28h] BYREF
  _DWORD v44[2]; // [rsp+48h] [rbp-20h] BYREF
  ULONG_PTR v45; // [rsp+50h] [rbp-18h]
  _DWORD *v46; // [rsp+B8h] [rbp+50h]
  _WORD *v47; // [rsp+C0h] [rbp+58h]
  int v48; // [rsp+C8h] [rbp+60h] BYREF
  int v49; // [rsp+CCh] [rbp+64h]

  v43[1] = 0;
  v43[0] = -1;
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v40[0] = -1;
  v44[0] = -1;
  v42[0] = -1;
  v48 = -1;
  v41[0] = -1;
  v45 = v3;
  v40[1] = 0;
  v44[1] = 0;
  v42[1] = 0;
  v49 = 0;
  v41[1] = 0;
  v46 = 0LL;
  v47 = 0LL;
  if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    return (*(_BYTE *)(a1 + 48) & 1) != 0 ? -1073740763 : -1073741444;
  v5 = *(_DWORD *)(v3 + 32);
  v6 = *(_QWORD *)(v3 + 24);
  if ( (v5 & 0x80000000) != 0 )
    return 0LL;
  if ( v5 == *(_DWORD *)(*(_QWORD *)(v6 + 64) + 36LL) )
    return 3221225485LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(v6 + 8))(*(_QWORD *)(v3 + 24), v5, v43);
  if ( !v7 )
    return (unsigned int)-1073741670;
  if ( !CmpMarkKeyDirty(v6, v5, 1) )
  {
LABEL_10:
    v8 = -1073741443;
    goto LABEL_90;
  }
  if ( (*(_BYTE *)(v7 + 2) & 0x10) != 0 )
  {
    v8 = -1073741811;
    goto LABEL_90;
  }
  v9 = *(unsigned int *)(v7 + 28);
  if ( (_DWORD)v9 != -1 )
  {
    v10 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(v6 + 8))(v6, v9, &v48);
    if ( !v10 )
    {
LABEL_15:
      v8 = -1073741670;
      goto LABEL_90;
    }
    if ( !HvpMarkCellDirty(v6, *(unsigned int *)(v7 + 28), 0) )
    {
LABEL_17:
      v8 = -1073741443;
      v11 = &v48;
      goto LABEL_89;
    }
    if ( *v10 == 26994 )
    {
      v12 = 0;
      if ( v10[1] )
      {
        while ( HvpMarkCellDirty(v6, *(unsigned int *)&v10[2 * v12 + 2], 0) )
        {
          if ( ++v12 >= (unsigned int)(unsigned __int16)v10[1] )
            goto LABEL_22;
        }
        goto LABEL_17;
      }
    }
LABEL_22:
    (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v48);
  }
  v13 = *(_DWORD *)(v7 + 16);
  v14 = 0LL;
  v39 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(v6, v13, v40);
  if ( !v39 )
    goto LABEL_15;
  if ( !HvpMarkCellDirty(v6, v13, 0) )
  {
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v40);
    goto LABEL_10;
  }
  v15 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(v6, *(unsigned int *)(v39 + 28), v42);
  v17 = v15;
  if ( !v15 )
    goto LABEL_27;
  v19 = *v15;
  if ( v19 != 26994 )
  {
    v28 = 0;
    v29 = (unsigned __int16)v17[1];
    if ( ((v19 - 26220) & 0xFDFF) != 0 )
    {
      if ( v17[1] )
      {
        v30 = v17 + 2;
        while ( *v30 != v5 )
        {
          ++v28;
          ++v30;
          if ( v28 >= v29 )
            goto LABEL_70;
        }
        v18 = v39;
        if ( HvpMarkCellDirty(v6, *(unsigned int *)(v39 + 28), 0) )
        {
          v14 = &v17[2 * v28 + 2];
LABEL_70:
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64))(v6 + 16))(v6, v40, v16);
          v17 = 0LL;
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v42);
          v8 = CmpDuplicateKey(v6);
          if ( v8 < 0 )
            goto LABEL_85;
          if ( !(unsigned __int8)CmpUpdateParentForEachSon(v6) )
          {
            v8 = -1073741670;
            v32 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(v6 + 8))(v6, 0xFFFFFFFFLL, v44);
            v33 = v32;
            if ( v32 )
            {
              v34 = *(unsigned int *)(v32 + 28);
              if ( (_DWORD)v34 != -1 )
              {
                v35 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(v6 + 8))(v6, v34, &v48);
                if ( v35 )
                {
                  if ( *v35 == 26994 )
                  {
                    for ( i = 0; i < (unsigned __int16)v35[1]; HvFreeCell(v6, *(unsigned int *)&v35[2 * i++ + 2]) )
                      ;
                  }
                  (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, &v48);
                }
                HvFreeCell(v6, *(unsigned int *)(v33 + 28));
              }
              *(_QWORD *)(v33 + 20) = 0LL;
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v44);
            }
            CmpFreeKeyByCell(v6, 0xFFFFFFFFuLL, 0);
            v18 = 0LL;
LABEL_82:
            v2 = (unsigned __int64)v47;
            goto LABEL_83;
          }
          v37 = v45;
          *v14 = -1;
          CmpCleanUpSubKeyInfo(*(_QWORD *)(v37 + 64));
          *(_DWORD *)(v37 + 32) = -1;
          CmpRebuildKcbCache(v37);
          v38 = *(unsigned int *)(v7 + 28);
          if ( (_DWORD)v38 != -1 )
            CmpFreeIndexByCell(v6, v38);
          *(_QWORD *)(v7 + 20) = 0LL;
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v43);
          CmpFreeKeyByCell(v6, v5, 0);
          return 0LL;
        }
        goto LABEL_66;
      }
    }
    else if ( v17[1] )
    {
      v31 = v17 + 2;
      while ( *v31 != v5 )
      {
        ++v28;
        v31 += 2;
        if ( v28 >= v29 )
          goto LABEL_70;
      }
      v18 = v39;
      if ( HvpMarkCellDirty(v6, *(unsigned int *)(v39 + 28), 0) )
      {
        v14 = &v17[4 * v28 + 2];
        goto LABEL_70;
      }
LABEL_66:
      v8 = -1073741443;
      goto LABEL_83;
    }
    v14 = 0LL;
    goto LABEL_70;
  }
  if ( !v17[1] )
  {
    v2 = 0LL;
    goto LABEL_70;
  }
  while ( 1 )
  {
    v20 = *(_DWORD *)&v17[2 * v2 + 2];
    v21 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v6 + 8))(v6, v20, v41);
    v16 = 0LL;
    v47 = v21;
    if ( !v21 )
      break;
    v22 = (unsigned __int16)v21[1];
    if ( ((*v21 - 26220) & 0xFDFF) != 0 )
    {
      v23 = 0;
      if ( !v21[1] )
        goto LABEL_36;
      v24 = v21 + 2;
      while ( *v24 != v5 )
      {
        ++v23;
        ++v24;
        if ( v23 >= v22 )
          goto LABEL_36;
      }
      if ( !HvpMarkCellDirty(v6, v20, 0) )
        goto LABEL_50;
      v25 = (__int64)&v47[2 * v23 + 2];
    }
    else
    {
      v26 = 0;
      if ( !v21[1] )
      {
LABEL_36:
        v25 = (__int64)v46;
        goto LABEL_37;
      }
      v27 = v21 + 2;
      while ( *v27 != v5 )
      {
        ++v26;
        v27 += 2;
        if ( v26 >= v22 )
          goto LABEL_36;
      }
      if ( !HvpMarkCellDirty(v6, v20, 0) )
      {
LABEL_50:
        v18 = v39;
        v8 = -1073741443;
        goto LABEL_82;
      }
      v25 = (__int64)&v47[4 * v26 + 2];
    }
    v46 = (_DWORD *)v25;
LABEL_37:
    if ( !v25 )
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64))(v6 + 16))(v6, v41, v16);
      v2 = (unsigned int)(v2 + 1);
      v47 = 0LL;
      if ( (unsigned int)v2 < (unsigned __int16)v17[1] )
        continue;
    }
    v14 = v46;
    v2 = (unsigned __int64)v47;
    goto LABEL_70;
  }
  v2 = 0LL;
LABEL_27:
  v18 = v39;
  v8 = -1073741670;
LABEL_83:
  if ( v18 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v40);
LABEL_85:
  if ( v2 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v41);
  if ( v17 )
  {
    v11 = v42;
LABEL_89:
    (*(void (__fastcall **)(ULONG_PTR, int *))(v6 + 16))(v6, v11);
  }
LABEL_90:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v6 + 16))(v6, v43);
  return (unsigned int)v8;
}
