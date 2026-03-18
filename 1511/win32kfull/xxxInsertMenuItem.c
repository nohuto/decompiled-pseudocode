/*
 * XREFs of xxxInsertMenuItem @ 0x1C006E9E0
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C006E820 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C006EE50 (MNGetpItemIndex.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006F270 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     MNIsUAHMenu @ 0x1C00707A8 (MNIsUAHMenu.c)
 *     MNLookUpItem @ 0x1C00710A8 (MNLookUpItem.c)
 *     DesktopAlloc @ 0x1C0072310 (DesktopAlloc.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0072348 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C00723EC (MNGetPopupFromMenu.c)
 *     MNFreeItem @ 0x1C0072450 (MNFreeItem.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     MakeMenuRtoL @ 0x1C023B334 (MakeMenuRtoL.c)
 *     xxxMNSetGapState @ 0x1C023B8E4 (xxxMNSetGapState.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@I@Z @ 0x1C023C4B4 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@I@Z.c)
 */

__int64 __fastcall xxxInsertMenuItem(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        struct tagMENUITEMINFOW *a4,
        struct _UNICODE_STRING *a5)
{
  __int64 v5; // r12
  __int64 v6; // r15
  signed int v7; // r13d
  int v8; // r11d
  int v9; // r10d
  unsigned int v10; // r14d
  __int64 v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // rax
  _QWORD *v14; // rbx
  unsigned int v15; // r9d
  __int64 v16; // r8
  _QWORD *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rcx
  void *v20; // r13
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  signed int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // [rsp+30h] [rbp-38h] BYREF
  __int64 v36; // [rsp+38h] [rbp-30h] BYREF
  char v37[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v38; // [rsp+48h] [rbp-20h] BYREF
  __int64 v39; // [rsp+50h] [rbp-18h]
  int v40; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v41; // [rsp+C0h] [rbp+58h]
  struct tagMENUITEMINFOW *v42; // [rsp+C8h] [rbp+60h]

  v42 = a4;
  v41 = a3;
  v5 = 0LL;
  v6 = 0LL;
  v40 = 0;
  v7 = 0;
  v8 = -1;
  v36 = 0LL;
  v9 = a3;
  v10 = a2;
  v11 = a1;
  v12 = 1;
  if ( (_DWORD)a2 == -1 )
  {
    v14 = 0LL;
  }
  else
  {
    v13 = MNLookUpItem(a1, a2, a3, &v35);
    a4 = v42;
    v14 = (_QWORD *)v13;
    if ( v13 )
      v11 = v35;
    else
      v10 = v8;
  }
  if ( (*(_DWORD *)(v11 + 40) & 1) != 0
    || !*(_DWORD *)(v11 + 52)
    || (*((_DWORD *)a4 + 1) & 0x80u) != 0 && (unsigned __int64)(*((_QWORD *)a4 + 9) - 1LL) <= 6 )
  {
    goto LABEL_24;
  }
  a2 = v10;
  v15 = v10;
  if ( v14 && !v9 )
    a2 = (unsigned int)((_DWORD)v14 - *(_DWORD *)(v11 + 80)) / 0x98uLL;
  if ( !(_DWORD)a2 )
  {
    v16 = *(_QWORD *)(v11 + 80);
    if ( *(_QWORD *)(v16 + 104) != 1LL )
      goto LABEL_24;
    v10 = 1;
    v41 = 1;
    goto LABEL_22;
  }
  if ( (_DWORD)a2 == v8 )
    LODWORD(a2) = *(_DWORD *)(v11 + 52);
  v16 = *(_QWORD *)(v11 + 80);
  a2 = (unsigned int)(v8 + a2);
  if ( (_DWORD)a2 )
  {
    v17 = (_QWORD *)(v16 + 152LL * (unsigned int)a2 + 104);
    do
    {
      if ( (unsigned __int64)(*v17 - 1LL) > 5 )
        break;
      v17 -= 19;
      v41 = 1;
      v10 = a2;
      a2 = (unsigned int)(v8 + a2);
    }
    while ( (_DWORD)a2 );
LABEL_22:
    if ( v10 != v15 )
      v14 = (_QWORD *)(v16 + 152LL * v10);
  }
LABEL_24:
  v18 = *(_DWORD *)(v11 + 48);
  if ( *(_DWORD *)(v11 + 52) < v18 )
    goto LABEL_34;
  v19 = *(_QWORD *)(v11 + 24);
  if ( *(_QWORD *)(v11 + 80) )
  {
    v20 = (void *)DesktopAlloc(v19, 152 * (v18 + 8), 7LL);
    if ( !v20 )
      return 0LL;
    memmove(v20, *(const void **)(v11 + 80), 152LL * *(unsigned int *)(v11 + 48));
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)(v11 + 24) + 120LL), 0, *(PVOID *)(v11 + 80));
  }
  else
  {
    v20 = (void *)DesktopAlloc(v19, 1216LL, 7LL);
  }
  if ( !v20 )
    return 0LL;
  *(_DWORD *)(v11 + 48) += 8;
  *(_QWORD *)(v11 + 80) = v20;
  if ( v10 != -1 )
  {
    v14 = (_QWORD *)MNLookUpItem(v11, v10, v41, &v35);
    if ( v11 != v35 )
      return 0LL;
  }
  v7 = 0;
LABEL_34:
  v22 = gptiCurrent;
  v38 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v38;
  v39 = v11;
  ++*(_DWORD *)(v11 + 8);
  if ( v14 )
  {
    v5 = MNGetPopupFromMenu(v11, &v36);
    if ( v5 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v37);
      v23 = MNGetpItemIndex(v11, v14);
      v24 = *(_DWORD *)(v5 + 80);
      v7 = v23;
      if ( v24 >= v23 )
        *(_DWORD *)(v5 + 80) = v24 + 1;
      if ( (*(_DWORD *)v5 & 0x20) != 0 )
      {
        v25 = *(_DWORD *)(v5 + 84);
        if ( v25 >= v7 )
          *(_DWORD *)(v5 + 84) = v25 + 1;
      }
      v6 = v36;
      if ( *(_QWORD *)(v36 + 64) == *(_QWORD *)(v5 + 16) )
      {
        v26 = *(_DWORD *)(v36 + 72);
        if ( v26 >= v7 )
          *(_DWORD *)(v36 + 72) = v26 + 1;
      }
      if ( *(_QWORD *)(v6 + 80) == *(_QWORD *)(v5 + 16) )
      {
        v27 = *(unsigned int *)(v6 + 88);
        if ( (int)v27 >= v7 )
        {
          *(_DWORD *)(v6 + 88) = v27 + 1;
          if ( (_DWORD)v27 == v7 )
          {
            v28 = *(unsigned int *)(v6 + 92);
            if ( (v28 & 1) != 0 )
              xxxMNSetGapState(*(_QWORD *)(v6 + 80), v27, v28, 0LL);
          }
        }
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v37);
    }
    else
    {
      v6 = v36;
    }
  }
  v29 = ThreadUnlock1(v22, a2);
  v30 = v29;
  if ( !v29 )
    return 0LL;
  v31 = (unsigned int)++*(_DWORD *)(v29 + 52);
  if ( v14 )
    memmove(v14 + 19, v14, *(_QWORD *)(v30 + 80) + 152LL * (unsigned int)(v31 - 1) - (_QWORD)v14);
  else
    v14 = (_QWORD *)(152 * v31 + *(_QWORD *)(v30 + 80) - 152LL);
  *((_DWORD *)v14 + 28) = -1;
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
  if ( (unsigned int)MNIsUAHMenu(v30) )
    memset(v14 + 15, 0, 0x20uLL);
  if ( (unsigned int)SetLPITEMInfoNoRedraw((struct tagMENU *)v30, (struct tagITEM *)v14, v42, a5, &v40) )
  {
    if ( !v40
      || (v38 = *(_QWORD *)(gptiCurrent + 368LL),
          *(_QWORD *)(gptiCurrent + 368LL) = &v38,
          v39 = v30,
          ++*(_DWORD *)(v30 + 8),
          xxxRedrawForSetLPITEMInfo((struct tagMENU *)v30, (struct tagITEM *)v14),
          (v30 = ThreadUnlock1(v33, v32)) != 0) )
    {
      if ( (unsigned int)MNGetpItemIndex(v30, v14) != -1
        && ((*(_DWORD *)(v30 + 40) & 0x20) != 0 || (*(_DWORD *)v14 & 0x2004) == 0x2000) )
      {
        *(_DWORD *)v14 |= 0x6000u;
        v34 = v14[2];
        if ( v34 )
          MakeMenuRtoL(v34, 1LL);
      }
      return v12;
    }
  }
  else
  {
    if ( v5 )
      MNDeleteAdjustIndexes((struct tagMENUSTATE *)v6, (struct tagPOPUPMENU *)v5, v7);
    MNFreeItem((struct tagMENU *)v30);
    memmove(v14, v14 + 19, (unsigned int)(152 * *(_DWORD *)(v30 + 52) - (_DWORD)v14 - 152 + *(_DWORD *)(v30 + 80)));
    --*(_DWORD *)(v30 + 52);
  }
  return 0;
}
