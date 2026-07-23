/*
 * XREFs of CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B3650
 * Callers:
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1401B3B28 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401B5B60 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     HvMarkCellDirty @ 0x1403FC340 (HvMarkCellDirty.c)
 *     CmpFreeKeyByCell @ 0x1403FF488 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x140400540 (CmpFreeValue.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     CmpAddSubKey @ 0x14049ADF8 (CmpAddSubKey.c)
 *     CmpCopyKeyPartial @ 0x1404CDE74 (CmpCopyKeyPartial.c)
 *     CmpCopyCell @ 0x1404CE184 (CmpCopyCell.c)
 *     CmpValueEnumStackGetCurrentValueCell @ 0x140581CC8 (CmpValueEnumStackGetCurrentValueCell.c)
 *     CmpCopyValue @ 0x140608A14 (CmpCopyValue.c)
 *     CmpAddValueToList @ 0x14060B3E8 (CmpAddValueToList.c)
 *     CmpValueEnumStackAdvance @ 0x14060B534 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x14060B640 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14060B698 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpValueEnumStackInitialize @ 0x14060B6C0 (CmpValueEnumStackInitialize.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14060BD98 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpPromoteSingleKeyFromKeyNodeStacks(
        __int16 *a1,
        __int64 a2,
        char a3,
        ULONG_PTR *a4,
        unsigned int *a5,
        __int64 *a6,
        __int64 a7)
{
  unsigned int v8; // r12d
  ULONG_PTR v9; // rdi
  __int64 v10; // r15
  ULONG_PTR *v11; // rsi
  __int64 v12; // r14
  __int16 v13; // r13
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 EntryAtLayerHeight; // rax
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r8
  ULONG_PTR *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // ebx
  unsigned int v26; // eax
  unsigned int v27; // esi
  __int64 v28; // rax
  char v29; // al
  __int64 v30; // r9
  __int16 v31; // r13
  __int64 v32; // rsi
  _QWORD *v33; // rbx
  __int64 v34; // rax
  unsigned int v35; // eax
  int v36; // eax
  unsigned int v37; // r12d
  unsigned int CurrentValueCell; // eax
  __int64 v39; // r10
  unsigned int v40; // r13d
  int v41; // eax
  int v42; // eax
  char v43; // al
  __int64 v44; // rcx
  unsigned int v45; // esi
  int v46; // eax
  __int64 v47; // rax
  char v48; // al
  __int64 v49; // rcx
  unsigned int *v50; // rsi
  ULONG_PTR v51; // rdx
  unsigned int v54; // [rsp+44h] [rbp-BCh]
  __int64 v55; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v56; // [rsp+50h] [rbp-B0h]
  unsigned int v57; // [rsp+54h] [rbp-ACh]
  __int64 v58; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v59; // [rsp+60h] [rbp-A0h] BYREF
  int v60; // [rsp+64h] [rbp-9Ch]
  int v61; // [rsp+68h] [rbp-98h]
  __int64 v62; // [rsp+70h] [rbp-90h]
  __int64 v63; // [rsp+78h] [rbp-88h]
  ULONG_PTR *v64; // [rsp+80h] [rbp-80h]
  unsigned int *v65; // [rsp+88h] [rbp-78h]
  __int64 *v66; // [rsp+90h] [rbp-70h]
  ULONG_PTR *v67; // [rsp+98h] [rbp-68h]
  __int64 v68; // [rsp+A0h] [rbp-60h]
  _BYTE v69[6]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 v70; // [rsp+B6h] [rbp-4Ah]

  v65 = a5;
  v8 = -1;
  v9 = 0LL;
  v68 = a7;
  v10 = 0LL;
  v66 = a6;
  v55 = 0xFFFFFFFFLL;
  v11 = 0LL;
  v67 = a4;
  v63 = a2;
  v54 = -1;
  CmpValueEnumStackInitialize(v69);
  v12 = 0LL;
  v58 = 0LL;
  v62 = 0LL;
  v13 = *a1;
  LODWORD(v58) = -1;
  v61 = -1;
  v59 = 0;
  v60 = -1;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v13, v14, v15);
  v19 = 0LL;
  v64 = (ULONG_PTR *)EntryAtLayerHeight;
  v20 = (ULONG_PTR *)EntryAtLayerHeight;
  if ( v13 < 0 )
    goto LABEL_13;
  v21 = v63;
  while ( 1 )
  {
    v22 = CmpKeyNodeStackGetEntryAtLayerHeight(v21, v17, v19, v18);
    if ( *(_QWORD *)(v22 + 16) != v19 )
      break;
    LOWORD(v17) = v17 - 1;
    if ( (v17 & 0x8000u) != 0LL )
      goto LABEL_7;
  }
  v11 = (ULONG_PTR *)v22;
LABEL_7:
  if ( (_WORD)v17 == v13 )
  {
LABEL_13:
    v9 = *v11;
    v27 = *((_DWORD *)v11 + 2);
  }
  else
  {
    if ( !(unsigned __int8)HvMarkCellDirty(*v20, *((unsigned int *)v20 + 2), v19) )
    {
LABEL_9:
      v25 = -1073741443;
      goto LABEL_64;
    }
    v26 = CmpCopyKeyPartial(*v11, *((unsigned int *)v11 + 2), *v20, *((unsigned int *)v20 + 2), 160);
    v54 = v26;
    if ( v26 == -1 )
      goto LABEL_11;
    v9 = *v20;
    v27 = v26;
  }
  v57 = v27;
  v56 = v27 >> 31;
  v28 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v9 + 8))(v9, v27, &v55);
  v23 = 0LL;
  v10 = v28;
  if ( !a3 )
    goto LABEL_45;
  if ( *(char *)(v28 + 13) < 0 )
  {
    v29 = HvMarkCellDirty(v9, v27, 0LL);
    v24 = 0LL;
    if ( !v29 )
      goto LABEL_9;
    v31 = v13 - 1;
    if ( v31 >= 0 )
    {
      v32 = v63;
      do
      {
        do
        {
          v33 = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(v32, (unsigned __int16)v31, v24, v30);
          v34 = v33[2];
        }
        while ( !v34 );
      }
      while ( *(char *)(v34 + 13) < 0 );
      v27 = v57;
      if ( *(_WORD *)(v34 + 74) != (_WORD)v24 )
      {
        v35 = CmpCopyCell(*v33, *(unsigned int *)(v34 + 48), v9, v56);
        v23 = v35;
        if ( v35 == -1 )
        {
LABEL_11:
          v25 = -1073741670;
          goto LABEL_64;
        }
        *(_WORD *)(v10 + 74) = *(_WORD *)(v33[2] + 74LL);
        *(_DWORD *)(v10 + 48) = v35;
      }
    }
    *(_BYTE *)(v10 + 13) &= ~0x80u;
  }
  v25 = CmpValueEnumStackStartFromKeyNodeStack(v69, v63);
  if ( v25 >= 0 )
  {
    v36 = CmpValueEnumStackAdvance(v69);
    v23 = 0LL;
    v25 = v36;
    if ( v36 >= 0 )
    {
      v37 = v56;
      while ( 1 )
      {
        CmpValueEnumStackGetEntryAtLayerHeight(v69, v70);
        CurrentValueCell = CmpValueEnumStackGetCurrentValueCell(v69);
        if ( v39 != v9 )
        {
          v40 = CmpCopyValue(v39, CurrentValueCell, v9, v37);
          v41 = CmpAddValueToList(v9, v40, v12, 1, (__int64)&v59);
          v12 = v59;
          v25 = v41;
          if ( v41 < 0 )
          {
            v8 = v60;
            goto LABEL_54;
          }
          v61 = -1;
        }
        v42 = CmpValueEnumStackAdvance(v69);
        v23 = 0LL;
        v25 = v42;
        if ( v42 < 0 )
        {
          v8 = v60;
          break;
        }
      }
    }
    if ( v25 != -2147483622 )
      goto LABEL_58;
    if ( (_DWORD)v12 )
    {
      v43 = HvMarkCellDirty(v9, v27, 0LL);
      v23 = 0LL;
      if ( v43 && (!*(_DWORD *)(v10 + 36) || (unsigned __int8)HvMarkCellDirty(v9, *(unsigned int *)(v10 + 40), 0LL)) )
      {
        v44 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v9 + 8))(v9, v8, &v58);
        v62 = v44;
        v45 = 0;
        while ( 1 )
        {
          v46 = CmpAddValueToList(v9, *(_DWORD *)(v44 + 4LL * v45), *(_DWORD *)(v10 + 36), v56, v10 + 36);
          v23 = 0LL;
          v25 = v46;
          if ( v46 < 0 )
            break;
          v44 = v62;
          v47 = v45++;
          *(_DWORD *)(v62 + 4 * v47) = -1;
          if ( v45 >= (unsigned int)v12 )
          {
            (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v9 + 16))(v9, &v58);
            v62 = 0LL;
            HvFreeCell(v9, v8);
            v27 = v57;
            v23 = 0LL;
            v12 = 0LL;
            v8 = -1;
            goto LABEL_44;
          }
        }
LABEL_56:
        if ( v62 )
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v9 + 16))(v9, &v58);
        goto LABEL_58;
      }
      v25 = -1073741443;
LABEL_58:
      if ( v8 != -1 )
      {
        v50 = (unsigned int *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v9 + 8))(v9, v8, &v58);
        if ( (_DWORD)v12 )
        {
          do
          {
            v51 = *v50;
            if ( (_DWORD)v51 != -1 )
              CmpFreeValue(v9, v51);
            ++v50;
            --v12;
          }
          while ( v12 );
        }
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v9 + 16))(v9, &v58);
        HvFreeCell(v9, v8);
      }
      goto LABEL_64;
    }
LABEL_44:
    v20 = v64;
LABEL_45:
    if ( v54 != -1 )
    {
      v48 = CmpAddSubKey(v9, *((unsigned int *)v20 + 2), v54);
      v23 = 0LL;
      if ( !v48 )
      {
        v25 = -1073741670;
        goto LABEL_58;
      }
      v54 = -1;
    }
    if ( v65 )
      *v65 = v27;
    if ( v66 )
    {
      v49 = v68;
      *v66 = v10;
      v10 = 0LL;
      *v67 = v9;
      *(_DWORD *)v49 = v55;
      *(_WORD *)(v49 + 4) = WORD2(v55);
      v55 = 0xFFFFFFFFLL;
    }
    v40 = v61;
    v25 = 0;
LABEL_54:
    if ( v40 == -1 )
      goto LABEL_58;
    CmpFreeValue(v9, v40);
    v23 = 0LL;
    goto LABEL_56;
  }
LABEL_64:
  CmpValueEnumStackCleanup(v69, v23, v24);
  if ( v10 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v9 + 16))(v9, &v55);
  if ( v54 != -1 )
    CmpFreeKeyByCell(*v64, v54);
  return (unsigned int)v25;
}
