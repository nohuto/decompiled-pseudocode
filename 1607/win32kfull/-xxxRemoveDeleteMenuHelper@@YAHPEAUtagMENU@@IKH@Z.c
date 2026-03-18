/*
 * XREFs of ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0121D44
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     NtUserDeleteMenu @ 0x1C0126450 (NtUserDeleteMenu.c)
 *     NtUserRemoveMenu @ 0x1C012A130 (NtUserRemoveMenu.c)
 * Callees:
 *     MNFreeItem @ 0x1C006AEF4 (MNFreeItem.c)
 *     MNGetPopupFromMenu @ 0x1C006B218 (MNGetPopupFromMenu.c)
 *     MNGetpItemIndex @ 0x1C006B8B4 (MNGetpItemIndex.c)
 *     DesktopAlloc @ 0x1C006B8F0 (DesktopAlloc.c)
 *     MNLookUpItem @ 0x1C006F45C (MNLookUpItem.c)
 *     DwmGetClassStyle @ 0x1C0093A88 (DwmGetClassStyle.c)
 *     DwmAsyncChildStyleChange @ 0x1C00965BC (DwmAsyncChildStyleChange.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     DesktopFree @ 0x1C01DF350 (DesktopFree.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@I@Z @ 0x1C0233E54 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0233F08 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxRemoveDeleteMenuHelper(struct tagMENU *a1, unsigned int a2, __int16 a3, int a4)
{
  int v5; // edi
  unsigned int v6; // r14d
  _DWORD *v7; // rbx
  unsigned int v8; // r10d
  struct tagMENU *v9; // r11
  struct tagMENU *v10; // r8
  int v11; // ecx
  BOOL v12; // esi
  struct tagPOPUPMENU *v13; // rdi
  int v14; // eax
  struct tagMENU *v15; // rcx
  PVOID v16; // rbx
  PVOID v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // rcx
  __int64 v21; // rsi
  int ClassStyle; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  void *v27; // rax
  struct tagMENUSTATE *v28; // [rsp+20h] [rbp-10h] BYREF
  struct tagMENU *v29; // [rsp+50h] [rbp+20h] BYREF

  v29 = a1;
  v5 = a3 & 0x400;
  v6 = 0;
  v7 = (_DWORD *)MNLookUpItem((__int64)a1, a2, v5, &v29);
  if ( !v7 )
  {
    if ( v8 < 0xFFFFF000 )
      return 0LL;
    if ( v5 )
      return 0LL;
    v29 = v9;
    v7 = (_DWORD *)MNLookUpItem((__int64)v9, (unsigned __int16)v8, 0, &v29);
    if ( !v7 )
      return 0LL;
  }
  v10 = v29;
  v11 = *((_DWORD *)v29 + 10);
  v12 = (v11 & 0x100) != 0 && v7[2] == 61536;
  if ( (v7[1] & 0x1000) != 0 )
  {
    *((_DWORD *)v29 + 10) = v11 & 0xFFFFFBFF;
    v10 = v29;
  }
  v13 = (struct tagPOPUPMENU *)MNGetPopupFromMenu((__int64)v10, (__int64 **)&v28);
  if ( v13 )
  {
    v6 = MNGetpItemIndex((__int64)v29, (__int64)v7);
    MNDeleteAdjustIndexes(v28, v13, v6);
  }
  MNFreeItem(v29, (__int64)v7, a4);
  *((_DWORD *)v29 + 14) = 0;
  *((_DWORD *)v29 + 15) = 0;
  v14 = *((_DWORD *)v29 + 13);
  if ( v14 == 1 )
  {
    DesktopFree(*((_QWORD *)v29 + 3));
    *((_DWORD *)v29 + 12) = 0;
    v16 = 0LL;
  }
  else
  {
    memmove(v7, v7 + 38, (unsigned int)(*((_DWORD *)v29 + 20) + 152 * v14 - (_DWORD)v7 - 152));
    v15 = v29;
    if ( (unsigned int)(*((_DWORD *)v29 + 12) - *((_DWORD *)v29 + 13)) < 9 )
    {
LABEL_10:
      v16 = (PVOID)*((_QWORD *)v15 + 10);
      goto LABEL_11;
    }
    v18 = DesktopAlloc(*((_QWORD *)v29 + 3), 152 * (*((_DWORD *)v29 + 12) - 10), 7);
    v16 = v18;
    if ( !v18 )
    {
      v15 = v29;
      goto LABEL_10;
    }
    memmove(v18, *((const void **)v29 + 10), 152LL * (unsigned int)(*((_DWORD *)v29 + 12) - 10));
    DesktopFree(*((_QWORD *)v29 + 3));
    *((_DWORD *)v29 + 12) -= 10;
  }
  v15 = v29;
LABEL_11:
  *((_QWORD *)v15 + 10) = v16;
  --*((_DWORD *)v29 + 13);
  if ( v12 )
  {
    v19 = *((_QWORD *)v29 + 9);
    if ( v19 )
    {
      if ( (unsigned int)IsWindowDesktopComposed(v19) )
      {
        v20 = (__int64 *)*((_QWORD *)v29 + 9);
        if ( v20 )
          v21 = *v20;
        else
          v21 = 0LL;
        ClassStyle = DwmGetClassStyle((__int64)v20);
        v27 = (void *)ReferenceDwmApiPort(v24, v23, v25, v26);
        DwmAsyncChildStyleChange(v27, v21, -26, ClassStyle);
      }
    }
  }
  if ( v13 )
    xxxMNUpdateShownMenu(v13, *((_QWORD *)v29 + 10) + 152LL * v6, 2LL);
  return 1LL;
}
