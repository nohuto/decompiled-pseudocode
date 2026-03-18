/*
 * XREFs of NtGdiSetPixel @ 0x1C002C0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C002C85C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002D820 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     bCvtPts1 @ 0x1C0041E4C (bCvtPts1.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiSetPixel(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // edi
  unsigned int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rdi
  int v16; // r11d
  int v17; // r8d
  int v18; // r10d
  int v19; // r9d
  __int64 v20; // rbx
  struct REGION *v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rbx
  int v26; // edx
  int v27; // r15d
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // r8d
  int v32; // eax
  ULONG v34; // ecx
  _QWORD v35[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v36; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v37; // [rsp+74h] [rbp-8Ch]
  __int64 v38; // [rsp+78h] [rbp-88h] BYREF
  int v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+84h] [rbp-7Ch]
  unsigned int NearestIndexFromColorref; // [rsp+90h] [rbp-70h] BYREF
  __int64 v42; // [rsp+98h] [rbp-68h]
  int v43; // [rsp+A0h] [rbp-60h]
  unsigned int v44; // [rsp+A8h] [rbp-58h]
  int v45; // [rsp+ACh] [rbp-54h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  __int128 v49; // [rsp+F0h] [rbp-10h]
  int v50; // [rsp+110h] [rbp+10h]
  __int128 v51; // [rsp+120h] [rbp+20h] BYREF
  __int64 v52; // [rsp+130h] [rbp+30h]
  int v53; // [rsp+138h] [rbp+38h]
  __int64 v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  __int64 v56; // [rsp+150h] [rbp+50h]
  __int64 v57; // [rsp+158h] [rbp+58h]
  __int64 v58; // [rsp+160h] [rbp+60h]
  __int128 v59; // [rsp+170h] [rbp+70h] BYREF
  __int128 v60; // [rsp+180h] [rbp+80h] BYREF

  v5 = a2;
  LOBYTE(a2) = 1;
  v35[1] = 0LL;
  v7 = -1;
  v35[0] = HmgLockEx(a1, a2, 0LL);
  if ( v35[0] )
  {
    if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v35) )
    {
LABEL_63:
      _InterlockedDecrement((volatile signed __int32 *)(v35[0] + 12LL));
      return v7;
    }
    v8 = v35[0];
    if ( v35[0] )
    {
      if ( (*(_DWORD *)(v35[0] + 36LL) & 0x10000) == 0 )
      {
        v9 = *(_QWORD *)(v35[0] + 80LL);
        v36 = v5;
        v37 = a3;
        v39 = *(_DWORD *)(v9 + 68);
        v40 = *(_DWORD *)(*(_QWORD *)(v35[0] + 80LL) + 312LL) & 1;
        if ( (*(_DWORD *)(*(_QWORD *)(v35[0] + 80LL) + 352LL) & 0xE000) != 0 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v38, (struct XDCOBJ *)v35, 0x204u, 0);
          v10 = v38;
          v8 = v35[0];
        }
        else
        {
          v10 = v35[0] + 336LL;
          v38 = v35[0] + 336LL;
        }
        if ( (*(_BYTE *)(v10 + 32) & 0x43) != 0x43 )
        {
          bCvtPts1(v10, &v36);
          a3 = v37;
          v5 = v36;
        }
        *(_QWORD *)&v60 = __PAIR64__(a3, v5);
        DWORD2(v60) = v5 + 1;
        HIDWORD(v60) = a3 + 1;
        if ( (*(_DWORD *)(v8 + 36) & 0xE0) != 0 )
        {
          XDCOBJ::vAccumulate((XDCOBJ *)v35, (struct ERECTL *)&v60);
          v8 = v35[0];
        }
        if ( !*(_QWORD *)(v8 + 512) )
          goto LABEL_62;
        v55 = 0LL;
        v51 = 0LL;
        v52 = 0LL;
        v53 = 0;
        v54 = 0LL;
        v58 = 0LL;
        v57 = 0LL;
        v56 = 0LL;
        if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v51, (struct XDCOBJ *)v35, 0) )
        {
          v11 = v35[0];
          v12 = v35[0] + 1416LL;
          v13 = *(_QWORD *)(v35[0] + 512LL);
          if ( (*(_DWORD *)(v35[0] + 40LL) & 1) == 0 )
            v12 = v35[0] + 1408LL;
          v14 = *(int *)v12;
          if ( (unsigned __int64)(v14 + (int)v60 + 0x80000000LL) > 0xFFFFFFFF )
            goto LABEL_66;
          if ( (unsigned __int64)(v14 + SDWORD2(v60) + 0x80000000LL) > 0xFFFFFFFF )
            goto LABEL_66;
          v15 = *(int *)(v12 + 4);
          if ( (unsigned __int64)(v15 + SDWORD1(v60) + 0x80000000LL) > 0xFFFFFFFF
            || (unsigned __int64)(v15 + SHIDWORD(v60) + 0x80000000LL) > 0xFFFFFFFF
            || (v16 = v14 + v60,
                LODWORD(v60) = v16,
                v17 = *(_DWORD *)v12 + DWORD2(v60),
                v18 = *(_DWORD *)(v12 + 4) + DWORD1(v60),
                *(_QWORD *)((char *)&v60 + 4) = __PAIR64__(v17, v18),
                v19 = *(_DWORD *)(v12 + 4) + HIDWORD(v60),
                HIDWORD(v60) = v19,
                (unsigned int)(v16 + 134217726) > 0xFFFFFFC)
            || (unsigned int)(v17 + 134217726) > 0xFFFFFFC
            || (unsigned int)(v18 + 134217726) > 0xFFFFFFC
            || (unsigned int)(v19 + 134217726) > 0xFFFFFFC )
          {
LABEL_66:
            v34 = 87;
            goto LABEL_67;
          }
          if ( v16 >= *(_DWORD *)(v35[0] + 1392LL)
            && v17 <= *(_DWORD *)(v35[0] + 1400LL)
            && v18 >= *(_DWORD *)(v35[0] + 1396LL)
            && v19 <= *(_DWORD *)(v35[0] + 1404LL) )
          {
LABEL_30:
            if ( (*(_DWORD *)(v13 + 116) & 8) == 0 && !*(_QWORD *)(v13 + 216)
              || (v12 = 512LL, (*(_WORD *)(v13 + 102) & 0x200) == 0) )
            {
              v22 = *(_DWORD *)(v13 + 112);
              if ( (v22 & 0x800) != 0 )
              {
                v23 = UserSurfaceAccessCheck(*(_QWORD *)(v13 + 584));
              }
              else
              {
                if ( (v22 & 0x10000000) == 0 )
                {
LABEL_39:
                  if ( (*(_DWORD *)(v11 + 36) & 0xE0) != 0 )
                  {
                    v59 = v60;
                    XDCOBJ::vAccumulateTight((XDCOBJ *)v35, (struct ECLIPOBJ *)v12, (struct ERECTL *)&v59);
                    v11 = v35[0];
                  }
                  v24 = *(_QWORD *)(v11 + 96);
                  v25 = *(_QWORD *)(v13 + 120);
                  v49 = 0LL;
                  v48 = 0LL;
                  v42 = 0LL;
                  v43 = 0;
                  v45 = -1;
                  v46 = 0LL;
                  v47 = 0LL;
                  v50 = 0;
                  v26 = *(_DWORD *)(v11 + 112);
                  if ( (v26 & 1) != 0 && *(_QWORD *)(*(_QWORD *)(v11 + 80) + 112LL) && (v26 & 0x10000000) != 0 )
                  {
                    v27 = 1;
                    NearestIndexFromColorref = a4;
                    v43 = 6;
                    if ( gbMultiMonMismatchColor )
                    {
                      v44 = a4;
                      v45 = a4;
                    }
                  }
                  else
                  {
                    v27 = 0;
                    NearestIndexFromColorref = ulGetNearestIndexFromColorref(v25, v24, a4, 1LL);
                    v28 = *(_DWORD *)(v35[0] + 112LL);
                    if ( (v28 & 5) != 0 )
                    {
                      v43 = 2;
                    }
                    else
                    {
                      v29 = v43;
                      if ( (v28 & 2) != 0 )
                        v29 = 1;
                      v43 = v29;
                    }
                    if ( gbMultiMonMismatchColor )
                    {
                      v44 = a4;
                      v45 = rgbFromColorref(v25, v24, a4);
                    }
                  }
                  ++*(_DWORD *)(v13 + 92);
                  v30 = v13 + 24;
                  v31 = (gaMix[*(_BYTE *)(*(_QWORD *)(v35[0] + 80LL) + 72LL) & 0xF] << 8) | gaMix[*(_BYTE *)(*(_QWORD *)(v35[0] + 80LL) + 72LL) & 0xF];
                  if ( (*(_DWORD *)(v13 + 112) & 1) != 0 )
                    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD, _QWORD, unsigned int *, __int64, int))(*(_QWORD *)(v13 + 48) + 2864LL))(
                            v30,
                            0LL,
                            0LL,
                            0LL,
                            0LL,
                            &v60,
                            0LL,
                            0LL,
                            &NearestIndexFromColorref,
                            v35[0] + 1552LL,
                            v31);
                  else
                    v32 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD, _QWORD, unsigned int *, __int64, int))EngBitBlt)(
                            v30,
                            0LL,
                            0LL,
                            0LL,
                            0LL,
                            &v60,
                            0LL,
                            0LL,
                            &NearestIndexFromColorref,
                            v35[0] + 1552LL,
                            v31);
                  if ( v32 )
                  {
                    if ( v27 )
                      v7 = NearestIndexFromColorref;
                    else
                      v7 = ulIndexToRGB(v25, v24, NearestIndexFromColorref);
                  }
                  EBRUSHOBJ::vDelete((EBRUSHOBJ *)&NearestIndexFromColorref);
                  goto LABEL_61;
                }
                v23 = UserScreenAccessCheck();
              }
              if ( v23 )
              {
                v11 = v35[0];
                goto LABEL_39;
              }
            }
            v34 = 5;
LABEL_67:
            EngSetLastError(v34);
            XDCOBJ::vUnlockFast((XDCOBJ *)v35);
            DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v51);
            return v7;
          }
          v20 = v35[0] + 2160LL;
          v21 = XDCOBJ::prgnEffRao((XDCOBJ *)v35);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v20, v21, (struct ERECTL *)&v60, 2);
          if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)(v20 + 4)) )
          {
            v11 = v35[0];
            goto LABEL_30;
          }
        }
LABEL_61:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v51);
LABEL_62:
        XDCOBJ::RestoreAttributes((XDCOBJ *)v35);
        goto LABEL_63;
      }
    }
  }
  return v7;
}
