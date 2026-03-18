/*
 * XREFs of ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0144604
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 * Callees:
 *     GreSaveDC @ 0x1C0049A00 (GreSaveDC.c)
 *     GreGetLayout @ 0x1C005D99C (GreGetLayout.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     xxxDrawWindowFrame @ 0x1C00AE488 (xxxDrawWindowFrame.c)
 *     _IsWindowVisible @ 0x1C012641C (_IsWindowVisible.c)
 *     GreSetWindowOrg @ 0x1C0144ABC (GreSetWindowOrg.c)
 */

__int64 __fastcall xxxDWPPrint(struct tagWND *a1, HDC a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  struct tagWND *v5; // rbx
  BOOL v6; // r12d
  int v7; // r13d
  unsigned int v8; // r13d
  struct tagBWL *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagBWL *v13; // r14
  unsigned __int64 *i; // r15
  __int64 DesktopWindow; // rax
  struct tagBWL *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct tagBWL *v20; // rsi
  unsigned __int64 *v21; // r14
  unsigned __int64 v22; // rcx
  struct tagWND *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rbx
  unsigned int v27; // r15d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned int v31; // r12d
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct tagBWL *v34; // rcx
  int v35; // r14d
  int v36; // r14d
  unsigned int v37; // r15d
  __int64 v39; // [rsp+38h] [rbp-18h] BYREF
  struct tagWND *v40; // [rsp+40h] [rbp-10h]
  unsigned int v41; // [rsp+90h] [rbp+40h]
  int v42; // [rsp+A0h] [rbp+50h] BYREF
  int v43; // [rsp+A4h] [rbp+54h]
  struct tagWND *v44; // [rsp+A8h] [rbp+58h]

  v44 = a1;
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
      SetVisible(v5, 5);
    }
    SetOrClrWF(1, v5, 0x180u, 1);
    if ( v6 )
    {
      v35 = *((_DWORD *)v5 + 30) - *((_DWORD *)v5 + 28);
      v41 = GreSetLayout(a2, (unsigned int)(v35 - 1), 1LL);
      if ( gihmodUserApiHook < 0 )
        xxxDrawWindowFrame((__int64)v5, a2, (*((_BYTE *)v5 + 40) & 0x40) != 0);
      else
        xxxSendMessage(v5, 0xAFu, (unsigned __int64)a2, (*((unsigned __int8 *)v5 + 40) >> 6) & 1);
      GreSetLayout(a2, (unsigned int)(v35 - 1), v41);
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
      SetVisible(v5, 0);
  }
  if ( (v3 & 4) == 0 )
    return 1LL;
  v8 = GreSaveDC(a2);
  if ( !v8 )
    return 0LL;
  GreGetDCPoint(a2, 8LL, &v42);
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
    v36 = *((_DWORD *)v5 + 34) - *((_DWORD *)v5 + 32);
    v37 = GreSetLayout(a2, (unsigned int)(v36 - 1), 1LL);
    if ( (v3 & 8) != 0 )
      xxxSendMessage(v5, 0x14u, (unsigned __int64)a2, 0LL);
    xxxSendMessage(v5, 0x318u, (unsigned __int64)a2, v3);
    GreSetLayout(a2, (unsigned int)(v36 - 1), v37);
  }
  else
  {
    if ( (v3 & 8) != 0 )
      xxxSendMessage(v5, 0x14u, (unsigned __int64)a2, 0LL);
    xxxSendMessage(v5, 0x318u, (unsigned __int64)a2, v3);
  }
  GreRestoreDC(a2, v8);
  v42 += *((_DWORD *)v5 + 28);
  v43 += *((_DWORD *)v5 + 29);
  if ( (v3 & 0x10) != 0 )
  {
    v3 = v3 & 0xFFFFFFFFFFFFFFF4uLL | 0xA;
    v9 = BuildHwndList(*((_QWORD *)v5 + 12), (struct tagWND *)2, 0LL);
    v13 = v9;
    if ( v9 )
    {
      for ( i = (unsigned __int64 *)((char *)v9 + 32); *i != 1; ++i )
      {
        LOBYTE(v10) = 1;
        v30 = HMValidateHandleNoSecure(*i, v10, v11, v12);
        v5 = (struct tagWND *)v30;
        if ( v30 && (*(_BYTE *)(v30 + 55) & 0x10) != 0 )
        {
          v31 = GreSaveDC(a2);
          if ( !v31 )
          {
            v34 = v13;
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
          v39 = *(_QWORD *)(gptiCurrent + 368LL);
          *(_QWORD *)(gptiCurrent + 368LL) = &v39;
          v40 = v5;
          ++*((_DWORD *)v5 + 2);
          xxxSendMessage(v5, 0x317u, (unsigned __int64)a2, v3);
          ThreadUnlock1(v33, v32);
          GreRestoreDC(a2, v31);
        }
      }
      FreeHwndList(v13);
    }
  }
  if ( (v3 & 0x20) == 0 )
    return 1LL;
  DesktopWindow = GetDesktopWindow((__int64)v5);
  v16 = BuildHwndList(*(_QWORD *)(DesktopWindow + 96), (struct tagWND *)2, 0LL);
  v20 = v16;
  if ( !v16 )
    return 1LL;
  v21 = (unsigned __int64 *)((char *)v16 + 32);
  v22 = *((_QWORD *)v16 + 4);
  if ( v22 == 1 )
  {
LABEL_32:
    FreeHwndList(v20);
    return 1LL;
  }
  v23 = v44;
  while ( 1 )
  {
    LOBYTE(v17) = 1;
    v24 = HMValidateHandleNoSecure(v22, v17, v18, v19);
    v25 = v24;
    if ( !v24 || *(struct tagWND **)(v24 + 104) != v23 || (*(_BYTE *)(v24 + 55) & 0x10) == 0 )
      goto LABEL_31;
    v27 = GreSaveDC(a2);
    if ( !v27 )
      break;
    GreSetWindowOrg(a2);
    v39 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v39;
    v40 = (struct tagWND *)v25;
    ++*(_DWORD *)(v25 + 8);
    xxxSendMessage((struct tagWND *)v25, 0x317u, (unsigned __int64)a2, a3);
    ThreadUnlock1(v29, v28);
    GreRestoreDC(a2, v27);
LABEL_31:
    v22 = *++v21;
    if ( *v21 == 1 )
      goto LABEL_32;
  }
  v34 = v20;
LABEL_49:
  FreeHwndList(v34);
  return 0LL;
}
