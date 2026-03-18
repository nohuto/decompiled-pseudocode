/*
 * XREFs of GreGradientFill @ 0x1C0019264
 * Callers:
 *     NtGdiGradientFill @ 0x1C0019050 (NtGdiGradientFill.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x1C0236ADC (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 * Callees:
 *     ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x1C00198B4 (-bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0019C8C (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002D820 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C002DCB4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002E8D8 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002E950 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002FE9C (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C013C228 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall GreGradientFill(
        HDC a1,
        struct _TRIVERTEX *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned __int8 a6)
{
  unsigned int v7; // edi
  __int64 v8; // r12
  unsigned int *v9; // rsi
  struct _TRIVERTEX *v10; // r14
  int inited; // esi
  int v13; // r8d
  unsigned int v14; // r15d
  struct _POINTL *v15; // rbx
  __int64 v16; // rsi
  struct EPOINTL *v17; // rax
  int v18; // edx
  struct EPOINTL *v19; // rax
  struct REGION *v20; // rax
  struct ECLIPOBJ *v21; // rdx
  DC *v22; // r15
  __int64 v23; // r15
  __int64 v24; // rbx
  __int64 v25; // r8
  BOOL (__stdcall *v26)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rax
  struct ECLIPOBJ *v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned int v30; // eax
  unsigned __int64 v31; // rbx
  unsigned int v32; // eax
  struct _TRIVERTEX *v33; // rax
  unsigned int v34; // r8d
  char *v35; // rdx
  char *v36; // rcx
  __int64 v37; // r9
  unsigned int *v38; // rax
  __int64 v39; // r10
  unsigned int v40; // ebx
  __int64 v41; // r10
  __int64 v42; // r9
  __int64 v43; // r11
  COLOR16 Alpha; // ax
  ULONG v45; // ecx
  __int64 v46; // r9
  LONG x; // r10d
  __int64 v48; // rcx
  __int64 v49; // rax
  unsigned int v50; // [rsp+60h] [rbp-A0h]
  unsigned int v51; // [rsp+60h] [rbp-A0h]
  struct _POINTL v52[2]; // [rsp+70h] [rbp-90h] BYREF
  DC *v53[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v54; // [rsp+90h] [rbp-70h]
  __int64 v55; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v56; // [rsp+A0h] [rbp-60h]
  unsigned int v57; // [rsp+A4h] [rbp-5Ch]
  _QWORD v58[3]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v59[176]; // [rsp+C0h] [rbp-40h] BYREF
  struct _RECTL si128; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v61[4]; // [rsp+180h] [rbp+80h] BYREF
  char v62[156]; // [rsp+184h] [rbp+84h] BYREF

  v54 = a4;
  v7 = 0;
  v8 = a3;
  v50 = a6;
  v9 = a4;
  v10 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v53, a1);
  if ( v53[0] )
  {
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v59);
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v59, (struct XDCOBJ *)v53, v13) )
    {
      inited = XDCOBJ::bFullScreen((XDCOBJ *)v53);
LABEL_27:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v59);
      goto LABEL_3;
    }
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v58, (struct XDCOBJ *)v53, 0x204u);
    if ( (*(_DWORD *)(v58[0] + 32LL) & 1) == 0 && a6 <= 1u )
    {
      v28 = 2LL * a5;
      if ( v28 > 0xFFFFFFFF
        || (v29 = 12LL * (unsigned int)v28, v29 > 0xFFFFFFFF)
        || (v14 = 2 * a5, v30 = v8 + 2 * a5, v56 = 2 * a5, v30 < 2 * a5)
        || (v31 = 16LL * v30, v31 > 0xFFFFFFFF)
        || (v32 = v31 + v29, (int)v31 + (int)v29 < (unsigned int)v29) )
      {
        v45 = 534;
      }
      else
      {
        if ( v32 <= 0x2710000 )
        {
          v33 = (struct _TRIVERTEX *)PALLOCMEM2(v32);
          v10 = v33;
          if ( v33 )
          {
            v34 = 0;
            v35 = (char *)v33 + (unsigned int)v31;
            if ( (_DWORD)v8 )
            {
              v34 = v8;
              v36 = (char *)((char *)a2 - (char *)v33);
              v37 = v8;
              do
              {
                *v33 = *(struct _TRIVERTEX *)((char *)v33 + (_QWORD)v36);
                ++v33;
                --v37;
              }
              while ( v37 );
            }
            v51 = 0;
            if ( a5 )
            {
              v38 = v54;
              v57 = 0;
              while ( 1 )
              {
                v39 = *v38;
                v40 = v38[1];
                LODWORD(v55) = v39;
                if ( (unsigned int)v39 >= (unsigned int)v8 || v40 >= (unsigned int)v8 )
                  break;
                v41 = v39;
                v42 = v34;
                v10[v42].x = a2[v40].x;
                v10[v42].y = a2[v41].y;
                v43 = v34 + 1;
                v52[0].x = v34 + 1;
                v10[v43].x = a2[v41].x;
                v10[v43].y = a2[v40].y;
                if ( a6 == 1 )
                {
                  v10[v34].Red = a2[v41].Red;
                  v10[v34].Green = a2[v41].Green;
                  v10[v34].Blue = a2[v41].Blue;
                  v10[v34].Alpha = a2[v41].Alpha;
                  v10[v34 + 1].Red = a2[v40].Red;
                  v10[v34 + 1].Green = a2[v40].Green;
                  v10[v34 + 1].Blue = a2[v40].Blue;
                  Alpha = a2[v40].Alpha;
                }
                else
                {
                  v10[v34].Red = a2[v40].Red;
                  v10[v34].Green = a2[v40].Green;
                  v10[v34].Blue = a2[v40].Blue;
                  v10[v34].Alpha = a2[v40].Alpha;
                  v10[v34 + 1].Red = a2[v41].Red;
                  v10[v34 + 1].Green = a2[v41].Green;
                  v10[v34 + 1].Blue = a2[v41].Blue;
                  Alpha = a2[v41].Alpha;
                }
                v46 = v57;
                x = v52[0].x;
                v10[v34 + 1].Alpha = Alpha;
                v48 = 3 * v46;
                *(_DWORD *)&v35[4 * v48] = v55;
                *(_DWORD *)&v35[4 * v48 + 4] = v34;
                v49 = 3LL * (unsigned int)(v46 + 1);
                *(_DWORD *)&v35[4 * v48 + 8] = x;
                *(_DWORD *)&v35[4 * v49 + 4] = v34;
                *(_DWORD *)&v35[4 * v49] = v40;
                v34 += 2;
                *(_DWORD *)&v35[4 * v49 + 8] = x;
                v38 = v54 + 2;
                ++v51;
                v57 = v46 + 2;
                v54 += 2;
                if ( v51 >= a5 )
                  goto LABEL_51;
              }
              EngSetLastError(0x57u);
              Win32FreePool(v10);
              goto LABEL_55;
            }
LABEL_51:
            v9 = (unsigned int *)v35;
            v54 = (unsigned int *)v35;
            a2 = v10;
            v50 = 2;
            LODWORD(v8) = v34;
            goto LABEL_10;
          }
        }
        v45 = 8;
      }
      EngSetLastError(v45);
LABEL_55:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v59);
      goto LABEL_6;
    }
    v14 = a5;
    v56 = a5;
LABEL_10:
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
    if ( (_DWORD)v8 )
    {
      v15 = (struct _POINTL *)a2;
      v16 = (unsigned int)v8;
      do
      {
        v52[0] = *v15;
        EXFORMOBJ::bXform((EXFORMOBJ *)v58, v52, 1uLL);
        v17 = DC::eptlOrigin(v53[0]);
        v15->x = v18 + *(_DWORD *)v17;
        v19 = DC::eptlOrigin(v53[0]);
        v15->y = v52[0].y + *((_DWORD *)v19 + 1);
        v15 += 2;
        --v16;
      }
      while ( v16 );
      v9 = v54;
    }
    inited = bCalcMeshExtent(a2, v8, v9, v14, v50, &si128);
    if ( inited )
    {
      v20 = XDCOBJ::prgnEffRao((XDCOBJ *)v53);
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v61, v20, (struct ERECTL *)&si128, 0);
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v62) )
        goto LABEL_28;
      v22 = v53[0];
      if ( (*((_DWORD *)v53[0] + 9) & 0xE0) != 0 )
      {
        *(struct _RECTL *)&v52[0].x = si128;
        XDCOBJ::vAccumulate((XDCOBJ *)v53, v21, (struct ERECTL *)v52);
        XDCOBJ::vAccumulateTight((XDCOBJ *)v53, v27, (struct ERECTL *)v52);
        v22 = v53[0];
      }
      v23 = *((_QWORD *)v22 + 64);
      if ( !v23 )
      {
LABEL_28:
        inited = 1;
      }
      else
      {
        ++*(_DWORD *)(v23 + 92);
        v24 = *(_QWORD *)(v23 + 48);
        v55 = 0LL;
        if ( (*(_DWORD *)(v24 + 56) & 0x80u) != 0 || *(_DWORD *)(v23 + 96) <= 3u )
          inited = EXLATEOBJ::bInitXlateObj(
                     &v55,
                     *(_QWORD *)(*((_QWORD *)v53[0] + 10) + 112LL),
                     *((unsigned int *)v53[0] + 28),
                     gppalRGB,
                     *(_QWORD *)(v23 + 120),
                     *((_QWORD *)v53[0] + 12),
                     *((_QWORD *)v53[0] + 12),
                     *(_DWORD *)(*((_QWORD *)v53[0] + 10) + 40LL),
                     *(_DWORD *)(*((_QWORD *)v53[0] + 10) + 32LL),
                     0,
                     0);
        v52[0] = *(struct _POINTL *)DC::eptlOrigin(v53[0]);
        v52[0].x = -v52[0].x;
        v52[0].y = -v52[0].y;
        if ( *(_DWORD *)(v23 + 96) != 3 && (*(_DWORD *)(v23 + 112) & 0x20000) != 0 )
          v26 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(v24 + 3264);
        else
          v26 = EngGradientFill;
        if ( !inited
          || (inited = 1,
              !((unsigned int (__fastcall *)(__int64, _BYTE *, __int64, struct _TRIVERTEX *, _DWORD, unsigned int *, unsigned int, struct _RECTL *, struct _POINTL *, unsigned int))v26)(
                 v23 + 24,
                 v61,
                 v25,
                 a2,
                 v8,
                 v54,
                 v56,
                 &si128,
                 v52,
                 v50)) )
        {
          inited = 0;
        }
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v55);
      }
    }
    goto LABEL_27;
  }
  inited = 0;
LABEL_3:
  if ( v10 )
    Win32FreePool(v10);
  v7 = inited;
LABEL_6:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v53);
  return v7;
}
