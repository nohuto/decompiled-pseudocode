/*
 * XREFs of xxxMNDoubleClick @ 0x1C0216C3C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxHandleMenuMessages @ 0x1C010B80C (xxxHandleMenuMessages.c)
 * Callees:
 *     MNIspItemValid @ 0x1C0054FCC (MNIspItemValid.c)
 *     xxxInternalGetMessage @ 0x1C007C720 (xxxInternalGetMessage.c)
 *     ?xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z @ 0x1C0106670 (-xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z @ 0x1C010C838 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z.c)
 *     xxxSendMenuSelect @ 0x1C010DA10 (xxxSendMenuSelect.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _GetMenuDefaultItem @ 0x1C024AB74 (_GetMenuDefaultItem.c)
 */

__int64 __fastcall xxxMNDoubleClick(struct tagMENUSTATE *a1, struct tagPOPUPMENU *a2, int a3)
{
  __int64 v4; // r14
  __int64 v6; // rbx
  __int64 v7; // rdi
  int MenuDefaultItem; // eax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v20[3]; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v21[3]; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v22[3]; // [rsp+68h] [rbp-9h] BYREF
  _OWORD v23[3]; // [rsp+80h] [rbp+Fh] BYREF

  v4 = a3;
  memset(v23, 0, sizeof(v23));
  if ( (unsigned int)xxxInternalGetMessage(v23, 0LL, 0, 0, 2u, 0) && (DWORD2(v23[0]) == 514 || DWORD2(v23[0]) == 162) )
    xxxInternalGetMessage(v23, 0LL, DWORD2(v23[0]), DWORD2(v23[0]), 1u, 0);
  v6 = *((_QWORD *)a2 + 5);
  if ( v6 && (unsigned int)v4 < *(_DWORD *)(v6 + 52) )
  {
    v7 = *(_QWORD *)(v6 + 80) + 152 * v4;
    if ( (*(_DWORD *)(v7 + 4) & 3) == 0 )
    {
      while ( *(_QWORD *)(v7 + 16) )
      {
        v6 = *(_QWORD *)(v7 + 16);
        MenuDefaultItem = GetMenuDefaultItem(v6, 1024LL, 0LL);
        LODWORD(v4) = MenuDefaultItem;
        if ( MenuDefaultItem == -1 )
          return 0LL;
        v7 = *(_QWORD *)(v6 + 80) + 152LL * MenuDefaultItem;
      }
      v9 = *(_QWORD *)(*((_QWORD *)a2 + 8) + 8LL);
      if ( v9 && (*(_BYTE *)(v9 + 45) & 2) == 0 )
      {
        v22[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v22;
        v22[1] = v9;
        ++*(_DWORD *)(v9 + 8);
        v10 = *((_QWORD *)a2 + 2);
        v20[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v20;
        v20[1] = v10;
        if ( v10 )
          ++*(_DWORD *)(v10 + 8);
        v21[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v21;
        ++*(_DWORD *)(v6 + 8);
        v11 = *((_QWORD *)a2 + 8);
        v12 = (__int64 *)*((_QWORD *)a2 + 2);
        v21[1] = v6;
        xxxSendMenuSelect(*(struct tagWND **)(v11 + 8), v12, v6, v4, (__int64)a1);
        v6 = ThreadUnlock1(v14, v13);
        ThreadUnlock1(v16, v15);
        ThreadUnlock1(v18, v17);
      }
      if ( v6 && MNIspItemValid(v6, v7) )
      {
        xxxMNDismissWithNotify(a1, a2, (struct tagITEM *)v7, v4, 0LL);
        return 1LL;
      }
    }
  }
  else
  {
    xxxMNDoScroll(a2, *((_DWORD *)a2 + 20), 0);
  }
  return 0LL;
}
