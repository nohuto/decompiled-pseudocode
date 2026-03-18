/*
 * XREFs of ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C013EC54
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     GreGetLayout @ 0x1C006B8B4 (GreGetLayout.c)
 *     FreeHwndList @ 0x1C006D900 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006D970 (BuildHwndList.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     xxxDrawWindowFrame @ 0x1C00CBB20 (xxxDrawWindowFrame.c)
 *     GreSaveDC @ 0x1C00CC540 (GreSaveDC.c)
 *     _IsWindowVisible @ 0x1C0103758 (_IsWindowVisible.c)
 *     GreSetWindowOrg @ 0x1C013F02C (GreSetWindowOrg.c)
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
  __int64 v19; // rdx
  __int64 v20; // rbx
  unsigned int v22; // r15d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  unsigned int v27; // r12d
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct tagBWL *v30; // rcx
  int v31; // r14d
  int v32; // r14d
  unsigned int v33; // r15d
  __int64 v35; // [rsp+38h] [rbp-18h] BYREF
  struct tagWND *v36; // [rsp+40h] [rbp-10h]
  unsigned int v37; // [rsp+90h] [rbp+40h]
  int v38; // [rsp+A0h] [rbp+50h] BYREF
  int v39; // [rsp+A4h] [rbp+54h]
  struct tagWND *v40; // [rsp+A8h] [rbp+58h]

  v40 = a1;
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
      v31 = *((_DWORD *)v5 + 30) - *((_DWORD *)v5 + 28);
      v37 = GreSetLayout(a2, (unsigned int)(v31 - 1), 1LL);
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame((__int64)v5, a2, (*((_BYTE *)v5 + 40) & 0x40) != 0);
      else
        xxxSendMessage(v5, 0xAFu, (unsigned __int64)a2, (*((unsigned __int8 *)v5 + 40) >> 6) & 1);
      GreSetLayout(a2, (unsigned int)(v31 - 1), v37);
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
  v8 = GreSaveDC((__int64)a2, (__int64)a2);
  if ( !v8 )
    return 0LL;
  GreGetDCPoint(a2, 8LL, &v38);
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
    v32 = *((_DWORD *)v5 + 34) - *((_DWORD *)v5 + 32);
    v33 = GreSetLayout(a2, (unsigned int)(v32 - 1), 1LL);
    if ( (v3 & 8) != 0 )
      xxxSendMessage(v5, 0x14u, (unsigned __int64)a2, 0LL);
    xxxSendMessage(v5, 0x318u, (unsigned __int64)a2, v3);
    GreSetLayout(a2, (unsigned int)(v32 - 1), v33);
  }
  else
  {
    if ( (v3 & 8) != 0 )
      xxxSendMessage(v5, 0x14u, (unsigned __int64)a2, 0LL);
    xxxSendMessage(v5, 0x318u, (unsigned __int64)a2, v3);
  }
  GreRestoreDC(a2, v8);
  v38 += *((_DWORD *)v5 + 28);
  v39 += *((_DWORD *)v5 + 29);
  if ( (v3 & 0x10) != 0 )
  {
    v3 = v3 & 0xFFFFFFFFFFFFFFF4uLL | 0xA;
    v9 = BuildHwndList(*((_QWORD *)v5 + 12), 2, 0LL);
    v10 = v9;
    if ( v9 )
    {
      for ( i = (unsigned __int64 *)((char *)v9 + 32); *i != 1; ++i )
      {
        v25 = HMValidateHandleNoSecure(*i, 1);
        v5 = (struct tagWND *)v25;
        if ( v25 && (*(_BYTE *)(v25 + 55) & 0x10) != 0 )
        {
          v27 = GreSaveDC((__int64)a2, v26);
          if ( !v27 )
          {
            v30 = v10;
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
          v35 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v35;
          v36 = v5;
          ++*((_DWORD *)v5 + 2);
          xxxSendMessage(v5, 0x317u, (unsigned __int64)a2, v3);
          ThreadUnlock1(v29, v28);
          GreRestoreDC(a2, v27);
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
  v17 = v40;
  while ( 1 )
  {
    v18 = HMValidateHandleNoSecure(v16, 1);
    v20 = v18;
    if ( !v18 || *(struct tagWND **)(v18 + 104) != v17 || (*(_BYTE *)(v18 + 55) & 0x10) == 0 )
      goto LABEL_31;
    v22 = GreSaveDC((__int64)a2, v19);
    if ( !v22 )
      break;
    GreSetWindowOrg(a2);
    v35 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v35;
    v36 = (struct tagWND *)v20;
    ++*(_DWORD *)(v20 + 8);
    xxxSendMessage((struct tagWND *)v20, 0x317u, (unsigned __int64)a2, a3);
    ThreadUnlock1(v24, v23);
    GreRestoreDC(a2, v22);
LABEL_31:
    v16 = *++v15;
    if ( *v15 == 1 )
      goto LABEL_32;
  }
  v30 = v14;
LABEL_49:
  FreeHwndList(v30);
  return 0LL;
}
