/*
 * XREFs of xxxRealDrawMenuItem @ 0x1401F9D14
 * Callers:
 *     xxxDrawState @ 0x1401F9348 (xxxDrawState.c)
 * Callees:
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x14000B04C (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     MNIsFlatMenu @ 0x14000B3F8 (MNIsFlatMenu.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14000BCD4 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNIspItemValid @ 0x14000C5A8 (MNIspItemValid.c)
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     GreCreateReferencedDIBitmap @ 0x1400181E0 (GreCreateReferencedDIBitmap.c)
 *     _DrawIconEx @ 0x140027334 (_DrawIconEx.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     BitBltSysBmp @ 0x140124BEC (BitBltSysBmp.c)
 *     GetOemBitmapInfo @ 0x140124E90 (GetOemBitmapInfo.c)
 *     ?GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z @ 0x14014D3C8 (-GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z.c)
 *     ?PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z @ 0x1401C0154 (-PrepareHDCBITSBitmap@@YAPEAUHDC__@@PEAU1@@Z.c)
 *     FindCharPosition @ 0x1401FAD58 (FindCharPosition.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1401FAD80 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMGetTextExtent @ 0x1401FB45C (xxxPSMGetTextExtent.c)
 *     BltColor @ 0x1401FB750 (BltColor.c)
 *     xxxPSMTextOut @ 0x1401FB8A8 (xxxPSMTextOut.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1402E1904 (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402F9E30 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     GetDpiMetricsForCurrentThread @ 0x1403023CC (GetDpiMetricsForCurrentThread.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxRealDrawMenuItem(Gre::Base *a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  int v9; // esi
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  struct tagTHREADINFO *v13; // r15
  int v14; // r14d
  struct tagITEM *v15; // rdi
  int v16; // ebx
  __int64 v17; // rcx
  bool v18; // zf
  int v19; // r8d
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int16 *OemBitmapInfo; // rax
  unsigned int v27; // ebx
  struct tagWND *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct tagCURSOR *WindowSmIcon; // r15
  unsigned int v32; // r14d
  unsigned int v33; // ebx
  __int64 UserSessionState; // rax
  int v35; // r13d
  int DpiDependentMetric; // r12d
  int v37; // ecx
  __int64 v38; // rdx
  int v39; // r14d
  unsigned int DpiForSystem; // eax
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // eax
  __int64 v44; // rbx
  __int64 v45; // rax
  int ObjectW; // eax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r15
  __int64 v50; // r14
  __int64 v51; // rdx
  HDC CompatibleDC; // rbx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  unsigned __int8 *v58; // r9
  __int64 v59; // r10
  unsigned int v60; // r8d
  __int64 v61; // rcx
  unsigned int v62; // ebx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r11
  _WORD *v70; // r15
  int v71; // r13d
  __int64 DpiMetricsForCurrentThread; // rax
  __int64 v73; // rbx
  __int64 v74; // r9
  int v75; // r8d
  int v76; // eax
  unsigned int CharPosition; // r12d
  int v78; // eax
  int v79; // ebx
  int v80; // r14d
  char *v81; // rax
  int v82; // r11d
  int v83; // ebx
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rsi
  __int64 v87; // rcx
  int v88; // ecx
  HDC v89; // r14
  __int64 v90; // rcx
  __int64 v91; // rcx
  int v92; // r10d
  __int64 v93; // r11
  __int16 *v94; // rbx
  int v95; // r10d
  int v96; // eax
  __int64 v97; // rcx
  __int64 v98; // r11
  __int64 v99; // rcx
  __int64 v100; // rcx
  int v102; // [rsp+20h] [rbp-E0h]
  int v103; // [rsp+28h] [rbp-D8h]
  int v104; // [rsp+30h] [rbp-D0h]
  int v105; // [rsp+38h] [rbp-C8h]
  int v106; // [rsp+40h] [rbp-C0h]
  int v107; // [rsp+48h] [rbp-B8h]
  int v108; // [rsp+50h] [rbp-B0h]
  int v109; // [rsp+58h] [rbp-A8h]
  int v110; // [rsp+70h] [rbp-90h]
  int v111; // [rsp+74h] [rbp-8Ch]
  int v112; // [rsp+74h] [rbp-8Ch]
  BOOL v114; // [rsp+88h] [rbp-78h]
  struct tagMENU **v115[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v116; // [rsp+A0h] [rbp-60h]
  __int64 v117; // [rsp+A8h] [rbp-58h]
  __int64 v118; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v119; // [rsp+B8h] [rbp-48h]
  _OWORD v120[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v121; // [rsp+E0h] [rbp-20h]
  int v122; // [rsp+E8h] [rbp-18h]
  _WORD v123[24]; // [rsp+F0h] [rbp-10h] BYREF
  int v124; // [rsp+120h] [rbp+20h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v115);
  v9 = 0;
  v114 = 0;
  v11 = PtiCurrent(v10);
  v12 = *a2;
  v13 = v11;
  v116 = 0LL;
  v14 = 0;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v115, v12);
  v15 = (struct tagITEM *)a2[1];
  v16 = *(_DWORD *)(*((_QWORD *)*v115[0] + 5) + 40LL) & 1;
  v110 = v16;
  if ( v16 )
  {
    v9 = 2;
    if ( *(int *)(*((_QWORD *)*v115[0] + 5) + 40LL) >= 0 )
    {
      if ( a5 )
      {
        v17 = *(_QWORD *)v15;
        if ( (*(_DWORD *)(*(_QWORD *)v15 + 4LL) & 8) != 0 )
          v18 = *(_QWORD *)(v17 + 24) == 0LL;
        else
          v18 = *(_QWORD *)(v17 + 32) == 0LL;
        LOBYTE(v14) = !v18;
      }
      else
      {
        v14 = DrawMenuItemCheckMark((HDC)a1, v15, 2);
      }
      if ( (*(_DWORD *)(*((_QWORD *)*v115[0] + 5) + 40LL) & 0x4000000) == 0
        || !*(_QWORD *)(*(_QWORD *)v15 + 96LL)
        || v14 )
      {
        if ( (**(_DWORD **)v15 & 0x2000) != 0 )
          v9 = 2;
        else
          v9 = *((__int16 *)GetOemBitmapInfo(0x3Fu) + 2) + 4;
      }
    }
    else
    {
      v9 = 4;
    }
  }
  else if ( !MNIsFlatMenu((__int64)*v115[0], 8LL) )
  {
    v114 = *(char *)(*(_QWORD *)v15 + 4LL) < 0;
  }
  if ( !*(_QWORD *)(*(_QWORD *)v15 + 96LL) || v14 && (*(_DWORD *)(*((_QWORD *)*v115[0] + 5) + 40LL) & 0x4000000) != 0 )
    goto LABEL_103;
  if ( a5 )
    goto LABEL_63;
  v19 = *(_DWORD *)(*(_QWORD *)v15 + 4LL);
  v20 = *(_QWORD *)(*(_QWORD *)v15 + 96LL);
  if ( (v19 & 0x20000000) == 0 )
  {
    if ( v20 == -1 )
    {
      xxxSendMenuDrawItemMessage((__int64)a1, 1, v115, (struct tagMENU ***)v15, 1, v9, 0LL);
      goto LABEL_103;
    }
    if ( *((_WORD *)v13 + 332) <= 0x400u
      && (*(_QWORD *)(*(_QWORD *)v15 + 56LL) && !*((_QWORD *)v15 + 3)
       || !v16
       && v15 == *((struct tagITEM **)*v115[0] + 11)
       && *(_DWORD *)(*((_QWORD *)*v115[0] + 5) + 44LL) > 1u
       && !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v115[0] + 11) + 96LL) + 96LL)
       && *((_QWORD *)v15 + 2)) )
    {
      while ( 1 )
      {
LABEL_50:
        if ( !*(_QWORD *)(*(_QWORD *)v15 + 56LL) && *((_QWORD *)*v115[0] + 10) )
          SetupFakeMDIAppStuff(v115, v15);
        v28 = (struct tagWND *)HMValidateHandleNoRip(*(_QWORD *)(*(_QWORD *)v15 + 56LL), 1);
        if ( v28 )
          break;
        if ( !*(_QWORD *)(*(_QWORD *)v15 + 56LL) )
          goto LABEL_57;
        *(_QWORD *)(*(_QWORD *)v15 + 56LL) = 0LL;
      }
      WindowSmIcon = GetWindowSmIcon(v28);
      if ( WindowSmIcon )
        goto LABEL_58;
LABEL_57:
      WindowSmIcon = *(struct tagCURSOR **)(W32GetUserSessionState(v30, v29) + 35160);
LABEL_58:
      v32 = a4 - 2;
      v33 = a3 - 4;
      if ( v110 && v32 < v33 )
        v33 = a4 - 2;
      UserSessionState = W32GetUserSessionState(v30, v29);
      DrawIconEx(
        a1,
        v9 + 4,
        1u,
        (__int64)WindowSmIcon,
        v33,
        v32,
        0,
        *(_QWORD *)(*(_QWORD *)(UserSessionState + 19904) + 4728LL),
        19);
      goto LABEL_62;
    }
LABEL_63:
    v35 = *(_DWORD *)(*(_QWORD *)v15 + 104LL);
    DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v15 + 108LL);
    if ( v16 )
    {
      v37 = *(_DWORD *)(*(_QWORD *)v15 + 76LL) - DpiDependentMetric;
      v38 = (unsigned int)(v37 >> 31);
      LODWORD(v38) = v37 % 2;
      v39 = v37 / 2;
      if ( v37 <= 0 )
        v39 = 0;
      LODWORD(v117) = v39;
    }
    else
    {
      DpiForSystem = GetDpiForSystem();
      if ( DpiDependentMetric <= (int)GetDpiDependentMetric(26, DpiForSystem) )
      {
        v43 = GetDpiForSystem();
        DpiDependentMetric = GetDpiDependentMetric(26, v43);
      }
      else
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v15 + 108LL);
      }
      v39 = 0;
      LODWORD(v117) = 0;
      if ( *((_QWORD *)v15 + 3) )
        v9 += *(_DWORD *)(GetDpiMetricsForCurrentThread(v41, v38, v42) + 8);
    }
    v44 = *(_QWORD *)(*(_QWORD *)v15 + 96LL);
    v45 = W32GetUserSessionState(*(_QWORD *)v15, v38);
    v119 = GreSelectBitmap(*(_QWORD *)(v45 + 43256), v44);
    if ( !v119 )
    {
      v16 = v110;
      goto LABEL_103;
    }
    memset_0(v123, 0, 0x68uLL);
    ObjectW = GreExtGetObjectW(*(Gre::Base **)(*(_QWORD *)v15 + 96LL), 104, v123);
    v48 = 0LL;
    if ( !a5 || (v47 = *(_QWORD *)v15, **(_DWORD **)v15 == 4) )
    {
      if ( ObjectW != 104 || v123[23] != 32 || v124 || **(_DWORD **)v15 == 4 )
      {
        v61 = v123[8] * (unsigned int)v123[9];
        if ( (_DWORD)v61 == 1 )
          v62 = 12060490;
        else
          v62 = (unsigned int)MNDrawHilite((__int64)v115, v15) != 0 ? 3342344 : 13369376;
        v63 = W32GetUserSessionState(v61, v48);
        GreBitBltInternal(
          a1,
          v114 + v9,
          v114 + v39,
          v35,
          DpiDependentMetric,
          *(_QWORD *)(v63 + 43256),
          0,
          0,
          v62,
          0xFFFFFFu,
          0);
      }
      goto LABEL_100;
    }
    v49 = 0LL;
    v111 = 33488896;
    v50 = 0LL;
    if ( a6 )
    {
      v118 = 0LL;
      memset(v120, 0, sizeof(v120));
      v121 = 0LL;
      v122 = 0;
      CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
      if ( !CompatibleDC )
        goto LABEL_87;
      LODWORD(v120[0]) = 40;
      *(_QWORD *)((char *)v120 + 4) = __PAIR64__(DpiDependentMetric, v35);
      *(_QWORD *)((char *)v120 + 12) = 2097153LL;
      v54 = GreCreateReferencedDIBitmap(
              CompatibleDC,
              v51,
              v53,
              (unsigned int *)v120,
              v102,
              v103,
              v104,
              v105,
              v106,
              v107,
              v108,
              v109,
              &v118);
      v49 = v54;
      if ( v54 )
      {
        v50 = GreSelectBitmap(CompatibleDC, v54);
        if ( v50 != -1 )
        {
          v57 = W32GetUserSessionState(v56, v55);
          GreAlphaBlend(
            (__int64)CompatibleDC,
            0,
            0,
            v35,
            DpiDependentMetric,
            *(_QWORD *)(v57 + 43256),
            0,
            0,
            v35,
            DpiDependentMetric,
            33488896);
          if ( v35 * DpiDependentMetric > 0 )
          {
            v58 = (unsigned __int8 *)v118;
            v59 = (unsigned int)(v35 * DpiDependentMetric);
            do
            {
              v60 = (29 * v58[2] + 150 * v58[1] + 77 * (unsigned int)*v58 + 129) >> 8;
              *(_DWORD *)v58 = v60 | ((v60 | ((v60 | (v58[3] << 8)) << 8)) << 8);
              v58 = (unsigned __int8 *)(v118 + 4);
              v118 += 4LL;
              --v59;
            }
            while ( v59 );
          }
          BYTE2(v111) = 102;
        }
      }
    }
    else
    {
      CompatibleDC = *(HDC *)(W32GetUserSessionState(v47, 0LL) + 43256);
      if ( !CompatibleDC )
        goto LABEL_85;
    }
    GreAlphaBlend(
      (__int64)a1,
      v114 + v9,
      v114 + v117,
      v35,
      DpiDependentMetric,
      (__int64)CompatibleDC,
      0,
      0,
      v35,
      DpiDependentMetric,
      v111);
LABEL_85:
    if ( !a6 )
    {
LABEL_100:
      v64 = W32GetUserSessionState(v47, v48);
      GreSelectBitmap(*(_QWORD *)(v64 + 43256), v119);
LABEL_62:
      v16 = v110;
      goto LABEL_103;
    }
    if ( v50 == -1 )
    {
LABEL_88:
      if ( v49 )
      {
        LOBYTE(v48) = 5;
        GreDereferenceObject(v49, v48, 0LL);
      }
      if ( CompatibleDC )
        GreDeleteDC(CompatibleDC);
      goto LABEL_100;
    }
LABEL_87:
    GreSelectBitmap(CompatibleDC, v50);
    goto LABEL_88;
  }
  if ( v20 == 1 )
    goto LABEL_50;
  v21 = v9;
  v22 = v20 - 2;
  if ( !v22 )
  {
    v27 = 26;
LABEL_36:
    if ( (v19 & 0x80u) != 0 )
      ++v27;
    goto LABEL_38;
  }
  v23 = v22 - 1;
  if ( !v23 )
  {
    v27 = 22;
    v21 = v9 + 2;
    goto LABEL_36;
  }
  v24 = v23 - 2;
  if ( !v24 )
  {
    v27 = 18;
    goto LABEL_36;
  }
  v25 = v24 - 1;
  if ( !v25 )
  {
    v27 = 21;
    goto LABEL_38;
  }
  if ( v25 == 1 )
  {
    v27 = 25;
    v21 = v9 + 2;
LABEL_38:
    BitBltSysBmp((HDC)a1, v21, 2, v27, 1);
    goto LABEL_39;
  }
  if ( PrepareHDCBITSBitmap(0LL) )
  {
    OemBitmapInfo = (__int16 *)GetOemBitmapInfo(*(_DWORD *)(*(_QWORD *)v15 + 96LL) + 79);
    BltColor(
      (HDC)a1,
      (unsigned int)(*(_DWORD *)(*(_QWORD *)v15 + 76LL) - OemBitmapInfo[3]) >> 1,
      OemBitmapInfo[2],
      OemBitmapInfo[3],
      *OemBitmapInfo,
      OemBitmapInfo[1],
      1);
LABEL_39:
    v16 = v110;
  }
LABEL_103:
  v65 = v116;
  if ( !v116 )
    v65 = (__int64)*v115[0];
  if ( !MNIspItemValid(v65, (__int64)v15) )
    goto LABEL_171;
  if ( a5 != (_DWORD)v69 )
    goto LABEL_171;
  v70 = (_WORD *)*((_QWORD *)v15 + 3);
  if ( !v70 )
    goto LABEL_171;
  v71 = *(_DWORD *)(*(_QWORD *)v15 + 48LL);
  if ( !v71 )
    goto LABEL_171;
  v118 = *((_QWORD *)v15 + 11);
  if ( !v16 || (v67 = (__int64)*v115[0], *((_DWORD *)*v115[0] + 18) == (_DWORD)v69) )
  {
    if ( *(_QWORD *)(*(_QWORD *)v15 + 96LL) != v69 )
      v9 += *(_DWORD *)(*(_QWORD *)v15 + 104LL) + 2;
  }
  else
  {
    v67 = (__int64)*v115[0];
    v9 = *((_DWORD *)*v115[0] + 18);
  }
  DpiMetricsForCurrentThread = GetDpiMetricsForCurrentThread(v67, v66, v68);
  v73 = *(_QWORD *)v15;
  v74 = DpiMetricsForCurrentThread;
  v117 = DpiMetricsForCurrentThread;
  v75 = *(_DWORD *)(DpiMetricsForCurrentThread + 20);
  v112 = v75;
  v76 = *(_DWORD *)(v73 + 76) - *(_DWORD *)(DpiMetricsForCurrentThread + 12) - v75 - 1;
  if ( v76 > 0 )
    v112 = v75 + v76 / 2;
  if ( !v110 && !*(_QWORD *)(v73 + 96) )
    v9 += *(_DWORD *)(v74 + 8);
  if ( *v70 == 8 && !v110 )
  {
    ++v70;
    if ( !--v71 )
    {
      v89 = (HDC)a1;
      goto LABEL_146;
    }
  }
  CharPosition = FindCharPosition(v70, 9LL);
  v78 = FindCharPosition(v70, 8LL);
  v79 = *(_DWORD *)(v73 + 72);
  v80 = v78;
  v81 = GetOemBitmapInfo(0x3Fu);
  v82 = 0;
  v83 = v79 - *((__int16 *)v81 + 2) - 2;
  if ( v80 && v80 != v71 )
  {
    if ( (**(_DWORD **)v15 & 0x2000) != 0 && v110 )
    {
      xxxPSMGetTextExtent((HDC)a1);
      v84 = v116;
      if ( !v116 )
        v84 = (__int64)*v115[0];
      if ( !MNIspItemValid(v84, (__int64)v15) || v118 != *((_QWORD *)v15 + 11) )
        goto LABEL_171;
      v9 = v83;
    }
    xxxDrawMenuItemText(
      v115,
      v15,
      a1,
      (unsigned int)(v114 + v9),
      v114 + v112,
      v70,
      v80,
      *(_DWORD *)(*((_QWORD *)*v115[0] + 5) + 40LL) & 4);
    v85 = v116;
    if ( !v116 )
      v85 = (__int64)*v115[0];
    if ( !MNIspItemValid(v85, (__int64)v15) || (v86 = v118, v118 != *((_QWORD *)v15 + 11)) )
    {
LABEL_171:
      v89 = (HDC)a1;
      goto LABEL_146;
    }
    if ( CharPosition > v80 + 1 )
    {
      if ( (**(_DWORD **)v15 & 0x2000) == 0 || v110 == v82 )
      {
        xxxPSMGetTextExtent((HDC)a1);
        v87 = v116;
        if ( !v116 )
          v87 = (__int64)*v115[0];
        if ( !MNIspItemValid(v87, (__int64)v15) || v86 != *((_QWORD *)v15 + 11) )
          goto LABEL_171;
      }
      v88 = CharPosition - v80 - 1;
      v89 = (HDC)a1;
      xxxPSMTextOut((HDC)a1, v88, ~(*(_DWORD *)(*((_QWORD *)*v115[0] + 5) + 40LL) << 18) & 0x100000);
      v90 = v116;
      if ( !v116 )
        v90 = (__int64)*v115[0];
      if ( !MNIspItemValid(v90, (__int64)v15) || v86 != *((_QWORD *)v15 + 11) )
        goto LABEL_146;
    }
LABEL_173:
    if ( CharPosition < v71 - 1 )
    {
      if ( (**(_DWORD **)v15 & 0x2000) == 0 || v110 == v82 )
      {
        v89 = (HDC)a1;
      }
      else
      {
        v89 = (HDC)a1;
        xxxPSMGetTextExtent((HDC)a1);
        v100 = v116;
        if ( !v116 )
          v100 = (__int64)*v115[0];
        if ( !MNIspItemValid(v100, (__int64)v15) || v86 != *((_QWORD *)v15 + 11) )
          goto LABEL_146;
      }
      xxxPSMTextOut(v89, v71 - CharPosition - 1, ~(*(_DWORD *)(*((_QWORD *)*v115[0] + 5) + 40LL) << 18) & 0x100000);
      goto LABEL_146;
    }
    goto LABEL_171;
  }
  if ( !CharPosition || v80 != v71 )
  {
    v86 = v118;
    goto LABEL_173;
  }
  if ( (**(_DWORD **)v15 & 0x2000) == 0 )
  {
LABEL_167:
    xxxDrawMenuItemText(
      v115,
      v15,
      a1,
      (unsigned int)(v114 + v9),
      v114 + v112,
      v70,
      CharPosition,
      *(_DWORD *)(*((_QWORD *)*v115[0] + 5) + 40LL) & 4);
    v99 = v116;
    if ( !v116 )
      v99 = (__int64)*v115[0];
    if ( !MNIspItemValid(v99, (__int64)v15) )
      goto LABEL_171;
    v86 = v118;
    if ( v118 != *((_QWORD *)v15 + 11) )
      goto LABEL_171;
    goto LABEL_173;
  }
  v89 = (HDC)a1;
  xxxPSMGetTextExtent((HDC)a1);
  v97 = v116;
  if ( !v116 )
    v97 = (__int64)*v115[0];
  if ( MNIspItemValid(v97, (__int64)v15) && v118 == *((_QWORD *)v15 + 11) )
  {
    v9 = v83;
    if ( v110 == (_DWORD)v98 && *(_QWORD *)(*(_QWORD *)v15 + 96LL) == v98 )
      v9 = *(_DWORD *)(v117 + 8) + v83;
    goto LABEL_167;
  }
LABEL_146:
  v91 = v116;
  if ( !v116 )
    v91 = (__int64)*v115[0];
  if ( MNIspItemValid(v91, (__int64)v15) && a5 == (_DWORD)v93 )
  {
    if ( v92 )
    {
      if ( *((_QWORD *)v15 + 2) != v93 )
      {
        v94 = (__int16 *)GetOemBitmapInfo((**(_DWORD **)v15 & 0x2000) != 0 ? 92 : 62);
        if ( *(_DWORD *)(*(_QWORD *)v15 + 76LL) >= v94[3] )
        {
          if ( PrepareHDCBITSBitmap(0LL) )
          {
            v95 = v94[3];
            v96 = (*(_DWORD *)(*(_QWORD *)v15 + 76LL) - v95 - 2) / 2;
            if ( v96 <= 0 )
              v96 = 0;
            BltColor(v89, v96, v94[2], v95, *v94, v94[1], 1);
          }
        }
      }
    }
  }
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v115);
  return 1LL;
}
