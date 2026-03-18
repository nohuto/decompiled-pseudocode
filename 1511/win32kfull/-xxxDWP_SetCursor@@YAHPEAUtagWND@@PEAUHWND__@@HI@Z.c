/*
 * XREFs of ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00704E0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     zzzSetCursor @ 0x1C0070694 (zzzSetCursor.c)
 *     _GetMenuState @ 0x1C00C663C (_GetMenuState.c)
 *     xxxGetSysMenu @ 0x1C00C67E0 (xxxGetSysMenu.c)
 *     xxxActiveWindowTracking @ 0x1C01E2C7C (xxxActiveWindowTracking.c)
 *     xxxActivateEnabledPopup @ 0x1C0231730 (xxxActivateEnabledPopup.c)
 *     xxxFlashEnabledPopup @ 0x1C0231814 (xxxFlashEnabledPopup.c)
 */

__int64 __fastcall xxxDWP_SetCursor(struct tagWND *a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 v8; // rax
  __int64 DesktopWindow; // rax
  unsigned __int16 v10; // r8
  unsigned __int16 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  int v19; // esi
  char v20; // cl
  bool v21; // zf
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 SysMenu; // rax
  int MenuState; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // esi
  int v29; // esi
  int v30; // esi
  __int64 v31; // rbx
  _QWORD v32[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v33[3]; // [rsp+38h] [rbp-30h] BYREF

  if ( !a4 )
    goto LABEL_5;
  v8 = *((_QWORD *)a1 + 3);
  if ( *(_QWORD *)(v8 + 320) )
  {
    if ( (*(_DWORD *)(v8 + 328) & 8) != 0 )
    {
      v20 = *((_BYTE *)a1 + 289);
      if ( (v20 & 3) != 0 )
      {
        if ( a3 != 10 )
        {
          switch ( a3 )
          {
            case 11:
              goto LABEL_36;
            case 13:
              goto LABEL_37;
            case 14:
LABEL_36:
              v21 = (v20 & 1) == 0;
              goto LABEL_38;
          }
          if ( a3 != 16 )
          {
            if ( a3 != 17 )
              goto LABEL_19;
            goto LABEL_36;
          }
        }
LABEL_37:
        v21 = (v20 & 2) == 0;
LABEL_38:
        if ( !v21 )
          goto LABEL_39;
        goto LABEL_19;
      }
    }
  }
  if ( a3 < 10 )
  {
LABEL_5:
    DesktopWindow = GetDesktopWindow((__int64)a1);
    if ( v12 == DesktopWindow )
      v12 = 0LL;
    if ( v12 )
    {
      v33[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v33;
      v33[1] = v12;
      ++*(_DWORD *)(v12 + 8);
      v13 = xxxSendMessage((struct tagWND *)v12, 0x20u, a2, v10 | (v11 << 16));
      ThreadUnlock1(v15, v14);
      if ( v13 )
        return 1LL;
    }
    if ( !a4 )
      goto LABEL_19;
    v16 = HMValidateHandleNoSecure(a2, 1);
    if ( v16 )
    {
      if ( a3 == -2 )
      {
        v19 = a4 - 512;
        if ( !v19 )
        {
          if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
            xxxActiveWindowTracking(a1, 32LL);
          goto LABEL_19;
        }
        v28 = v19 - 1;
        if ( v28 )
        {
          v29 = v28 - 3;
          if ( v29 )
          {
            v30 = v29 - 3;
            if ( v30 )
            {
              if ( v30 != 4 )
                goto LABEL_19;
            }
          }
        }
        else
        {
          v31 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
          xxxActivateEnabledPopup(a1);
          if ( v31 != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL) )
            goto LABEL_19;
        }
        xxxFlashEnabledPopup(a1);
        goto LABEL_19;
      }
      if ( a3 != 1 )
      {
LABEL_19:
        v17 = gasyscur[1];
        goto LABEL_14;
      }
      v17 = *(_QWORD *)(*(_QWORD *)(v16 + 152) + 120LL);
      if ( v17 )
LABEL_14:
        zzzSetCursor(v17);
    }
    return 0LL;
  }
  if ( a3 <= 11 )
  {
LABEL_39:
    v22 = gasyscur[15];
    goto LABEL_40;
  }
  if ( a3 != 12 )
  {
    if ( a3 == 13 )
    {
LABEL_46:
      v22 = gasyscur[11];
      goto LABEL_40;
    }
    if ( a3 == 14 )
    {
LABEL_45:
      v22 = gasyscur[13];
      goto LABEL_40;
    }
    if ( a3 != 15 )
    {
      if ( a3 != 16 )
      {
        if ( a3 != 17 )
          goto LABEL_5;
        goto LABEL_46;
      }
      goto LABEL_45;
    }
  }
  v22 = gasyscur[17];
LABEL_40:
  v23 = HMValidateHandleNoSecure(a2, 1);
  if ( !v23 )
    return 0LL;
  if ( (*(_BYTE *)(v23 + 54) & 8) != 0 )
  {
    v32[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v32;
    ++*(_DWORD *)(v23 + 8);
    v32[1] = v23;
    SysMenu = xxxGetSysMenu(v23, 1LL);
    MenuState = GetMenuState(SysMenu, 61440LL);
    ThreadUnlock1(v27, v26);
    if ( MenuState != -1 && (MenuState & 3) != 0 )
      goto LABEL_19;
  }
  zzzSetCursor(v22);
  return 1LL;
}
