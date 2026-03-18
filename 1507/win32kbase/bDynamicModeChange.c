/*
 * XREFs of bDynamicModeChange @ 0x1C005C7A4
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     vEnableSynchronize_0 @ 0x1C00010F8 (vEnableSynchronize_0.c)
 *     vDisableSynchronize_0 @ 0x1C00011D8 (vDisableSynchronize_0.c)
 *     IsvDisableSynchronizeSupported_0 @ 0x1C00016F8 (IsvDisableSynchronizeSupported_0.c)
 *     IsvSpDynamicModeChangeSupported_0 @ 0x1C0001700 (IsvSpDynamicModeChangeSupported_0.c)
 *     vSpDynamicModeChange_0 @ 0x1C0001708 (vSpDynamicModeChange_0.c)
 *     IsUpdateGammaRampOnDeviceSupported_0 @ 0x1C0001710 (IsUpdateGammaRampOnDeviceSupported_0.c)
 *     UpdateGammaRampOnDevice_0 @ 0x1C0001718 (UpdateGammaRampOnDevice_0.c)
 *     HmgShareLock @ 0x1C0004350 (HmgShareLock.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C0017BA0 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C0018F2C (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C0019300 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0034504 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C00345F0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00346B0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C003561C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00393F0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     bDynamicRemoveAllDriverRealizations @ 0x1C005D910 (bDynamicRemoveAllDriverRealizations.c)
 *     HmgSafeNextObjt @ 0x1C005DA10 (HmgSafeNextObjt.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C005E7C4 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C006E870 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00B77B8 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00B783C (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00B78B0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 */

__int64 __fastcall bDynamicModeChange(HDEV a1, HDEV a2)
{
  unsigned int v4; // r15d
  __int64 v5; // r12
  int v6; // eax
  HDEV v7; // r13
  struct tagSIZE *v8; // rax
  struct tagSIZE v9; // rdi
  struct tagSIZE *v10; // rax
  int v11; // r9d
  struct SURFACE *v12; // r10
  struct SURFACE *v13; // rcx
  struct tagSIZE v14; // rbx
  __int64 cy; // rdx
  char v16; // al
  __int64 v17; // r8
  __int64 Objt; // rdx
  struct SURFACE *v19; // r12
  int v20; // r8d
  __int64 v21; // r9
  struct SURFACE *v22; // rax
  unsigned int v23; // r8d
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct SURFACE *v29; // rbx
  HDEV v30; // rax
  int v31; // eax
  HDEV v32; // r8
  HDEV v33; // rdx
  int v34; // eax
  __int64 v35; // rcx
  HDEV v36; // rcx
  __int64 v37; // rbx
  HDEV *v38; // rcx
  __int64 *v39; // rax
  struct SURFACE *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // ecx
  HDEV v45; // rax
  HDEV v46; // rdx
  __int64 v47; // r8
  _OWORD *v48; // rcx
  __int64 v49; // r9
  HDEV v50; // rax
  __int128 v51; // xmm1
  __int64 v52; // r9
  HDEV v53; // rcx
  HDEV v54; // rax
  __int128 v55; // xmm1
  _OWORD *v56; // rax
  __int64 v57; // rdx
  __int128 v58; // xmm1
  __int64 v59; // r9
  HDEV v60; // rax
  HDEV v61; // rdx
  _OWORD *v62; // rcx
  __int128 v63; // xmm1
  __int64 v64; // r9
  __int128 v65; // xmm1
  HDEV v66; // rdx
  HDEV v67; // rcx
  __int128 v68; // xmm1
  _OWORD *v69; // rax
  __int128 v70; // xmm1
  HDEV v71; // r10
  int v72; // ecx
  int v73; // r8d
  volatile unsigned int *v74; // r10
  int v75; // r11d
  int v76; // ecx
  int v77; // r8d
  volatile unsigned int *v78; // r10
  int v79; // r11d
  int v80; // ecx
  int v81; // r8d
  volatile unsigned int *v82; // r10
  int v83; // r11d
  int v84; // ecx
  int v85; // r8d
  volatile unsigned int *v86; // r10
  int v87; // r11d
  int v88; // ecx
  int v89; // r8d
  volatile unsigned int *v90; // r10
  int v91; // r11d
  int v92; // ecx
  int v93; // r8d
  volatile unsigned int *v94; // r10
  int v95; // r11d
  int v96; // ecx
  int v97; // r8d
  volatile unsigned int *v98; // r10
  int v99; // r11d
  volatile unsigned int v100; // ett
  signed __int32 v101; // ett
  HDEV v102; // rcx
  __int64 v103; // r8
  _OWORD *v104; // rdx
  __int64 v105; // r9
  HDEV v106; // rax
  __int128 v107; // xmm1
  __int64 v108; // r9
  HDEV v109; // rdx
  HDEV v110; // rax
  __int128 v111; // xmm1
  _OWORD *v112; // rax
  __int128 v113; // xmm1
  struct SURFACE *v115; // [rsp+40h] [rbp-79h]
  __int64 v116; // [rsp+48h] [rbp-71h]
  HDEV v117; // [rsp+50h] [rbp-69h] BYREF
  HDEV v118; // [rsp+58h] [rbp-61h] BYREF
  __int64 v119; // [rsp+60h] [rbp-59h]
  struct SURFACE *v120; // [rsp+68h] [rbp-51h]
  int v121; // [rsp+70h] [rbp-49h]
  int v122; // [rsp+74h] [rbp-45h]
  __int64 v123; // [rsp+78h] [rbp-41h]
  __int64 v124; // [rsp+80h] [rbp-39h]
  struct tagSIZE v125; // [rsp+88h] [rbp-31h]
  void *v126; // [rsp+90h] [rbp-29h]
  struct tagSIZE v127; // [rsp+98h] [rbp-21h]
  __int64 v128; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v129; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v130[12]; // [rsp+B0h] [rbp-9h] BYREF
  int v131; // [rsp+130h] [rbp+77h]
  __int64 v132; // [rsp+130h] [rbp+77h]
  BOOL v133; // [rsp+138h] [rbp+7Fh]

  v4 = 0;
  if ( (unsigned int)bDynamicMatchEnoughForModeChange(a1, a2) )
  {
    v126 = PALLOCMEM2(0x9F8uLL, 1886221383LL, 0);
    v5 = (__int64)v126;
    if ( v126 )
    {
      v6 = *((_DWORD *)a2 + 14);
      v7 = a1 + 14;
      v118 = a1;
      v117 = a2;
      v122 = v6 & 0x400;
      v121 = (_DWORD)a1[14] & 0x400;
      if ( (int)IsvDisableSynchronizeSupported_0() >= 0 )
      {
        vDisableSynchronize_0();
        vDisableSynchronize_0();
      }
      v133 = *((_DWORD *)a1 + 546) * *((_DWORD *)a1 + 547) != *((_DWORD *)a2 + 546) * *((_DWORD *)a2 + 547);
      if ( (unsigned int)bDynamicRemoveAllDriverRealizations(a1)
        && (unsigned int)bDynamicRemoveAllDriverRealizations(a2) )
      {
        v131 = 1;
        v8 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v118, &v128);
        v120 = (struct SURFACE *)*((_QWORD *)a1 + 322);
        v9 = *v8;
        v124 = *((_QWORD *)a1 + 229);
        v119 = *((_QWORD *)a1 + 228);
        v125 = v9;
        v10 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v117, &v129);
        v13 = (struct SURFACE *)*((_QWORD *)a2 + 322);
        v115 = v13;
        v14 = *v10;
        v123 = *((_QWORD *)a2 + 229);
        v116 = *((_QWORD *)a2 + 228);
        v127 = v14;
        if ( v14.cx < v9.cx || (cy = (unsigned int)v125.cy, v14.cy < v125.cy) )
        {
          v16 = bDynamicIntersectVisRect(v12, v14);
          v13 = v115;
          cy = (unsigned int)v125.cy;
          v11 = v16 & 1;
          v131 = v11;
        }
        if ( v9.cx < v14.cx || (int)cy < v127.cy )
          v11 = bDynamicIntersectVisRect(v13, v9) & v131;
        v17 = *((_QWORD *)a2 + 347);
        if ( v17 && v17 == *((_QWORD *)a1 + 347) && *((_QWORD *)a2 + 227) == *((_QWORD *)a1 + 227) )
        {
          if ( !v11 )
            goto LABEL_118;
          v11 = (*((__int64 (__fastcall **)(__int64, __int64))a2 + 347))(v119, v116);
        }
        if ( v11 )
        {
          LOBYTE(cy) = 1;
          Objt = HmgSafeNextObjt(0LL, cy);
          if ( !Objt )
            goto LABEL_38;
          v19 = v120;
          while ( 1 )
          {
            v20 = *(_DWORD *)(Objt + 36);
            v21 = *(_QWORD *)Objt;
            if ( (v20 & 0x2000) != 0 )
              goto LABEL_36;
            v22 = *(struct SURFACE **)(Objt + 512);
            if ( v22 == v19 )
            {
              *(_QWORD *)(Objt + 512) = v115;
              *(struct tagSIZE *)(Objt + 528) = v14;
            }
            else
            {
              if ( v22 != v115 )
                goto LABEL_27;
              *(_QWORD *)(Objt + 512) = v19;
              *(struct tagSIZE *)(Objt + 528) = v9;
            }
            *(_DWORD *)(Objt + 332) |= 0xFu;
LABEL_27:
            if ( (v20 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(Objt + 512) + 112LL) & 0x200) != 0 )
              v23 = v20 | 0x8000;
            else
              v23 = v20 & 0xFFFF7FFF;
            v24 = *(_QWORD *)(Objt + 24);
            v25 = v119;
            *(_DWORD *)(Objt + 36) = v23;
            if ( v24 == v25 )
            {
              *(_QWORD *)(Objt + 24) = v116;
              *(_DWORD *)(struct HDEV__ *)(Objt + 72) = a2[462];
              v26 = *((_DWORD *)a2 + 538);
LABEL_35:
              *(_DWORD *)(Objt + 76) = v26;
              goto LABEL_36;
            }
            if ( v24 == v116 )
            {
              *(_QWORD *)(Objt + 24) = v25;
              *(_DWORD *)(struct HDEV__ *)(Objt + 72) = a1[462];
              v26 = *((_DWORD *)a1 + 538);
              goto LABEL_35;
            }
LABEL_36:
            LOBYTE(Objt) = 1;
            Objt = HmgSafeNextObjt(v21, Objt);
            if ( !Objt )
            {
              v5 = (__int64)v126;
              v7 = a1 + 14;
LABEL_38:
              LOBYTE(Objt) = 5;
              v28 = HmgSafeNextObjt(0LL, Objt);
              if ( !v28 )
                goto LABEL_57;
              v29 = v120;
LABEL_40:
              v132 = *(_QWORD *)v28;
              v30 = *(HDEV *)(v28 + 48);
              if ( v30 == a1 )
              {
                v31 = *(_DWORD *)(v28 + 112);
                if ( (v31 & 0x4000000) != 0 )
                {
                  if ( v133 && *(_DWORD *)(v28 + 96) == *((_DWORD *)v29 + 24) )
                  {
                    v32 = a2;
                    v33 = a1;
                    goto LABEL_52;
                  }
                }
                else if ( (v31 & 0x300000) == 0x200000 )
                {
                  *(_QWORD *)(v28 + 48) = a2;
                }
              }
              else if ( v30 == a2 )
              {
                v34 = *(_DWORD *)(v28 + 112);
                if ( (v34 & 0x4000000) != 0 )
                {
                  if ( v133 && *(_DWORD *)(v28 + 96) == *((_DWORD *)v115 + 24) )
                  {
                    v32 = a1;
                    v33 = a2;
LABEL_52:
                    vDynamicSwitchPalettes((struct SURFACE *)v28, (struct PDEV *)v33, (struct PDEV *)v32);
                  }
                }
                else if ( (v34 & 0x300000) == 0x200000 )
                {
                  *(_QWORD *)(v28 + 48) = a1;
                }
              }
              LOBYTE(v27) = 5;
              v28 = HmgSafeNextObjt(v132, v27);
              if ( !v28 )
              {
                v7 = a1 + 14;
LABEL_57:
                v35 = 0LL;
LABEL_64:
                LOBYTE(v27) = 28;
                v39 = (__int64 *)HmgSafeNextObjt(v35, v27);
                if ( !v39 )
                {
                  v40 = v120;
                  vChangeWndObjs(v120, a1, v115, a2);
                  v41 = HmgShareLock((int)ghbrGrayPattern, 16);
                  HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(v130, v41);
                  *(_QWORD *)(v5 + 80) = v5 + 536;
                  *(_DWORD *)(v5 + 576) = 0;
                  *(_DWORD *)(*(_QWORD *)(v5 + 80) + 32LL) = 0xFFFFFF;
                  v42 = *(_QWORD *)(v5 + 80);
                  *(_DWORD *)(v5 + 112) = 0;
                  *(_QWORD *)(v42 + 112) = 0LL;
                  EBRUSHOBJ::vInitBrush(
                    (unsigned int *)a1 + 394,
                    v5,
                    v130[0],
                    (__int64)ppalDefault,
                    v123,
                    (__int64)v115,
                    1u);
                  EBRUSHOBJ::vInitBrush(
                    (unsigned int *)a2 + 394,
                    v5,
                    v130[0],
                    (__int64)ppalDefault,
                    v124,
                    (__int64)v40,
                    1u);
                  HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>(v130);
                  *((_QWORD *)a2 + 229) = v124;
                  *((_QWORD *)a2 + 228) = v119;
                  v43 = v123;
                  *((_QWORD *)a2 + 322) = v40;
                  *((_QWORD *)a1 + 229) = v43;
                  *((_QWORD *)a1 + 228) = v116;
                  *((_QWORD *)a1 + 322) = v115;
                  v44 = *((_DWORD *)v40 + 28);
                  if ( (v44 & 0x10000000) != 0 )
                  {
                    *((_DWORD *)v115 + 28) |= 0x10000000u;
                    if ( a1 != (HDEV)-96LL && (((_DWORD)a1[49] & 0x10000000) != 0 || ((_DWORD)a1[51] & 0x10000000) != 0) )
                    {
                      v45 = a2 + 24;
LABEL_75:
                      if ( v45 )
                      {
                        *((_DWORD *)v45 + 25) |= 0x10000000u;
                        *((_DWORD *)v45 + 27) |= 0x10000000u;
                      }
                    }
                  }
                  else if ( (*((_DWORD *)v115 + 28) & 0x10000000) != 0 )
                  {
                    *((_DWORD *)v40 + 28) = v44 | 0x10000000;
                    if ( a2 != (HDEV)-96LL && (((_DWORD)a2[49] & 0x10000000) != 0 || ((_DWORD)a2[51] & 0x10000000) != 0) )
                    {
                      v45 = a1 + 24;
                      goto LABEL_75;
                    }
                  }
                  v46 = a2 + 462;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 227);
                  v47 = 2LL;
                  v48 = (_OWORD *)v5;
                  *((_QWORD *)a2 + 227) = *((_QWORD *)a1 + 227);
                  v49 = 2LL;
                  *((_QWORD *)a1 + 227) = *(_QWORD *)v5;
                  v50 = a2 + 462;
                  do
                  {
                    *v48 = *(_OWORD *)v50;
                    v48[1] = *((_OWORD *)v50 + 1);
                    v48[2] = *((_OWORD *)v50 + 2);
                    v48[3] = *((_OWORD *)v50 + 3);
                    v48[4] = *((_OWORD *)v50 + 4);
                    v48[5] = *((_OWORD *)v50 + 5);
                    v48[6] = *((_OWORD *)v50 + 6);
                    v48 += 8;
                    v51 = *((_OWORD *)v50 + 7);
                    v50 += 32;
                    *(v48 - 1) = v51;
                    --v49;
                  }
                  while ( v49 );
                  v52 = 2LL;
                  *v48 = *(_OWORD *)v50;
                  v48[1] = *((_OWORD *)v50 + 1);
                  v48[2] = *((_OWORD *)v50 + 2);
                  *((_QWORD *)v48 + 6) = *((_QWORD *)v50 + 6);
                  v53 = a1 + 462;
                  v54 = a1 + 462;
                  do
                  {
                    *(_OWORD *)v46 = *(_OWORD *)v54;
                    *((_OWORD *)v46 + 1) = *((_OWORD *)v54 + 1);
                    *((_OWORD *)v46 + 2) = *((_OWORD *)v54 + 2);
                    *((_OWORD *)v46 + 3) = *((_OWORD *)v54 + 3);
                    *((_OWORD *)v46 + 4) = *((_OWORD *)v54 + 4);
                    *((_OWORD *)v46 + 5) = *((_OWORD *)v54 + 5);
                    *((_OWORD *)v46 + 6) = *((_OWORD *)v54 + 6);
                    v46 += 32;
                    v55 = *((_OWORD *)v54 + 7);
                    v54 += 32;
                    *((_OWORD *)v46 - 1) = v55;
                    --v52;
                  }
                  while ( v52 );
                  *(_OWORD *)v46 = *(_OWORD *)v54;
                  *((_OWORD *)v46 + 1) = *((_OWORD *)v54 + 1);
                  *((_OWORD *)v46 + 2) = *((_OWORD *)v54 + 2);
                  *((_QWORD *)v46 + 6) = *((_QWORD *)v54 + 6);
                  v56 = (_OWORD *)v5;
                  v57 = 2LL;
                  do
                  {
                    *(_OWORD *)v53 = *v56;
                    *((_OWORD *)v53 + 1) = v56[1];
                    *((_OWORD *)v53 + 2) = v56[2];
                    *((_OWORD *)v53 + 3) = v56[3];
                    *((_OWORD *)v53 + 4) = v56[4];
                    *((_OWORD *)v53 + 5) = v56[5];
                    *((_OWORD *)v53 + 6) = v56[6];
                    v53 += 32;
                    v58 = v56[7];
                    v56 += 8;
                    *((_OWORD *)v53 - 1) = v58;
                    --v57;
                  }
                  while ( v57 );
                  v59 = 2LL;
                  *(_OWORD *)v53 = *v56;
                  *((_OWORD *)v53 + 1) = v56[1];
                  *((_OWORD *)v53 + 2) = v56[2];
                  *((_QWORD *)v53 + 6) = *((_QWORD *)v56 + 6);
                  v60 = a2 + 540;
                  v61 = a2 + 540;
                  v62 = (_OWORD *)v5;
                  do
                  {
                    *v62 = *(_OWORD *)v61;
                    v62[1] = *((_OWORD *)v61 + 1);
                    v62[2] = *((_OWORD *)v61 + 2);
                    v62[3] = *((_OWORD *)v61 + 3);
                    v62[4] = *((_OWORD *)v61 + 4);
                    v62[5] = *((_OWORD *)v61 + 5);
                    v62[6] = *((_OWORD *)v61 + 6);
                    v62 += 8;
                    v63 = *((_OWORD *)v61 + 7);
                    v61 += 32;
                    *(v62 - 1) = v63;
                    --v59;
                  }
                  while ( v59 );
                  v64 = 2LL;
                  *v62 = *(_OWORD *)v61;
                  v62[1] = *((_OWORD *)v61 + 1);
                  v62[2] = *((_OWORD *)v61 + 2);
                  v65 = *((_OWORD *)v61 + 3);
                  v66 = a1 + 540;
                  v62[3] = v65;
                  v67 = a1 + 540;
                  do
                  {
                    *(_OWORD *)v60 = *(_OWORD *)v67;
                    *((_OWORD *)v60 + 1) = *((_OWORD *)v67 + 1);
                    *((_OWORD *)v60 + 2) = *((_OWORD *)v67 + 2);
                    *((_OWORD *)v60 + 3) = *((_OWORD *)v67 + 3);
                    *((_OWORD *)v60 + 4) = *((_OWORD *)v67 + 4);
                    *((_OWORD *)v60 + 5) = *((_OWORD *)v67 + 5);
                    *((_OWORD *)v60 + 6) = *((_OWORD *)v67 + 6);
                    v60 += 32;
                    v68 = *((_OWORD *)v67 + 7);
                    v67 += 32;
                    *((_OWORD *)v60 - 1) = v68;
                    --v64;
                  }
                  while ( v64 );
                  *(_OWORD *)v60 = *(_OWORD *)v67;
                  *((_OWORD *)v60 + 1) = *((_OWORD *)v67 + 1);
                  *((_OWORD *)v60 + 2) = *((_OWORD *)v67 + 2);
                  *((_OWORD *)v60 + 3) = *((_OWORD *)v67 + 3);
                  v69 = (_OWORD *)v5;
                  do
                  {
                    *(_OWORD *)v66 = *v69;
                    *((_OWORD *)v66 + 1) = v69[1];
                    *((_OWORD *)v66 + 2) = v69[2];
                    *((_OWORD *)v66 + 3) = v69[3];
                    *((_OWORD *)v66 + 4) = v69[4];
                    *((_OWORD *)v66 + 5) = v69[5];
                    *((_OWORD *)v66 + 6) = v69[6];
                    v66 += 32;
                    v70 = v69[7];
                    v69 += 8;
                    *((_OWORD *)v66 - 1) = v70;
                    --v47;
                  }
                  while ( v47 );
                  *(_OWORD *)v66 = *v69;
                  *((_OWORD *)v66 + 1) = v69[1];
                  *((_OWORD *)v66 + 2) = v69[2];
                  *((_OWORD *)v66 + 3) = v69[3];
                  *(_OWORD *)v5 = *((_OWORD *)a2 + 155);
                  *(_OWORD *)(v5 + 16) = *((_OWORD *)a2 + 156);
                  *(_OWORD *)(v5 + 32) = *((_OWORD *)a2 + 157);
                  *(_OWORD *)(v5 + 48) = *((_OWORD *)a2 + 158);
                  *(_OWORD *)(v5 + 64) = *((_OWORD *)a2 + 159);
                  *(_OWORD *)(v5 + 80) = *((_OWORD *)a2 + 160);
                  *((_OWORD *)a2 + 155) = *((_OWORD *)a1 + 155);
                  *((_OWORD *)a2 + 156) = *((_OWORD *)a1 + 156);
                  *((_OWORD *)a2 + 157) = *((_OWORD *)a1 + 157);
                  *((_OWORD *)a2 + 158) = *((_OWORD *)a1 + 158);
                  *((_OWORD *)a2 + 159) = *((_OWORD *)a1 + 159);
                  *((_OWORD *)a2 + 160) = *((_OWORD *)a1 + 160);
                  *((_OWORD *)a1 + 155) = *(_OWORD *)v5;
                  *((_OWORD *)a1 + 156) = *(_OWORD *)(v5 + 16);
                  *((_OWORD *)a1 + 157) = *(_OWORD *)(v5 + 32);
                  *((_OWORD *)a1 + 158) = *(_OWORD *)(v5 + 48);
                  *((_OWORD *)a1 + 159) = *(_OWORD *)(v5 + 64);
                  *((_OWORD *)a1 + 160) = *(_OWORD *)(v5 + 80);
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 323);
                  *((_QWORD *)a2 + 323) = *((_QWORD *)a1 + 323);
                  *((_QWORD *)a1 + 323) = *(_QWORD *)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 324);
                  *((_QWORD *)a2 + 324) = *((_QWORD *)a1 + 324);
                  *((_QWORD *)a1 + 324) = *(_QWORD *)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 325);
                  *((_QWORD *)a2 + 325) = *((_QWORD *)a1 + 325);
                  *((_QWORD *)a1 + 325) = *(_QWORD *)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 326);
                  *((_QWORD *)a2 + 326) = *((_QWORD *)a1 + 326);
                  *((_QWORD *)a1 + 326) = *(_QWORD *)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 327);
                  *((_QWORD *)a2 + 327) = *((_QWORD *)a1 + 327);
                  *((_QWORD *)a1 + 327) = *(_QWORD *)v5;
                  *(_DWORD *)(struct HDEV__ *)v5 = a2[888];
                  a2[888] = a1[888];
                  *(_DWORD *)(a1 + 888) = *(_DWORD *)(HDEV)v5;
                  *(_DWORD *)(struct HDEV__ *)v5 = a2[894];
                  v71 = a2 + 14;
                  a2[894] = a1[894];
                  *(_DWORD *)(a1 + 894) = *(_DWORD *)(HDEV)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 328);
                  *((_QWORD *)a2 + 328) = *((_QWORD *)a1 + 328);
                  *((_QWORD *)a1 + 328) = *(_QWORD *)v5;
                  *(_DWORD *)(struct HDEV__ *)v5 = a2[658];
                  a2[658] = a1[658];
                  *(_DWORD *)(a1 + 658) = *(_DWORD *)(HDEV)v5;
                  *(_DWORD *)(struct HDEV__ *)v5 = a2[659];
                  a2[659] = a1[659];
                  *(_DWORD *)(a1 + 659) = *(_DWORD *)(HDEV)v5;
                  v72 = (_DWORD)a2[14] & 0x20000;
                  if ( (*(_DWORD *)v7 & 0x20000) != v72 )
                  {
                    SETFLAG(v72, (volatile unsigned int *)v7, 0x20000);
                    SETFLAG(v75, v74, v73);
                  }
                  v76 = *(_DWORD *)v71 & 0x1000000;
                  if ( (*(_DWORD *)v7 & 0x1000000) != v76 )
                  {
                    SETFLAG(v76, (volatile unsigned int *)v7, 0x1000000);
                    SETFLAG(v79, v78, v77);
                  }
                  v80 = *(_DWORD *)v71 & 0x20000000;
                  if ( (*(_DWORD *)v7 & 0x20000000) != v80 )
                  {
                    SETFLAG(v80, (volatile unsigned int *)v7, 0x20000000);
                    SETFLAG(v83, v82, v81);
                  }
                  v84 = *(_DWORD *)v71 & 0x2000000;
                  if ( (*(_DWORD *)v7 & 0x2000000) != v84 )
                  {
                    SETFLAG(v84, (volatile unsigned int *)v7, 0x2000000);
                    SETFLAG(v87, v86, v85);
                  }
                  v88 = *(_DWORD *)v71 & 0x8000000;
                  if ( (*(_DWORD *)v7 & 0x8000000) != v88 )
                  {
                    SETFLAG(v88, (volatile unsigned int *)v7, 0x8000000);
                    SETFLAG(v91, v90, v89);
                  }
                  v92 = *(_DWORD *)v71 & 0x4000000;
                  if ( (*(_DWORD *)v7 & 0x4000000) != v92 )
                  {
                    SETFLAG(v92, (volatile unsigned int *)v7, 0x4000000);
                    SETFLAG(v95, v94, v93);
                  }
                  v96 = *(_DWORD *)v71 & 0x40000000;
                  if ( (*(_DWORD *)v7 & 0x40000000) != v96 )
                  {
                    SETFLAG(v96, (volatile unsigned int *)v7, 0x40000000);
                    SETFLAG(v99, v98, v97);
                  }
                  _m_prefetchw(v7);
                  do
                    v100 = *(_DWORD *)v7;
                  while ( v100 != _InterlockedCompareExchange(
                                    (volatile signed __int32 *)v7,
                                    *(_DWORD *)v7 & 0xEFFFFFFF,
                                    *(_DWORD *)v7) );
                  _m_prefetchw(v71);
                  do
                    v101 = *(_DWORD *)v71;
                  while ( v101 != _InterlockedCompareExchange(
                                    (volatile signed __int32 *)v71,
                                    *(_DWORD *)v71 & 0xEFFFFFFF,
                                    *(_DWORD *)v71) );
                  *((_QWORD *)a1 + 6) = 0LL;
                  v102 = a2 + 680;
                  *((_QWORD *)a2 + 6) = 0LL;
                  v103 = 6LL;
                  v104 = (_OWORD *)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 218);
                  v105 = 6LL;
                  *((_QWORD *)a2 + 218) = *((_QWORD *)a1 + 218);
                  *((_QWORD *)a1 + 218) = *(_QWORD *)v5;
                  *(_OWORD *)v5 = *((_OWORD *)a2 + 93);
                  *(_OWORD *)(v5 + 16) = *((_OWORD *)a2 + 94);
                  *(_OWORD *)(v5 + 32) = *((_OWORD *)a2 + 95);
                  *((_OWORD *)a2 + 93) = *((_OWORD *)a1 + 93);
                  *((_OWORD *)a2 + 94) = *((_OWORD *)a1 + 94);
                  *((_OWORD *)a2 + 95) = *((_OWORD *)a1 + 95);
                  *((_OWORD *)a1 + 93) = *(_OWORD *)v5;
                  *((_OWORD *)a1 + 94) = *(_OWORD *)(v5 + 16);
                  *((_OWORD *)a1 + 95) = *(_OWORD *)(v5 + 32);
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 183);
                  *((_QWORD *)a2 + 183) = *((_QWORD *)a1 + 183);
                  *((_QWORD *)a1 + 183) = *(_QWORD *)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 184);
                  *((_QWORD *)a2 + 184) = *((_QWORD *)a1 + 184);
                  *((_QWORD *)a1 + 184) = *(_QWORD *)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 185);
                  *((_QWORD *)a2 + 185) = *((_QWORD *)a1 + 185);
                  *((_QWORD *)a1 + 185) = *(_QWORD *)v5;
                  v106 = a2 + 680;
                  do
                  {
                    *v104 = *(_OWORD *)v106;
                    v104[1] = *((_OWORD *)v106 + 1);
                    v104[2] = *((_OWORD *)v106 + 2);
                    v104[3] = *((_OWORD *)v106 + 3);
                    v104[4] = *((_OWORD *)v106 + 4);
                    v104[5] = *((_OWORD *)v106 + 5);
                    v104[6] = *((_OWORD *)v106 + 6);
                    v104 += 8;
                    v107 = *((_OWORD *)v106 + 7);
                    v106 += 32;
                    *(v104 - 1) = v107;
                    --v105;
                  }
                  while ( v105 );
                  v108 = 6LL;
                  *v104 = *(_OWORD *)v106;
                  v104[1] = *((_OWORD *)v106 + 1);
                  v104[2] = *((_OWORD *)v106 + 2);
                  *((_QWORD *)v104 + 6) = *((_QWORD *)v106 + 6);
                  v109 = a1 + 680;
                  v110 = a1 + 680;
                  do
                  {
                    *(_OWORD *)v102 = *(_OWORD *)v110;
                    *((_OWORD *)v102 + 1) = *((_OWORD *)v110 + 1);
                    *((_OWORD *)v102 + 2) = *((_OWORD *)v110 + 2);
                    *((_OWORD *)v102 + 3) = *((_OWORD *)v110 + 3);
                    *((_OWORD *)v102 + 4) = *((_OWORD *)v110 + 4);
                    *((_OWORD *)v102 + 5) = *((_OWORD *)v110 + 5);
                    *((_OWORD *)v102 + 6) = *((_OWORD *)v110 + 6);
                    v102 += 32;
                    v111 = *((_OWORD *)v110 + 7);
                    v110 += 32;
                    *((_OWORD *)v102 - 1) = v111;
                    --v108;
                  }
                  while ( v108 );
                  *(_OWORD *)v102 = *(_OWORD *)v110;
                  *((_OWORD *)v102 + 1) = *((_OWORD *)v110 + 1);
                  *((_OWORD *)v102 + 2) = *((_OWORD *)v110 + 2);
                  *((_QWORD *)v102 + 6) = *((_QWORD *)v110 + 6);
                  v112 = (_OWORD *)v5;
                  do
                  {
                    *(_OWORD *)v109 = *v112;
                    *((_OWORD *)v109 + 1) = v112[1];
                    *((_OWORD *)v109 + 2) = v112[2];
                    *((_OWORD *)v109 + 3) = v112[3];
                    *((_OWORD *)v109 + 4) = v112[4];
                    *((_OWORD *)v109 + 5) = v112[5];
                    *((_OWORD *)v109 + 6) = v112[6];
                    v109 += 32;
                    v113 = v112[7];
                    v112 += 8;
                    *((_OWORD *)v109 - 1) = v113;
                    --v103;
                  }
                  while ( v103 );
                  *(_OWORD *)v109 = *v112;
                  *((_OWORD *)v109 + 1) = v112[1];
                  *((_OWORD *)v109 + 2) = v112[2];
                  *((_QWORD *)v109 + 6) = *((_QWORD *)v112 + 6);
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 219);
                  *((_QWORD *)a2 + 219) = *((_QWORD *)a1 + 219);
                  *((_QWORD *)a1 + 219) = *(_QWORD *)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 220);
                  *((_QWORD *)a2 + 220) = *((_QWORD *)a1 + 220);
                  *((_QWORD *)a1 + 220) = *(_QWORD *)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 222);
                  *((_QWORD *)a2 + 222) = *((_QWORD *)a1 + 222);
                  *((_QWORD *)a1 + 222) = *(_QWORD *)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 223);
                  *((_QWORD *)a2 + 223) = *((_QWORD *)a1 + 223);
                  *((_QWORD *)a1 + 223) = *(_QWORD *)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 224);
                  *((_QWORD *)a2 + 224) = *((_QWORD *)a1 + 224);
                  *((_QWORD *)a1 + 224) = *(_QWORD *)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 225);
                  *((_QWORD *)a2 + 225) = *((_QWORD *)a1 + 225);
                  *((_QWORD *)a1 + 225) = *(_QWORD *)v5;
                  *(_DWORD *)(struct HDEV__ *)v5 = a2[667];
                  a2[667] = a1[667];
                  *(_DWORD *)(a1 + 667) = *(_DWORD *)(HDEV)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 334);
                  *((_QWORD *)a2 + 334) = *((_QWORD *)a1 + 334);
                  *((_QWORD *)a1 + 334) = *(_QWORD *)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 335);
                  *((_QWORD *)a2 + 335) = *((_QWORD *)a1 + 335);
                  *((_QWORD *)a1 + 335) = *(_QWORD *)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 337);
                  *((_QWORD *)a2 + 337) = *((_QWORD *)a1 + 337);
                  *((_QWORD *)a1 + 337) = *(_QWORD *)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 338);
                  *((_QWORD *)a2 + 338) = *((_QWORD *)a1 + 338);
                  *((_QWORD *)a1 + 338) = *(_QWORD *)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 339);
                  *((_QWORD *)a2 + 339) = *((_QWORD *)a1 + 339);
                  *((_QWORD *)a1 + 339) = *(_QWORD *)v5;
                  *(_QWORD *)v5 = *((_QWORD *)a2 + 336);
                  *((_QWORD *)a2 + 336) = *((_QWORD *)a1 + 336);
                  *((_QWORD *)a1 + 336) = *(_QWORD *)v5;
                  (*((void (__fastcall **)(_QWORD, HDEV))a2 + 341))(*((_QWORD *)a2 + 228), a2);
                  (*((void (__fastcall **)(_QWORD, HDEV))a1 + 341))(*((_QWORD *)a1 + 228), a1);
                  PDEVOBJ::bDisabled((PDEVOBJ *)&v118, v122);
                  PDEVOBJ::bDisabled((PDEVOBJ *)&v117, v121);
                  vResetSurfacePalette(a1);
                  vResetSurfacePalette(a2);
                  if ( (int)IsvSpDynamicModeChangeSupported_0() >= 0 )
                    vSpDynamicModeChange_0();
                  if ( (int)IsUpdateGammaRampOnDeviceSupported_0() >= 0 )
                    UpdateGammaRampOnDevice_0();
                  ++gcModeChanges;
                  v4 = 1;
                  break;
                }
                v36 = (HDEV)v39[5];
                v37 = *v39;
                if ( v36 == a1 )
                {
                  v39[5] = (__int64)a2;
                  PDEVOBJ::vReferencePdev((PDEVOBJ *)&v117);
                  v38 = &v118;
                  goto LABEL_62;
                }
                if ( v36 == a2 )
                {
                  v39[5] = (__int64)a1;
                  PDEVOBJ::vReferencePdev((PDEVOBJ *)&v118);
                  v38 = &v117;
LABEL_62:
                  PDEVOBJ::vUnreferencePdev((__int64 *)v38, 0);
                }
                v35 = v37;
                goto LABEL_64;
              }
              goto LABEL_40;
            }
          }
        }
      }
LABEL_118:
      Win32FreePool();
      vEnableSynchronize_0();
      vEnableSynchronize_0();
    }
  }
  return v4;
}
