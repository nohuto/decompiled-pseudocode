/*
 * XREFs of xxxSetMenuItemInfo @ 0x1C0067564
 * Callers:
 *     xxxLoadSysMenu @ 0x1C0067400 (xxxLoadSysMenu.c)
 *     NtUserThunkedMenuItemInfo @ 0x1C006B280 (NtUserThunkedMenuItemInfo.c)
 * Callees:
 *     ?xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C006B174 (-xxxRedrawForSetLPITEMInfo@@YAXPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006BE54 (-SetLPITEMInfoNoRedraw@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@.c)
 *     MNLookUpItem @ 0x1C006F45C (MNLookUpItem.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     MakeMenuRtoL @ 0x1C0232E5C (MakeMenuRtoL.c)
 */

__int64 __fastcall xxxSetMenuItemInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4, struct _UNICODE_STRING *a5)
{
  int v5; // edi
  int v6; // ebx
  struct tagITEM *v7; // rsi
  __int64 v8; // r10
  __int64 v9; // r11
  struct tagMENU *v10; // rdx
  struct tagMENU *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v16; // rdx
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
      v16 = 1LL;
    }
    else
    {
      v16 = 0LL;
      if ( (*(_DWORD *)(v9 + 40) & 0x20) == 0 )
        goto LABEL_3;
    }
    MakeMenuRtoL(v9, v16);
  }
LABEL_3:
  v10 = v18;
  v19[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v19;
  v19[1] = v10;
  if ( v10 )
    ++*((_DWORD *)v10 + 2);
  v11 = v18;
  v17 = 0;
  v14 = SetLPITEMInfoNoRedraw(v18, v7, (struct tagMENUITEMINFOW *)v8, a5, &v17);
  if ( v17 )
    xxxRedrawForSetLPITEMInfo(v11, v7);
  ThreadUnlock1(v13, v12);
  return v14;
}
