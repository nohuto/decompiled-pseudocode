/*
 * XREFs of GreDrawStream @ 0x1C00433E0
 * Callers:
 *     NtGdiDrawStream @ 0x1C00417B0 (NtGdiDrawStream.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C00418B4 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     ??YERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C0041CE8 (--YERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     bCvtPts1 @ 0x1C0041E4C (bCvtPts1.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C01C2D7C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0268BDC (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreDrawStream(HDC a1, unsigned int a2, _DWORD *a3)
{
  __int64 v4; // rbx
  unsigned int v5; // r13d
  __int64 v6; // rdx
  struct SURFACE *v7; // r11
  struct PALETTE *v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r14
  int v12; // r9d
  unsigned int *v13; // r13
  unsigned int v14; // r10d
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // r9d
  int v18; // edx
  int v19; // eax
  signed int v20; // r8d
  signed int v21; // ecx
  int v22; // r8d
  int v23; // ecx
  int v24; // r11d
  int v25; // eax
  int v26; // r10d
  int v27; // edx
  int v28; // eax
  char *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  HDC v32; // rdx
  int v33; // esi
  unsigned __int64 v34; // rcx
  int v35; // edx
  int left; // ecx
  int right; // eax
  LONG top; // ecx
  int v39; // ecx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int16 v43; // dx
  unsigned int v45; // [rsp+64h] [rbp-9Ch]
  _QWORD v46[2]; // [rsp+68h] [rbp-98h] BYREF
  char *v47; // [rsp+78h] [rbp-88h]
  int v48; // [rsp+80h] [rbp-80h]
  __int64 v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  __int64 v51; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v52; // [rsp+A0h] [rbp-60h]
  int v53; // [rsp+A4h] [rbp-5Ch]
  __int64 v54; // [rsp+A8h] [rbp-58h]
  struct SURFACE *v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B8h] [rbp-48h] BYREF
  int v57; // [rsp+C0h] [rbp-40h]
  int v58; // [rsp+C4h] [rbp-3Ch]
  struct _XLATEOBJ *v59; // [rsp+C8h] [rbp-38h] BYREF
  struct _XLATEOBJ *v60; // [rsp+D0h] [rbp-30h]
  struct _RECTL v61; // [rsp+E0h] [rbp-20h]
  struct _RECTL v62; // [rsp+F0h] [rbp-10h]
  HDC v63; // [rsp+100h] [rbp+0h]
  struct _RECTL v64; // [rsp+110h] [rbp+10h] BYREF
  __int128 v65; // [rsp+120h] [rbp+20h] BYREF
  __int64 v66; // [rsp+130h] [rbp+30h]
  int v67; // [rsp+138h] [rbp+38h]
  __int64 v68; // [rsp+140h] [rbp+40h]
  __int64 v69; // [rsp+148h] [rbp+48h]
  __int64 v70; // [rsp+150h] [rbp+50h]
  __int64 v71; // [rsp+158h] [rbp+58h]
  __int64 v72; // [rsp+160h] [rbp+60h]
  _QWORD v73[4]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v74; // [rsp+190h] [rbp+90h]
  __int64 v75; // [rsp+198h] [rbp+98h]
  __int64 v76; // [rsp+1A0h] [rbp+A0h]
  struct _RECTL v77; // [rsp+1C0h] [rbp+C0h] BYREF

  v63 = a1;
  v46[0] = 0LL;
  v46[1] = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v56 = 0LL;
  v7 = 0LL;
  v58 = 0;
  v8 = 0LL;
  v69 = 0LL;
  v9 = 0LL;
  v54 = 0LL;
  v10 = 0LL;
  v55 = 0LL;
  v11 = 0LL;
  v60 = 0LL;
  v12 = 0;
  v59 = 0LL;
  v48 = 0;
  v47 = 0LL;
  v53 = 0;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0;
  v68 = 0LL;
  v72 = 0LL;
  v71 = 0LL;
  v70 = 0LL;
  if ( a2 >= 4 )
  {
    v13 = a3 + 1;
    if ( *a3 == 1148352339 )
    {
      v14 = a2 - 4;
      v45 = v14;
      if ( v14 >= 4 )
      {
        while ( 1 )
        {
          v15 = *v13;
          if ( !(_DWORD)v15 )
            break;
          v16 = (unsigned int)(v15 - 1);
          if ( !(_DWORD)v16 )
          {
            if ( v47 )
              goto LABEL_90;
            if ( v4 )
            {
              if ( (struct SURFACE *)v4 == SURFACE::pdibDefault )
              {
                DEC_SHARE_REF_CNT(v4);
              }
              else
              {
                GreAcquireHmgrSemaphore(v16, v6);
                SURFACE::vDec_cRef((SURFACE *)v4);
                GreReleaseHmgrSemaphore();
              }
              v12 = v53;
              v4 = 0LL;
              v14 = v45;
            }
            v52 = 8;
            if ( v14 < 8 )
              goto LABEL_105;
            if ( !v12 )
              goto LABEL_105;
            LOBYTE(v6) = 5;
            v4 = HmgShareLockCheck((int)v13[1], v6);
            if ( !v4 )
              goto LABEL_105;
            if ( (struct SURFACE *)v4 != SURFACE::pdibDefault )
            {
              GreAcquireHmgrSemaphore(v31, v30);
              INC_SHARE_REF_CNT(v4);
              ++*(_DWORD *)(v4 + 160);
              DEC_SHARE_REF_CNT(v4);
              GreReleaseHmgrSemaphore();
            }
            v11 = *(_QWORD *)(v4 + 120);
            v55 = (struct SURFACE *)v4;
            v8 = ppalDefault;
            if ( !v11
              || (*(_DWORD *)(v11 + 24) & 0x2000) != 0
              || v4 == v54
              || *(_DWORD *)(v4 + 96) != 6
              || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                  &v59,
                                  0LL,
                                  *(unsigned int *)(v46[0] + 112LL),
                                  v11,
                                  v9,
                                  ppalDefault,
                                  v10,
                                  *(_DWORD *)(*(_QWORD *)(v46[0] + 80LL) + 40LL),
                                  *(_DWORD *)(*(_QWORD *)(v46[0] + 80LL) + 32LL),
                                  0,
                                  0) )
            {
              goto LABEL_105;
            }
            v6 = v54;
            v60 = v59;
            goto LABEL_86;
          }
          if ( (_DWORD)v16 != 8 )
            goto LABEL_105;
          v52 = 60;
          if ( v14 < 0x3C )
            goto LABEL_105;
          v17 = v13[9];
          if ( (v17 & 0xFFFFFF80) != 0 )
            goto LABEL_105;
          if ( !v7 )
            goto LABEL_105;
          v18 = v13[5];
          if ( v18 < 0 )
            goto LABEL_105;
          v19 = v13[6];
          if ( v19 < 0 )
            goto LABEL_105;
          v20 = v13[7];
          if ( v20 > *((_DWORD *)v7 + 14) )
            goto LABEL_105;
          v21 = v13[8];
          if ( v21 > *((_DWORD *)v7 + 15) )
            goto LABEL_105;
          v22 = v20 - v18;
          v23 = v21 - v19;
          if ( v22 <= 0 )
            goto LABEL_105;
          if ( v23 <= 0 )
            goto LABEL_105;
          if ( (v17 & 0x20) == 0 )
          {
            v24 = v13[10];
            if ( v24 < 0 )
              goto LABEL_105;
            v25 = v13[11];
            if ( v25 < 0 )
              goto LABEL_105;
            v26 = v13[12];
            if ( v26 < 0 )
              goto LABEL_105;
            v27 = v13[13];
            if ( v27 < 0 || v24 > v22 || v25 > v22 || v26 > v23 || v27 > v23 || v24 + v25 > v22 || v27 + v26 > v23 )
              goto LABEL_105;
          }
          if ( (v17 & 0xC) == 0xC )
            goto LABEL_105;
          if ( (v17 & 8) != 0 )
          {
            v13[14] = ulGetNearestIndexFromColorref(v11, v8, v13[14], 1LL);
          }
          else
          {
            v28 = v48;
            if ( (v17 & 4) != 0 )
              v28 = 1;
            v48 = v28;
          }
          if ( v47 )
          {
            ERECTL::operator+=((unsigned int *)&v64, v13 + 1);
            v6 = v54;
LABEL_86:
            v29 = v47;
            goto LABEL_87;
          }
          v29 = (char *)v13;
          v6 = v54;
          v61 = *(struct _RECTL *)(v13 + 1);
          v64 = v61;
          v47 = (char *)v13;
LABEL_87:
          v14 = v45 - v52;
          v45 = v14;
          v13 += (unsigned __int64)v52 >> 2;
          if ( v14 )
            goto LABEL_102;
          if ( !v29 )
            goto LABEL_108;
          v7 = v55;
LABEL_90:
          if ( v46[0] && v7 )
          {
            v73[0] = 72LL;
            v50 = 0LL;
            v49 = 0LL;
            v51 = 0LL;
            v73[1] = 33488896LL;
            v73[2] = 0LL;
            if ( v48 )
            {
              v39 = *(_DWORD *)(v6 + 96);
              if ( (unsigned int)(v39 - 1) <= 1
                || v39 == 3
                || !(unsigned int)EXLATEOBJ::bInitXlateObj(&v50, 0LL, 0LL, v11, gppalRGB, v8, v8, 0, 0, 0, 0)
                || (v74 = v50,
                    !(unsigned int)EXLATEOBJ::bInitXlateObj(&v49, 0LL, 0LL, v9, gppalRGB, v10, v10, 0, 0, 0, 0))
                || (v75 = v49,
                    !(unsigned int)EXLATEOBJ::bInitXlateObj(&v51, 0LL, 0LL, gppalRGB, v9, v10, v10, 0, 0, 0, 0)) )
              {
LABEL_104:
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v51);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v49);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v50);
LABEL_105:
                v5 = 0;
                goto LABEL_106;
              }
              v7 = v55;
              v76 = v51;
            }
            else
            {
              v76 = 0LL;
              v75 = 0LL;
              v74 = 0LL;
            }
            if ( !(unsigned int)NtGdiDrawStreamInternal(
                                  (struct XDCOBJ *)v46,
                                  (struct EXFORMOBJ *)&v56,
                                  v7,
                                  v60,
                                  &v77,
                                  &v64,
                                  (int)v13 - (int)v47,
                                  v47,
                                  (struct _DRAWSTREAMINFO *)v73) )
              goto LABEL_104;
            v47 = 0LL;
            v48 = 0;
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v51);
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v49);
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v50);
            v14 = v45;
          }
LABEL_102:
          if ( v14 < 4 )
            goto LABEL_108;
          v6 = v54;
          v12 = v53;
          v7 = v55;
        }
        if ( v47 )
          goto LABEL_90;
        if ( v12 == 1 )
          DEVLOCKOBJ::vDestructorNULL((DEVLOCKOBJ *)&v65);
        if ( v46[0] )
        {
          XDCOBJ::RestoreAttributes((XDCOBJ *)v46);
          _InterlockedDecrement((volatile signed __int32 *)(v46[0] + 12LL));
          v46[0] = 0LL;
        }
        if ( v4 )
        {
          if ( (struct SURFACE *)v4 == SURFACE::pdibDefault )
          {
            DEC_SHARE_REF_CNT(v4);
          }
          else
          {
            GreAcquireHmgrSemaphore(v15, v6);
            SURFACE::vDec_cRef((SURFACE *)v4);
            GreReleaseHmgrSemaphore();
          }
          v4 = 0LL;
        }
        v52 = 24;
        if ( v45 < 0x18 )
          goto LABEL_105;
        v32 = (HDC)(int)v13[1];
        if ( v32 != v63 )
          goto LABEL_105;
        XDCOBJ::vLock((XDCOBJ *)v46, v32);
        if ( !v46[0] )
        {
          v5 = 0;
          goto LABEL_111;
        }
        if ( (*(_DWORD *)(v46[0] + 36LL) & 0x10000) != 0
          || !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v65, (struct XDCOBJ *)v46, 0) )
        {
          goto LABEL_105;
        }
        v57 = *(_DWORD *)(*(_QWORD *)(v46[0] + 80LL) + 68LL);
        v33 = *(_DWORD *)(*(_QWORD *)(v46[0] + 80LL) + 312LL) & 1;
        v58 = v33;
        if ( (*(_DWORD *)(*(_QWORD *)(v46[0] + 80LL) + 352LL) & 0xE000) != 0 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v56, (struct XDCOBJ *)v46, 0x204u, 0);
          v34 = v56;
          v33 = v58;
        }
        else
        {
          v34 = v46[0] + 336LL;
          v56 = v46[0] + 336LL;
        }
        v35 = *(_DWORD *)(v34 + 32);
        if ( (v35 & 1) == 0 )
          goto LABEL_105;
        v62 = *(struct _RECTL *)(v13 + 2);
        v77 = v62;
        if ( (v35 & 0x43) != 0x43 )
          bCvtPts1(v34, &v77, 2LL);
        left = v77.left;
        right = v77.right;
        if ( v33 )
        {
          left = v77.left + 1;
          right = v77.right + 1;
          ++v77.left;
          ++v77.right;
        }
        if ( left > right )
        {
          v77.left = right;
          v77.right = left;
        }
        top = v77.top;
        if ( v77.top > v77.bottom )
        {
          v77.top = v77.bottom;
          v77.bottom = top;
        }
        if ( (*(_DWORD *)(v46[0] + 36LL) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)v46, (struct ERECTL *)&v77);
        v6 = *(_QWORD *)(v46[0] + 512LL);
        v54 = v6;
        if ( !v6 )
          goto LABEL_105;
        v9 = *(_QWORD *)(v6 + 120);
        v10 = *(_QWORD *)(v46[0] + 96LL);
        if ( v11 )
        {
          if ( (*(_DWORD *)(v11 + 24) & 0x2000) != 0 )
            goto LABEL_105;
        }
        v53 = 1;
        goto LABEL_86;
      }
LABEL_108:
      v5 = 1;
LABEL_106:
      if ( v46[0] )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)v46);
        _InterlockedDecrement((volatile signed __int32 *)(v46[0] + 12LL));
        v46[0] = 0LL;
      }
    }
    else
    {
      v5 = 0;
    }
  }
LABEL_111:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v59);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v65);
  if ( v4 )
  {
    if ( (struct SURFACE *)v4 == SURFACE::pdibDefault )
    {
      DEC_SHARE_REF_CNT(v4);
    }
    else
    {
      GreAcquireHmgrSemaphore(v41, v40);
      DEC_SHARE_REF_CNT(v4);
      if ( (*(_DWORD *)(v4 + 160))-- == 1 )
      {
        if ( (*(_QWORD *)v4 & 0x800000LL) != 0 )
        {
          v43 = *(_WORD *)(v4 + 102);
          if ( (v43 & 0x400) != 0 )
          {
            *(_WORD *)(v4 + 102) = v43 & 0xFBFF;
            GreMakeBitmapNonStock();
          }
        }
        *(_QWORD *)(v4 + 152) = 0LL;
      }
      GreReleaseHmgrSemaphore();
    }
  }
  return v5;
}
