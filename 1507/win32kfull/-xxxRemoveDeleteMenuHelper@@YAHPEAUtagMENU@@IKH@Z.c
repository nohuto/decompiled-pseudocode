/*
 * XREFs of ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0054D4C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     NtUserRemoveMenu @ 0x1C00EB290 (NtUserRemoveMenu.c)
 *     NtUserDeleteMenu @ 0x1C00ED430 (NtUserDeleteMenu.c)
 * Callees:
 *     MNFreeItem @ 0x1C0054F24 (MNFreeItem.c)
 *     MNGetPopupFromMenu @ 0x1C005573C (MNGetPopupFromMenu.c)
 *     MNGetpItemIndex @ 0x1C00557A0 (MNGetpItemIndex.c)
 *     DesktopAlloc @ 0x1C0055B70 (DesktopAlloc.c)
 *     DwmAsyncChildStyleChange @ 0x1C005B79C (DwmAsyncChildStyleChange.c)
 *     DwmGetClassStyle @ 0x1C005B8D0 (DwmGetClassStyle.c)
 *     MNLookUpItem @ 0x1C00942A8 (MNLookUpItem.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@I@Z @ 0x1C023C2E4 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C023C3A0 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxRemoveDeleteMenuHelper(struct tagMENU *a1, __int64 a2, __int16 a3)
{
  int v3; // edi
  unsigned int v4; // r14d
  _DWORD *v5; // rbx
  unsigned int v6; // r10d
  struct tagMENU *v7; // r11
  struct tagMENU *v8; // r8
  int v9; // ecx
  BOOL v10; // esi
  struct tagPOPUPMENU *v11; // rdi
  int v12; // eax
  struct tagMENU *v13; // rcx
  void *v14; // rbx
  void *v16; // rax
  __int64 v17; // rcx
  void *v18; // rax
  struct tagMENUSTATE *v19; // [rsp+20h] [rbp-10h] BYREF
  struct tagMENU *v20; // [rsp+50h] [rbp+20h] BYREF

  v20 = a1;
  v3 = a3 & 0x400;
  v4 = 0;
  v5 = (_DWORD *)MNLookUpItem(a1, a2, a3 & 0x400, &v20);
  if ( !v5 )
  {
    if ( v6 < 0xFFFFF000 )
      return 0LL;
    if ( v3 )
      return 0LL;
    v20 = v7;
    v5 = (_DWORD *)MNLookUpItem(v7, (unsigned __int16)v6, 0LL, &v20);
    if ( !v5 )
      return 0LL;
  }
  v8 = v20;
  v9 = *((_DWORD *)v20 + 10);
  v10 = (v9 & 0x100) != 0 && v5[2] == 61536;
  if ( (v5[1] & 0x1000) != 0 )
  {
    *((_DWORD *)v20 + 10) = v9 & 0xFFFFFBFF;
    v8 = v20;
  }
  v11 = (struct tagPOPUPMENU *)MNGetPopupFromMenu(v8, &v19);
  if ( v11 )
  {
    v4 = MNGetpItemIndex(v20, v5);
    MNDeleteAdjustIndexes(v19, v11, v4);
  }
  MNFreeItem(v20);
  *((_DWORD *)v20 + 14) = 0;
  *((_DWORD *)v20 + 15) = 0;
  v12 = *((_DWORD *)v20 + 13);
  if ( v12 == 1 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)v20 + 3) + 120LL), 0, *((PVOID *)v20 + 10));
    *((_DWORD *)v20 + 12) = 0;
    v14 = 0LL;
  }
  else
  {
    memmove(v5, v5 + 38, (unsigned int)(*((_DWORD *)v20 + 20) + 152 * v12 - (_DWORD)v5 - 152));
    v13 = v20;
    if ( (unsigned int)(*((_DWORD *)v20 + 12) - *((_DWORD *)v20 + 13)) < 9 )
    {
LABEL_10:
      v14 = (void *)*((_QWORD *)v13 + 10);
      goto LABEL_11;
    }
    v16 = (void *)DesktopAlloc(*((_QWORD *)v20 + 3), (unsigned int)(152 * (*((_DWORD *)v20 + 12) - 10)), 7LL);
    v14 = v16;
    if ( !v16 )
    {
      v13 = v20;
      goto LABEL_10;
    }
    memmove(v16, *((const void **)v20 + 10), 152LL * (unsigned int)(*((_DWORD *)v20 + 12) - 10));
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)v20 + 3) + 120LL), 0, *((PVOID *)v20 + 10));
    *((_DWORD *)v20 + 12) -= 10;
  }
  v13 = v20;
LABEL_11:
  *((_QWORD *)v13 + 10) = v14;
  --*((_DWORD *)v20 + 13);
  if ( v10 )
  {
    v17 = *((_QWORD *)v20 + 9);
    if ( v17 )
    {
      if ( (unsigned int)IsWindowDesktopComposed(v17) )
      {
        DwmGetClassStyle(*((_QWORD *)v20 + 9));
        v18 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildStyleChange(v18);
      }
    }
  }
  if ( v11 )
    xxxMNUpdateShownMenu(v11, *((_QWORD *)v20 + 10) + 152LL * v4, 2LL);
  return 1LL;
}
