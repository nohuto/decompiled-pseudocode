/*
 * XREFs of GreDrawStream @ 0x1C0039BA8
 * Callers:
 *     NtGdiDrawStream @ 0x1C003AA20 (NtGdiDrawStream.c)
 * Callees:
 *     ??YERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C00355B8 (--YERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00356B4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0036DD8 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C003A79C (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 *     ?vLock@SURFREFDC@@QEAAXPEAUHSURF__@@@Z @ 0x1C003A96C (-vLock@SURFREFDC@@QEAAXPEAUHSURF__@@@Z.c)
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x1C003A9D0 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C003BEC0 (bCvtPts1.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C004BFB0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C025B528 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0266F38 (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0SURFREFDC@@QEAA@XZ @ 0x1C027DF64 (--0SURFREFDC@@QEAA@XZ.c)
 */

__int64 __fastcall GreDrawStream(HDC a1, unsigned int a2, int *a3)
{
  unsigned int v4; // r12d
  struct PALETTE *v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi
  int v9; // eax
  _DWORD *v10; // r13
  unsigned int v11; // edx
  unsigned int v12; // r10d
  int v13; // r11d
  int v14; // r8d
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // r10d
  int v21; // eax
  int v22; // r9d
  int v23; // r8d
  int v24; // eax
  char *v25; // rcx
  __int64 v26; // rdx
  HDC v27; // rdx
  int v28; // edx
  __int64 v29; // rax
  int v30; // ecx
  unsigned int v33; // [rsp+68h] [rbp-A0h]
  __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  __int64 v35; // [rsp+78h] [rbp-90h]
  char *v36; // [rsp+80h] [rbp-88h]
  __int64 v37; // [rsp+88h] [rbp-80h] BYREF
  __int64 v38; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v39; // [rsp+98h] [rbp-70h]
  struct SURFACE *v40; // [rsp+A0h] [rbp-68h]
  __int64 v41; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-58h]
  struct _XLATEOBJ *v43; // [rsp+B8h] [rbp-50h] BYREF
  struct _XLATEOBJ *v44; // [rsp+C0h] [rbp-48h]
  __int64 v45; // [rsp+C8h] [rbp-40h] BYREF
  int v46; // [rsp+D4h] [rbp-34h]
  struct _RECTL v47; // [rsp+D8h] [rbp-30h]
  struct _RECTL v48; // [rsp+E8h] [rbp-20h]
  DC *v49[6]; // [rsp+F8h] [rbp-10h] BYREF
  HDC v50; // [rsp+128h] [rbp+20h]
  struct _RECTL v51; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v52[32]; // [rsp+148h] [rbp+40h] BYREF
  struct SURFACE *v53; // [rsp+168h] [rbp+60h]
  __int128 v54; // [rsp+178h] [rbp+70h] BYREF
  __int64 v55; // [rsp+188h] [rbp+80h]
  int v56; // [rsp+190h] [rbp+88h]
  _BYTE v57[48]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v58; // [rsp+1C8h] [rbp+C0h]
  __int64 v59; // [rsp+1D0h] [rbp+C8h]
  __int64 v60; // [rsp+1D8h] [rbp+D0h]
  _QWORD v61[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v62; // [rsp+208h] [rbp+100h]
  __int64 v63; // [rsp+210h] [rbp+108h]
  __int64 v64; // [rsp+218h] [rbp+110h]
  struct _RECTL v65; // [rsp+238h] [rbp+130h] BYREF

  v50 = a1;
  DCOBJ::DCOBJ((DCOBJ *)v49);
  SURFREFDC::SURFREFDC((SURFREFDC *)v52);
  v4 = 0;
  v45 = 0LL;
  v46 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v57);
  v55 = 0LL;
  v54 = 0LL;
  v56 = 0;
  DEVLOCKOBJ_bPrepareTrgDcoWrap((DEVLOCKOBJ *)&v54);
  v60 = 0LL;
  v59 = 0LL;
  v58 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v54 = 0LL;
  v7 = 0LL;
  v55 = 0LL;
  v8 = 0LL;
  v56 = 0;
  v42 = 0LL;
  v40 = 0LL;
  v44 = 0LL;
  v41 = 0LL;
  v43 = 0LL;
  LODWORD(v35) = 0;
  v36 = 0LL;
  v39 = 0;
  DEVLOCKOBJ_bPrepareTrgDcoWrap((DEVLOCKOBJ *)&v54);
  v60 = 0LL;
  v59 = 0LL;
  v58 = 0LL;
  if ( a2 >= 4 )
  {
    v9 = *a3;
    v10 = a3 + 1;
    if ( v9 == 1148352339 )
    {
      v11 = a2 - 4;
      v33 = a2 - 4;
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = 1;
          if ( v11 < 4 )
          {
LABEL_83:
            v4 = v12;
            goto LABEL_84;
          }
          if ( *v10 )
            break;
          if ( !v36 )
          {
            if ( v39 == 1 )
              DEVLOCKOBJ::vDestructorNULL((DEVLOCKOBJ *)&v54);
            XDCOBJ::vUnlock((XDCOBJ *)v49);
            SURFREFDC::vUnlock((SURFREFDC *)v52);
            LODWORD(v34) = 24;
            if ( v33 < 0x18 )
              goto LABEL_84;
            v27 = (HDC)(int)v10[1];
            if ( v27 != v50 )
              goto LABEL_84;
            XDCOBJ::vLock((XDCOBJ *)v49, v27);
            if ( !v49[0] )
              goto LABEL_84;
            if ( (*((_DWORD *)v49[0] + 9) & 0x10000) != 0 )
              goto LABEL_84;
            if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v54, (struct XDCOBJ *)v49, 0) )
              goto LABEL_84;
            EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v45, (struct XDCOBJ *)v49, 0x204u);
            v28 = *(_DWORD *)(v45 + 32);
            if ( (v28 & 1) == 0 )
              goto LABEL_84;
            v48 = *(struct _RECTL *)(v10 + 2);
            v65 = v48;
            if ( (v28 & 0x43) != 0x43 )
              bCvtPts1(v45, &v65, 2LL);
            if ( v46 )
            {
              ++v65.left;
              ++v65.right;
            }
            ERECTL::vOrder((ERECTL *)&v65);
            if ( (*((_DWORD *)v49[0] + 9) & 0xE0) != 0 )
              XDCOBJ::vAccumulate((XDCOBJ *)v49, (struct ERECTL *)&v65);
            v29 = *((_QWORD *)v49[0] + 64);
            v42 = v29;
            if ( !v29 )
              goto LABEL_84;
            v6 = *(_QWORD *)(v29 + 120);
            v7 = *((_QWORD *)v49[0] + 12);
            if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v41) )
              goto LABEL_84;
            v39 = v12;
            goto LABEL_67;
          }
LABEL_70:
          if ( v49[0] && v40 )
          {
            v38 = 0LL;
            v37 = 0LL;
            v34 = 0LL;
            v61[0] = 72LL;
            v61[1] = 33488896LL;
            v61[2] = 0LL;
            if ( (_DWORD)v35 )
            {
              v30 = *(_DWORD *)(v42 + 96);
              if ( v30 - 1 <= v12
                || v30 == 3
                || !(unsigned int)EXLATEOBJ::bInitXlateObj(&v38, 0LL, 0LL, v8, gppalRGB, v5, v5, 0, 0, 0, 0)
                || (v62 = v38, !(unsigned int)EXLATEOBJ::bInitXlateObj(&v37, 0LL, 0LL, v6, gppalRGB, v7, v7, 0, 0, 0, 0))
                || (v63 = v37, !(unsigned int)EXLATEOBJ::bInitXlateObj(&v34, 0LL, 0LL, gppalRGB, v6, v7, v7, 0, 0, 0, 0)) )
              {
LABEL_82:
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v34);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v37);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v38);
                goto LABEL_84;
              }
              v64 = v34;
            }
            else
            {
              v64 = 0LL;
              v63 = 0LL;
              v62 = 0LL;
            }
            if ( !(unsigned int)NtGdiDrawStreamInternal(
                                  v49,
                                  (struct EXFORMOBJ *)&v45,
                                  v40,
                                  v44,
                                  &v65,
                                  &v51,
                                  (int)v10 - (int)v36,
                                  v36,
                                  (struct _DRAWSTREAMINFO *)v61) )
              goto LABEL_82;
            v36 = 0LL;
            LODWORD(v35) = 0;
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v34);
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v37);
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v38);
            v11 = v33;
          }
        }
        if ( *v10 == 1 )
        {
          if ( !v36 )
          {
            SURFREFDC::vUnlock((SURFREFDC *)v52);
            LODWORD(v34) = 8;
            if ( v33 < 8 )
              break;
            if ( !v39 )
              break;
            SURFREFDC::vLock((SURFREFDC *)v52, (HSURF)(int)v10[1]);
            v40 = v53;
            if ( !v53 )
              break;
            v8 = *((_QWORD *)v53 + 15);
            v41 = v8;
            v5 = ppalDefault;
            if ( !v8
              || (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v41)
              || v26 == v42
              || *(_DWORD *)(v26 + 96) != 6
              || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                  &v43,
                                  0LL,
                                  *((unsigned int *)v49[0] + 28),
                                  v8,
                                  v6,
                                  ppalDefault,
                                  v7,
                                  *(_DWORD *)(*((_QWORD *)v49[0] + 10) + 40LL),
                                  *(_DWORD *)(*((_QWORD *)v49[0] + 10) + 32LL),
                                  0,
                                  0) )
            {
              break;
            }
            v44 = v43;
LABEL_38:
            v12 = 1;
LABEL_67:
            v25 = v36;
            goto LABEL_68;
          }
          goto LABEL_70;
        }
        if ( *v10 != 9 )
          break;
        LODWORD(v34) = 60;
        if ( v11 < 0x3C )
          break;
        v13 = v10[9];
        if ( (v13 & 0xFFFFFF80) != 0 )
          break;
        if ( !v40 )
          break;
        v14 = v10[5];
        if ( v14 < 0 )
          break;
        v15 = v10[6];
        if ( v15 < 0 )
          break;
        v16 = v10[7];
        if ( v16 > *((_DWORD *)v40 + 14) )
          break;
        v17 = v10[8];
        if ( v17 > *((_DWORD *)v40 + 15) )
          break;
        v18 = v16 - v14;
        v19 = v17 - v15;
        if ( v18 <= 0 || v19 <= 0 )
          break;
        if ( (v13 & 0x20) == 0 )
        {
          v20 = v10[10];
          if ( v20 < 0 )
            break;
          v21 = v10[11];
          if ( v21 < 0 )
            break;
          v22 = v10[12];
          if ( v22 < 0 )
            break;
          v23 = v10[13];
          if ( v23 < 0 || v20 > v18 || v21 > v18 || v22 > v19 || v23 > v19 || v20 + v21 > v18 || v23 + v22 > v19 )
            break;
          v12 = 1;
        }
        if ( (v13 & 0xC) == 0xC )
          break;
        if ( (v13 & 8) != 0 )
        {
          v10[14] = ulGetNearestIndexFromColorref(v8, v5, (unsigned int)v10[14], 1LL);
          v12 = 1;
        }
        else
        {
          v24 = v35;
          if ( (v13 & 4) != 0 )
            v24 = 1;
          LODWORD(v35) = v24;
        }
        if ( v36 )
        {
          ERECTL::operator+=((unsigned int *)&v51, v10 + 1);
          goto LABEL_38;
        }
        v25 = (char *)v10;
        v47 = *(struct _RECTL *)(v10 + 1);
        v51 = v47;
        v36 = (char *)v10;
LABEL_68:
        v11 = v33 - v34;
        v33 = v11;
        v10 += (unsigned __int64)(unsigned int)v34 >> 2;
        if ( !v11 )
        {
          if ( !v25 )
            goto LABEL_83;
          goto LABEL_70;
        }
      }
    }
  }
LABEL_84:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v43);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v54);
  DCOBJ::~DCOBJ((DCOBJ *)v57);
  SURFREFDC::vUnlock((SURFREFDC *)v52);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v52);
  DCOBJ::~DCOBJ((DCOBJ *)v49);
  return v4;
}
