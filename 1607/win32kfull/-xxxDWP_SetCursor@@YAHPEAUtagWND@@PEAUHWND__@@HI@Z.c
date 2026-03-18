/*
 * XREFs of ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C007B458
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     zzzSetCursor @ 0x1C0078168 (zzzSetCursor.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     xxxGetSysMenu @ 0x1C00B83A0 (xxxGetSysMenu.c)
 *     _GetMenuState @ 0x1C00BB5FC (_GetMenuState.c)
 *     xxxActiveWindowTracking @ 0x1C01D8EBC (xxxActiveWindowTracking.c)
 *     xxxActivateEnabledPopup @ 0x1C022A578 (xxxActivateEnabledPopup.c)
 *     xxxFlashEnabledPopup @ 0x1C022A65C (xxxFlashEnabledPopup.c)
 */

__int64 __fastcall xxxDWP_SetCursor(struct tagWND *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // edi
  HWND v6; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v18; // esi
  char v19; // cl
  bool v20; // zf
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 SysMenu; // rax
  int MenuState; // edi
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // esi
  int v28; // esi
  int v29; // esi
  __int64 v30; // rbx
  _QWORD v31[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v32[3]; // [rsp+38h] [rbp-30h] BYREF

  v4 = a4;
  v5 = a3;
  v6 = (HWND)a2;
  if ( !(_DWORD)a4 )
    goto LABEL_5;
  v8 = *((_QWORD *)a1 + 3);
  if ( *(_QWORD *)(v8 + 320) )
  {
    if ( (*(_DWORD *)(v8 + 328) & 8) != 0 )
    {
      v19 = *((_BYTE *)a1 + 289);
      if ( (v19 & 3) != 0 )
      {
        if ( (_DWORD)a3 != 10 )
        {
          switch ( (_DWORD)a3 )
          {
            case 0xB:
              goto LABEL_42;
            case 0xD:
              goto LABEL_43;
            case 0xE:
LABEL_42:
              v20 = (v19 & 1) == 0;
              goto LABEL_44;
          }
          if ( (_DWORD)a3 != 16 )
          {
            if ( (_DWORD)a3 != 17 )
              goto LABEL_25;
            goto LABEL_42;
          }
        }
LABEL_43:
        v20 = (v19 & 2) == 0;
LABEL_44:
        if ( !v20 )
          goto LABEL_45;
        goto LABEL_25;
      }
    }
  }
  if ( (int)a3 < 10 )
  {
LABEL_5:
    if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
      v9 = *((_QWORD *)a1 + 11);
    else
      v9 = 0LL;
    v10 = *((_QWORD *)a1 + 3);
    v11 = 0LL;
    if ( v10 )
    {
      a2 = *(_QWORD **)(v10 + 8);
      if ( a2 )
        v11 = a2[2];
    }
    if ( v9 == v11 )
      v9 = 0LL;
    if ( v9 )
    {
      v32[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v32;
      v32[1] = v9;
      ++*(_DWORD *)(v9 + 8);
      v12 = xxxSendMessage(
              (struct tagWND *)v9,
              0x20u,
              (unsigned __int64)v6,
              (unsigned __int16)v5 | ((unsigned __int16)a4 << 16));
      ThreadUnlock1(v14, v13);
      if ( v12 )
        return 1LL;
    }
    if ( !v4 )
      goto LABEL_25;
    LOBYTE(a2) = 1;
    v15 = HMValidateHandleNoSecure((unsigned __int64)v6, (__int64)a2, v11, a4);
    if ( v15 )
    {
      if ( v5 == -2 )
      {
        v18 = v4 - 512;
        if ( !v18 )
        {
          if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
            xxxActiveWindowTracking(a1, 32LL);
          goto LABEL_25;
        }
        v27 = v18 - 1;
        if ( v27 )
        {
          v28 = v27 - 3;
          if ( v28 )
          {
            v29 = v28 - 3;
            if ( v29 )
            {
              if ( v29 != 4 )
                goto LABEL_25;
            }
          }
        }
        else
        {
          v30 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
          xxxActivateEnabledPopup(a1);
          if ( v30 != *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL) )
            goto LABEL_25;
        }
        xxxFlashEnabledPopup(a1);
        goto LABEL_25;
      }
      if ( v5 != 1 )
      {
LABEL_25:
        v16 = gasyscur[1];
        goto LABEL_19;
      }
      v16 = *(_QWORD *)(*(_QWORD *)(v15 + 152) + 120LL);
      if ( v16 )
LABEL_19:
        zzzSetCursor(v16);
    }
    return 0LL;
  }
  if ( (int)a3 <= 11 )
  {
LABEL_45:
    v21 = gasyscur[15];
    goto LABEL_46;
  }
  if ( (_DWORD)a3 != 12 )
  {
    if ( (_DWORD)a3 == 13 )
    {
LABEL_52:
      v21 = gasyscur[11];
      goto LABEL_46;
    }
    if ( (_DWORD)a3 == 14 )
    {
LABEL_51:
      v21 = gasyscur[13];
      goto LABEL_46;
    }
    if ( (_DWORD)a3 != 15 )
    {
      if ( (_DWORD)a3 != 16 )
      {
        if ( (_DWORD)a3 != 17 )
          goto LABEL_5;
        goto LABEL_52;
      }
      goto LABEL_51;
    }
  }
  v21 = gasyscur[17];
LABEL_46:
  LOBYTE(a2) = 1;
  v22 = HMValidateHandleNoSecure((unsigned __int64)v6, (__int64)a2, a3, a4);
  if ( !v22 )
    return 0LL;
  if ( (*(_BYTE *)(v22 + 54) & 8) != 0 )
  {
    v31[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v31;
    ++*(_DWORD *)(v22 + 8);
    v31[1] = v22;
    SysMenu = xxxGetSysMenu(v22, 1LL);
    MenuState = GetMenuState(SysMenu, 61440LL);
    ThreadUnlock1(v26, v25);
    if ( MenuState != -1 && (MenuState & 3) != 0 )
      goto LABEL_25;
  }
  zzzSetCursor(v21);
  return 1LL;
}
