/*
 * XREFs of ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0114054
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 * Callees:
 *     GreSaveDC @ 0x1C00167D0 (GreSaveDC.c)
 *     xxxDrawWindowFrame @ 0x1C0057540 (xxxDrawWindowFrame.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     GreGetLayout @ 0x1C008E4AC (GreGetLayout.c)
 *     _IsWindowVisible @ 0x1C00FA288 (_IsWindowVisible.c)
 *     GreSetWindowOrg @ 0x1C011442C (GreSetWindowOrg.c)
 */

__int64 __fastcall xxxDWPPrint(struct tagWND *a1, HDC a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  struct tagWND *v5; // rbx
  BOOL v6; // r12d
  int v7; // r13d
  unsigned int v8; // r13d
  struct tagBWL *v9; // rax
  struct tagBWL *v10; // r14
  unsigned __int64 *i; // r15
  __int64 DesktopWindow; // rax
  struct tagBWL *v13; // rax
  struct tagBWL *v14; // rsi
  unsigned __int64 *v15; // r14
  unsigned __int64 v16; // rcx
  struct tagWND *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned int v21; // r15d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // r12d
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct tagBWL *v28; // rcx
  int v29; // r14d
  int v30; // r14d
  unsigned int v31; // r15d
  __int64 v33; // [rsp+38h] [rbp-18h] BYREF
  struct tagWND *v34; // [rsp+40h] [rbp-10h]
  unsigned int v35; // [rsp+90h] [rbp+40h]
  int v36; // [rsp+A0h] [rbp+50h] BYREF
  int v37; // [rsp+A4h] [rbp+54h]
  struct tagWND *v38; // [rsp+A8h] [rbp+58h]

  v38 = a1;
  v3 = a3;
  v5 = a1;
  if ( (a3 & 1) != 0 && !(unsigned int)IsWindowVisible((__int64)a1) )
    return 0LL;
  v6 = (*((_BYTE *)v5 + 50) & 0x40) != 0 && (GreGetLayout(a2) & 1) == 0;
  if ( (v3 & 2) != 0 )
  {
    if ( (*((_BYTE *)v5 + 55) & 0x10) != 0 )
    {
      v7 = 0;
    }
    else
    {
      v7 = 1;
      SetVisible((__int64)v5, 5);
    }
    SetOrClrWF(1, v5, 0x180u, 1);
    if ( v6 )
    {
      v29 = *((_DWORD *)v5 + 30) - *((_DWORD *)v5 + 28);
      v35 = GreSetLayout(a2, (unsigned int)(v29 - 1), 1LL);
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame((__int64)v5, a2, (*((_BYTE *)v5 + 40) & 0x40) != 0);
      else
        xxxSendMessage(v5, 0xAFu, (unsigned __int64)a2, (*((unsigned __int8 *)v5 + 40) >> 6) & 1);
      GreSetLayout(a2, (unsigned int)(v29 - 1), v35);
    }
    else if ( gihmodUserApiHook < 0 )
    {
      xxxDrawWindowFrame((__int64)v5, a2, (*((_BYTE *)v5 + 40) & 0x40) != 0);
    }
    else
    {
      xxxSendMessage(v5, 0xAFu, (unsigned __int64)a2, (*((unsigned __int8 *)v5 + 40) >> 6) & 1);
    }
    SetOrClrWF(0, v5, 0x180u, 1);
    if ( v7 )
      SetVisible((__int64)v5, 0);
  }
  if ( (v3 & 4) == 0 )
    return 1LL;
  v8 = GreSaveDC(a2);
  if ( !v8 )
    return 0LL;
  GreGetDCPoint(a2, 8LL, &v36);
  if ( (v3 & 2) != 0 )
    GreSetWindowOrg(a2);
  GreIntersectClipRect(
    a2,
    0LL,
    0LL,
    (unsigned int)(*((_DWORD *)v5 + 34) - *((_DWORD *)v5 + 32)),
    *((_DWORD *)v5 + 35) - *((_DWORD *)v5 + 33));
  if ( v6 )
  {
    v30 = *((_DWORD *)v5 + 34) - *((_DWORD *)v5 + 32);
    v31 = GreSetLayout(a2, (unsigned int)(v30 - 1), 1LL);
    if ( (v3 & 8) != 0 )
      xxxSendMessage(v5, 0x14u, (unsigned __int64)a2, 0LL);
    xxxSendMessage(v5, 0x318u, (unsigned __int64)a2, v3);
    GreSetLayout(a2, (unsigned int)(v30 - 1), v31);
  }
  else
  {
    if ( (v3 & 8) != 0 )
      xxxSendMessage(v5, 0x14u, (unsigned __int64)a2, 0LL);
    xxxSendMessage(v5, 0x318u, (unsigned __int64)a2, v3);
  }
  GreRestoreDC(a2, v8);
  v36 += *((_DWORD *)v5 + 28);
  v37 += *((_DWORD *)v5 + 29);
  if ( (v3 & 0x10) != 0 )
  {
    v3 = v3 & 0xFFFFFFFFFFFFFFF4uLL | 0xA;
    v9 = BuildHwndList(*((_QWORD *)v5 + 12), 2, 0LL);
    v10 = v9;
    if ( v9 )
    {
      for ( i = (unsigned __int64 *)((char *)v9 + 32); *i != 1; ++i )
      {
        v24 = HMValidateHandleNoSecure(*i, 1);
        v5 = (struct tagWND *)v24;
        if ( v24 && (*(_BYTE *)(v24 + 55) & 0x10) != 0 )
        {
          v25 = GreSaveDC(a2);
          if ( !v25 )
          {
            v28 = v10;
            goto LABEL_49;
          }
          GreSetWindowOrg(a2);
          if ( *(char *)(*((_QWORD *)v5 + 19) + 84LL) >= 0 )
            GreIntersectClipRect(
              a2,
              0LL,
              0LL,
              (unsigned int)(*((_DWORD *)v5 + 30) - *((_DWORD *)v5 + 28)),
              *((_DWORD *)v5 + 31) - *((_DWORD *)v5 + 29));
          v33 = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = &v33;
          v34 = v5;
          ++*((_DWORD *)v5 + 2);
          xxxSendMessage(v5, 0x317u, (unsigned __int64)a2, v3);
          ThreadUnlock1(v27, v26);
          GreRestoreDC(a2, v25);
        }
      }
      FreeHwndList(v10);
    }
  }
  if ( (v3 & 0x20) == 0 )
    return 1LL;
  DesktopWindow = GetDesktopWindow((__int64)v5);
  v13 = BuildHwndList(*(_QWORD *)(DesktopWindow + 96), 2, 0LL);
  v14 = v13;
  if ( !v13 )
    return 1LL;
  v15 = (unsigned __int64 *)((char *)v13 + 32);
  v16 = *((_QWORD *)v13 + 4);
  if ( v16 == 1 )
  {
LABEL_32:
    FreeHwndList(v14);
    return 1LL;
  }
  v17 = v38;
  while ( 1 )
  {
    v18 = HMValidateHandleNoSecure(v16, 1);
    v19 = v18;
    if ( !v18 || *(struct tagWND **)(v18 + 104) != v17 || (*(_BYTE *)(v18 + 55) & 0x10) == 0 )
      goto LABEL_31;
    v21 = GreSaveDC(a2);
    if ( !v21 )
      break;
    GreSetWindowOrg(a2);
    v33 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v33;
    v34 = (struct tagWND *)v19;
    ++*(_DWORD *)(v19 + 8);
    xxxSendMessage((struct tagWND *)v19, 0x317u, (unsigned __int64)a2, a3);
    ThreadUnlock1(v23, v22);
    GreRestoreDC(a2, v21);
LABEL_31:
    v16 = *++v15;
    if ( *v15 == 1 )
      goto LABEL_32;
  }
  v28 = v14;
LABEL_49:
  FreeHwndList(v28);
  return 0LL;
}
