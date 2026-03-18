/*
 * XREFs of xxxMNKeyDown @ 0x1C0216CA8
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxHandleMenuMessages @ 0x1C0137D0C (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C0216698 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0216CA8 (xxxMNKeyDown.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 *     _GetSubMenu @ 0x1C00CA2E4 (_GetSubMenu.c)
 *     xxxMNOpenHierarchy @ 0x1C0133768 (xxxMNOpenHierarchy.c)
 *     xxxMNSetCapture @ 0x1C0134B04 (xxxMNSetCapture.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z @ 0x1C0138524 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z.c)
 *     xxxMNCancel @ 0x1C01385D8 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0138900 (xxxMNCloseHierarchy.c)
 *     LockPopupMenu @ 0x1C0138B8C (LockPopupMenu.c)
 *     UnlockPopupMenu @ 0x1C0138C68 (UnlockPopupMenu.c)
 *     xxxMNSelectItem @ 0x1C0138CE0 (xxxMNSelectItem.c)
 *     ?GetMenuInheritedContextHelpId@@YAKPEAUtagPOPUPMENU@@@Z @ 0x1C0215718 (-GetMenuInheritedContextHelpId@@YAKPEAUtagPOPUPMENU@@@Z.c)
 *     MNGetpItem @ 0x1C02164F0 (MNGetpItem.c)
 *     xxxMNKeyDown @ 0x1C0216CA8 (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C02175B8 (xxxMNSwitchToAlternateMenu.c)
 *     xxxSendHelpMessage @ 0x1C023D7CC (xxxSendHelpMessage.c)
 *     MNFindItemInColumn @ 0x1C023D864 (MNFindItemInColumn.c)
 *     MNFindNextValidItem @ 0x1C023D958 (MNFindNextValidItem.c)
 */

void __fastcall xxxMNKeyDown(__int64 a1, __int64 a2, int a3)
{
  int v4; // ecx
  __int64 v5; // rdi
  __int64 v6; // r8
  int MenuInheritedContextHelpId; // eax
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // esi
  unsigned int ValidItem; // eax
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // eax
  unsigned int *v16; // rcx
  BOOL v17; // ecx
  __int64 v18; // r8
  unsigned int v19; // eax
  char v20; // cl
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned int v23; // edx
  __int64 v24; // r8
  __int64 v25; // rdx
  _QWORD *SubMenu; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r8
  struct tagMENU **v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // esi
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 v50; // [rsp+30h] [rbp-39h]
  __int64 v51; // [rsp+30h] [rbp-39h]
  __int64 v52; // [rsp+30h] [rbp-39h]
  unsigned int v53; // [rsp+38h] [rbp-31h]
  __int64 v54; // [rsp+40h] [rbp-29h]
  __int64 v55; // [rsp+48h] [rbp-21h] BYREF
  __int64 v56; // [rsp+50h] [rbp-19h]
  int v57; // [rsp+60h] [rbp-9h]
  int v58; // [rsp+64h] [rbp-5h]
  __int128 v59; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v60; // [rsp+78h] [rbp+Fh]
  _QWORD v61[3]; // [rsp+80h] [rbp+17h] BYREF
  _QWORD v62[5]; // [rsp+98h] [rbp+2Fh] BYREF
  BOOL v63; // [rsp+D8h] [rbp+6Fh]
  unsigned int v64; // [rsp+E0h] [rbp+77h]
  unsigned int v65; // [rsp+E8h] [rbp+7Fh]

  v64 = a3;
  v53 = a3;
  v4 = *(_DWORD *)(a2 + 8);
  v5 = a2;
  if ( (v4 & 8) != 0 && a3 != 112 )
  {
    if ( (v4 & 0x80u) != 0 && a3 == 27 )
      *(_DWORD *)(a2 + 8) = v4 | 0x2000;
    return;
  }
  switch ( a3 )
  {
    case 13:
      v47 = *(_QWORD *)(a1 + 40);
      v48 = *(unsigned int *)(a1 + 80);
      if ( (unsigned int)v48 < *(_DWORD *)(v47 + 52) )
      {
        v49 = *(_QWORD *)(v47 + 80) + 152 * v48;
        if ( *(_QWORD *)(v49 + 16) )
        {
          if ( (*(_BYTE *)(v49 + 4) & 3) == 0 )
          {
LABEL_120:
            a2 = v5;
            goto LABEL_121;
          }
        }
        else if ( (*(_BYTE *)(v49 + 4) & 3) == 0 )
        {
          xxxMNDismissWithNotify((struct tagMENUSTATE *)a2, (struct tagPOPUPMENU *)a1, (struct tagITEM *)v49, v48, 0LL);
          return;
        }
      }
      goto LABEL_124;
    case 18:
LABEL_15:
      if ( (v4 & 0x100) == 0 )
      {
        xxxMNCancel(a2, 0, 0, 0LL);
        if ( v64 == 18 )
          *(_DWORD *)(v5 + 8) &= ~0x20u;
      }
      return;
    case 27:
      if ( (*(_DWORD *)a1 & 1) == 0 )
      {
        v45 = *(_QWORD *)(a1 + 64);
        if ( a1 != v45 && (*(_BYTE *)(*(_QWORD *)(v45 + 8) + 55LL) & 0x20) == 0 )
        {
          if ( (*(_DWORD *)a1 & 2) == 0 || *(_QWORD *)(a1 + 32) != *(_QWORD *)(a1 + 8) )
          {
            v46 = *(_QWORD *)(a1 + 32);
            v55 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v55;
            v56 = v46;
            if ( v46 )
              ++*(_DWORD *)(v46 + 8);
            v23 = 484;
            v22 = 0LL;
            goto LABEL_64;
          }
          *(_DWORD *)v45 &= ~0x400u;
          if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
          {
            v16 = (unsigned int *)v45;
            goto LABEL_41;
          }
        }
      }
LABEL_124:
      xxxMNCancel(a2, 0, 0, 0LL);
      return;
  }
  if ( a3 != 37 )
  {
    if ( a3 == 38 )
      goto LABEL_23;
    if ( a3 != 39 )
    {
      if ( a3 != 40 )
      {
        if ( a3 != 112 )
        {
          if ( a3 != 121 )
            return;
          goto LABEL_15;
        }
        if ( !MNGetpItem(a1, *(_DWORD *)(a1 + 80)) )
          return;
        v6 = *(_QWORD *)(a1 + 8);
        v55 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v55;
        v56 = v6;
        if ( v6 )
          ++*(_DWORD *)(v6 + 8);
        MenuInheritedContextHelpId = GetMenuInheritedContextHelpId((struct tagPOPUPMENU *)a1);
        xxxSendHelpMessage(
          *(_QWORD *)(a1 + 8),
          2,
          *(_DWORD *)(v8 + 8),
          **(_QWORD **)(a1 + 40),
          MenuInheritedContextHelpId);
LABEL_22:
        ThreadUnlock1(v10, v9);
        return;
      }
LABEL_23:
      v11 = 1;
      if ( (*(_DWORD *)a1 & 1) == 0 )
      {
        if ( a3 == 38 )
          v11 = -1;
        ValidItem = MNFindNextValidItem(*(_QWORD *)(a1 + 40), *(unsigned int *)(a1 + 80), v11, 0LL);
        goto LABEL_27;
      }
LABEL_121:
      xxxMNOpenHierarchy((struct tagPOPUPMENU *)a1, a2);
      return;
    }
  }
  v13 = *(_DWORD *)a1;
  v65 = *(_DWORD *)a1;
  v58 = (*(_DWORD *)a1 >> 22) & 1 ^ (*(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 50LL) >> 6) & 1;
  if ( v58 )
  {
    v14 = 37;
    if ( a3 == 37 )
      v14 = 39;
    a3 = v14;
    v64 = v14;
  }
  if ( (v13 & 1) == 0 && a3 == 39 )
  {
    if ( *(_QWORD *)(a1 + 24) )
      goto LABEL_38;
    if ( xxxMNOpenHierarchy((struct tagPOPUPMENU *)a1, v5) == -1 )
      return;
    v13 = *(_DWORD *)a1;
    v65 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 0x20) != 0 )
      return;
  }
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v15 = v64;
    v63 = (v13 & 0x400) != 0;
    goto LABEL_43;
  }
LABEL_38:
  v15 = v64;
  v63 = 1;
  if ( v64 == 37 && (v13 & 1) == 0 )
  {
    v16 = (unsigned int *)a1;
LABEL_41:
    xxxMNCloseHierarchy(v16, v5);
    return;
  }
LABEL_43:
  v57 = (v13 >> 1) & 1;
  v17 = v57 && a1 == *(_QWORD *)(a1 + 64);
  v18 = 1LL;
  v50 = *(_QWORD *)(a1 + 40);
  if ( v15 == 37 )
    v18 = 0xFFFFFFFFLL;
  ValidItem = MNFindItemInColumn(*(_QWORD *)(a1 + 40), *(unsigned int *)(a1 + 80), v18, v17);
  if ( ValidItem != -1 )
  {
    v20 = v65;
    goto LABEL_66;
  }
  if ( v57 && *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 8) )
  {
    if ( v58 )
    {
      v19 = 37;
      if ( v64 == 37 )
        v19 = 39;
    }
    else
    {
      v19 = v64;
    }
    xxxMNKeyDown(*(_QWORD *)(a1 + 64), v5, v19);
    return;
  }
  if ( a1 != *(_QWORD *)(a1 + 64) )
  {
    v21 = *(_QWORD *)(a1 + 32);
    v55 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v55;
    v56 = v21;
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    v22 = v53;
    v23 = 256;
LABEL_64:
    xxxSendMessage(*(struct tagWND **)(a1 + 32), v23, v22, 0LL);
    goto LABEL_22;
  }
  v20 = v65;
  if ( (v65 & 1) == 0 )
    return;
LABEL_66:
  if ( (v20 & 1) == 0 )
  {
    if ( ValidItem == -1 )
      return;
LABEL_27:
    xxxMNSelectItem((struct tagPOPUPMENU *)a1, v5, ValidItem);
    return;
  }
  if ( ValidItem != -1 )
  {
    v43 = ValidItem;
    goto LABEL_103;
  }
  v24 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v24 + 54) & 8) == 0 )
    goto LABEL_127;
  v60 = 0LL;
  v59 = 0LL;
  v25 = gptiCurrent;
  if ( (v20 & 4) != 0 )
  {
    SubMenu = (_QWORD *)GetSubMenu(v50);
    v25 = gptiCurrent;
  }
  else
  {
    SubMenu = (_QWORD *)v50;
  }
  if ( SubMenu )
    *(_QWORD *)&v59 = *SubMenu;
  else
    *(_QWORD *)&v59 = 0LL;
  v55 = *(_QWORD *)(v25 + 368);
  *(_QWORD *)(v25 + 368) = &v55;
  v56 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  xxxSendMessage(*(struct tagWND **)(a1 + 8), 0x213u, v53, (__int64)&v59);
  ThreadUnlock1(v28, v27);
  v29 = HMValidateHandleNoSecure(v60, 1);
  v51 = v29;
  if ( !v29
    || *(_QWORD *)(v29 + 16) != gptiCurrent
    || (v30 = HMValidateHandleNoRip(*((__int64 *)&v59 + 1), 2), (v54 = v30) == 0) )
  {
LABEL_127:
    if ( !(unsigned int)xxxMNSwitchToAlternateMenu((struct tagPOPUPMENU *)a1) )
      return;
    v44 = 0xFFFFFFFFLL;
    if ( v64 == 39 )
      v44 = 1LL;
    v43 = MNFindNextValidItem(*(_QWORD *)(a1 + 40), 0xFFFFFFFFLL, v44, 0LL);
    if ( v43 == -1 )
      return;
    goto LABEL_103;
  }
  v61[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v61;
  v61[1] = v30;
  ++*(_DWORD *)(v30 + 8);
  v62[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v62;
  v31 = v63;
  v62[1] = v51;
  ++*(_DWORD *)(v51 + 8);
  if ( (*(_BYTE *)(v51 + 55) & 0x20) != 0 )
    v31 = 1;
  v63 = v31;
  xxxMNSelectItem((struct tagPOPUPMENU *)a1, v5, 0xFFFFFFFF);
  *(_DWORD *)(v5 + 8) |= 2u;
  UnlockPopupMenu(a1, (struct tagMENU **)(a1 + 48));
  v32 = v51;
  *(_DWORD *)a1 &= ~0x80u;
  v33 = *(_QWORD *)(v51 + 184);
  v52 = v33;
  if ( v33 )
  {
    v34 = GetSubMenu(v33);
    v35 = v54;
    if ( v34 == v54 )
      goto LABEL_89;
  }
  else
  {
    v35 = v54;
  }
  v52 = v35;
LABEL_89:
  UnlockPopupMenu(a1, (struct tagMENU **)(a1 + 40));
  HMAssignmentLock(a1 + 8, v32);
  HMAssignmentLock(a1 + 16, v32);
  LockPopupMenu(a1, (struct tagMENU **)(a1 + 40), v52);
  if ( (*(_DWORD *)(v5 + 8) & 0x100) == 0 )
  {
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 332LL) &= ~0x100000u;
    xxxMNSetCapture(a1, v5);
  }
  if ( (*(_BYTE *)(v32 + 55) & 0x40) == 0 )
  {
    v38 = *(_QWORD *)(a1 + 40);
    if ( v38 )
    {
      v39 = *(_QWORD *)(v32 + 192);
      v40 = (struct tagMENU **)(a1 + 48);
      if ( v39 == v38 )
      {
        LockPopupMenu(a1, v40, *(_QWORD *)(v32 + 184));
        *(_DWORD *)(v5 + 8) &= ~2u;
      }
      else
      {
        LockPopupMenu(a1, v40, v39);
      }
    }
  }
  ThreadUnlock1(v37, v36);
  ThreadUnlock1(v42, v41);
  *(_DWORD *)a1 ^= (*(_DWORD *)a1 ^ (2 * *(_DWORD *)(v5 + 8))) & 4;
  v43 = 0;
LABEL_103:
  if ( *(_QWORD *)(a1 + 24) )
    xxxMNCloseHierarchy((unsigned int *)a1, v5);
  xxxMNSelectItem((struct tagPOPUPMENU *)a1, v5, v43);
  if ( v63 )
    goto LABEL_120;
}
