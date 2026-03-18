/*
 * XREFs of xxxSetMenuItemInfo @ 0x1C00CC0DC
 * Callers:
 *     NtUserThunkedMenuItemInfo @ 0x1C006E820 (NtUserThunkedMenuItemInfo.c)
 *     xxxLoadSysMenu @ 0x1C00CBF78 (xxxLoadSysMenu.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006F270 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     MNLookUpItem @ 0x1C00710A8 (MNLookUpItem.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0072348 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MakeMenuRtoL @ 0x1C023B334 (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxSetMenuItemInfo(__int64 a1, unsigned int a2, int a3, __int64 a4, struct _UNICODE_STRING *a5)
{
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
  v7 = (struct tagITEM *)MNLookUpItem(a1, a2, a3, &v18);
  if ( !v7 )
  {
    if ( !a3 && a2 == 61744 )
      return 1LL;
    UserSetLastError(1456);
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
  v19[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v19;
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
