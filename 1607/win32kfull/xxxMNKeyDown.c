/*
 * XREFs of xxxMNKeyDown @ 0x1C020F844
 * Callers:
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxHandleMenuMessages @ 0x1C0141790 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C020F234 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C020F844 (xxxMNKeyDown.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     HMValidateHandleNoRip @ 0x1C00A9D84 (HMValidateHandleNoRip.c)
 *     _GetSubMenu @ 0x1C00BB474 (_GetSubMenu.c)
 *     xxxMNSetCapture @ 0x1C013B99C (xxxMNSetCapture.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z @ 0x1C013C724 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z.c)
 *     xxxMNCancel @ 0x1C013C7D8 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C013CBF0 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x1C013EEDC (xxxMNSelectItem.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 *     LockPopupMenu @ 0x1C0142D1C (LockPopupMenu.c)
 *     UnlockPopupMenu @ 0x1C0142DF8 (UnlockPopupMenu.c)
 *     ?GetMenuInheritedContextHelpId@@YAKPEAUtagPOPUPMENU@@@Z @ 0x1C020E580 (-GetMenuInheritedContextHelpId@@YAKPEAUtagPOPUPMENU@@@Z.c)
 *     MNGetpItem @ 0x1C020F08C (MNGetpItem.c)
 *     xxxMNKeyDown @ 0x1C020F844 (xxxMNKeyDown.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0210154 (xxxMNSwitchToAlternateMenu.c)
 *     xxxSendHelpMessage @ 0x1C02351A4 (xxxSendHelpMessage.c)
 *     MNFindItemInColumn @ 0x1C023523C (MNFindItemInColumn.c)
 *     MNFindNextValidItem @ 0x1C0235330 (MNFindNextValidItem.c)
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
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r8
  struct tagMENU **v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // esi
  __int64 v50; // r8
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r9
  __int64 v55; // r8
  __int64 v56; // [rsp+30h] [rbp-39h]
  __int64 v57; // [rsp+30h] [rbp-39h]
  __int64 v58; // [rsp+30h] [rbp-39h]
  unsigned int v59; // [rsp+38h] [rbp-31h]
  __int64 v60; // [rsp+40h] [rbp-29h]
  int v61; // [rsp+48h] [rbp-21h]
  int v62; // [rsp+4Ch] [rbp-1Dh]
  __int64 v63; // [rsp+50h] [rbp-19h] BYREF
  __int64 v64; // [rsp+58h] [rbp-11h]
  __int128 v65; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v66; // [rsp+78h] [rbp+Fh]
  _QWORD v67[3]; // [rsp+80h] [rbp+17h] BYREF
  _QWORD v68[5]; // [rsp+98h] [rbp+2Fh] BYREF
  BOOL v69; // [rsp+D8h] [rbp+6Fh]
  unsigned int v70; // [rsp+E0h] [rbp+77h]
  unsigned int v71; // [rsp+E8h] [rbp+7Fh]

  v70 = a3;
  v59 = a3;
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
      v53 = *(_QWORD *)(a1 + 40);
      v54 = *(unsigned int *)(a1 + 80);
      if ( (unsigned int)v54 < *(_DWORD *)(v53 + 52) )
      {
        v55 = *(_QWORD *)(v53 + 80) + 152 * v54;
        if ( *(_QWORD *)(v55 + 16) )
        {
          if ( (*(_BYTE *)(v55 + 4) & 3) == 0 )
          {
LABEL_120:
            a2 = v5;
            goto LABEL_121;
          }
        }
        else if ( (*(_BYTE *)(v55 + 4) & 3) == 0 )
        {
          xxxMNDismissWithNotify((struct tagMENUSTATE *)a2, (struct tagPOPUPMENU *)a1, (struct tagITEM *)v55, v54, 0LL);
          return;
        }
      }
      goto LABEL_124;
    case 18:
LABEL_15:
      if ( (v4 & 0x100) == 0 )
      {
        xxxMNCancel(a2, 0, 0, 0LL);
        if ( v70 == 18 )
          *(_DWORD *)(v5 + 8) &= ~0x20u;
      }
      return;
    case 27:
      if ( (*(_DWORD *)a1 & 1) == 0 )
      {
        v51 = *(_QWORD *)(a1 + 64);
        if ( a1 != v51 && (*(_BYTE *)(*(_QWORD *)(v51 + 8) + 55LL) & 0x20) == 0 )
        {
          if ( (*(_DWORD *)a1 & 2) == 0 || *(_QWORD *)(a1 + 32) != *(_QWORD *)(a1 + 8) )
          {
            v52 = *(_QWORD *)(a1 + 32);
            v63 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v63;
            v64 = v52;
            if ( v52 )
              ++*(_DWORD *)(v52 + 8);
            v23 = 484;
            v22 = 0LL;
            goto LABEL_64;
          }
          *(_DWORD *)v51 &= ~0x400u;
          if ( (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
          {
            v16 = (unsigned int *)v51;
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
        v63 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v63;
        v64 = v6;
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
  v71 = *(_DWORD *)a1;
  v62 = (*(_DWORD *)a1 >> 22) & 1 ^ (*(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 50LL) >> 6) & 1;
  if ( v62 )
  {
    v14 = 37;
    if ( a3 == 37 )
      v14 = 39;
    a3 = v14;
    v70 = v14;
  }
  if ( (v13 & 1) == 0 && a3 == 39 )
  {
    if ( *(_QWORD *)(a1 + 24) )
      goto LABEL_38;
    if ( xxxMNOpenHierarchy((struct tagPOPUPMENU *)a1, v5) == -1 )
      return;
    v13 = *(_DWORD *)a1;
    v71 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 0x20) != 0 )
      return;
  }
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v15 = v70;
    v69 = (v13 & 0x400) != 0;
    goto LABEL_43;
  }
LABEL_38:
  v15 = v70;
  v69 = 1;
  if ( v70 == 37 && (v13 & 1) == 0 )
  {
    v16 = (unsigned int *)a1;
LABEL_41:
    xxxMNCloseHierarchy(v16, v5);
    return;
  }
LABEL_43:
  v61 = (v13 >> 1) & 1;
  v17 = v61 && a1 == *(_QWORD *)(a1 + 64);
  v18 = 1LL;
  v56 = *(_QWORD *)(a1 + 40);
  if ( v15 == 37 )
    v18 = 0xFFFFFFFFLL;
  ValidItem = MNFindItemInColumn(*(_QWORD *)(a1 + 40), *(unsigned int *)(a1 + 80), v18, v17);
  if ( ValidItem != -1 )
  {
    v20 = v71;
    goto LABEL_66;
  }
  if ( v61 && *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 8) )
  {
    if ( v62 )
    {
      v19 = 37;
      if ( v70 == 37 )
        v19 = 39;
    }
    else
    {
      v19 = v70;
    }
    xxxMNKeyDown(*(_QWORD *)(a1 + 64), v5, v19);
    return;
  }
  if ( a1 != *(_QWORD *)(a1 + 64) )
  {
    v21 = *(_QWORD *)(a1 + 32);
    v63 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v63;
    v64 = v21;
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    v22 = v59;
    v23 = 256;
LABEL_64:
    xxxSendMessage(*(struct tagWND **)(a1 + 32), v23, v22, 0LL);
    goto LABEL_22;
  }
  v20 = v71;
  if ( (v71 & 1) == 0 )
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
    v49 = ValidItem;
    goto LABEL_103;
  }
  v24 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v24 + 54) & 8) == 0 )
    goto LABEL_127;
  v66 = 0LL;
  v65 = 0LL;
  v25 = gptiCurrent;
  if ( (v20 & 4) != 0 )
  {
    SubMenu = (_QWORD *)GetSubMenu(v56);
    v25 = gptiCurrent;
  }
  else
  {
    SubMenu = (_QWORD *)v56;
  }
  if ( SubMenu )
    *(_QWORD *)&v65 = *SubMenu;
  else
    *(_QWORD *)&v65 = 0LL;
  v63 = *(_QWORD *)(v25 + 368);
  *(_QWORD *)(v25 + 368) = &v63;
  v64 = v24;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  xxxSendMessage(*(struct tagWND **)(a1 + 8), 0x213u, v59, (__int64)&v65);
  ThreadUnlock1(v28, v27);
  LOBYTE(v29) = 1;
  v32 = HMValidateHandleNoSecure(v66, v29, v30, v31);
  v57 = v32;
  if ( !v32
    || *(_QWORD *)(v32 + 16) != gptiCurrent
    || (LOBYTE(v33) = 2, v36 = HMValidateHandleNoRip(*((__int64 *)&v65 + 1), v33, v34, v35), (v60 = v36) == 0) )
  {
LABEL_127:
    if ( !(unsigned int)xxxMNSwitchToAlternateMenu(a1, v5) )
      return;
    v50 = 0xFFFFFFFFLL;
    if ( v70 == 39 )
      v50 = 1LL;
    v49 = MNFindNextValidItem(*(_QWORD *)(a1 + 40), 0xFFFFFFFFLL, v50, 0LL);
    if ( v49 == -1 )
      return;
    goto LABEL_103;
  }
  v67[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v67;
  v67[1] = v36;
  ++*(_DWORD *)(v36 + 8);
  v68[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v68;
  v68[1] = v57;
  ++*(_DWORD *)(v57 + 8);
  v37 = v69;
  if ( (*(_BYTE *)(v57 + 55) & 0x20) != 0 )
    v37 = 1;
  v69 = v37;
  xxxMNSelectItem((struct tagPOPUPMENU *)a1, v5, 0xFFFFFFFF);
  *(_DWORD *)(v5 + 8) |= 2u;
  UnlockPopupMenu(a1, (struct tagMENU **)(a1 + 48));
  v38 = v57;
  *(_DWORD *)a1 &= ~0x80u;
  v39 = *(_QWORD *)(v57 + 184);
  v58 = v39;
  if ( v39 )
  {
    v40 = GetSubMenu(v39);
    v41 = v60;
    if ( v40 == v60 )
      goto LABEL_89;
  }
  else
  {
    v41 = v60;
  }
  v58 = v41;
LABEL_89:
  UnlockPopupMenu(a1, (struct tagMENU **)(a1 + 40));
  HMAssignmentLock(a1 + 8, v38);
  HMAssignmentLock(a1 + 16, v38);
  LockPopupMenu(a1, (struct tagMENU **)(a1 + 40), v58);
  if ( (*(_DWORD *)(v5 + 8) & 0x100) == 0 )
  {
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) &= ~0x100000u;
    xxxMNSetCapture(a1, v5);
  }
  if ( (*(_BYTE *)(v38 + 55) & 0x40) == 0 )
  {
    v44 = *(_QWORD *)(a1 + 40);
    if ( v44 )
    {
      v45 = *(_QWORD *)(v38 + 192);
      v46 = (struct tagMENU **)(a1 + 48);
      if ( v45 == v44 )
      {
        LockPopupMenu(a1, v46, *(_QWORD *)(v38 + 184));
        *(_DWORD *)(v5 + 8) &= ~2u;
      }
      else
      {
        LockPopupMenu(a1, v46, v45);
      }
    }
  }
  ThreadUnlock1(v43, v42);
  ThreadUnlock1(v48, v47);
  *(_DWORD *)a1 ^= (*(_DWORD *)a1 ^ (2 * *(_DWORD *)(v5 + 8))) & 4;
  v49 = 0;
LABEL_103:
  if ( *(_QWORD *)(a1 + 24) )
    xxxMNCloseHierarchy((unsigned int *)a1, v5);
  xxxMNSelectItem((struct tagPOPUPMENU *)a1, v5, v49);
  if ( v69 )
    goto LABEL_120;
}
