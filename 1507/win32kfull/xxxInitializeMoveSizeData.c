/*
 * XREFs of xxxInitializeMoveSizeData @ 0x1C020C6A4
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0045A88 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C0207AA0 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     xxxMoveSize @ 0x1C020D52C (xxxMoveSize.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     zzzClipCursorEx @ 0x1C003D634 (zzzClipCursorEx.c)
 *     zzzInternalSetCursorPos @ 0x1C0040BC0 (zzzInternalSetCursorPos.c)
 *     zzzSetCursor @ 0x1C0062174 (zzzSetCursor.c)
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     _MonitorFromPoint @ 0x1C0082CA0 (_MonitorFromPoint.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     GetCaptionHeight @ 0x1C00F3714 (GetCaptionHeight.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     MoveWithArrangementAllowed @ 0x1C02023E8 (MoveWithArrangementAllowed.c)
 *     SizeWithSnapAllowed @ 0x1C0202410 (SizeWithSnapAllowed.c)
 *     WindowArrangementAllowed @ 0x1C02024D8 (WindowArrangementAllowed.c)
 *     ?AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z @ 0x1C0204A64 (-AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z.c)
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C02054EC (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C0207890 (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C0208058 (-xxxMS_FlushWigglies@@YAXXZ.c)
 */

__int64 __fastcall xxxInitializeMoveSizeData(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5)
{
  __int64 DesktopWindow; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  _OWORD *v16; // rcx
  __int64 v17; // r8
  int *v18; // r14
  int v19; // r8d
  _OWORD *v20; // rax
  __int64 TopLevelWindow; // rax
  __int64 v22; // rcx
  unsigned int MonitorFlags; // eax
  __int64 v24; // r8
  unsigned int v25; // r12d
  unsigned int v26; // ebx
  unsigned int v27; // r15d
  __int128 v28; // xmm0
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // rdx
  BOOL v33; // eax
  int v34; // r8d
  unsigned __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rcx
  int *v42; // rcx
  int v43; // eax
  unsigned __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // ecx
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // ecx
  int *v51; // rcx
  int v52; // eax
  int v53; // ecx
  __int128 v54; // xmm0
  int *v55; // r14
  int v56; // eax
  int v57; // eax
  __int64 v58; // r8
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // ecx
  int v63; // eax
  int v64; // eax
  int v65; // ecx
  char v66; // cl
  int v67; // ecx
  int v68; // ecx
  int v69; // ecx
  int v70; // eax
  int CaptionHeight; // ebx
  unsigned __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  int v75; // ecx
  __int64 v76; // rcx
  __int64 v77; // rcx
  int v78; // ecx
  _DWORD *v79; // rcx
  int v80; // eax
  int v81; // eax
  int v82; // ecx
  int v83; // ecx
  int v84; // ecx
  unsigned int v85; // edx
  unsigned int v86; // edx
  unsigned int v87; // edx
  unsigned int v88; // edx
  int v89; // eax
  int v90; // eax
  int v91; // ecx
  __int64 result; // rax
  unsigned __int64 v93; // [rsp+20h] [rbp-60h]
  struct tagPOINT v94; // [rsp+20h] [rbp-60h]
  unsigned __int64 v95; // [rsp+28h] [rbp-58h] BYREF
  int v96[4]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v97; // [rsp+40h] [rbp-40h] BYREF
  __int128 v98; // [rsp+50h] [rbp-30h] BYREF
  __int128 v99; // [rsp+60h] [rbp-20h] BYREF

  *(_DWORD *)(a2 + 180) ^= (*(_DWORD *)(a2 + 180) ^ (16 * (*(_QWORD *)(gptiCurrent + 392LL) == gpqForeground))) & 0x10;
  *(_OWORD *)(a2 + 104) = *(_OWORD *)(a1 + 112);
  *(_OWORD *)(a2 + 120) = *(_OWORD *)(a1 + 112);
  DesktopWindow = GetDesktopWindow(a1);
  if ( v10 != DesktopWindow )
  {
    v18 = (int *)(a2 + 72);
    *(_OWORD *)(a2 + 72) = *(_OWORD *)(v10 + 128);
    TransformRectBetweenCoordinateSpaces(a2 + 72, a2 + 72, a1, *(_QWORD *)(a1 + 88));
    TopLevelWindow = GetTopLevelWindow(a1);
    if ( TopLevelWindow )
    {
      v22 = *(_QWORD *)(TopLevelWindow + 200);
      if ( v22 )
      {
        v99 = 0LL;
        GreGetRgnBox(v22, &v99);
        IntersectRect((_DWORD *)(a2 + 72), (int *)(a2 + 72), (int *)&v99);
      }
    }
    v97 = *(_OWORD *)v18;
    if ( (unsigned int)IsWindowDesktopComposed(a1) && *(_DWORD *)(a1 + 344) != 2 )
    {
      MonitorFlags = GetMonitorFlags(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL));
      LogicalToPhysicalDPIRect(&v97, &v97, MonitorFlags, 0LL);
    }
    goto LABEL_26;
  }
  if ( (*(_BYTE *)(a1 + 48) & 0x88) == 0 && *(_DWORD *)(gpDispInfo + 80LL) <= 1u )
  {
    v14 = *(unsigned int *)(a1 + 344);
    if ( (_DWORD)v14
      || (v11 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL), (v11 & 1) == 0) )
    {
      if ( (_DWORD)v14 == 1
        && (v11 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL), (v11 & 1) != 0) )
      {
        v16 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v11, v14, v12) + 88) + 108LL);
      }
      else
      {
        v16 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v11, v14, v12) + 88) + 76LL);
      }
    }
    else
    {
      v16 = (_OWORD *)(*(_QWORD *)(GetDispInfo(v11, v14, v12) + 88) + 92LL);
    }
    v18 = (int *)(a2 + 72);
    *(_OWORD *)(a2 + 72) = *v16;
    v97 = *(_OWORD *)(*(_QWORD *)(GetDispInfo(v16, v15, v17) + 88) + 76LL);
LABEL_26:
    v13 = (int *)(a2 + 104);
    goto LABEL_27;
  }
  v19 = *(_DWORD *)(a1 + 344);
  if ( v19 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
  {
    if ( v19 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) != 0 )
      v20 = (_OWORD *)(gpDispInfo + 136LL);
    else
      v20 = (_OWORD *)(gpDispInfo + 104LL);
  }
  else
  {
    v20 = (_OWORD *)(gpDispInfo + 120LL);
  }
  v18 = (int *)(a2 + 72);
  *(_OWORD *)(a2 + 72) = *v20;
  v97 = *(_OWORD *)(gpDispInfo + 104LL);
LABEL_27:
  v24 = *(_QWORD *)(a1 + 88);
  v25 = (__int16)a4;
  v26 = HIWORD(a4);
  v27 = (__int16)v26;
  LODWORD(v93) = v25;
  HIDWORD(v93) = (__int16)v26;
  if ( *(_QWORD *)(v24 + 200) )
  {
    v28 = *(_OWORD *)v13;
    v29 = v93;
    v95 = v93;
    v98 = v28;
    TransformRectBetweenCoordinateSpaces(&v98, &v98, v24, a1);
    TransformPointBetweenCoordinateSpaces(&v95, &v95, *(_QWORD *)(a1 + 88), a1);
    v30 = GreRectInRegion(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 200LL), &v98);
    v31 = HIDWORD(v95);
    v32 = (unsigned int)v95;
    *(_DWORD *)(a2 + 180) ^= (*(_DWORD *)(a2 + 180) ^ ((v30 == 0) << 6)) & 0x40;
    *(_DWORD *)(a2 + 180) ^= (*(_DWORD *)(a2 + 180) ^ (((unsigned int)GrePtInRegion(
                                                                        *(_QWORD *)(*(_QWORD *)(a1 + 88) + 200LL),
                                                                        v32,
                                                                        v31) == 0) << 21)) & 0x200000;
  }
  else
  {
    v29 = v93;
    *(_DWORD *)(a2 + 180) ^= (*(_DWORD *)(a2 + 180) ^ (((unsigned int)IntersectRect(v96, v13, v18) == 0) << 6)) & 0x40;
    v33 = PtInRect(v18, v93);
    *(_DWORD *)(a2 + 180) = v34 ^ (v34 ^ (!v33 << 21)) & 0x200000;
  }
  if ( (*(_DWORD *)(a2 + 180) & 0x100000) != 0 )
    zzzClipCursorEx((LONG *)&v97, 0);
  if ( (((a5 & 4) == 0) & (*(_BYTE *)(a1 + 55) >> 5)) == 0 )
  {
    xxxGetMinMaxTrackInfo((struct _MOVESIZEDATA *)a2, a5 & 1);
    goto LABEL_73;
  }
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x39uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x4000) != 0 )
    {
      goto LABEL_36;
    }
LABEL_47:
    v42 = (int *)(gpsi + 2496LL);
    goto LABEL_52;
  }
  if ( IsDPIDWMSysMet(v35)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x4000) == 0
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL) + 260LL) & 1 )
  {
    goto LABEL_47;
  }
LABEL_36:
  if ( IsDPIDWMSysMet(0x39uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
      ? (v38 = 0)
      : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                         + 260LL) & 1),
        v38) )
  {
    v42 = (int *)(gpsi + 2884LL);
  }
  else
  {
    v42 = (int *)(gpsi + 2108LL);
  }
LABEL_52:
  v43 = *v42;
  *(_DWORD *)(a2 + 96) = *v42;
  *(_DWORD *)(a2 + 88) = v43;
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x3AuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x4000) != 0 )
    {
      goto LABEL_55;
    }
  }
  else if ( !IsDPIDWMSysMet(v44)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           ? (v50 = 0)
           : (v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
             !v50) )
  {
LABEL_55:
    if ( IsDPIDWMSysMet(0x3AuLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v47 = 0)
        : (v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v47) )
    {
      v51 = (int *)(gpsi + 2888LL);
    }
    else
    {
      v51 = (int *)(gpsi + 2112LL);
    }
    goto LABEL_71;
  }
  v51 = (int *)(gpsi + 2500LL);
LABEL_71:
  v52 = *v51;
  *(_DWORD *)(a2 + 100) = *v51;
  *(_DWORD *)(a2 + 92) = v52;
LABEL_73:
  v53 = *(_DWORD *)(a2 + 180);
  v54 = *(_OWORD *)(a2 + 104);
  *(_DWORD *)(a2 + 220) = 0;
  v55 = (int *)(a2 + 216);
  *(_DWORD *)(a2 + 216) = 4;
  *(_DWORD *)(a2 + 260) = v25;
  *(_DWORD *)(a2 + 264) = v27;
  *(_DWORD *)(a2 + 268) = v25;
  *(_DWORD *)(a2 + 272) = v27;
  *(_DWORD *)(a2 + 180) = (v53 & 0xFFFFFFFC ^ (v53 & 0xFFFFFFFC ^ ((((unsigned __int8)~(_BYTE)a5 >> 1) & 1) << 26)) & 0x4000000) & 0xFCFBFF7F;
  *(_OWORD *)(a2 + 8) = v54;
  *(_OWORD *)(a2 + 24) = v54;
  *(_OWORD *)(a2 + 40) = v54;
  *(_OWORD *)(a2 + 56) = v54;
  v56 = (unsigned int)SizeWithSnapAllowed((struct tagWND *)a1)
     && AreDockTargetsActive((struct _MOVESIZEDATA *)a2)
     && (*(_BYTE *)(a1 + 54) & 4) != 0
     && ((*(_BYTE *)(a1 + 55) | *(_BYTE *)(a1 + 48)) & 0x40) == 0
     && (*(_BYTE *)(*(_QWORD *)a2 + 54LL) & 1) != 0
     && *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) != *(_WORD *)(gpsi + 884LL);
  *(_DWORD *)(a2 + 180) ^= (*(_DWORD *)(a2 + 180) ^ (v56 << 10)) & 0x400;
  v57 = (unsigned int)MoveWithArrangementAllowed((struct tagWND *)a1)
     && AreDockTargetsActive((struct _MOVESIZEDATA *)a2)
     && (*(_BYTE *)(a1 + 54) & 4) != 0
     && ((*(_BYTE *)(a1 + 55) | *(_BYTE *)(a1 + 48)) & 0x40) == 0
     && (*(_BYTE *)(*(_QWORD *)a2 + 54LL) & 1) != 0
     && *(_WORD *)(*(_QWORD *)(a1 + 152) + 8LL) != *(_WORD *)(gpsi + 884LL);
  v58 = 2048LL;
  v59 = *(_DWORD *)(a2 + 180) ^ (*(_DWORD *)(a2 + 180) ^ (v57 << 11)) & 0x800;
  *(_DWORD *)(a2 + 180) = v59;
  if ( (v59 & 0xC00) != 0xC00 )
  {
    if ( (*(_BYTE *)(a1 + 289) & 3) == 0 )
    {
      if ( !WindowArrangementAllowed((struct tagWND *)a1) || (*(_BYTE *)(a1 + 55) & 1) == 0 )
        goto LABEL_98;
      v58 = 2048LL;
    }
    v60 = *(_DWORD *)(a2 + 180);
    if ( (v60 & 0x800) == 0 )
      *(_DWORD *)(a2 + 180) = v60 | 0x800800;
    v61 = *(_DWORD *)(a2 + 180);
    if ( (v61 & 0x400) == 0 )
      *(_DWORD *)(a2 + 180) = v61 | 0x400400;
  }
LABEL_98:
  v62 = *(_DWORD *)(a2 + 180);
  if ( (v62 & 0xC00) == 0 )
  {
    *(_QWORD *)(a2 + 208) = MonitorFromPoint(v29, 2LL, v58);
    goto LABEL_132;
  }
  v63 = (*(_BYTE *)(a1 + 289) & 3) != 0 || (*(_BYTE *)(a1 + 55) & 1) != 0;
  v64 = v62 ^ (v62 ^ (v63 << 12)) & 0x1000;
  *(_DWORD *)(a2 + 180) = v64;
  if ( (v64 & 0x1000) != 0 )
  {
    *(_DWORD *)(a2 + 180) = v64 | 0x40000;
    *(_DWORD *)(a2 + 220) = 2;
  }
  HitTargetAndMonitorFromPoint(
    (struct tagPOINT)v29,
    (const struct _MOVESIZEDATA *const)a2,
    (struct tagMONITOR **)(a2 + 208),
    (enum eTHRESHOLD_MARGIN_DIRECTION *)(a2 + 216));
  v65 = *(_DWORD *)(a2 + 180);
  if ( (v65 & 0x38000) == 0 && (*(_BYTE *)(a1 + 289) & 3) != 0 && a3 == 9 )
    *(_DWORD *)(a2 + 180) = v65 & 0xFFFC7FFF | 0x20000;
  if ( (*(_BYTE *)(a1 + 55) & 1) != 0 || (v66 = *(_BYTE *)(a1 + 289), (v66 & 3) == 3) )
  {
    *v55 = 0;
    if ( (*(_BYTE *)(a1 + 289) & 3) == 3 )
    {
      v69 = *v55;
      if ( (unsigned int)(a3 - 6) <= 2 )
        v69 = 3;
      *v55 = v69;
    }
    goto LABEL_131;
  }
  if ( (v66 & 1) == 0 )
  {
    if ( (v66 & 2) == 0 )
    {
      *v55 = 4;
      goto LABEL_131;
    }
    v68 = (*(_DWORD *)(a2 + 180) >> 15) & 7;
    if ( v68 != 4 )
    {
      if ( v68 )
        goto LABEL_125;
      if ( (unsigned int)(a3 - 6) <= 2 )
        goto LABEL_116;
      if ( (unsigned int)(a3 - 3) > 2 )
      {
LABEL_125:
        *v55 = 2;
        goto LABEL_131;
      }
    }
LABEL_118:
    *v55 = 0;
    goto LABEL_131;
  }
  v67 = (*(_DWORD *)(a2 + 180) >> 15) & 7;
  if ( v67 == 4 )
    goto LABEL_118;
  if ( v67 )
    goto LABEL_119;
  if ( (unsigned int)(a3 - 6) > 2 )
  {
    if ( (unsigned int)(a3 - 3) <= 2 )
      goto LABEL_118;
LABEL_119:
    *v55 = 1;
    goto LABEL_131;
  }
LABEL_116:
  *v55 = 3;
LABEL_131:
  *(_DWORD *)(a2 + 180) ^= ((unsigned __int8)*(_DWORD *)(a2 + 180) ^ (unsigned __int8)(*(_DWORD *)(a2 + 180) >> 5)) & 0x80;
LABEL_132:
  *(_DWORD *)(a2 + 160) = a3;
  if ( a3 )
  {
    if ( a3 != 10 )
      goto LABEL_163;
    a3 = 9;
    *(_DWORD *)(a2 + 160) = 9;
  }
  zzzSetCursor(*(_QWORD *)&gasyscur[76]);
  if ( (*(_BYTE *)(a1 + 55) & 0x20) == 0 )
    *(_DWORD *)(a2 + 180) |= 1u;
  v70 = *(_DWORD *)(a2 + 8) + *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 180) |= 2u;
  *(_DWORD *)(a2 + 172) = v25;
  *(_DWORD *)(a2 + 176) = v27;
  v25 = v70 / 2;
  v94.x = v70 / 2;
  if ( (*(_BYTE *)(a1 + 55) & 0x20) != 0 || *(_DWORD *)(a2 + 160) != 9 )
  {
    v27 = (*(_DWORD *)(a2 + 12) + *(_DWORD *)(a2 + 20)) / 2;
    v94.y = v27;
    goto LABEL_160;
  }
  CaptionHeight = GetCaptionHeight(a1);
  if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x4000) != 0 )
    {
      goto LABEL_142;
    }
  }
  else if ( !IsDPIDWMSysMet(v72)
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x2000) != 0
         || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v77) + 776) & 0x4000) != 0
         || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           ? (v78 = 0)
           : (v78 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1),
             !v78) )
  {
LABEL_142:
    if ( IsDPIDWMSysMet(8uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v74) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v75 = 0)
        : (v75 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          v75) )
    {
      v79 = (_DWORD *)(gpsi + 2688LL);
    }
    else
    {
      v79 = (_DWORD *)(gpsi + 1912LL);
    }
    goto LABEL_158;
  }
  v79 = (_DWORD *)(gpsi + 2300LL);
LABEL_158:
  v27 = *v79 + CaptionHeight / 2 + *(_DWORD *)(a2 + 12);
  v94.y = v27;
LABEL_160:
  zzzInternalSetCursorPos(v25, v27, 1);
  xxxMS_FlushWigglies();
  v80 = *(_DWORD *)(a2 + 180);
  if ( (v80 & 0x400) == 0 )
    *v55 = 4;
  v29 = (__int64)v94;
  *(_DWORD *)(a2 + 180) = v80 & 0xFFFFFF7F;
  *(_DWORD *)(a2 + 260) = v25;
  *(_DWORD *)(a2 + 264) = v27;
  *(_DWORD *)(a2 + 268) = v25;
  *(_DWORD *)(a2 + 272) = v27;
LABEL_163:
  v81 = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(a2 + 264) -= v81;
  *(_DWORD *)(a2 + 272) -= v81;
  *(_QWORD *)(a2 + 192) = *(_QWORD *)(a2 + 208);
  v82 = (*(_DWORD *)(a2 + 180) ^ (32 * ((gdwPUDFlags >> 20) & 1))) & 0x20;
  *(_DWORD *)(a2 + 200) = *v55;
  *(_DWORD *)(a2 + 180) ^= v82;
  v83 = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(a2 + 260) -= v83;
  *(_DWORD *)(a2 + 268) -= v83;
  *(_QWORD *)(a2 + 184) = ValidateHmonitorNoRip(*(_QWORD *)(a1 + 352));
  *(_DWORD *)(a2 + 180) ^= (*(_DWORD *)(a2 + 180) ^ ((((unsigned __int8)~*(_BYTE *)(a2 + 180) >> 5) & 1) << 28)) & 0x10000000;
  v84 = *(_DWORD *)(a2 + 180) ^ ((unsigned __int16)*(_DWORD *)(a2 + 180) ^ ((*(_BYTE *)(a1 + 289) & 1) << 13)) & 0x2000;
  *(_DWORD *)(a2 + 180) = v84;
  v85 = v84 ^ ((unsigned __int16)v84 ^ (((*(_BYTE *)(a1 + 289) & 2) != 0) << 14)) & 0x4000;
  v86 = ((unsigned __int16)v85 ^ (unsigned __int16)(v85 >> 5)) & 0x100 ^ v85;
  v87 = (((unsigned __int16)v86 ^ (unsigned __int16)(v86 >> 5)) & 0x200 ^ v86) & 0xDFF7FFFF;
  *(_DWORD *)(a2 + 180) = v87;
  if ( (v87 & 2) != 0 )
  {
    v88 = v87 & 0xFFFFF3FF;
    *(_DWORD *)(a2 + 180) = v88;
    if ( (*(_BYTE *)(a1 + 289) & 3) != 0 )
      *(_DWORD *)(a2 + 180) = v88 | 0xC00C00;
  }
  *(_DWORD *)(a2 + 164) = dword_1C02EBC58[a3];
  *(_DWORD *)(a2 + 168) = dword_1C02EBC28[a3];
  v89 = dword_1C02EBCB8[a3];
  if ( v89 != -1 )
    *(_DWORD *)(a2 + 152) = *(_DWORD *)(a2 + 4LL * (__int16)v89 + 104) - v25;
  v90 = dword_1C02EBC88[a3];
  if ( v90 != -1 )
    *(_DWORD *)(a2 + 156) = *(_DWORD *)(a2 + 4LL * (__int16)v90 + 104) - v27;
  *(_DWORD *)(a2 + 316) = a5;
  *(_QWORD *)(a2 + 276) = v29;
  *(_QWORD *)(a2 + 240) = 0LL;
  *(_QWORD *)(a2 + 248) = 0LL;
  v91 = *(_DWORD *)(a2 + 256) ^ (*(_DWORD *)(a2 + 256) ^ *(_BYTE *)(a1 + 291) & 1) & 1;
  *(_DWORD *)(a2 + 256) = v91 ^ (v91 ^ (2 * v91)) & 2;
  result = 0LL;
  *(_QWORD *)(a2 + 224) = 0LL;
  *(_QWORD *)(a2 + 232) = 0LL;
  return result;
}
