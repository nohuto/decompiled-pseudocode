/*
 * XREFs of xxxSetMenuItemInfo @ 0x1C0052CB8
 * Callers:
 *     xxxLoadSysMenu @ 0x1C004FD24 (xxxLoadSysMenu.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C0054FE0 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0052C14 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00557DC (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     MNLookUpItem @ 0x1C00942A8 (MNLookUpItem.c)
 *     MakeMenuRtoL @ 0x1C023B164 (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxSetMenuItemInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, struct _UNICODE_STRING *a5)
{
  int v5; // edi
  int v6; // ebx
  struct tagITEM *v7; // rsi
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v11; // rdx
  struct tagMENU *v12; // rdx
  struct tagMENU *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // edi
  int v17; // [rsp+30h] [rbp-38h] BYREF
  struct tagMENU *v18; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v19[5]; // [rsp+40h] [rbp-28h] BYREF

  v18 = 0LL;
  v5 = a3;
  v6 = a2;
  v7 = (struct tagITEM *)MNLookUpItem(a1, a2, a3, &v18);
  if ( !v7 )
  {
    if ( !v5 && v6 == 61744 )
      return 1LL;
    UserSetLastError(1456LL);
    return 0LL;
  }
  if ( (*(_DWORD *)(v8 + 4) & 0x10) != 0 )
  {
    if ( (*(_DWORD *)(v8 + 8) & 0x2000) != 0 )
    {
      v11 = 1LL;
LABEL_10:
      MakeMenuRtoL(v9, v11);
      goto LABEL_11;
    }
    v11 = 0LL;
    if ( (*(_DWORD *)(v9 + 40) & 0x20) != 0 )
      goto LABEL_10;
  }
LABEL_11:
  v12 = v18;
  v19[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v19;
  v19[1] = v12;
  if ( v12 )
    ++*((_DWORD *)v12 + 2);
  v13 = v18;
  v17 = 0;
  v16 = SetLPITEMInfoNoRedraw(v18, v7, (struct tagMENUITEMINFOW *)v8, a5, &v17);
  if ( v17 )
    xxxRedrawForSetLPITEMInfo(v13, v7);
  ThreadUnlock1(v15, v14);
  return v16;
}
