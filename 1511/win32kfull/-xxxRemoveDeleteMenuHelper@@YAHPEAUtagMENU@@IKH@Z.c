/*
 * XREFs of ?xxxRemoveDeleteMenuHelper@@YAHPEAUtagMENU@@IKH@Z @ 0x1C0075940
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     NtUserDeleteMenu @ 0x1C00F39A0 (NtUserDeleteMenu.c)
 *     NtUserRemoveMenu @ 0x1C0109FD0 (NtUserRemoveMenu.c)
 * Callees:
 *     MNGetpItemIndex @ 0x1C006EE50 (MNGetpItemIndex.c)
 *     MNLookUpItem @ 0x1C00710A8 (MNLookUpItem.c)
 *     DesktopAlloc @ 0x1C0072310 (DesktopAlloc.c)
 *     MNGetPopupFromMenu @ 0x1C00723EC (MNGetPopupFromMenu.c)
 *     MNFreeItem @ 0x1C0072450 (MNFreeItem.c)
 *     DwmAsyncChildStyleChange @ 0x1C0080178 (DwmAsyncChildStyleChange.c)
 *     DwmGetClassStyle @ 0x1C00D2C50 (DwmGetClassStyle.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@I@Z @ 0x1C023C4B4 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C023C570 (xxxMNUpdateShownMenu.c)
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
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  void *v24; // rax
  struct tagMENUSTATE *v25; // [rsp+20h] [rbp-10h] BYREF
  struct tagMENU *v26; // [rsp+50h] [rbp+20h] BYREF

  v26 = a1;
  v5 = a3 & 0x400;
  v6 = 0;
  v7 = (_DWORD *)MNLookUpItem((__int64)a1, a2, v5, &v26);
  if ( !v7 )
  {
    if ( v8 < 0xFFFFF000 )
      return 0LL;
    if ( v5 )
      return 0LL;
    v26 = v9;
    v7 = (_DWORD *)MNLookUpItem((__int64)v9, (unsigned __int16)v8, 0, &v26);
    if ( !v7 )
      return 0LL;
  }
  v10 = v26;
  v11 = *((_DWORD *)v26 + 10);
  v12 = (v11 & 0x100) != 0 && v7[2] == 61536;
  if ( (v7[1] & 0x1000) != 0 )
  {
    *((_DWORD *)v26 + 10) = v11 & 0xFFFFFBFF;
    v10 = v26;
  }
  v13 = (struct tagPOPUPMENU *)MNGetPopupFromMenu((__int64)v10, (__int64 **)&v25);
  if ( v13 )
  {
    v6 = MNGetpItemIndex((__int64)v26, (__int64)v7);
    MNDeleteAdjustIndexes(v25, v13, v6);
  }
  MNFreeItem(v26, (__int64)v7, a4);
  *((_DWORD *)v26 + 14) = 0;
  *((_DWORD *)v26 + 15) = 0;
  v14 = *((_DWORD *)v26 + 13);
  if ( v14 == 1 )
  {
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)v26 + 3) + 120LL), 0, *((PVOID *)v26 + 10));
    *((_DWORD *)v26 + 12) = 0;
    v16 = 0LL;
  }
  else
  {
    memmove(v7, v7 + 38, (unsigned int)(*((_DWORD *)v26 + 20) + 152 * v14 - (_DWORD)v7 - 152));
    v15 = v26;
    if ( (unsigned int)(*((_DWORD *)v26 + 12) - *((_DWORD *)v26 + 13)) < 9 )
    {
LABEL_10:
      v16 = (PVOID)*((_QWORD *)v15 + 10);
      goto LABEL_11;
    }
    v18 = DesktopAlloc(*((_QWORD *)v26 + 3), 152 * (*((_DWORD *)v26 + 12) - 10));
    v16 = v18;
    if ( !v18 )
    {
      v15 = v26;
      goto LABEL_10;
    }
    memmove(v18, *((const void **)v26 + 10), 152LL * (unsigned int)(*((_DWORD *)v26 + 12) - 10));
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)v26 + 3) + 120LL), 0, *((PVOID *)v26 + 10));
    *((_DWORD *)v26 + 12) -= 10;
  }
  v15 = v26;
LABEL_11:
  *((_QWORD *)v15 + 10) = v16;
  --*((_DWORD *)v26 + 13);
  if ( v12 )
  {
    v19 = *((_QWORD *)v26 + 9);
    if ( v19 )
    {
      if ( (unsigned int)IsWindowDesktopComposed(v19) )
      {
        DwmGetClassStyle(*((_QWORD *)v26 + 9));
        v24 = (void *)ReferenceDwmApiPort(v21, v20, v22, v23);
        DwmAsyncChildStyleChange(v24);
      }
    }
  }
  if ( v13 )
    xxxMNUpdateShownMenu(v13, *((_QWORD *)v26 + 10) + 152LL * v6, 2LL);
  return 1LL;
}
