/*
 * XREFs of xxxDrawMenuItem @ 0x14000B428
 * Callers:
 *     xxxMenuDraw @ 0x14000A708 (xxxMenuDraw.c)
 *     xxxMNInvertItem @ 0x140120C3C (xxxMNInvertItem.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x14020D1E0 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 * Callees:
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x14000AE70 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x14000B04C (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     MNIsFlatMenu @ 0x14000B3F8 (MNIsFlatMenu.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14000BCD4 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNIspItemValid @ 0x14000C5A8 (MNIspItemValid.c)
 *     ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x14000CF40 (-MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     GreSetTextColor @ 0x140027BB0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140027C40 (GreSetBkColor.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400341BC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     GetOemBitmapInfo @ 0x140124E90 (GetOemBitmapInfo.c)
 *     GreSetBkMode @ 0x140126104 (GreSetBkMode.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     GrePolyPatBlt @ 0x140126C64 (GrePolyPatBlt.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x1401C0154 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     GreSetTextCharacterExtra @ 0x1401F92E4 (GreSetTextCharacterExtra.c)
 *     xxxDrawState @ 0x1401F9348 (xxxDrawState.c)
 *     BltColor @ 0x1401FB750 (BltColor.c)
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x14024FB04 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 *     ?MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z @ 0x140257344 (-MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z.c)
 *     GreGetTextCharacterExtra @ 0x1402948B0 (GreGetTextCharacterExtra.c)
 *     ?MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402FA164 (-MNDrawMenu3DHotTracking@@YAXPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     GetDpiMetricsForDpi @ 0x140302424 (GetDpiMetricsForDpi.c)
 *     GetDpiServerInfoForDpi @ 0x1403025B0 (GetDpiServerInfoForDpi.c)
 */

__int64 __fastcall xxxDrawMenuItem(HDC a1, __int64 a2, struct tagMENU ***a3, __int64 a4, char a5, __int64 a6)
{
  BOOL v6; // r15d
  int v8; // r13d
  unsigned int v10; // ebx
  BOOL v12; // eax
  struct tagMENU *v13; // rcx
  BOOL v14; // edi
  int v15; // eax
  __int64 v16; // rdx
  struct tagMENU *v17; // rcx
  int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagMENU *v21; // rcx
  __int64 result; // rax
  struct tagMENU *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int16 *OemBitmapInfo; // rdi
  int v27; // r11d
  int v28; // r10d
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdi
  struct tagMENU *v33; // rcx
  __int64 v34; // rcx
  int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  BOOL v46; // r15d
  int v47; // ebx
  struct tagMENU *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rdx
  _DWORD *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 UserSessionState; // rax
  int v68; // [rsp+50h] [rbp-78h]
  __int64 v69; // [rsp+58h] [rbp-70h]
  __int64 v70; // [rsp+60h] [rbp-68h]
  _DWORD v71[4]; // [rsp+78h] [rbp-50h] BYREF
  __int64 v72; // [rsp+88h] [rbp-40h]
  unsigned int v73; // [rsp+D8h] [rbp+10h]
  int v74; // [rsp+E0h] [rbp+18h]
  BOOL v75; // [rsp+E8h] [rbp+20h]

  v73 = a2;
  v6 = 0;
  v68 = 0;
  v8 = 0;
  v70 = 0LL;
  v10 = a2;
  v12 = MNIsFlatMenu((__int64)a1, a2);
  v13 = (struct tagMENU *)a3[2];
  v14 = v12;
  v75 = v12;
  if ( !v13 )
    v13 = **a3;
  v74 = MNIsOwnerDrawItem(v13, (struct tagITEM *)a4);
  v15 = MNDrawHilite(a3, a4);
  if ( v14 )
  {
    if ( v15 || (v18 = 0, (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x10000100) != 0) )
      v18 = 1;
    v17 = **a3;
    v6 = (*(_DWORD *)(*((_QWORD *)v17 + 5) + 40LL) & 1) == 0;
  }
  else
  {
    v18 = v15;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
  {
    v37 = *(_QWORD *)(GetDpiMetricsForDpi(v10) + 48);
    if ( v37 )
    {
      v70 = GreSelectFont(a1, v37);
    }
    else
    {
      v8 = 64;
      GreGetTextCharacterExtra(a1);
      GetDpiServerInfoForDpi(v10);
      GetDpiMetricsForDpi(v73);
      GreSetTextCharacterExtra(a1);
      v14 = v75;
    }
  }
  if ( v74 )
  {
    W32GetUserSessionState(v17, v16);
    GreSetTextColor(a1);
    W32GetUserSessionState(v20, v19);
    GreSetBkColor(a1);
    xxxSendMenuDrawItemMessage((__int64)a1, (a5 & 1) + 1, a3, (struct tagMENU ***)a4, 0, 0, a6);
    v21 = (struct tagMENU *)a3[2];
    if ( !v21 )
      v21 = **a3;
    result = MNIspItemValid(v21, a4);
    if ( (_BYTE)result )
    {
      if ( (*(_DWORD *)(*((_QWORD *)**a3 + 5) + 40LL) & 1) != 0 && *(_QWORD *)(a4 + 16) )
      {
        v23 = (struct tagMENU *)a3[2];
        if ( !v23 )
          v23 = **a3;
        if ( !(unsigned int)MNIsUAHMenu(v23) )
        {
          W32GetUserSessionState(v25, v24);
          OemBitmapInfo = (__int16 *)GetOemBitmapInfo((**(_DWORD **)a4 & 0x2000) != 0 ? 92 : 62);
          if ( *(_DWORD *)(*(_QWORD *)a4 + 76LL) >= OemBitmapInfo[3] )
          {
            if ( PrepareHDCBITSBitmap(0LL) )
            {
              v27 = OemBitmapInfo[3];
              v28 = (*(_DWORD *)(*(_QWORD *)a4 + 76LL) - v27 - 2) / 2;
              if ( v28 <= 0 )
                v28 = 0;
              BltColor(
                a1,
                *(_DWORD *)(*(_QWORD *)a4 + 68LL) + v28,
                OemBitmapInfo[2],
                v27,
                *OemBitmapInfo,
                OemBitmapInfo[1],
                1);
            }
          }
        }
      }
LABEL_11:
      MNDrawInsertionBar(a1, (struct tagITEM *)a4);
      if ( v68 )
        GreSetBkMode(a1);
      result = *(_QWORD *)a4;
      if ( (*(_DWORD *)(*(_QWORD *)a4 + 4LL) & 0x1000) != 0 )
      {
        if ( v70 )
        {
          return GreSelectFont(a1, v70);
        }
        else
        {
          GreGetTextCharacterExtra(a1);
          return GreSetTextCharacterExtra(a1);
        }
      }
      return result;
    }
    return result;
  }
  if ( v18 )
  {
    if ( v14 )
    {
      v49 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19904);
      v35 = *(_DWORD *)(v49 + 4684);
      v52 = *(_QWORD *)(W32GetUserSessionState(v49, v50) + 19904);
      v53 = *(_QWORD *)(v52 + 4928);
    }
    else
    {
      v17 = (struct tagMENU *)*(unsigned int *)(*((_QWORD *)**a3 + 5) + 40LL);
      if ( ((unsigned __int8)v17 & 1) == 0 )
        goto LABEL_34;
      v54 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19904);
      v35 = *(_DWORD *)(v54 + 4620);
      v52 = *(_QWORD *)(W32GetUserSessionState(v54, v55) + 19904);
      v53 = *(_QWORD *)(v52 + 4800);
    }
    v69 = v53;
    v56 = *(_QWORD *)(W32GetUserSessionState(v52, v51) + 19904);
    v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v56, v57) + 19904) + 4808LL);
    goto LABEL_35;
  }
  if ( !v6 )
  {
LABEL_34:
    v38 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19904);
    v35 = *(_DWORD *)(v38 + 4584);
    v40 = *(_QWORD *)(W32GetUserSessionState(v38, v39) + 19904);
    v69 = *(_QWORD *)(v40 + 4728);
    v42 = *(_QWORD *)(W32GetUserSessionState(v40, v41) + 19904);
    v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v42, v43) + 19904) + 4752LL);
    goto LABEL_35;
  }
  v29 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19904);
  v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v29, v30) + 19904) + 4752LL);
  v33 = **a3;
  if ( *(_QWORD *)(*((_QWORD *)v33 + 5) + 24LL) )
  {
    v35 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v33, v31) + 19904) + 4688LL);
    v69 = *(_QWORD *)(*((_QWORD *)**a3 + 5) + 24LL);
  }
  else
  {
    v34 = *(_QWORD *)(W32GetUserSessionState(v33, v31) + 19904);
    v35 = *(_DWORD *)(v34 + 4688);
    v69 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v34, v36) + 19904) + 4936LL);
  }
LABEL_35:
  if ( !(unsigned int)MNIsCachedBmpOnly((struct tagITEM *)a4) )
  {
    v45 = *(unsigned int *)(*(_QWORD *)a4 + 4LL);
    if ( (v45 & 1) != 0 || (v45 = *(unsigned int *)(*((_QWORD *)**a3 + 5) + 40LL), (v45 & 0x10) != 0) )
    {
      if ( v18
        || (v45 = *(_QWORD *)(W32GetUserSessionState(v45, v44) + 19904), v35 != *(_DWORD *)(v45 + 4628))
        || (v45 = *(_QWORD *)(W32GetUserSessionState(v45, v44) + 19904), *(_DWORD *)(v45 + 2188)) )
      {
        v61 = *(_QWORD *)(W32GetUserSessionState(v45, v44) + 19904);
        if ( *(_DWORD *)(v61 + 4636) != v35 )
        {
          v62 = *(_QWORD *)(W32GetUserSessionState(v61, v60) + 19904);
          v32 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v62, v63) + 19904) + 4832LL);
          goto LABEL_38;
        }
      }
      else
      {
        v59 = *(_QWORD *)(W32GetUserSessionState(v45, v44) + 19904);
        if ( *(_DWORD *)(v59 + 4632) != v35
          || *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v59, v58) + 19904) + 4648LL) != v35 )
        {
          v8 |= (*(_DWORD *)(*((_QWORD *)**a3 + 5) + 40LL) & 0x10) != 0 ? 256 : 32;
          goto LABEL_38;
        }
      }
      v8 |= 0x10u;
    }
  }
LABEL_38:
  GreSetBkColor(a1);
  GreSetTextColor(a1);
  if ( (a5 & 1) != 0 && !*(_QWORD *)(*((_QWORD *)**a3 + 5) + 24LL) || v18 || v6 )
  {
    v64 = *(_DWORD **)a4;
    v71[0] = *(_DWORD *)(*(_QWORD *)a4 + 64LL);
    v71[1] = v64[17];
    v71[2] = v64[18];
    v71[3] = v64[19];
    v72 = v69;
    GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v71, 1u);
    v46 = v75;
    if ( v18 && v75 )
    {
      UserSessionState = W32GetUserSessionState(v66, v65);
      DrawOutline(
        a1,
        *(_DWORD *)(*(_QWORD *)a4 + 64LL),
        *(_DWORD *)(*(_QWORD *)a4 + 68LL),
        *(_DWORD *)(*(_QWORD *)a4 + 72LL),
        *(_DWORD *)(*(_QWORD *)a4 + 76LL),
        1,
        *(HBRUSH *)(*(_QWORD *)(UserSessionState + 19904) + 4800LL));
    }
  }
  else
  {
    v46 = v75;
  }
  if ( *(_QWORD *)(*((_QWORD *)**a3 + 5) + 24LL) )
  {
    v47 = GreSetBkMode(a1);
    v68 = v47;
  }
  else
  {
    v47 = 0;
  }
  GreSelectBrush(a1, v32);
  xxxDrawState(
    a1,
    *(_DWORD *)(*(_QWORD *)a4 + 68LL),
    *(_DWORD *)(*(_QWORD *)a4 + 72LL),
    *(_DWORD *)(*(_QWORD *)a4 + 76LL),
    v8);
  v48 = (struct tagMENU *)a3[2];
  if ( !v48 )
    v48 = **a3;
  result = MNIspItemValid(v48, a4);
  if ( (_BYTE)result )
  {
    if ( !v46 )
      MNDrawMenu3DHotTracking(a1, a3, a4);
    goto LABEL_11;
  }
  if ( v47 )
    return GreSetBkMode(a1);
  return result;
}
