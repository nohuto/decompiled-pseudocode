/*
 * XREFs of xxxInsertMenuItem @ 0x1C00551A4
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C0054FE0 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     MNFreeItem @ 0x1C0054F24 (MNFreeItem.c)
 *     MNIspItemValid @ 0x1C0054FCC (MNIspItemValid.c)
 *     MNGetPopupFromMenu @ 0x1C005573C (MNGetPopupFromMenu.c)
 *     MNGetpItemIndex @ 0x1C00557A0 (MNGetpItemIndex.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00557DC (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     DesktopAlloc @ 0x1C0055B70 (DesktopAlloc.c)
 *     DwmAsyncChildStyleChange @ 0x1C005B79C (DwmAsyncChildStyleChange.c)
 *     DwmGetClassStyle @ 0x1C005B8D0 (DwmGetClassStyle.c)
 *     MNLookUpItem @ 0x1C00942A8 (MNLookUpItem.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     MakeMenuRtoL @ 0x1C023B164 (MakeMenuRtoL.c)
 *     xxxMNSetGapState @ 0x1C023B714 (xxxMNSetGapState.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@I@Z @ 0x1C023C2E4 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C023C3A0 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxInsertMenuItem(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        struct tagMENUITEMINFOW *a4,
        struct _UNICODE_STRING *a5)
{
  __int64 v5; // r13
  unsigned int v6; // r14d
  struct tagMENUSTATE *v7; // r15
  unsigned int v8; // r12d
  __int64 v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v12; // r12
  int v13; // ecx
  _QWORD *v14; // rdi
  __int64 v15; // r10
  int v16; // r11d
  __int64 v17; // rcx
  unsigned int v18; // r9d
  __int64 v19; // r8
  _QWORD *v20; // rcx
  bool v21; // zf
  unsigned int v22; // eax
  __int64 v23; // rcx
  void *v24; // r12
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  signed int v29; // r14d
  unsigned int v30; // eax
  signed int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // rax
  bool v37; // sf
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  void *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // [rsp+30h] [rbp-38h] BYREF
  struct tagMENUSTATE *v44; // [rsp+38h] [rbp-30h] BYREF
  _QWORD *v45; // [rsp+40h] [rbp-28h] BYREF
  __int64 v46; // [rsp+48h] [rbp-20h] BYREF
  __int64 v47; // [rsp+50h] [rbp-18h]
  int v48; // [rsp+B0h] [rbp+48h] BYREF
  signed int v49; // [rsp+B8h] [rbp+50h]
  unsigned int v50; // [rsp+C0h] [rbp+58h]
  struct tagMENUITEMINFOW *v51; // [rsp+C8h] [rbp+60h]

  v51 = a4;
  v50 = a3;
  v5 = 0LL;
  v6 = a2;
  v49 = 0;
  v7 = 0LL;
  v48 = 0;
  v8 = a3;
  v44 = 0LL;
  v9 = a1;
  v10 = 1;
  if ( (_DWORD)a2 == -1 )
  {
    v14 = 0LL;
    goto LABEL_26;
  }
  v45 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v43 = 0LL;
  if ( a1 && (v13 = *(_DWORD *)(a1 + 52)) != 0 )
  {
    if ( v50 )
    {
      if ( (unsigned int)a2 < v13 )
      {
        v11 = v9;
        v43 = v9;
        v14 = (_QWORD *)(*(_QWORD *)(v9 + 80) + 152LL * (unsigned int)a2);
        goto LABEL_23;
      }
LABEL_7:
      v14 = 0LL;
      goto LABEL_8;
    }
    v15 = *(_QWORD *)(v9 + 80);
    v16 = 0;
    if ( v13 <= 0 )
      goto LABEL_7;
    do
    {
      v17 = *(_QWORD *)(v15 + 16);
      if ( v17 )
      {
        if ( *(_DWORD *)(v15 + 8) == v6 )
        {
          v12 = v9;
          v45 = (_QWORD *)v15;
        }
        v14 = (_QWORD *)MNLookUpItem(v17, v6, 0LL, &v43);
        if ( v14 )
        {
          v11 = v43;
LABEL_16:
          a4 = v51;
          goto LABEL_23;
        }
      }
      else if ( *(_DWORD *)(v15 + 8) == v6 )
      {
        v11 = v9;
        v43 = v9;
        v14 = (_QWORD *)v15;
        goto LABEL_16;
      }
      ++v16;
      v15 += 152LL;
    }
    while ( v16 < *(_DWORD *)(v9 + 52) );
    a4 = v51;
    if ( !v12 )
      goto LABEL_7;
    v14 = v45;
    v11 = v12;
    v43 = v12;
  }
  else
  {
    v14 = 0LL;
  }
LABEL_23:
  if ( v14 )
  {
    v9 = v11;
    goto LABEL_9;
  }
LABEL_8:
  v6 = -1;
LABEL_9:
  v8 = v50;
LABEL_26:
  if ( (*(_DWORD *)(v9 + 40) & 1) != 0
    || !*(_DWORD *)(v9 + 52)
    || (*((_DWORD *)a4 + 1) & 0x80u) != 0 && (unsigned __int64)(*((_QWORD *)a4 + 9) - 1LL) <= 6 )
  {
    goto LABEL_44;
  }
  a2 = v6;
  v18 = v6;
  if ( v14 && !v8 )
    a2 = (unsigned int)((_DWORD)v14 - *(_DWORD *)(v9 + 80)) / 0x98uLL;
  if ( !(_DWORD)a2 )
  {
    v19 = *(_QWORD *)(v9 + 80);
    if ( *(_QWORD *)(v19 + 104) != 1LL )
      goto LABEL_44;
    v6 = 1;
    v50 = 1;
    goto LABEL_42;
  }
  if ( (_DWORD)a2 == -1 )
    LODWORD(a2) = *(_DWORD *)(v9 + 52);
  v19 = *(_QWORD *)(v9 + 80);
  a2 = (unsigned int)(a2 - 1);
  if ( (_DWORD)a2 )
  {
    v20 = (_QWORD *)(v19 + 152LL * (unsigned int)a2 + 104);
    do
    {
      if ( (unsigned __int64)(*v20 - 1LL) > 5 )
        break;
      v20 -= 19;
      v50 = 1;
      v6 = a2;
      v21 = (_DWORD)a2 == 1;
      a2 = (unsigned int)(a2 - 1);
    }
    while ( !v21 );
LABEL_42:
    if ( v6 != v18 )
      v14 = (_QWORD *)(v19 + 152LL * v6);
  }
LABEL_44:
  v22 = *(_DWORD *)(v9 + 48);
  if ( *(_DWORD *)(v9 + 52) >= v22 )
  {
    v23 = *(_QWORD *)(v9 + 24);
    if ( *(_QWORD *)(v9 + 80) )
    {
      v24 = (void *)DesktopAlloc(v23, 152 * (v22 + 8), 7LL);
      if ( !v24 )
        return 0LL;
      memmove(v24, *(const void **)(v9 + 80), 152LL * *(unsigned int *)(v9 + 48));
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)(v9 + 24) + 120LL), 0, *(PVOID *)(v9 + 80));
    }
    else
    {
      v24 = (void *)DesktopAlloc(v23, 1216LL, 7LL);
    }
    if ( !v24 )
      return 0LL;
    *(_DWORD *)(v9 + 48) += 8;
    *(_QWORD *)(v9 + 80) = v24;
    if ( v6 != -1 )
    {
      v14 = (_QWORD *)MNLookUpItem(v9, v6, v50, &v43);
      if ( v9 != v43 )
        return 0LL;
    }
  }
  v26 = gptiCurrent;
  v46 = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = &v46;
  v47 = v9;
  ++*(_DWORD *)(v9 + 8);
  if ( !v14 )
    goto LABEL_70;
  v5 = MNGetPopupFromMenu(v9, &v44);
  if ( !v5 )
  {
    v7 = v44;
LABEL_70:
    v29 = v49;
    goto LABEL_71;
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v45);
  v27 = MNGetpItemIndex(v9, v14);
  v28 = *(_DWORD *)(v5 + 80);
  v29 = v27;
  if ( v28 >= v27 )
    *(_DWORD *)(v5 + 80) = v28 + 1;
  if ( (*(_DWORD *)v5 & 0x20) != 0 )
  {
    v30 = *(_DWORD *)(v5 + 84);
    if ( v30 >= v29 )
      *(_DWORD *)(v5 + 84) = v30 + 1;
  }
  v7 = v44;
  if ( *((_QWORD *)v44 + 8) == *(_QWORD *)(v5 + 16) )
  {
    v31 = *((_DWORD *)v44 + 18);
    if ( v31 >= v29 )
      *((_DWORD *)v44 + 18) = v31 + 1;
  }
  if ( *((_QWORD *)v7 + 10) == *(_QWORD *)(v5 + 16) )
  {
    v32 = *((unsigned int *)v7 + 22);
    if ( (int)v32 >= v29 )
    {
      *((_DWORD *)v7 + 22) = v32 + 1;
      if ( (_DWORD)v32 == v29 )
      {
        v33 = *((unsigned int *)v7 + 23);
        if ( (v33 & 1) != 0 )
          xxxMNSetGapState(*((_QWORD *)v7 + 10), v32, v33, 0LL);
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v45);
LABEL_71:
  v34 = ThreadUnlock1(v26, a2);
  v35 = v34;
  if ( !v34 )
    return 0LL;
  v36 = (unsigned int)++*(_DWORD *)(v34 + 52);
  if ( v14 )
    memmove(v14 + 19, v14, *(_QWORD *)(v35 + 80) + 152LL * (unsigned int)(v36 - 1) - (_QWORD)v14);
  else
    v14 = (_QWORD *)(152 * v36 + *(_QWORD *)(v35 + 80) - 152LL);
  *((_DWORD *)v14 + 28) = -1;
  v37 = gihmodUserApiHook < 0;
  *v14 = 0LL;
  *((_DWORD *)v14 + 2) = 0;
  v14[2] = 0LL;
  v14[3] = 0LL;
  v14[4] = 0LL;
  *((_DWORD *)v14 + 12) = 0;
  v14[8] = 0LL;
  v14[9] = 0LL;
  v14[10] = 0LL;
  v14[13] = 0LL;
  v14[5] = 0LL;
  v14[7] = 0LL;
  if ( !v37 && (*(_DWORD *)(v35 + 40) & 0x800) != 0 )
    memset(v14 + 15, 0, 0x20uLL);
  if ( (unsigned int)SetLPITEMInfoNoRedraw((struct tagMENU *)v35, (struct tagITEM *)v14, v51, a5, &v48) )
  {
    if ( !v48 )
      goto LABEL_100;
    v46 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v46;
    v47 = v35;
    ++*(_DWORD *)(v35 + 8);
    v38 = MNGetPopupFromMenu(v35, 0LL);
    if ( !v38 || (xxxMNUpdateShownMenu(v38, v14, 1LL), MNIspItemValid(v35, (__int64)v14)) )
    {
      if ( (*(_DWORD *)(v35 + 40) & 0x100) != 0 && *((_DWORD *)v14 + 2) == 61536 )
      {
        v40 = *(_QWORD *)(v35 + 72);
        if ( v40 )
        {
          if ( (unsigned int)IsWindowDesktopComposed(v40) )
          {
            DwmGetClassStyle(*(_QWORD *)(v35 + 72));
            v41 = (void *)ReferenceDwmApiPort();
            DwmAsyncChildStyleChange(v41);
          }
        }
      }
    }
    v35 = ThreadUnlock1(v40, v39);
    if ( v35 )
    {
LABEL_100:
      if ( (unsigned int)MNGetpItemIndex(v35, v14) != -1
        && ((*(_DWORD *)(v35 + 40) & 0x20) != 0 || (*(_DWORD *)v14 & 0x2004) == 0x2000) )
      {
        *(_DWORD *)v14 |= 0x6000u;
        v42 = v14[2];
        if ( v42 )
          MakeMenuRtoL(v42, 1LL);
      }
      return v10;
    }
  }
  else
  {
    if ( v5 )
      MNDeleteAdjustIndexes(v7, (struct tagPOPUPMENU *)v5, v29);
    MNFreeItem((struct tagMENU *)v35, (__int64)v14, 1);
    memmove(v14, v14 + 19, (unsigned int)(152 * *(_DWORD *)(v35 + 52) - (_DWORD)v14 - 152 + *(_DWORD *)(v35 + 80)));
    --*(_DWORD *)(v35 + 52);
  }
  return 0;
}
