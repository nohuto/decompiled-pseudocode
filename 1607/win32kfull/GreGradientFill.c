/*
 * XREFs of GreGradientFill @ 0x1C005FD04
 * Callers:
 *     NtGdiGradientFill @ 0x1C005FAF0 (NtGdiGradientFill.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C022F1CC (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C003955C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00460FC (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00469F0 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0046AA0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0049004 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x1C00602EC (-bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreGradientFill(
        HDC a1,
        struct _TRIVERTEX *a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        unsigned __int8 a6)
{
  unsigned int v7; // edi
  __int64 v8; // r12
  struct _TRIVERTEX *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // r15d
  unsigned int v15; // eax
  unsigned __int64 v16; // rbx
  unsigned int v17; // eax
  ULONG v18; // ecx
  char *v19; // rax
  unsigned int v20; // r8d
  char *v21; // rdx
  signed __int64 v22; // rcx
  __int64 v23; // r9
  unsigned int *v24; // rax
  __int64 v25; // r10
  unsigned int v26; // ebx
  __int64 v27; // r10
  __int64 v28; // r9
  __int64 v29; // r11
  COLOR16 Alpha; // ax
  __int64 v31; // r9
  LONG x; // r10d
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  struct DC *v38; // r8
  __int64 v39; // r9
  struct _POINTL *v40; // rbx
  __int64 v41; // rsi
  struct EPOINTL *v42; // rax
  int v43; // edx
  struct EPOINTL *v44; // rax
  struct ECLIPOBJ *v45; // rdx
  int inited; // esi
  struct DC *v47; // r8
  __int64 v48; // r9
  struct REGION *v49; // rax
  DC *v50; // r15
  struct ECLIPOBJ *v51; // rdx
  __int64 v52; // r15
  __int64 v53; // rbx
  __int64 v54; // r8
  BOOL (__stdcall *v55)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rax
  unsigned int v57; // [rsp+60h] [rbp-A0h]
  unsigned int v58; // [rsp+60h] [rbp-A0h]
  struct _POINTL v59[2]; // [rsp+70h] [rbp-90h] BYREF
  void *v60; // [rsp+80h] [rbp-80h]
  unsigned int v61; // [rsp+88h] [rbp-78h]
  int v62; // [rsp+8Ch] [rbp-74h]
  __int64 v63; // [rsp+90h] [rbp-70h] BYREF
  DC *v64[6]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v65[3]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v66[288]; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL si128; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v68[4]; // [rsp+210h] [rbp+110h] BYREF
  char v69[156]; // [rsp+214h] [rbp+114h] BYREF

  v60 = a4;
  v7 = 0;
  v8 = a3;
  v57 = a6;
  v9 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v64, a1);
  if ( !v64[0] || (*((_DWORD *)v64[0] + 9) & 0x10000) != 0 )
  {
    inited = 0;
    goto LABEL_54;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v66);
  if ( (unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v66, (struct XDCOBJ *)v64) )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v65, (struct XDCOBJ *)v64, 0x204u);
    if ( (*(_DWORD *)(v65[0] + 32LL) & 1) == 0 && a6 <= 1u )
    {
      v12 = 2LL * a5;
      if ( v12 > 0xFFFFFFFF
        || (v13 = 12LL * (unsigned int)v12, v13 > 0xFFFFFFFF)
        || (v14 = 2 * a5, v15 = v8 + 2 * a5, v62 = 2 * a5, v15 < 2 * a5)
        || (v16 = 16LL * v15, v16 > 0xFFFFFFFF)
        || (v17 = v16 + v13, (int)v16 + (int)v13 < (unsigned int)v13) )
      {
        v18 = 534;
      }
      else
      {
        if ( v17 <= 0x2710000 )
        {
          v19 = (char *)PALLOCMEM2(v17);
          v9 = (struct _TRIVERTEX *)v19;
          if ( v19 )
          {
            v20 = 0;
            v21 = &v19[(unsigned int)v16];
            if ( (_DWORD)v8 )
            {
              v20 = v8;
              v22 = (char *)a2 - v19;
              v23 = v8;
              do
              {
                *(_OWORD *)v19 = *(_OWORD *)&v19[v22];
                v19 += 16;
                --v23;
              }
              while ( v23 );
            }
            v58 = 0;
            if ( a5 )
            {
              v24 = (unsigned int *)v60;
              v61 = 0;
              while ( 1 )
              {
                v25 = *v24;
                v26 = v24[1];
                LODWORD(v63) = v25;
                if ( (unsigned int)v25 >= (unsigned int)v8 || v26 >= (unsigned int)v8 )
                  break;
                v27 = v25;
                v28 = v20;
                v9[v28].x = a2[v26].x;
                v9[v28].y = a2[v27].y;
                v29 = v20 + 1;
                v59[0].x = v20 + 1;
                v9[v29].x = a2[v27].x;
                v9[v29].y = a2[v26].y;
                if ( a6 == 1 )
                {
                  v9[v20].Red = a2[v27].Red;
                  v9[v20].Green = a2[v27].Green;
                  v9[v20].Blue = a2[v27].Blue;
                  v9[v20].Alpha = a2[v27].Alpha;
                  v9[v20 + 1].Red = a2[v26].Red;
                  v9[v20 + 1].Green = a2[v26].Green;
                  v9[v20 + 1].Blue = a2[v26].Blue;
                  Alpha = a2[v26].Alpha;
                }
                else
                {
                  v9[v20].Red = a2[v26].Red;
                  v9[v20].Green = a2[v26].Green;
                  v9[v20].Blue = a2[v26].Blue;
                  v9[v20].Alpha = a2[v26].Alpha;
                  v9[v20 + 1].Red = a2[v27].Red;
                  v9[v20 + 1].Green = a2[v27].Green;
                  v9[v20 + 1].Blue = a2[v27].Blue;
                  Alpha = a2[v27].Alpha;
                }
                v31 = v61;
                x = v59[0].x;
                v9[v20 + 1].Alpha = Alpha;
                v33 = 3 * v31;
                *(_DWORD *)&v21[4 * v33] = v63;
                *(_DWORD *)&v21[4 * v33 + 4] = v20;
                v34 = 3LL * (unsigned int)(v31 + 1);
                *(_DWORD *)&v21[4 * v33 + 8] = x;
                *(_DWORD *)&v21[4 * v34 + 4] = v20;
                *(_DWORD *)&v21[4 * v34] = v26;
                v20 += 2;
                *(_DWORD *)&v21[4 * v34 + 8] = x;
                v24 = (unsigned int *)((char *)v60 + 8);
                ++v58;
                v61 = v31 + 2;
                v60 = (char *)v60 + 8;
                if ( v58 >= a5 )
                  goto LABEL_25;
              }
              EngSetLastError(0x57u);
              Win32FreePool(v9, v35, v36);
              goto LABEL_29;
            }
LABEL_25:
            v60 = v21;
            a2 = v9;
            v57 = 2;
            LODWORD(v8) = v20;
            goto LABEL_31;
          }
        }
        v18 = 8;
      }
      EngSetLastError(v18);
LABEL_29:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v66, v37, v38, v39);
      goto LABEL_57;
    }
    v14 = a5;
    v62 = a5;
LABEL_31:
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
    if ( (_DWORD)v8 )
    {
      v40 = (struct _POINTL *)a2;
      v41 = (unsigned int)v8;
      do
      {
        v59[0] = *v40;
        EXFORMOBJ::bXform((EXFORMOBJ *)v65, v59, 1LL);
        v42 = DC::eptlOrigin(v64[0]);
        v40->x = v43 + *(_DWORD *)v42;
        v44 = DC::eptlOrigin(v64[0]);
        v40->y = v59[0].y + *((_DWORD *)v44 + 1);
        v40 += 2;
        --v41;
      }
      while ( v41 );
    }
    inited = bCalcMeshExtent(a2, v8, v60, v14, v57, &si128);
    if ( inited )
    {
      v49 = XDCOBJ::prgnEffRao((XDCOBJ *)v64);
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v68, v49, (struct ERECTL *)&si128, 0);
      if ( ERECTL::bEmpty((ERECTL *)v69) )
        goto LABEL_50;
      v50 = v64[0];
      if ( (*((_DWORD *)v64[0] + 9) & 0xE0) != 0 )
      {
        *(struct _RECTL *)&v59[0].x = si128;
        XDCOBJ::vAccumulate(v64, v45, (__m128i *)v59);
        XDCOBJ::vAccumulateTight((struct _RECTL **)v64, v51, (struct _RECTL *)v59);
        v50 = v64[0];
      }
      v52 = *((_QWORD *)v50 + 64);
      if ( !v52 )
      {
LABEL_50:
        inited = 1;
      }
      else
      {
        ++*(_DWORD *)(v52 + 92);
        v53 = *(_QWORD *)(v52 + 48);
        v63 = 0LL;
        if ( (*(_DWORD *)(v53 + 56) & 0x80u) != 0 || *(_DWORD *)(v52 + 96) <= 3u )
          inited = EXLATEOBJ::bInitXlateObj(
                     &v63,
                     *(_QWORD *)(*((_QWORD *)v64[0] + 10) + 112LL),
                     *((_DWORD *)v64[0] + 28),
                     (__int64)gppalRGB,
                     *(_QWORD *)(v52 + 120),
                     *((_QWORD *)v64[0] + 12),
                     *((_QWORD *)v64[0] + 12),
                     *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 40LL),
                     *(_DWORD *)(*((_QWORD *)v64[0] + 10) + 32LL),
                     0,
                     0);
        v59[0] = *(struct _POINTL *)DC::eptlOrigin(v64[0]);
        v59[0].x = -v59[0].x;
        v59[0].y = -v59[0].y;
        if ( *(_DWORD *)(v52 + 96) == 3 || (*(_DWORD *)(v52 + 112) & 0x20000) == 0 )
          v55 = EngGradientFill;
        else
          v55 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(v53 + 3256);
        if ( !inited
          || (inited = 1,
              !((unsigned int (__fastcall *)(__int64, _BYTE *, __int64, struct _TRIVERTEX *, _DWORD, void *, int, struct _RECTL *, struct _POINTL *, unsigned int))v55)(
                 v52 + 24,
                 v68,
                 v54,
                 a2,
                 v8,
                 v60,
                 v62,
                 &si128,
                 v59,
                 v57)) )
        {
          inited = 0;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v63);
      }
    }
    goto LABEL_52;
  }
  inited = XDCOBJ::bFullScreen((XDCOBJ *)v64);
LABEL_52:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v66, (__int64)v45, v47, v48);
LABEL_54:
  if ( v9 )
    Win32FreePool(v9, v10, v11);
  v7 = inited;
LABEL_57:
  DCOBJ::~DCOBJ((DCOBJ *)v64);
  return v7;
}
