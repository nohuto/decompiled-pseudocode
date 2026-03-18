/*
 * XREFs of GreDrawStream @ 0x1C0026AD0
 * Callers:
 *     NtGdiDrawStream @ 0x1C00DD720 (NtGdiDrawStream.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0097490 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     bCvtPts1 @ 0x1C00979C4 (bCvtPts1.c)
 *     ??YERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C009DAE4 (--YERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025E4FC (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C025E5C0 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C025FFC0 (--0DCOBJ@@QEAA@XZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C0269FE8 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C026A038 (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0SURFREFDC@@QEAA@XZ @ 0x1C0280114 (--0SURFREFDC@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C0290DF0 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDrawStream(HDC a1, unsigned int a2, _DWORD *a3)
{
  __int64 v5; // rsi
  struct SURFACE *v6; // r8
  struct SURFACE *v7; // rdx
  struct PALETTE *v8; // r13
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // r15
  int v12; // r11d
  char *v13; // r10
  __int64 v14; // r9
  bool v15; // zf
  _DWORD *v16; // rdi
  unsigned int v17; // ebx
  unsigned int v18; // esi
  int v19; // r8d
  int v20; // r9d
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // r11d
  int v27; // eax
  int v28; // r10d
  int v29; // r9d
  char *v30; // r10
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct SURFACE *v35; // rbx
  SURFACE *v36; // rbx
  __int64 v37; // rdx
  HDC v38; // rdx
  int v39; // ebx
  __int64 v40; // rcx
  int v41; // edx
  int left; // ecx
  int right; // eax
  LONG top; // ecx
  __int64 v45; // rbx
  __int64 v46; // rdi
  int v47; // ecx
  struct PALETTE *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 cEntries; // rcx
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned int v58; // [rsp+64h] [rbp-9Ch]
  int v59; // [rsp+68h] [rbp-98h]
  __int64 v60; // [rsp+70h] [rbp-90h] BYREF
  char *v61; // [rsp+78h] [rbp-88h]
  __int64 v62; // [rsp+80h] [rbp-80h] BYREF
  __int64 v63; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v64; // [rsp+90h] [rbp-70h]
  _DWORD *v65; // [rsp+98h] [rbp-68h]
  struct SURFACE *v66; // [rsp+A0h] [rbp-60h]
  struct SURFACE *v67; // [rsp+A8h] [rbp-58h]
  struct _XLATEOBJ *v68; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-48h] BYREF
  int v70; // [rsp+C0h] [rbp-40h]
  int v71; // [rsp+C4h] [rbp-3Ch]
  _BYTE v72[32]; // [rsp+C8h] [rbp-38h] BYREF
  SURFACE *v73; // [rsp+E8h] [rbp-18h]
  struct _XLATEOBJ *v74; // [rsp+F0h] [rbp-10h]
  struct _RECTL v75; // [rsp+100h] [rbp+0h]
  struct _RECTL v76; // [rsp+110h] [rbp+10h]
  _QWORD v77[6]; // [rsp+120h] [rbp+20h] BYREF
  struct PALETTE *v78; // [rsp+150h] [rbp+50h]
  HDC v79; // [rsp+158h] [rbp+58h]
  struct _RECTL v80; // [rsp+160h] [rbp+60h] BYREF
  __int128 v81; // [rsp+170h] [rbp+70h] BYREF
  __int64 v82; // [rsp+180h] [rbp+80h]
  int v83; // [rsp+188h] [rbp+88h]
  _QWORD v84[10]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v85[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v86; // [rsp+200h] [rbp+100h]
  __int64 v87; // [rsp+208h] [rbp+108h]
  __int64 v88; // [rsp+210h] [rbp+110h]
  struct _RECTL v89; // [rsp+230h] [rbp+130h] BYREF

  v79 = a1;
  DCOBJ::DCOBJ((DCOBJ *)v77);
  SURFREFDC::SURFREFDC((SURFREFDC *)v72);
  LODWORD(v5) = 0;
  v69 = 0LL;
  v71 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v84);
  v82 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v78 = gppalRGB;
  v13 = 0LL;
  v67 = 0LL;
  v14 = 0LL;
  v66 = 0LL;
  v74 = 0LL;
  v68 = 0LL;
  v59 = 0;
  v61 = 0LL;
  v64 = 0;
  v81 = 0LL;
  v83 = 0;
  v84[0] = 0LL;
  memset(&v84[6], 0, 24);
  if ( a2 >= 4 )
  {
    v15 = *a3 == 1148352339;
    v16 = a3 + 1;
    v65 = a3 + 1;
    if ( v15 )
    {
      LODWORD(v5) = 1;
      v17 = a2 - 4;
      v58 = v17;
      if ( v17 >= 4 )
      {
        while ( *v16 )
        {
          if ( *v16 == 1 )
          {
            if ( v13 )
              goto LABEL_90;
            if ( v73 )
            {
              if ( v73 == SURFACE::pdibDefault )
              {
                DEC_SHARE_REF_CNT(v73);
              }
              else
              {
                GreAcquireHmgrSemaphore(v73, v7, v6, v14);
                SURFACE::vDec_cRef(v73);
                GreReleaseHmgrSemaphore();
              }
              LODWORD(v14) = v64;
              v73 = 0LL;
            }
            v18 = 8;
            if ( v17 < 8 )
              goto LABEL_120;
            if ( !(_DWORD)v14 )
              goto LABEL_120;
            LOBYTE(v7) = 5;
            v66 = (struct SURFACE *)HmgShareLockCheck((int)v16[1], v7);
            v35 = v66;
            v73 = v66;
            if ( !v66 )
              goto LABEL_120;
            if ( v66 != SURFACE::pdibDefault )
            {
              GreAcquireHmgrSemaphore(v32, v31, v33, v34);
              v36 = v73;
              INC_SHARE_REF_CNT(v73, v37);
              ++*((_DWORD *)v36 + 40);
              DEC_SHARE_REF_CNT(v73);
              GreReleaseHmgrSemaphore();
              v35 = v73;
              v66 = v73;
            }
            if ( !v35 )
              goto LABEL_120;
            v11 = *((_QWORD *)v35 + 15);
            v8 = ppalDefault;
            if ( !v11
              || (*(_DWORD *)(v11 + 24) & 0x2000) != 0
              || v35 == v67
              || *((_DWORD *)v35 + 24) != 6
              || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                  (__int64 *)&v68,
                                  0LL,
                                  *(_DWORD *)(v77[0] + 112LL),
                                  v11,
                                  v9,
                                  (__int64)ppalDefault,
                                  v10,
                                  *(_DWORD *)(*(_QWORD *)(v77[0] + 80LL) + 40LL),
                                  *(_DWORD *)(*(_QWORD *)(v77[0] + 80LL) + 32LL),
                                  0,
                                  0) )
            {
              goto LABEL_120;
            }
            v6 = v67;
            v74 = v68;
            goto LABEL_86;
          }
          if ( *v16 != 9 )
            goto LABEL_120;
          v18 = 60;
          if ( v17 < 0x3C )
            goto LABEL_120;
          v19 = v16[9];
          if ( (v19 & 0xFFFFFF80) != 0 )
            goto LABEL_120;
          if ( !v66 )
            goto LABEL_120;
          v20 = v16[5];
          if ( v20 < 0 )
            goto LABEL_120;
          v21 = v16[6];
          if ( v21 < 0 )
            goto LABEL_120;
          v22 = v16[7];
          if ( v22 > *((_DWORD *)v66 + 14) )
            goto LABEL_120;
          v23 = v16[8];
          if ( v23 > *((_DWORD *)v66 + 15) )
            goto LABEL_120;
          v24 = v22 - v20;
          v25 = v23 - v21;
          if ( v24 <= 0 || v25 <= 0 )
            goto LABEL_120;
          if ( (v19 & 0x20) == 0 )
          {
            v26 = v16[10];
            if ( v26 < 0 )
              goto LABEL_120;
            v27 = v16[11];
            if ( v27 < 0 )
              goto LABEL_120;
            v28 = v16[12];
            if ( v28 < 0 )
              goto LABEL_120;
            v29 = v16[13];
            if ( v29 < 0 || v26 > v24 || v27 > v24 || v28 > v25 || v29 > v25 || v26 + v27 > v24 || v29 + v28 > v25 )
              goto LABEL_120;
            v12 = v59;
          }
          if ( (v19 & 0xC) == 0xC )
            goto LABEL_120;
          if ( (v19 & 8) != 0 )
          {
            v16[14] = ulGetNearestIndexFromColorref(v11, v8, (unsigned int)v16[14], 1LL);
          }
          else
          {
            if ( (v19 & 4) != 0 )
              v12 = 1;
            v59 = v12;
          }
          if ( v61 )
          {
            ERECTL::operator+=(&v80);
            v6 = v67;
LABEL_86:
            v30 = v61;
            goto LABEL_87;
          }
          v30 = (char *)v16;
          v6 = v67;
          v75 = *(struct _RECTL *)(v16 + 1);
          v80 = v75;
          v61 = (char *)v16;
LABEL_87:
          v17 = v58 - v18;
          v58 = v17;
          v16 += (unsigned __int64)v18 >> 2;
          v65 = v16;
          if ( v17 )
            goto LABEL_117;
          if ( !v30 )
            goto LABEL_127;
          v7 = v66;
          v12 = v59;
LABEL_90:
          if ( v77[0] && v7 )
          {
            v85[0] = 72LL;
            v60 = 0LL;
            v45 = 0LL;
            v63 = 0LL;
            v5 = 0LL;
            v62 = 0LL;
            v46 = 0LL;
            v85[1] = 33488896LL;
            v85[2] = 0LL;
            if ( v12 )
            {
              v47 = *((_DWORD *)v6 + 24);
              if ( (unsigned int)(v47 - 1) <= 1 || v47 == 3 )
              {
LABEL_124:
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v63);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v62);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v60);
                LODWORD(v5) = 0;
                goto LABEL_121;
              }
              v48 = v78;
              if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                    &v60,
                                    0LL,
                                    0,
                                    v11,
                                    (__int64)v78,
                                    (__int64)v8,
                                    (__int64)v8,
                                    0,
                                    0,
                                    0,
                                    0) )
              {
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v63);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v62);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v60);
                goto LABEL_121;
              }
              v5 = v60;
              v86 = v60;
              if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v62, 0LL, 0, v9, (__int64)v48, v10, v10, 0, 0, 0, 0) )
                goto LABEL_124;
              v46 = v62;
              v87 = v62;
              if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v63, 0LL, 0, (__int64)v48, v9, v10, v10, 0, 0, 0, 0) )
              {
LABEL_119:
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v63);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v62);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v60);
LABEL_120:
                LODWORD(v5) = 0;
                goto LABEL_121;
              }
              v45 = v63;
              v7 = v66;
              v88 = v63;
            }
            else
            {
              v88 = 0LL;
              v87 = 0LL;
              v86 = 0LL;
            }
            if ( !NtGdiDrawStreamInternal(
                    (struct XDCOBJ *)v77,
                    (struct EXFORMOBJ *)&v69,
                    v7,
                    v74,
                    &v89,
                    &v80,
                    (_DWORD)v65 - (_DWORD)v61,
                    v61,
                    (struct _DRAWSTREAMINFO *)v85) )
              goto LABEL_119;
            v61 = 0LL;
            v59 = 0;
            if ( v45 )
            {
              v49 = *(int *)(v45 + 36);
              if ( (int)v49 < 0 )
              {
                if ( (_DWORD)v49 == -1 )
                  FreeThreadBufferWithTag(v45);
              }
              else
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v49);
                v5 = v60;
                v46 = v62;
              }
            }
            if ( v46 )
            {
              v50 = *(int *)(v46 + 36);
              if ( (int)v50 < 0 )
              {
                if ( (_DWORD)v50 == -1 )
                  FreeThreadBufferWithTag(v46);
              }
              else
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v50);
                v5 = v60;
              }
            }
            if ( v5 )
            {
              v51 = *(int *)(v5 + 36);
              if ( (int)v51 < 0 )
              {
                if ( (_DWORD)v51 == -1 )
                  FreeThreadBufferWithTag(v5);
              }
              else
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v51);
              }
            }
            v17 = v58;
            v16 = v65;
          }
LABEL_117:
          if ( v17 < 4 )
          {
LABEL_127:
            LODWORD(v5) = 1;
            goto LABEL_121;
          }
          v7 = v66;
          v6 = v67;
          v14 = v64;
          v13 = v61;
          v12 = v59;
        }
        if ( v13 )
          goto LABEL_90;
        if ( (_DWORD)v14 == 1 )
          DEVLOCKOBJ::vDestructorNULL((DEVLOCKOBJ *)&v81);
        XDCOBJ::vUnlock((XDCOBJ *)v77);
        if ( v73 )
        {
          if ( v73 == SURFACE::pdibDefault )
          {
            DEC_SHARE_REF_CNT(v73);
          }
          else
          {
            ((void (*)(void))GreAcquireHmgrSemaphore)();
            SURFACE::vDec_cRef(v73);
            GreReleaseHmgrSemaphore();
          }
          v73 = 0LL;
        }
        v18 = 24;
        if ( v17 < 0x18 )
          goto LABEL_120;
        v38 = (HDC)(int)v16[1];
        if ( v38 != v79 )
          goto LABEL_120;
        XDCOBJ::vLock((XDCOBJ *)v77, v38);
        if ( !v77[0]
          || (*(_DWORD *)(v77[0] + 36LL) & 0x10000) != 0
          || !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v81, (struct XDCOBJ *)v77, 0) )
        {
          goto LABEL_120;
        }
        v70 = *(_DWORD *)(*(_QWORD *)(v77[0] + 80LL) + 68LL);
        v39 = *(_DWORD *)(*(_QWORD *)(v77[0] + 80LL) + 312LL) & 1;
        v71 = v39;
        if ( (*(_DWORD *)(*(_QWORD *)(v77[0] + 80LL) + 352LL) & 0xE000) != 0 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v69, (struct XDCOBJ *)v77, 0x204u, 0);
          v40 = v69;
          v39 = v71;
        }
        else
        {
          v40 = v77[0] + 336LL;
          v69 = v77[0] + 336LL;
        }
        v41 = *(_DWORD *)(v40 + 32);
        if ( (v41 & 1) == 0 )
          goto LABEL_120;
        v76 = *(struct _RECTL *)(v16 + 2);
        v89 = v76;
        if ( (v41 & 0x43) != 0x43 )
          bCvtPts1(v40, &v89, 2LL);
        left = v89.left;
        right = v89.right;
        if ( v39 )
        {
          left = v89.left + 1;
          right = v89.right + 1;
          ++v89.left;
          ++v89.right;
        }
        if ( left > right )
        {
          v89.left = right;
          v89.right = left;
        }
        top = v89.top;
        if ( v89.top > v89.bottom )
        {
          v89.top = v89.bottom;
          v89.bottom = top;
        }
        if ( (*(_DWORD *)(v77[0] + 36LL) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)v77, (struct ERECTL *)&v89);
        v6 = *(struct SURFACE **)(v77[0] + 512LL);
        v67 = v6;
        if ( !v6 )
          goto LABEL_120;
        v9 = *((_QWORD *)v6 + 15);
        v10 = *(_QWORD *)(v77[0] + 96LL);
        if ( v11 )
        {
          if ( (*(_DWORD *)(v11 + 24) & 0x2000) != 0 )
            goto LABEL_120;
        }
        v64 = 1;
        goto LABEL_86;
      }
LABEL_121:
      if ( v68 )
      {
        cEntries = (int)v68[1].cEntries;
        if ( (int)cEntries < 0 )
        {
          if ( (_DWORD)cEntries == -1 )
            FreeThreadBufferWithTag(v68);
        }
        else
        {
          _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
        }
      }
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v81);
  DCOBJ::~DCOBJ((DCOBJ *)v84);
  if ( v73 )
  {
    if ( v73 == SURFACE::pdibDefault )
    {
      DEC_SHARE_REF_CNT(v73);
    }
    else
    {
      GreAcquireHmgrSemaphore(v73, v53, v54, v55);
      SURFACE::vDec_cRef(v73);
      GreReleaseHmgrSemaphore();
    }
    v73 = 0LL;
  }
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v72);
  DCOBJ::~DCOBJ((DCOBJ *)v77);
  return (unsigned int)v5;
}
