/*
 * XREFs of GreGradientFill @ 0x1C0033608
 * Callers:
 *     NtGdiGradientFill @ 0x1C0033DB0 (NtGdiGradientFill.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C02366CC (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 * Callees:
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016DE0 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016E90 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00182A4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019A54 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019CD4 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0021638 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0032CFC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x1C0033BF0 (-bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
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
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned int v12; // r15d
  unsigned int v13; // eax
  unsigned __int64 v14; // rbx
  unsigned int v15; // eax
  ULONG v16; // ecx
  char *v17; // rax
  unsigned int v18; // r8d
  char *v19; // rdx
  signed __int64 v20; // rcx
  __int64 v21; // r9
  unsigned int *v22; // rax
  __int64 v23; // r10
  unsigned int v24; // ebx
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // r11
  COLOR16 Alpha; // ax
  __int64 v29; // r9
  LONG x; // r10d
  __int64 v31; // rcx
  __int64 v32; // rax
  struct _POINTL *v33; // rbx
  __int64 v34; // rsi
  struct EPOINTL *v35; // rax
  int v36; // edx
  struct EPOINTL *v37; // rax
  int inited; // esi
  struct REGION *v39; // rax
  struct ECLIPOBJ *v40; // rdx
  DC *v41; // r15
  struct ECLIPOBJ *v42; // rdx
  __int64 v43; // r15
  __int64 v44; // rbx
  __int64 v45; // r8
  BOOL (__stdcall *v46)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rax
  unsigned int v48; // [rsp+60h] [rbp-A0h]
  unsigned int v49; // [rsp+60h] [rbp-A0h]
  struct _POINTL v50[2]; // [rsp+70h] [rbp-90h] BYREF
  void *v51; // [rsp+80h] [rbp-80h]
  int v52; // [rsp+88h] [rbp-78h]
  __int64 v53; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v54; // [rsp+98h] [rbp-68h]
  DC *v55[6]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v56[2]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v57[288]; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL si128; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v59[4]; // [rsp+210h] [rbp+110h] BYREF
  char v60[156]; // [rsp+214h] [rbp+114h] BYREF

  v51 = a4;
  v7 = 0;
  v8 = a3;
  v48 = a6;
  v9 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v55, a1);
  if ( !v55[0] || (*((_DWORD *)v55[0] + 9) & 0x10000) != 0 )
  {
    inited = 0;
    goto LABEL_54;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v57);
  if ( (unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v57, v55) )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v56, (struct XDCOBJ *)v55, 0x204u);
    if ( (*(_DWORD *)(v56[0] + 32LL) & 1) == 0 && a6 <= 1u )
    {
      v10 = 2LL * a5;
      if ( v10 > 0xFFFFFFFF
        || (v11 = 12LL * (unsigned int)v10, v11 > 0xFFFFFFFF)
        || (v12 = 2 * a5, v13 = v8 + 2 * a5, v52 = 2 * a5, v13 < 2 * a5)
        || (v14 = 16LL * v13, v14 > 0xFFFFFFFF)
        || (v15 = v14 + v11, (int)v14 + (int)v11 < (unsigned int)v11) )
      {
        v16 = 534;
      }
      else
      {
        if ( v15 <= 0x2710000 )
        {
          v17 = (char *)PALLOCMEM2(v15);
          v9 = (struct _TRIVERTEX *)v17;
          if ( v17 )
          {
            v18 = 0;
            v19 = &v17[(unsigned int)v14];
            if ( (_DWORD)v8 )
            {
              v18 = v8;
              v20 = (char *)a2 - v17;
              v21 = v8;
              do
              {
                *(_OWORD *)v17 = *(_OWORD *)&v17[v20];
                v17 += 16;
                --v21;
              }
              while ( v21 );
            }
            v49 = 0;
            if ( a5 )
            {
              v22 = (unsigned int *)v51;
              v54 = 0;
              while ( 1 )
              {
                v23 = *v22;
                v24 = v22[1];
                LODWORD(v53) = v23;
                if ( (unsigned int)v23 >= (unsigned int)v8 || v24 >= (unsigned int)v8 )
                  break;
                v25 = v23;
                v26 = v18;
                v9[v26].x = a2[v24].x;
                v9[v26].y = a2[v25].y;
                v27 = v18 + 1;
                v50[0].x = v18 + 1;
                v9[v27].x = a2[v25].x;
                v9[v27].y = a2[v24].y;
                if ( a6 == 1 )
                {
                  v9[v18].Red = a2[v25].Red;
                  v9[v18].Green = a2[v25].Green;
                  v9[v18].Blue = a2[v25].Blue;
                  v9[v18].Alpha = a2[v25].Alpha;
                  v9[v18 + 1].Red = a2[v24].Red;
                  v9[v18 + 1].Green = a2[v24].Green;
                  v9[v18 + 1].Blue = a2[v24].Blue;
                  Alpha = a2[v24].Alpha;
                }
                else
                {
                  v9[v18].Red = a2[v24].Red;
                  v9[v18].Green = a2[v24].Green;
                  v9[v18].Blue = a2[v24].Blue;
                  v9[v18].Alpha = a2[v24].Alpha;
                  v9[v18 + 1].Red = a2[v25].Red;
                  v9[v18 + 1].Green = a2[v25].Green;
                  v9[v18 + 1].Blue = a2[v25].Blue;
                  Alpha = a2[v25].Alpha;
                }
                v29 = v54;
                x = v50[0].x;
                v9[v18 + 1].Alpha = Alpha;
                v31 = 3 * v29;
                *(_DWORD *)&v19[4 * v31] = v53;
                *(_DWORD *)&v19[4 * v31 + 4] = v18;
                v32 = 3LL * (unsigned int)(v29 + 1);
                *(_DWORD *)&v19[4 * v31 + 8] = x;
                *(_DWORD *)&v19[4 * v32 + 4] = v18;
                *(_DWORD *)&v19[4 * v32] = v24;
                v18 += 2;
                *(_DWORD *)&v19[4 * v32 + 8] = x;
                v22 = (unsigned int *)((char *)v51 + 8);
                ++v49;
                v54 = v29 + 2;
                v51 = (char *)v51 + 8;
                if ( v49 >= a5 )
                  goto LABEL_25;
              }
              EngSetLastError(0x57u);
              Win32FreePool(v9);
              goto LABEL_29;
            }
LABEL_25:
            v51 = v19;
            a2 = v9;
            v48 = 2;
            LODWORD(v8) = v18;
            goto LABEL_31;
          }
        }
        v16 = 8;
      }
      EngSetLastError(v16);
LABEL_29:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v57);
      goto LABEL_57;
    }
    v12 = a5;
    v52 = a5;
LABEL_31:
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
    if ( (_DWORD)v8 )
    {
      v33 = (struct _POINTL *)a2;
      v34 = (unsigned int)v8;
      do
      {
        v50[0] = *v33;
        EXFORMOBJ::bXform((EXFORMOBJ *)v56, v50, 1LL);
        v35 = DC::eptlOrigin(v55[0]);
        v33->x = v36 + *(_DWORD *)v35;
        v37 = DC::eptlOrigin(v55[0]);
        v33->y = v50[0].y + *((_DWORD *)v37 + 1);
        v33 += 2;
        --v34;
      }
      while ( v34 );
    }
    inited = bCalcMeshExtent(a2, v8, v51, v12, v48, &si128);
    if ( inited )
    {
      v39 = XDCOBJ::prgnEffRao((XDCOBJ *)v55);
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v59, v39, (struct ERECTL *)&si128, 0);
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v60) )
        goto LABEL_50;
      v41 = v55[0];
      if ( (*((_DWORD *)v55[0] + 9) & 0xE0) != 0 )
      {
        *(struct _RECTL *)&v50[0].x = si128;
        XDCOBJ::vAccumulate(v55, v40, (__m128i *)v50);
        XDCOBJ::vAccumulateTight((XDCOBJ *)v55, v42, (struct _RECTL *)v50);
        v41 = v55[0];
      }
      v43 = *((_QWORD *)v41 + 64);
      if ( !v43 )
      {
LABEL_50:
        inited = 1;
      }
      else
      {
        ++*(_DWORD *)(v43 + 92);
        v44 = *(_QWORD *)(v43 + 48);
        v53 = 0LL;
        if ( (*(_DWORD *)(v44 + 56) & 0x80u) != 0 || *(_DWORD *)(v43 + 96) <= 3u )
          inited = EXLATEOBJ::bInitXlateObj(
                     &v53,
                     *(void **)(*((_QWORD *)v55[0] + 10) + 112LL),
                     *((_DWORD *)v55[0] + 28),
                     (__int64)gppalRGB,
                     *(_QWORD *)(v43 + 120),
                     *((_QWORD *)v55[0] + 12),
                     *((_QWORD *)v55[0] + 12),
                     *(_DWORD *)(*((_QWORD *)v55[0] + 10) + 40LL),
                     *(_DWORD *)(*((_QWORD *)v55[0] + 10) + 32LL),
                     0,
                     0);
        v50[0] = *(struct _POINTL *)DC::eptlOrigin(v55[0]);
        v50[0].x = -v50[0].x;
        v50[0].y = -v50[0].y;
        if ( *(_DWORD *)(v43 + 96) == 3 || (*(_DWORD *)(v43 + 112) & 0x20000) == 0 )
          v46 = EngGradientFill;
        else
          v46 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(v44 + 3264);
        if ( !inited
          || (inited = 1,
              !((unsigned int (__fastcall *)(__int64, _BYTE *, __int64, struct _TRIVERTEX *, _DWORD, void *, int, struct _RECTL *, struct _POINTL *, unsigned int))v46)(
                 v43 + 24,
                 v59,
                 v45,
                 a2,
                 v8,
                 v51,
                 v52,
                 &si128,
                 v50,
                 v48)) )
        {
          inited = 0;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v53);
      }
    }
    goto LABEL_52;
  }
  inited = XDCOBJ::bFullScreen((XDCOBJ *)v55);
LABEL_52:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v57);
LABEL_54:
  if ( v9 )
    Win32FreePool(v9);
  v7 = inited;
LABEL_57:
  DCOBJ::~DCOBJ((DCOBJ *)v55);
  return v7;
}
