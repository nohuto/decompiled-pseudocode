/*
 * XREFs of ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0064790
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     zzzSetCursor @ 0x1C0062174 (zzzSetCursor.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     _GetMenuState @ 0x1C0107C3C (_GetMenuState.c)
 *     xxxGetSysMenu @ 0x1C0107D14 (xxxGetSysMenu.c)
 *     xxxActiveWindowTracking @ 0x1C01E27EC (xxxActiveWindowTracking.c)
 *     xxxActivateEnabledPopup @ 0x1C0231300 (xxxActivateEnabledPopup.c)
 *     xxxFlashEnabledPopup @ 0x1C02313E4 (xxxFlashEnabledPopup.c)
 */

__int64 __fastcall xxxDWP_SetCursor(struct tagWND *a1, HWND a2, int a3, int a4)
{
  HWND v6; // r15
  __int64 DesktopWindow; // rax
  __int64 v9; // rdx
  __int64 v10; // r10
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v17; // esi
  char v18; // cl
  bool v19; // zf
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 SysMenu; // rax
  int MenuState; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // esi
  int v27; // esi
  int v28; // esi
  __int64 v29; // rbx
  _QWORD v30[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v31[3]; // [rsp+38h] [rbp-30h] BYREF

  v6 = a2;
  if ( !a4 )
    goto LABEL_4;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 3) + 320LL) & 8) != 0 )
  {
    v18 = *((_BYTE *)a1 + 289);
    if ( (v18 & 3) != 0 )
    {
      if ( a3 != 10 )
      {
        switch ( a3 )
        {
          case 11:
            goto LABEL_35;
          case 13:
            goto LABEL_36;
          case 14:
LABEL_35:
            v19 = (v18 & 1) == 0;
            goto LABEL_37;
        }
        if ( a3 != 16 )
        {
          if ( a3 != 17 )
            goto LABEL_18;
          goto LABEL_35;
        }
      }
LABEL_36:
      v19 = (v18 & 2) == 0;
LABEL_37:
      if ( !v19 )
        goto LABEL_38;
      goto LABEL_18;
    }
  }
  if ( a3 < 10 )
  {
LABEL_4:
    DesktopWindow = GetDesktopWindow(a1);
    if ( v10 == DesktopWindow )
      v10 = 0LL;
    if ( v10 )
    {
      v31[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v31;
      v31[1] = v10;
      ++*(_DWORD *)(v10 + 8);
      v11 = xxxSendMessage(v10, 32LL, v6);
      ThreadUnlock1(v13, v12);
      if ( v11 )
        return 1LL;
    }
    if ( !a4 )
      goto LABEL_18;
    LOBYTE(v9) = 1;
    v14 = HMValidateHandleNoSecure(v6, v9);
    if ( v14 )
    {
      if ( a3 == -2 )
      {
        v17 = a4 - 512;
        if ( !v17 )
        {
          if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
            xxxActiveWindowTracking(a1, 32LL, 4294967294LL);
          goto LABEL_18;
        }
        v26 = v17 - 1;
        if ( v26 )
        {
          v27 = v26 - 3;
          if ( v27 )
          {
            v28 = v27 - 3;
            if ( v28 )
            {
              if ( v28 != 4 )
                goto LABEL_18;
            }
          }
        }
        else
        {
          v29 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
          xxxActivateEnabledPopup(a1);
          if ( v29 != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL) )
            goto LABEL_18;
        }
        xxxFlashEnabledPopup(a1);
        goto LABEL_18;
      }
      if ( a3 != 1 )
      {
LABEL_18:
        v15 = gasyscur[1];
        goto LABEL_13;
      }
      v15 = *(_QWORD *)(*(_QWORD *)(v14 + 152) + 120LL);
      if ( v15 )
LABEL_13:
        zzzSetCursor(v15);
    }
    return 0LL;
  }
  if ( a3 <= 11 )
  {
LABEL_38:
    v20 = gasyscur[15];
    goto LABEL_39;
  }
  if ( a3 != 12 )
  {
    if ( a3 == 13 )
    {
LABEL_45:
      v20 = gasyscur[11];
      goto LABEL_39;
    }
    if ( a3 == 14 )
    {
LABEL_44:
      v20 = gasyscur[13];
      goto LABEL_39;
    }
    if ( a3 != 15 )
    {
      if ( a3 != 16 )
      {
        if ( a3 != 17 )
          goto LABEL_4;
        goto LABEL_45;
      }
      goto LABEL_44;
    }
  }
  v20 = gasyscur[17];
LABEL_39:
  LOBYTE(a2) = 1;
  v21 = HMValidateHandleNoSecure(v6, a2);
  if ( !v21 )
    return 0LL;
  if ( (*(_BYTE *)(v21 + 54) & 8) != 0 )
  {
    v30[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v30;
    ++*(_DWORD *)(v21 + 8);
    v30[1] = v21;
    SysMenu = xxxGetSysMenu(v21, 1LL);
    MenuState = GetMenuState(SysMenu, 61440LL);
    ThreadUnlock1(v25, v24);
    if ( MenuState != -1 && (MenuState & 3) != 0 )
      goto LABEL_18;
  }
  zzzSetCursor(v20);
  return 1LL;
}
