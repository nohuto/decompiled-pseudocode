/*
 * XREFs of GreDrawStream @ 0x140075C4C
 * Callers:
 *     NtGdiDrawStream @ 0x140076720 (NtGdiDrawStream.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SURFREFDC@@QEAAXXZ @ 0x140076628 (-vUnlock@SURFREFDC@@QEAAXXZ.c)
 *     ??1SURFREFDC@@QEAA@XZ @ 0x140076814 (--1SURFREFDC@@QEAA@XZ.c)
 *     ?vInc_cRef@SURFACE@@QEAAXXZ @ 0x14007733C (-vInc_cRef@SURFACE@@QEAAXXZ.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x140077868 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??$GrepReleaseLockValidate@$0BE@@@YAXXZ @ 0x1400C69D0 (--$GrepReleaseLockValidate@$0BE@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0BE@@@YAXXZ @ 0x1400C6AC0 (--$GrepAcquireLockValidate@$0BE@@@YAXXZ.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x140166BB0 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall GreDrawStream(Gre::Base *a1, unsigned int a2, int *a3)
{
  struct Gre::Base::SESSION_GLOBALS *v5; // r15
  unsigned int v6; // r12d
  __int64 v7; // r15
  Gre::Base *v8; // r14
  __int64 v9; // rdi
  Gre::Base *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  _DWORD *v16; // r13
  unsigned int v17; // edx
  struct SURFACE *v18; // r9
  Gre::Base *v19; // rcx
  __int64 v20; // rsi
  struct Gre::Base::SESSION_GLOBALS *v21; // rax
  __int64 v22; // r8
  struct Gre::Base::SESSION_GLOBALS *v23; // r14
  struct SURFACE *v24; // rax
  SURFACE *v25; // rcx
  HSEMAPHORE v26; // rsi
  char *v27; // rcx
  int v28; // eax
  int v30; // r11d
  int v31; // edx
  int v32; // eax
  int v33; // r8d
  int v34; // ecx
  int v35; // r8d
  int v36; // ecx
  int v37; // r10d
  int v38; // eax
  int v39; // r9d
  int v40; // edx
  int v41; // eax
  LONG *v42; // rdx
  LONG left; // edx
  __int64 v44; // rbx
  int v45; // eax
  LONG right; // ecx
  LONG top; // ecx
  _DWORD *v48; // rbx
  int v49; // eax
  _DWORD *v50; // rbx
  __int64 *v51; // rax
  struct _XLATEOBJ *v52; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v53; // [rsp+68h] [rbp-98h]
  __int64 v54; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v55[2]; // [rsp+78h] [rbp-88h] BYREF
  SURFACE *v56; // [rsp+98h] [rbp-68h]
  int v57; // [rsp+A0h] [rbp-60h]
  char *v58; // [rsp+A8h] [rbp-58h]
  struct SURFACE *v59; // [rsp+B0h] [rbp-50h]
  __int64 v60; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v61; // [rsp+C0h] [rbp-40h] BYREF
  int v62; // [rsp+C8h] [rbp-38h]
  SURFACE *v63; // [rsp+D0h] [rbp-30h]
  struct _XLATEOBJ *v64; // [rsp+D8h] [rbp-28h]
  __int64 v65; // [rsp+E0h] [rbp-20h] BYREF
  struct _RECTL v66; // [rsp+E8h] [rbp-18h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v67; // [rsp+F8h] [rbp-8h]
  Gre::Base *v68; // [rsp+100h] [rbp+0h]
  __int64 v69; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v70[160]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v71[14]; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD v72[4]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v73; // [rsp+240h] [rbp+140h]
  __int64 v74; // [rsp+248h] [rbp+148h]
  __int64 v75; // [rsp+250h] [rbp+150h]
  struct _RECTL v76; // [rsp+270h] [rbp+170h] BYREF

  v53 = a2;
  v68 = a1;
  v5 = Gre::Base::Globals(a1);
  v67 = v5;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v71, (HDC)a1);
  v6 = 0;
  memset(v55, 0, sizeof(v55));
  PushThreadGuardedObject(v55, v55, UnexpectedThreadTerminationHandler<SURFREFDC>::OnUnexpectedThreadTerminationStatic);
  v56 = 0LL;
  v65 = 0LL;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v70);
  v7 = *((_QWORD *)v5 + 485);
  v63 = 0LL;
  v59 = 0LL;
  v8 = 0LL;
  v64 = 0LL;
  v9 = 0LL;
  v52 = 0LL;
  v10 = 0LL;
  v57 = 0;
  v11 = 0LL;
  v58 = 0LL;
  memset_0(v72, 0, 0x48uLL);
  v62 = 0;
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(v13, v12, v14) + 96) + 140LL) )
  {
    if ( v53 >= 4 )
    {
      v15 = *a3;
      v16 = a3 + 1;
      if ( v15 == 1148352339 )
      {
        v17 = v53 - 4;
        v18 = 0LL;
        v53 -= 4;
        while ( 1 )
        {
          if ( v17 < 4 )
          {
            v6 = 1;
            goto LABEL_72;
          }
          if ( !*v16 )
            break;
          if ( *v16 == 1 )
          {
            if ( !v58 )
            {
              SURFREFDC::vUnlock((SURFREFDC *)v55);
              LODWORD(v54) = 8;
              if ( v53 < 8 || !v62 )
                goto LABEL_41;
              v20 = (int)v16[1];
              v21 = Gre::Base::Globals(v19);
              LOBYTE(v22) = 5;
              v23 = v21;
              v24 = (struct SURFACE *)HmgShareLock(v21, v20, v22, 0LL);
              v59 = v24;
              v25 = v24;
              v56 = v24;
              if ( v24 && v24 != *((struct SURFACE **)v23 + 547) )
              {
                v26 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v24) + 1512LL);
                GreAcquireSemaphoreInternal(v26);
                GrepAcquireLockValidate<20>();
                SURFACE::vInc_cRef(v56);
                DEC_SHARE_REF_CNT(v23, v56);
                if ( v26 )
                {
                  EtwTraceGreLockReleaseSemaphore(L"Hmgr", v26);
                  GrepReleaseLockValidate<20>();
                  GreReleaseSemaphoreExclusiveInternal(v26);
                }
                v25 = v56;
                v59 = v56;
              }
              if ( !v25 )
                goto LABEL_41;
              v11 = *((_QWORD *)v25 + 16);
              v8 = (Gre::Base *)*((_QWORD *)v67 + 484);
              if ( !v11 )
                goto LABEL_41;
              if ( (*(_DWORD *)(v11 + 24) & 0x2000) != 0 || v25 == v63 || *((_DWORD *)v25 + 24) != 6 )
                goto LABEL_72;
              if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                    (Gre::Base *)&v52,
                                    0LL,
                                    *(_DWORD *)(v71[0] + 120LL),
                                    *((_QWORD *)v25 + 16),
                                    v9,
                                    (__int64)v8,
                                    v10,
                                    *(_DWORD *)(*(_QWORD *)(v71[0] + 976LL) + 184LL),
                                    *(_DWORD *)(*(_QWORD *)(v71[0] + 976LL) + 176LL),
                                    0,
                                    0) )
                goto LABEL_41;
              v64 = v52;
              goto LABEL_23;
            }
LABEL_26:
            v18 = v59;
            if ( v71[0] && v59 )
            {
              v61 = 0LL;
              v60 = 0LL;
              v54 = 0LL;
              v72[0] = 72LL;
              v72[1] = 33488896LL;
              v72[2] = 0LL;
              if ( v57 )
              {
                v28 = *((_DWORD *)v63 + 24);
                if ( v28 == 1 || (unsigned int)(v28 - 2) <= 1 )
                {
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v54);
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v60);
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v61);
                  goto LABEL_72;
                }
                if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                      (Gre::Base *)&v61,
                                      0LL,
                                      0,
                                      v11,
                                      v7,
                                      (__int64)v8,
                                      v8,
                                      0,
                                      0,
                                      0,
                                      0)
                  || (v73 = v61,
                      !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                       (Gre::Base *)&v60,
                                       0LL,
                                       0,
                                       v9,
                                       v7,
                                       (__int64)v10,
                                       v10,
                                       0,
                                       0,
                                       0,
                                       0))
                  || (v74 = v60,
                      !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                       (Gre::Base *)&v54,
                                       0LL,
                                       0,
                                       v7,
                                       v9,
                                       (__int64)v10,
                                       v10,
                                       0,
                                       0,
                                       0,
                                       0)) )
                {
LABEL_111:
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v54);
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v60);
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v61);
                  goto LABEL_41;
                }
                v75 = v54;
              }
              else
              {
                v75 = 0LL;
                v74 = 0LL;
                v73 = 0LL;
              }
              if ( !(unsigned int)NtGdiDrawStreamInternal(
                                    (struct XDCOBJ *)v71,
                                    (struct EXFORMOBJ *)&v65,
                                    v59,
                                    v64,
                                    &v76,
                                    &v66,
                                    (int)v16 - (int)v58,
                                    v58,
                                    (struct _DRAWSTREAMINFO *)v72) )
                goto LABEL_111;
              v58 = 0LL;
              v57 = 0;
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v54);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v60);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v61);
              v18 = v59;
              v17 = v53;
            }
          }
          else
          {
            if ( *v16 != 9 )
              goto LABEL_41;
            LODWORD(v54) = 60;
            if ( v17 < 0x3C )
              goto LABEL_41;
            v30 = v16[9];
            if ( (v30 & 0xFFFFFF80) != 0 )
              goto LABEL_41;
            if ( !v18 )
              goto LABEL_72;
            v31 = v16[5];
            if ( v31 < 0 )
              goto LABEL_72;
            v32 = v16[6];
            if ( v32 < 0 )
              goto LABEL_72;
            v33 = v16[7];
            if ( v33 > *((_DWORD *)v18 + 14) )
              goto LABEL_72;
            v34 = v16[8];
            if ( v34 > *((_DWORD *)v18 + 15) )
              goto LABEL_72;
            v35 = v33 - v31;
            v36 = v34 - v32;
            if ( v35 <= 0 || v36 <= 0 )
              goto LABEL_41;
            if ( (v30 & 0x20) == 0 )
            {
              v37 = v16[10];
              if ( v37 < 0 )
                goto LABEL_72;
              v38 = v16[11];
              if ( v38 < 0 )
                goto LABEL_72;
              v39 = v16[12];
              if ( v39 < 0 )
                goto LABEL_72;
              v40 = v16[13];
              if ( v40 < 0 || v37 > v35 || v38 > v35 || v39 > v36 || v40 > v36 || v37 + v38 > v35 || v39 + v40 > v36 )
                goto LABEL_72;
            }
            if ( (v30 & 0xC) == 0xC )
              goto LABEL_41;
            if ( (v30 & 8) != 0 )
            {
              v16[14] = ulGetNearestIndexFromColorref(v11, v8, (unsigned int)v16[14], 1LL);
            }
            else
            {
              v41 = v57;
              if ( (v30 & 4) != 0 )
                v41 = 1;
              v57 = v41;
            }
            v42 = v16 + 1;
            if ( v58 )
            {
              ERECTL::operator+=(&v66, v42);
LABEL_23:
              v27 = v58;
              goto LABEL_24;
            }
            v27 = (char *)v16;
            v66.left = *v42;
            v66.top = v16[2];
            v66.right = v16[3];
            v66.bottom = v16[4];
            v58 = (char *)v16;
LABEL_24:
            v18 = v59;
            v17 = v53 - v54;
            v53 = v17;
            v16 += (unsigned __int64)(unsigned int)v54 >> 2;
            if ( !v17 && v27 )
              goto LABEL_26;
          }
        }
        if ( !v58 )
        {
          LODWORD(v54) = 24;
          if ( v17 < 0x18 || (Gre::Base *)(int)v16[1] != v68 || !v71[0] )
            goto LABEL_41;
          if ( (*(_DWORD *)(v71[0] + 36LL) & 0x10000) != 0 )
            goto LABEL_72;
          if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v70, (struct XDCOBJ *)v71, 0) )
            goto LABEL_72;
          DC::QuickInitXform(v71[0], &v69, 516LL);
          v65 = v69;
          if ( (*(_BYTE *)(v69 + 32) & 1) == 0 )
            goto LABEL_72;
          left = v16[2];
          v44 = v71[0];
          v76.left = left;
          v76.top = v16[3];
          v76.right = v16[4];
          v76.bottom = v16[5];
          if ( (*(_BYTE *)(v69 + 32) & 0x43) == 0x43 || (v45 = bCvtPts1(v69, &v76), left = v76.left, v45) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(v44 + 976) + 108LL) & 1) != 0 )
            {
              ++left;
              ++v76.right;
              v76.left = left;
            }
          }
          right = v76.right;
          if ( left > v76.right )
          {
            v76.left = v76.right;
            v76.right = left;
            left = right;
          }
          top = v76.top;
          if ( v76.top > v76.bottom )
          {
            v76.top = v76.bottom;
            v76.bottom = top;
          }
          v48 = (_DWORD *)v71[0];
          v49 = *(_DWORD *)(v71[0] + 36LL);
          if ( (v49 & 0xE0) != 0 )
          {
            if ( (v49 & 0x20) != 0 )
            {
              if ( left < *(_DWORD *)(v71[0] + 1064LL) )
              {
                *(_DWORD *)(v71[0] + 1064LL) = left;
                left = v76.left;
              }
              if ( v76.top < v48[267] )
              {
                v48[267] = v76.top;
                left = v76.left;
              }
              if ( v76.right > v48[268] )
              {
                v48[268] = v76.right;
                left = v76.left;
              }
              if ( v76.bottom > v48[269] )
              {
                v48[269] = v76.bottom;
                left = v76.left;
              }
            }
            v50 = (_DWORD *)v71[0];
            if ( (*(_DWORD *)(v71[0] + 36LL) & 0x80u) != 0 )
            {
              if ( left < *(_DWORD *)(v71[0] + 1096LL) )
                *(_DWORD *)(v71[0] + 1096LL) = left;
              if ( v76.top < v50[275] )
                v50[275] = v76.top;
              if ( v76.right > v50[276] )
                v50[276] = v76.right;
              if ( v76.bottom > v50[277] )
                v50[277] = v76.bottom;
            }
          }
          v51 = *(__int64 **)(v71[0] + 496LL);
          v63 = (SURFACE *)v51;
          if ( !v51 )
            goto LABEL_72;
          v9 = v51[16];
          v10 = *(Gre::Base **)(v71[0] + 88LL);
          if ( v11 && (*(_DWORD *)(v11 + 24) & 0x2000) != 0 )
            goto LABEL_41;
          v62 = 1;
          goto LABEL_23;
        }
        goto LABEL_26;
      }
    }
LABEL_41:
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v52);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v70);
    SURFREFDC::~SURFREFDC((SURFREFDC *)v55);
  }
  else
  {
LABEL_72:
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v52);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v70);
    SURFREFDC::vUnlock((SURFREFDC *)v55);
    PopThreadGuardedObject(v55);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v71);
  return v6;
}
