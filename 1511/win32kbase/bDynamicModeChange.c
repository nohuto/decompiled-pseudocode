/*
 * XREFs of bDynamicModeChange @ 0x1C0059E84
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0054368 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     vEnableSynchronize_0 @ 0x1C00010F8 (vEnableSynchronize_0.c)
 *     vDisableSynchronize_0 @ 0x1C00011D8 (vDisableSynchronize_0.c)
 *     IsvDisableSynchronizeSupported_0 @ 0x1C0001698 (IsvDisableSynchronizeSupported_0.c)
 *     IsvSpDynamicModeChangeSupported_0 @ 0x1C00016A0 (IsvSpDynamicModeChangeSupported_0.c)
 *     vSpDynamicModeChange_0 @ 0x1C00016A8 (vSpDynamicModeChange_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0037F14 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038000 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00380C0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0038FB8 (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     bDynamicRemoveAllDriverRealizations @ 0x1C005AFC0 (bDynamicRemoveAllDriverRealizations.c)
 *     HmgSafeNextObjt @ 0x1C005B0C0 (HmgSafeNextObjt.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C005BC64 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C005BCB0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     HmgShareLock @ 0x1C005C9B0 (HmgShareLock.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C005CB10 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C005CB6C (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C007ADE4 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C00864A0 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00B9798 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 */

__int64 __fastcall bDynamicModeChange(HDEV a1, HDEV a2)
{
  unsigned int v4; // r15d
  _QWORD *v5; // r12
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
  int v19; // r8d
  __int64 v20; // r9
  struct SURFACE *v21; // rax
  unsigned int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  HDEV v28; // rax
  int v29; // eax
  HDEV v30; // r8
  HDEV v31; // rdx
  int v32; // eax
  __int64 v33; // rcx
  HDEV v34; // rcx
  __int64 v35; // rdi
  HDEV *v36; // rcx
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  _DWORD *v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // edx
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
  unsigned int v73; // r8d
  volatile unsigned int *v74; // r10
  int v75; // r11d
  int v76; // ecx
  unsigned int v77; // r8d
  volatile unsigned int *v78; // r10
  int v79; // r11d
  int v80; // ecx
  unsigned int v81; // r8d
  volatile unsigned int *v82; // r10
  int v83; // r11d
  int v84; // ecx
  unsigned int v85; // r8d
  volatile unsigned int *v86; // r10
  int v87; // r11d
  int v88; // ecx
  unsigned int v89; // r8d
  volatile unsigned int *v90; // r10
  int v91; // r11d
  int v92; // ecx
  unsigned int v93; // r8d
  volatile unsigned int *v94; // r10
  int v95; // r11d
  int v96; // ecx
  unsigned int v97; // r8d
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
  struct SURFACE *v115; // [rsp+40h] [rbp-49h]
  struct SURFACE *v116; // [rsp+48h] [rbp-41h]
  __int64 v117; // [rsp+50h] [rbp-39h]
  HDEV v118; // [rsp+58h] [rbp-31h] BYREF
  HDEV v119; // [rsp+60h] [rbp-29h] BYREF
  __int64 v120; // [rsp+68h] [rbp-21h]
  int v121; // [rsp+70h] [rbp-19h]
  int v122; // [rsp+74h] [rbp-15h]
  __int64 v123; // [rsp+78h] [rbp-11h]
  __int64 v124; // [rsp+80h] [rbp-9h]
  struct tagSIZE v125; // [rsp+88h] [rbp-1h]
  struct tagSIZE v126; // [rsp+90h] [rbp+7h]
  _QWORD *v127; // [rsp+98h] [rbp+Fh]
  __int64 v128; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v129[7]; // [rsp+A8h] [rbp+1Fh] BYREF
  int v130; // [rsp+100h] [rbp+77h]
  __int64 v131; // [rsp+100h] [rbp+77h]
  BOOL v132; // [rsp+108h] [rbp+7Fh]

  v4 = 0;
  if ( (unsigned int)bDynamicMatchEnoughForModeChange(a1, a2) )
  {
    v127 = PALLOCMEM2(0x9D8uLL, 1886221383LL, 0);
    v5 = v127;
    if ( v127 )
    {
      v6 = *((_DWORD *)a2 + 14);
      v7 = a1 + 14;
      v119 = a1;
      v118 = a2;
      v122 = v6 & 0x400;
      v121 = (_DWORD)a1[14] & 0x400;
      if ( (int)IsvDisableSynchronizeSupported_0() >= 0 )
      {
        vDisableSynchronize_0();
        vDisableSynchronize_0();
      }
      v132 = *((_DWORD *)a1 + 546) * *((_DWORD *)a1 + 547) != *((_DWORD *)a2 + 546) * *((_DWORD *)a2 + 547);
      if ( (unsigned int)bDynamicRemoveAllDriverRealizations(a1)
        && (unsigned int)bDynamicRemoveAllDriverRealizations(a2) )
      {
        v130 = 1;
        v8 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v119, &v128);
        v115 = (struct SURFACE *)*((_QWORD *)a1 + 322);
        v9 = *v8;
        v124 = *((_QWORD *)a1 + 229);
        v120 = *((_QWORD *)a1 + 228);
        v125 = v9;
        v10 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v118, v129);
        v13 = (struct SURFACE *)*((_QWORD *)a2 + 322);
        v116 = v13;
        v14 = *v10;
        v123 = *((_QWORD *)a2 + 229);
        v117 = *((_QWORD *)a2 + 228);
        v126 = v14;
        if ( v14.cx < v9.cx || (cy = (unsigned int)v125.cy, v14.cy < v125.cy) )
        {
          v16 = bDynamicIntersectVisRect(v12, v14);
          v13 = v116;
          cy = (unsigned int)v125.cy;
          v11 = v16 & 1;
          v130 = v11;
        }
        if ( v9.cx < v14.cx || (int)cy < v126.cy )
          v11 = bDynamicIntersectVisRect(v13, v9) & v130;
        v17 = *((_QWORD *)a2 + 347);
        if ( v17 && v17 == *((_QWORD *)a1 + 347) && *((_QWORD *)a2 + 227) == *((_QWORD *)a1 + 227) )
        {
          if ( !v11 )
            goto LABEL_114;
          v11 = (*((__int64 (__fastcall **)(__int64, __int64))a2 + 347))(v120, v117);
        }
        if ( v11 )
        {
          LOBYTE(cy) = 1;
          Objt = HmgSafeNextObjt(0LL, cy);
          if ( Objt )
          {
            while ( 1 )
            {
              v19 = *(_DWORD *)(Objt + 36);
              v20 = *(_QWORD *)Objt;
              if ( (v19 & 0x2000) != 0 )
                goto LABEL_35;
              v21 = *(struct SURFACE **)(Objt + 512);
              if ( v21 == v115 )
              {
                *(_QWORD *)(Objt + 512) = v116;
                *(struct tagSIZE *)(Objt + 528) = v14;
              }
              else
              {
                if ( v21 != v116 )
                  goto LABEL_26;
                *(_QWORD *)(Objt + 512) = v115;
                *(struct tagSIZE *)(Objt + 528) = v9;
              }
              *(_DWORD *)(Objt + 332) |= 0xFu;
LABEL_26:
              if ( (v19 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(Objt + 512) + 112LL) & 0x200) != 0 )
                v22 = v19 | 0x8000;
              else
                v22 = v19 & 0xFFFF7FFF;
              v23 = *(_QWORD *)(Objt + 24);
              v24 = v120;
              *(_DWORD *)(Objt + 36) = v22;
              if ( v23 == v24 )
              {
                *(_QWORD *)(Objt + 24) = v117;
                *(_DWORD *)(struct HDEV__ *)(Objt + 72) = a2[462];
                v25 = *((_DWORD *)a2 + 538);
LABEL_34:
                *(_DWORD *)(Objt + 76) = v25;
                goto LABEL_35;
              }
              if ( v23 == v117 )
              {
                *(_QWORD *)(Objt + 24) = v24;
                *(_DWORD *)(struct HDEV__ *)(Objt + 72) = a1[462];
                v25 = *((_DWORD *)a1 + 538);
                goto LABEL_34;
              }
LABEL_35:
              LOBYTE(Objt) = 1;
              Objt = HmgSafeNextObjt(v20, Objt);
              if ( !Objt )
              {
                v5 = v127;
                v7 = a1 + 14;
                break;
              }
            }
          }
          LOBYTE(Objt) = 5;
          v27 = HmgSafeNextObjt(0LL, Objt);
          if ( !v27 )
            goto LABEL_55;
          while ( 1 )
          {
            v131 = *(_QWORD *)v27;
            v28 = *(HDEV *)(v27 + 48);
            if ( v28 == a1 )
            {
              v29 = *(_DWORD *)(v27 + 112);
              if ( (v29 & 0x4000000) == 0 )
              {
                if ( (v29 & 0x300000) == 0x200000 )
                  *(_QWORD *)(v27 + 48) = a2;
                goto LABEL_53;
              }
              if ( v132 && *(_DWORD *)(v27 + 96) == *((_DWORD *)v115 + 24) )
              {
                v30 = a2;
                v31 = a1;
LABEL_50:
                vDynamicSwitchPalettes((struct SURFACE *)v27, (struct PDEV *)v31, (struct PDEV *)v30);
              }
            }
            else if ( v28 == a2 )
            {
              v32 = *(_DWORD *)(v27 + 112);
              if ( (v32 & 0x4000000) == 0 )
              {
                if ( (v32 & 0x300000) == 0x200000 )
                  *(_QWORD *)(v27 + 48) = a1;
                goto LABEL_53;
              }
              if ( v132 && *(_DWORD *)(v27 + 96) == *((_DWORD *)v116 + 24) )
              {
                v30 = a1;
                v31 = a2;
                goto LABEL_50;
              }
            }
LABEL_53:
            LOBYTE(v26) = 5;
            v27 = HmgSafeNextObjt(v131, v26);
            if ( !v27 )
            {
              v7 = a1 + 14;
LABEL_55:
              v33 = 0LL;
LABEL_62:
              LOBYTE(v26) = 28;
              v37 = (__int64 *)HmgSafeNextObjt(v33, v26);
              if ( !v37 )
              {
                vChangeWndObjs(v115, a1, v116, a2);
                LOBYTE(v38) = 16;
                v39 = HmgShareLock(ghbrGrayPattern, v38);
                v5[10] = v5 + 67;
                v40 = (_DWORD *)v39;
                v41 = v123;
                *((_DWORD *)v5 + 144) = 0;
                *(_DWORD *)(v5[10] + 32LL) = 0xFFFFFF;
                v42 = v5[10];
                *((_DWORD *)v5 + 28) = 0;
                *(_QWORD *)(v42 + 112) = 0LL;
                EBRUSHOBJ::vInitBrush(a1 + 394, v5, v40, WPP_MAIN_CB.Dpc.DpcListEntry.Next, v41, v116, 1);
                EBRUSHOBJ::vInitBrush(a2 + 394, v5, v40, WPP_MAIN_CB.Dpc.DpcListEntry.Next, v124, v115, 1);
                HmgDecrementShareReferenceCount(v40);
                *((_QWORD *)a2 + 229) = v124;
                *((_QWORD *)a2 + 228) = v120;
                v43 = v123;
                *((_QWORD *)a2 + 322) = v115;
                *((_QWORD *)a1 + 229) = v43;
                *((_QWORD *)a1 + 228) = v117;
                *((_QWORD *)a1 + 322) = v116;
                v44 = *((_DWORD *)v115 + 28);
                if ( (v44 & 0x10000000) != 0 )
                {
                  *((_DWORD *)v116 + 28) |= 0x10000000u;
                  if ( a1 != (HDEV)-96LL && (((_DWORD)a1[49] & 0x10000000) != 0 || ((_DWORD)a1[51] & 0x10000000) != 0) )
                  {
                    v45 = a2 + 24;
LABEL_73:
                    if ( v45 )
                    {
                      *((_DWORD *)v45 + 25) |= 0x10000000u;
                      *((_DWORD *)v45 + 27) |= 0x10000000u;
                    }
                  }
                }
                else if ( (*((_DWORD *)v116 + 28) & 0x10000000) != 0 )
                {
                  *((_DWORD *)v115 + 28) = v44 | 0x10000000;
                  if ( a2 != (HDEV)-96LL && (((_DWORD)a2[49] & 0x10000000) != 0 || ((_DWORD)a2[51] & 0x10000000) != 0) )
                  {
                    v45 = a1 + 24;
                    goto LABEL_73;
                  }
                }
                v46 = a2 + 462;
                *v5 = *((_QWORD *)a2 + 227);
                v47 = 2LL;
                v48 = v5;
                *((_QWORD *)a2 + 227) = *((_QWORD *)a1 + 227);
                v49 = 2LL;
                *((_QWORD *)a1 + 227) = *v5;
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
                v56 = v5;
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
                v62 = v5;
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
                v69 = v5;
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
                *((_OWORD *)v5 + 1) = *((_OWORD *)a2 + 156);
                *((_OWORD *)v5 + 2) = *((_OWORD *)a2 + 157);
                *((_OWORD *)v5 + 3) = *((_OWORD *)a2 + 158);
                *((_OWORD *)v5 + 4) = *((_OWORD *)a2 + 159);
                *((_OWORD *)v5 + 5) = *((_OWORD *)a2 + 160);
                *((_OWORD *)a2 + 155) = *((_OWORD *)a1 + 155);
                *((_OWORD *)a2 + 156) = *((_OWORD *)a1 + 156);
                *((_OWORD *)a2 + 157) = *((_OWORD *)a1 + 157);
                *((_OWORD *)a2 + 158) = *((_OWORD *)a1 + 158);
                *((_OWORD *)a2 + 159) = *((_OWORD *)a1 + 159);
                *((_OWORD *)a2 + 160) = *((_OWORD *)a1 + 160);
                *((_OWORD *)a1 + 155) = *(_OWORD *)v5;
                *((_OWORD *)a1 + 156) = *((_OWORD *)v5 + 1);
                *((_OWORD *)a1 + 157) = *((_OWORD *)v5 + 2);
                *((_OWORD *)a1 + 158) = *((_OWORD *)v5 + 3);
                *((_OWORD *)a1 + 159) = *((_OWORD *)v5 + 4);
                *((_OWORD *)a1 + 160) = *((_OWORD *)v5 + 5);
                *v5 = *((_QWORD *)a2 + 323);
                *((_QWORD *)a2 + 323) = *((_QWORD *)a1 + 323);
                *((_QWORD *)a1 + 323) = *v5;
                *v5 = *((_QWORD *)a2 + 324);
                *((_QWORD *)a2 + 324) = *((_QWORD *)a1 + 324);
                *((_QWORD *)a1 + 324) = *v5;
                *v5 = *((_QWORD *)a2 + 325);
                *((_QWORD *)a2 + 325) = *((_QWORD *)a1 + 325);
                *((_QWORD *)a1 + 325) = *v5;
                *v5 = *((_QWORD *)a2 + 326);
                *((_QWORD *)a2 + 326) = *((_QWORD *)a1 + 326);
                *((_QWORD *)a1 + 326) = *v5;
                *v5 = *((_QWORD *)a2 + 327);
                *((_QWORD *)a2 + 327) = *((_QWORD *)a1 + 327);
                *((_QWORD *)a1 + 327) = *v5;
                *(_DWORD *)(struct HDEV__ *)v5 = a2[888];
                a2[888] = a1[888];
                *(_DWORD *)(a1 + 888) = *(_DWORD *)(HDEV)v5;
                *v5 = *((_QWORD *)a2 + 328);
                v71 = a2 + 14;
                *((_QWORD *)a2 + 328) = *((_QWORD *)a1 + 328);
                *((_QWORD *)a1 + 328) = *v5;
                *(_DWORD *)(struct HDEV__ *)v5 = a2[658];
                a2[658] = a1[658];
                *(_DWORD *)(a1 + 658) = *(_DWORD *)(HDEV)v5;
                *(_DWORD *)(struct HDEV__ *)v5 = a2[659];
                a2[659] = a1[659];
                *(_DWORD *)(a1 + 659) = *(_DWORD *)(HDEV)v5;
                v72 = (_DWORD)a2[14] & 0x20000;
                if ( (*(_DWORD *)v7 & 0x20000) != v72 )
                {
                  SETFLAG(v72, (volatile unsigned int *)v7, 0x20000u);
                  SETFLAG(v75, v74, v73);
                }
                v76 = *(_DWORD *)v71 & 0x1000000;
                if ( (*(_DWORD *)v7 & 0x1000000) != v76 )
                {
                  SETFLAG(v76, (volatile unsigned int *)v7, 0x1000000u);
                  SETFLAG(v79, v78, v77);
                }
                v80 = *(_DWORD *)v71 & 0x20000000;
                if ( (*(_DWORD *)v7 & 0x20000000) != v80 )
                {
                  SETFLAG(v80, (volatile unsigned int *)v7, 0x20000000u);
                  SETFLAG(v83, v82, v81);
                }
                v84 = *(_DWORD *)v71 & 0x2000000;
                if ( (*(_DWORD *)v7 & 0x2000000) != v84 )
                {
                  SETFLAG(v84, (volatile unsigned int *)v7, 0x2000000u);
                  SETFLAG(v87, v86, v85);
                }
                v88 = *(_DWORD *)v71 & 0x8000000;
                if ( (*(_DWORD *)v7 & 0x8000000) != v88 )
                {
                  SETFLAG(v88, (volatile unsigned int *)v7, 0x8000000u);
                  SETFLAG(v91, v90, v89);
                }
                v92 = *(_DWORD *)v71 & 0x4000000;
                if ( (*(_DWORD *)v7 & 0x4000000) != v92 )
                {
                  SETFLAG(v92, (volatile unsigned int *)v7, 0x4000000u);
                  SETFLAG(v95, v94, v93);
                }
                v96 = *(_DWORD *)v71 & 0x40000000;
                if ( (*(_DWORD *)v7 & 0x40000000) != v96 )
                {
                  SETFLAG(v96, (volatile unsigned int *)v7, 0x40000000u);
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
                v104 = v5;
                *v5 = *((_QWORD *)a2 + 218);
                v105 = 6LL;
                *((_QWORD *)a2 + 218) = *((_QWORD *)a1 + 218);
                *((_QWORD *)a1 + 218) = *v5;
                *(_OWORD *)v5 = *((_OWORD *)a2 + 93);
                *((_OWORD *)v5 + 1) = *((_OWORD *)a2 + 94);
                *((_OWORD *)v5 + 2) = *((_OWORD *)a2 + 95);
                *((_OWORD *)a2 + 93) = *((_OWORD *)a1 + 93);
                *((_OWORD *)a2 + 94) = *((_OWORD *)a1 + 94);
                *((_OWORD *)a2 + 95) = *((_OWORD *)a1 + 95);
                *((_OWORD *)a1 + 93) = *(_OWORD *)v5;
                *((_OWORD *)a1 + 94) = *((_OWORD *)v5 + 1);
                *((_OWORD *)a1 + 95) = *((_OWORD *)v5 + 2);
                *v5 = *((_QWORD *)a2 + 183);
                *((_QWORD *)a2 + 183) = *((_QWORD *)a1 + 183);
                *((_QWORD *)a1 + 183) = *v5;
                *v5 = *((_QWORD *)a2 + 184);
                *((_QWORD *)a2 + 184) = *((_QWORD *)a1 + 184);
                *((_QWORD *)a1 + 184) = *v5;
                *v5 = *((_QWORD *)a2 + 185);
                *((_QWORD *)a2 + 185) = *((_QWORD *)a1 + 185);
                *((_QWORD *)a1 + 185) = *v5;
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
                v112 = v5;
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
                *v5 = *((_QWORD *)a2 + 219);
                *((_QWORD *)a2 + 219) = *((_QWORD *)a1 + 219);
                *((_QWORD *)a1 + 219) = *v5;
                *v5 = *((_QWORD *)a2 + 220);
                *((_QWORD *)a2 + 220) = *((_QWORD *)a1 + 220);
                *((_QWORD *)a1 + 220) = *v5;
                *v5 = *((_QWORD *)a2 + 222);
                *((_QWORD *)a2 + 222) = *((_QWORD *)a1 + 222);
                *((_QWORD *)a1 + 222) = *v5;
                *v5 = *((_QWORD *)a2 + 223);
                *((_QWORD *)a2 + 223) = *((_QWORD *)a1 + 223);
                *((_QWORD *)a1 + 223) = *v5;
                *v5 = *((_QWORD *)a2 + 224);
                *((_QWORD *)a2 + 224) = *((_QWORD *)a1 + 224);
                *((_QWORD *)a1 + 224) = *v5;
                *v5 = *((_QWORD *)a2 + 225);
                *((_QWORD *)a2 + 225) = *((_QWORD *)a1 + 225);
                *((_QWORD *)a1 + 225) = *v5;
                *(_DWORD *)(struct HDEV__ *)v5 = a2[667];
                a2[667] = a1[667];
                *(_DWORD *)(a1 + 667) = *(_DWORD *)(HDEV)v5;
                *v5 = *((_QWORD *)a2 + 334);
                *((_QWORD *)a2 + 334) = *((_QWORD *)a1 + 334);
                *((_QWORD *)a1 + 334) = *v5;
                *v5 = *((_QWORD *)a2 + 335);
                *((_QWORD *)a2 + 335) = *((_QWORD *)a1 + 335);
                *((_QWORD *)a1 + 335) = *v5;
                *v5 = *((_QWORD *)a2 + 337);
                *((_QWORD *)a2 + 337) = *((_QWORD *)a1 + 337);
                *((_QWORD *)a1 + 337) = *v5;
                *v5 = *((_QWORD *)a2 + 338);
                *((_QWORD *)a2 + 338) = *((_QWORD *)a1 + 338);
                *((_QWORD *)a1 + 338) = *v5;
                *v5 = *((_QWORD *)a2 + 339);
                *((_QWORD *)a2 + 339) = *((_QWORD *)a1 + 339);
                *((_QWORD *)a1 + 339) = *v5;
                *v5 = *((_QWORD *)a2 + 336);
                *((_QWORD *)a2 + 336) = *((_QWORD *)a1 + 336);
                *((_QWORD *)a1 + 336) = *v5;
                (*((void (__fastcall **)(_QWORD, HDEV))a2 + 341))(*((_QWORD *)a2 + 228), a2);
                (*((void (__fastcall **)(_QWORD, HDEV))a1 + 341))(*((_QWORD *)a1 + 228), a1);
                PDEVOBJ::bDisabled((PDEVOBJ *)&v119, v122);
                PDEVOBJ::bDisabled((PDEVOBJ *)&v118, v121);
                vResetSurfacePalette(a1);
                vResetSurfacePalette(a2);
                if ( (int)IsvSpDynamicModeChangeSupported_0() >= 0 )
                  vSpDynamicModeChange_0();
                ++gcModeChanges;
                v4 = 1;
                break;
              }
              v34 = (HDEV)v37[5];
              v35 = *v37;
              if ( v34 == a1 )
              {
                v37[5] = (__int64)a2;
                PDEVOBJ::vReferencePdev((PDEVOBJ *)&v118);
                v36 = &v119;
                goto LABEL_60;
              }
              if ( v34 == a2 )
              {
                v37[5] = (__int64)a1;
                PDEVOBJ::vReferencePdev((PDEVOBJ *)&v119);
                v36 = &v118;
LABEL_60:
                PDEVOBJ::vUnreferencePdev(
                  (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C **)v36,
                  0);
              }
              v33 = v35;
              goto LABEL_62;
            }
          }
        }
      }
LABEL_114:
      Win32FreePool();
      vEnableSynchronize_0();
      vEnableSynchronize_0();
    }
  }
  return v4;
}
