/*
 * XREFs of xxxDoScrollMenu @ 0x1C022C4CC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 * Callees:
 *     CalcSBStuff @ 0x1C00AF9AC (CalcSBStuff.c)
 *     GetAppCompatFlags @ 0x1C01140E0 (GetAppCompatFlags.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     GetWndSBDisableFlags @ 0x1C014F10C (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01CBCEC (safe_cast_fnid_to_PSBWND.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C022AF3C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C022B18C (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     SBCtlSetup @ 0x1C022C40C (SBCtlSetup.c)
 *     xxxSBTrackInit @ 0x1C022C980 (xxxSBTrackInit.c)
 */

void __fastcall xxxDoScrollMenu(struct tagWND *a1, struct tagWND *a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebp
  int v13; // r14d
  int v14; // eax
  struct tagMENU *ScrollMenu; // rax
  int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct tagWND *v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int16 v21; // [rsp+30h] [rbp-B8h]
  _QWORD v22[3]; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v23[64]; // [rsp+50h] [rbp-98h] BYREF

  v8 = safe_cast_fnid_to_PSBWND((__int64)a2);
  if ( (int)GetAppCompatFlags(0LL, v9, v10, v11) >= 0 )
  {
    if ( a2 )
    {
      if ( !v8 )
        return;
      SBCtlSetup(v8);
      v12 = (__int16)a4 - *((_DWORD *)a2 + 28);
      v13 = SWORD1(a4) - *((_DWORD *)a2 + 29);
      v14 = *(_DWORD *)(v8 + 364);
    }
    else
    {
      CalcSBStuff((__int64)a1, (__int64)v23, a3);
      LOBYTE(v14) = GetWndSBDisableFlags((__int64)a1, a3);
      v12 = (__int16)a4 - *((_DWORD *)a1 + 28);
      v13 = SWORD1(a4) - *((_DWORD *)a1 + 29);
    }
    v21 = v12;
    if ( (v14 & 3) != 3 )
    {
      ScrollMenu = xxxGetScrollMenu(a1, a3);
      if ( ScrollMenu )
      {
        v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v22;
        v22[1] = ScrollMenu;
        ++*((_DWORD *)ScrollMenu + 2);
        v16 = xxxTrackPopupMenuEx(
                (__int64)ScrollMenu,
                386LL,
                (unsigned int)(__int16)a4,
                (unsigned int)SWORD1(a4),
                (__int64)a1,
                0LL);
        ThreadUnlock1(v18, v17);
        if ( v16 )
        {
          if ( (unsigned __int8)v16 == 4 )
          {
            if ( a2 )
            {
              v19 = a2;
              v20 = v21 | (unsigned __int64)((unsigned __int16)v13 << 16);
            }
            else
            {
              v20 = a4;
              v19 = a1;
            }
            xxxSBTrackInit(v19, v20);
          }
          else
          {
            xxxDoScroll(a2, a1, (unsigned __int8)v16, 0, a3);
            xxxDoScroll(a2, a1, 8u, 0, a3);
          }
        }
      }
    }
  }
}
