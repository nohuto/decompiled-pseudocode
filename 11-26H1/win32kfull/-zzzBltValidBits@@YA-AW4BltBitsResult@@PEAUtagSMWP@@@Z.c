/*
 * XREFs of ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14001996C
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z @ 0x1400183DC (-CombineOldNewVis@@YAHPEAUHRGN__@@00II@Z.c)
 *     DeleteOldRedirectionBitmap @ 0x1400189F4 (DeleteOldRedirectionBitmap.c)
 *     GetOldRedirectionBitmap @ 0x140018A98 (GetOldRedirectionBitmap.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x1400197A4 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x14001AA44 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x14001AC48 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     GreRedrawSpriteOverlapPresent @ 0x14001B79C (GreRedrawSpriteOverlapPresent.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x14002C070 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     xxxInternalInvalidate @ 0x14002CCF0 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x14002EC1C (PhysicalToLogicalInPlaceRgn.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14004289C (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     GetRedirectionBitmap @ 0x1400429A0 (GetRedirectionBitmap.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     GreHintDCWnd @ 0x1400D1780 (GreHintDCWnd.c)
 *     UnionRect @ 0x14011F574 (UnionRect.c)
 *     UpdateSpriteArea @ 0x14020440C (UpdateSpriteArea.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GreUnlockDisplayArea @ 0x1403188F8 (GreUnlockDisplayArea.c)
 *     GreClientRgnDone @ 0x140319FA4 (GreClientRgnDone.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzBltValidBits(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // r15
  __int64 UserSessionState; // rax
  __int64 v5; // rdx
  int v6; // edi
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // r14
  int v14; // esi
  HRGN v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // r13
  struct tagWND *v20; // rsi
  const struct tagTHREADINFO *v21; // rax
  char v22; // bl
  unsigned int v23; // r14d
  unsigned int v24; // r12d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 *v28; // rsi
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // r15d
  __int64 v33; // r14
  bool v34; // sf
  __int64 *v35; // rdi
  int v36; // ebx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // edi
  int v41; // ebx
  int v42; // r13d
  int v43; // r12d
  __int64 v44; // rcx
  int v45; // r12d
  int v46; // eax
  unsigned int v47; // r13d
  unsigned int v48; // ebx
  unsigned int v49; // edi
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // r12d
  unsigned int v59; // edi
  __int64 v60; // r13
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  HRGN v73; // rdi
  HRGN v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // r9
  __int64 v79; // rcx
  __int64 v80; // rax
  int v81; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  int v84; // edi
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rbx
  __int64 v89; // rax
  __int64 v90; // r9
  __int64 v91; // r8
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdi
  __int64 v95; // rbx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rbx
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  unsigned int v104; // ebx
  __int64 v105; // rax
  __int64 v106; // rdi
  __int64 OldRedirectionBitmap; // r12
  int v108; // r13d
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r9
  __int64 v116; // rax
  __int64 v117; // r9
  __int64 v118; // r8
  __int64 v119; // rbx
  __int64 v120; // rax
  int v121; // r13d
  int v122; // r14d
  int v123; // r12d
  __int64 v124; // rsi
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 *v128; // rbx
  __int64 v129; // rdi
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rbx
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rbx
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rax
  unsigned int v140; // ebx
  int v141; // edi
  __int64 v142; // rbx
  int v143; // edx
  __int64 v144; // rdi
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rbx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // rax
  __int64 v151; // rdi
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rcx
  __int64 v155; // rax
  __m128i v156; // xmm0
  int v157; // ecx
  int v158; // edx
  int v159; // eax
  __int64 v160; // rbx
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rax
  int v168; // [rsp+68h] [rbp-A0h]
  int v169; // [rsp+6Ch] [rbp-9Ch]
  int valid; // [rsp+70h] [rbp-98h]
  int v171; // [rsp+70h] [rbp-98h]
  __int64 v172; // [rsp+78h] [rbp-90h] BYREF
  int v173; // [rsp+80h] [rbp-88h]
  int v174; // [rsp+84h] [rbp-84h]
  __int64 v175; // [rsp+88h] [rbp-80h]
  __m128i v176; // [rsp+98h] [rbp-70h] BYREF
  int v177; // [rsp+A8h] [rbp-60h]
  __int64 *v178; // [rsp+B0h] [rbp-58h]
  __int64 v179; // [rsp+B8h] [rbp-50h]
  HRGN v180; // [rsp+C0h] [rbp-48h]
  struct tagWND *v181; // [rsp+C8h] [rbp-40h]
  char v182[8]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v183; // [rsp+D8h] [rbp-30h]
  __int64 v184; // [rsp+E0h] [rbp-28h]
  __m128i v185; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v186; // [rsp+F8h] [rbp-10h] BYREF

  v184 = a1;
  v175 = 0LL;
  v186 = 0LL;
  v2 = 0;
  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  ++*(_DWORD *)(UserSessionState + 70592);
  GreLockVisRgn();
  valid = BltValidInit((struct tagSMWP *)v3);
  if ( !valid )
    goto LABEL_2;
  v12 = *(_QWORD **)(v3 + 40);
  v13 = 0LL;
  v14 = *(_DWORD *)(v3 + 28) - 1;
  if ( v14 < 0 )
    goto LABEL_2;
  do
  {
    LOBYTE(v5) = 1;
    v17 = HMValidateHandleNoSecure(*v12, v5);
    v18 = (_QWORD *)v17;
    if ( v17 && *(_QWORD *)(v17 + 104) && (unsigned int)IsStillWindowC((HWND)v12[1]) )
    {
      if ( v12[14] == 2LL )
      {
        if ( (*(_BYTE *)(v18[5] + 31LL) & 1) == 0 )
          goto LABEL_148;
        v154 = v18[3];
        v155 = 0LL;
        if ( v154 )
        {
          v5 = *(_QWORD *)(v154 + 8);
          if ( v5 )
            v155 = *(_QWORD *)(v5 + 24);
        }
        if ( v18[13] != v155 )
LABEL_148:
          v12[14] = 0LL;
      }
      if ( !v13 )
        v13 = v12;
    }
    else
    {
      *v12 = 0LL;
      *((_DWORD *)v12 + 8) = 6159;
    }
    v12 += 21;
    --v14;
  }
  while ( v14 >= 0 );
  v19 = 0LL;
  if ( v13 )
  {
    v20 = *(struct tagWND **)(_HMObjectFromHandle(*v13) + 104);
    v181 = v20;
    zzzChangeStates(v20, (struct tagSMWP *)v3);
    v174 = 0;
    v21 = PtiCurrent();
    if ( !(unsigned int)IsThreadDesktopComposed(v21) )
    {
      v141 = *(_DWORD *)(v3 + 28) - 1;
      v142 = *(_QWORD *)(v3 + 40);
      if ( v141 >= 0 )
      {
        do
        {
          if ( *(_QWORD *)v142 )
          {
            if ( (*(_DWORD *)(v142 + 32) & 8) == 0 )
            {
              _HMObjectFromHandle(*(_QWORD *)v142);
              v143 = *(_DWORD *)(v142 + 72);
              if ( v143 || *(_DWORD *)(v142 + 76) )
              {
                v157 = -*(_DWORD *)(v142 + 76);
                v158 = -v143;
                v176 = *(__m128i *)(v142 + 56);
                v156 = v176;
                v176.m128i_i32[2] += v158;
                v176.m128i_i32[3] += v157;
                v176.m128i_i32[1] += v157;
                v185 = v156;
                v176.m128i_i32[0] = v158 + _mm_cvtsi128_si32(v156);
                UnionRect(&v186, &v185, &v176);
                v2 = 1;
              }
            }
          }
          v142 += 168LL;
          --v141;
        }
        while ( v141 >= 0 );
        v174 = v2;
      }
    }
    v22 = *(_BYTE *)(*((_QWORD *)v20 + 5) + 31LL) & 2;
    v23 = ~((unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent() + 130, 0, 0) >> 14) & 2;
    v168 = v23;
    zzzLockDisplayAreaAndInvalidateDCCache(
      (ULONG_PTR)v20,
      v22 != 0 ? 28 : 26,
      (unsigned __int64)&v186 & -(__int64)(v2 != 0));
    v24 = 96;
    v169 = 96;
    v27 = W32GetUserSessionState(v26, v25);
    v28 = *(__int64 **)(v3 + 40);
    v178 = v28;
    v15 = *(HRGN *)(v27 + 63296);
    LODWORD(v27) = *(_DWORD *)(v3 + 28) - 1;
    v180 = v15;
    v177 = v27;
    if ( (int)v27 >= 0 )
    {
      v29 = valid;
      v168 = v23;
      while ( 1 )
      {
        v16 = *v28;
        v171 = --v29;
        if ( *v28 )
          break;
LABEL_42:
        v28 += 21;
        v34 = --v177 < 0;
        v178 = v28;
        if ( v34 )
        {
          v3 = v184;
          goto LABEL_44;
        }
      }
      if ( (v28[4] & 8) != 0 )
      {
LABEL_41:
        v29 = v171;
        goto LABEL_42;
      }
      _HMObjectFromHandle(v16);
      v168 = v23 | 1;
      v30 = _HMObjectFromHandle(*v28);
      v32 = *((_DWORD *)v28 + 22);
      v33 = v30;
      v179 = v30;
      v173 = v32;
      if ( (*(_BYTE *)(*(_QWORD *)(v30 + 40) + 26LL) & 8) != 0 )
      {
        if ( !GetRedirectionBitmap(v30) && (*(_BYTE *)(*(_QWORD *)(v33 + 40) + 27LL) & 0x20) == 0 )
          goto LABEL_36;
        v31 = *(unsigned int *)(*(_QWORD *)(v33 + 40) + 232LL);
        if ( (v31 & 2) == 0 && (*((_DWORD *)v28 + 39) & 7) == 0 )
          goto LABEL_36;
        *(_DWORD *)(v33 + 380) |= 0x4000u;
      }
      v37 = W32GetUserSessionState(v31, v15);
      if ( !(unsigned int)SwpCalcVisRgn((struct tagWND *)v33, *(HRGN *)(v37 + 63304)) )
      {
        v32 |= 1u;
        v173 = v32;
      }
      if ( (v32 & 3) == 0 && *(_QWORD *)(*(_QWORD *)(v33 + 40) + 136LL) != 1LL )
      {
        v40 = *((_DWORD *)v28 + 14);
        v41 = *((_DWORD *)v28 + 16);
        if ( v41 > v40 )
        {
          v42 = *((_DWORD *)v28 + 15);
          v43 = *((_DWORD *)v28 + 17);
          if ( v43 > v42 )
          {
            v44 = *((unsigned int *)v28 + 19);
            v45 = v43 - v44;
            v46 = *((_DWORD *)v28 + 18);
            v47 = v42 - v44;
            v48 = v41 - v46;
            v49 = v40 - v46;
            v50 = W32GetUserSessionState(v44, v38);
            GreSetRectRgn(*(_QWORD *)(v50 + 63312), v49, v47, v48, v45);
            v51 = v28[12];
            v54 = *(_QWORD *)(W32GetUserSessionState(v53, v52) + 63312);
            v57 = W32GetUserSessionState(v56, v55);
            v58 = 0;
            if ( (unsigned int)GreCombineRgn(*(_QWORD *)(v57 + 63320), v54, v51, 1LL) >= 2 )
            {
              if ( (v169 & 0x20) != 0
                || (v144 = *(_QWORD *)(W32GetUserSessionState(v39, v38) + 63328),
                    v147 = *(_QWORD *)(W32GetUserSessionState(v146, v145) + 63320),
                    v150 = W32GetUserSessionState(v149, v148),
                    (unsigned int)GreCombineRgn(*(_QWORD *)(v150 + 63320), v147, v144, 4LL) > 1) )
              {
                v59 = *((_DWORD *)v28 + 18);
                if ( v59 || *((_DWORD *)v28 + 19) )
                {
                  v104 = *((_DWORD *)v28 + 19);
                  v105 = W32GetUserSessionState(v39, v38);
                  GreOffsetRgn(*(_QWORD *)(v105 + 63320), v59, v104);
                }
                v60 = v33;
                v61 = 0LL;
                while ( 1 )
                {
                  v62 = *(_QWORD *)(v60 + 40);
                  v63 = *(_QWORD *)(v62 + 136);
                  if ( v63 == 1 )
                    break;
                  if ( v63 )
                  {
                    v172 = *(_QWORD *)(v62 + 136);
                    if ( v61 )
                    {
                      v159 = PhysicalToLogicalInPlaceRgn(v61, &v172);
                      v63 = v172;
                      v58 = v159;
                    }
                    v136 = *(_QWORD *)(W32GetUserSessionState(v39, v38) + 63320);
                    v139 = W32GetUserSessionState(v138, v137);
                    v140 = GreCombineRgn(*(_QWORD *)(v139 + 63320), v136, v63, 4LL);
                    if ( v58 )
                      GreDeleteObject(v63);
                    v58 = 0;
                    if ( v140 < 2 )
                      break;
                    v61 = v60;
                  }
                  v60 = *(_QWORD *)(v60 + 104);
                  if ( !v60 || (*(_BYTE *)(*(_QWORD *)(v60 + 40) + 31LL) & 2) != 0 )
                  {
                    v64 = v28[15];
                    if ( !v64
                      || (v160 = *(_QWORD *)(W32GetUserSessionState(v39, v38) + 63320),
                          v163 = W32GetUserSessionState(v162, v161),
                          (unsigned int)GreCombineRgn(*(_QWORD *)(v163 + 63320), v160, v64, 4LL) >= 2) )
                    {
                      v65 = *(_QWORD *)(W32GetUserSessionState(v39, v38) + 63304);
                      v68 = *(_QWORD *)(W32GetUserSessionState(v67, v66) + 63320);
                      v71 = W32GetUserSessionState(v70, v69);
                      if ( (unsigned int)GreCombineRgn(*(_QWORD *)(v71 + 63320), v68, v65, 1LL) > 1 )
                        goto LABEL_73;
                    }
                    break;
                  }
                }
              }
            }
          }
        }
      }
      v32 |= 4u;
      v173 = v32;
LABEL_73:
      if ( (v32 & 4) != 0 || !*((_DWORD *)v28 + 18) && !*((_DWORD *)v28 + 19) )
        goto LABEL_74;
      v99 = v33;
      v172 = v33;
      if ( v33 )
      {
        while ( 1 )
        {
          v100 = *(_QWORD *)(v99 + 40);
          if ( (*(_BYTE *)(v100 + 26) & 8) != 0 )
            break;
          v99 = *(_QWORD *)(v99 + 104);
          if ( !v99 )
            goto LABEL_100;
        }
        v39 = *(_WORD *)(v100 + 42) & 0x2FFF;
        v172 = v99;
        if ( (_DWORD)v39 != 669 )
        {
LABEL_113:
          v176.m128i_i64[0] = GetRedirectionBitmap(v99);
          v106 = v176.m128i_i64[0];
          if ( v176.m128i_i64[0] )
          {
            if ( v33 == v99 )
            {
              if ( (*((_DWORD *)v28 + 39) & 1) != 0
                || *((_DWORD *)v28 + 18) != *((_DWORD *)v28 + 4) - *((_DWORD *)v28 + 20)
                || (v39 = (unsigned int)(*((_DWORD *)v28 + 5) - *((_DWORD *)v28 + 21)),
                    *((_DWORD *)v28 + 19) != (_DWORD)v39) )
              {
                OldRedirectionBitmap = GetOldRedirectionBitmap(v99, v38);
                v108 = -*((_DWORD *)v28 + 19);
                v173 = *((_DWORD *)v28 + 21);
                LODWORD(v178) = *((_DWORD *)v28 + 20);
                LODWORD(v172) = -*((_DWORD *)v28 + 18);
                v179 = *(_QWORD *)(W32GetUserSessionState(v110, v109) + 63320);
                v176.m128i_i64[0] = *(_QWORD *)(W32GetUserSessionState(v112, v111) + 43256);
                if ( OldRedirectionBitmap )
                {
                  v115 = *(_QWORD *)(W32GetUserSessionState(v114, v113) + 43248);
                }
                else
                {
                  OldRedirectionBitmap = v106;
                  v115 = *(_QWORD *)(W32GetUserSessionState(v114, v113) + 43256);
                }
                UpdateSpriteArea(
                  v99,
                  v106,
                  OldRedirectionBitmap,
                  v115,
                  v176.m128i_i64[0],
                  v179,
                  v28 + 7,
                  v172,
                  v108,
                  (_DWORD)v178,
                  v173);
              }
            }
            else
            {
              v120 = *(_QWORD *)(v99 + 40);
              v121 = -*((_DWORD *)v28 + 19);
              v122 = -*((_DWORD *)v28 + 18);
              v32 = *(_DWORD *)(v120 + 92);
              v123 = *(_DWORD *)(v120 + 88);
              v124 = *(_QWORD *)(W32GetUserSessionState(v39, v38) + 63320);
              v127 = W32GetUserSessionState(v126, v125);
              v128 = v178 + 7;
              v129 = *(_QWORD *)(v127 + 43248);
              v132 = W32GetUserSessionState(v131, v130);
              UpdateSpriteArea(
                v172,
                v176.m128i_i64[0],
                v176.m128i_i64[0],
                *(_QWORD *)(v132 + 43248),
                v129,
                v124,
                v128,
                v122,
                v121,
                v123,
                v32);
              v28 = v178;
              v33 = v179;
              LOBYTE(v32) = v173;
            }
            goto LABEL_74;
          }
LABEL_100:
          if ( (*(_BYTE *)(*(_QWORD *)(v33 + 40) + 26LL) & 8) == 0 )
          {
            v19 = v175;
            if ( !v175 )
            {
              v19 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v39, v38) + 56968) + 56LL);
              v175 = v19;
            }
            GreHintDCWnd(v19, *(_QWORD *)v33, 0, 0, 0, 0);
            v103 = W32GetUserSessionState(v102, v101);
            GreSelectVisRgn(v19, *(_QWORD *)(v103 + 63320), 2LL);
            GreBitBltInternal(
              v19,
              *((unsigned int *)v28 + 14),
              *((unsigned int *)v28 + 15),
              (unsigned int)(*((_DWORD *)v28 + 16) - *((_DWORD *)v28 + 14)),
              *((_DWORD *)v28 + 17) - *((_DWORD *)v28 + 15),
              v19,
              *((_DWORD *)v28 + 14) - *((_DWORD *)v28 + 18),
              *((_DWORD *)v28 + 15) - *((_DWORD *)v28 + 19),
              13369376,
              0,
              1);
            GreHintDCWnd(v19, 0, 0, 0, 0, 0);
LABEL_75:
            if ( v28[12] )
            {
              v72 = W32GetUserSessionState(v39, v38);
              v73 = (HRGN)v28[12];
              v74 = *(HRGN *)(v72 + 63304);
              v77 = W32GetUserSessionState(v76, v75);
              if ( !CombineOldNewVis(*(HRGN *)(v77 + 63336), v73, v74, v78, v32) )
              {
                v24 = v169;
                goto LABEL_36;
              }
            }
            else
            {
              v185 = *(__m128i *)(*((_QWORD *)v181 + 5) + 88LL);
              TransformRectBetweenCoordinateSpaces(&v185, &v185, v33, v181);
              v166 = W32GetUserSessionState(v165, v164);
              SetRectRgnIndirect(*(_QWORD *)(v166 + 63336), &v185);
            }
            v24 = v169;
            if ( (v32 & 4) == 0 )
            {
              v85 = W32GetUserSessionState(v79, v15);
              if ( (v169 & 0x20) != 0 )
              {
                v88 = *(_QWORD *)(v85 + 63320);
                v89 = W32GetUserSessionState(v87, v86);
                v90 = 5LL;
                v91 = 0LL;
              }
              else
              {
                v151 = *(_QWORD *)(v85 + 63328);
                v88 = *(_QWORD *)(W32GetUserSessionState(v87, v86) + 63320);
                v89 = W32GetUserSessionState(v153, v152);
                v90 = 2LL;
                v91 = v151;
              }
              GreCombineRgn(*(_QWORD *)(v89 + 63328), v88, v91, v90);
              v24 = v169 & 0xFFFFFFDF;
              v169 &= ~0x20u;
            }
            if ( (v24 & 0x20) != 0 )
            {
              if ( (v32 & 4) != 0 )
              {
LABEL_37:
                v16 = v28[12];
                if ( v16 )
                {
                  GreDeleteObject(v16);
                  v28[12] = 0LL;
                }
                if ( (v32 & 8) != 0 )
                  goto LABEL_40;
                if ( (v32 & 5) == 4 )
                {
                  AtomicExecutionCheck::AtomicExecutionCheck(v182);
                  xxxInternalInvalidate((struct tagWND *)v33, (HRGN)1, 0x485u);
                  if ( v182[0] )
                  {
                    v80 = v183;
                    v183 = 0LL;
                    v182[0] = 0;
                    --*(_DWORD *)(v80 + 28);
                  }
                }
                v172 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 63336);
                v81 = LogicalToPhysicalInPlaceRgnWorker(v33, &v172, 0LL);
                v84 = v81;
                if ( (v24 & 0x40) != 0 )
                {
                  if ( !v171 && !v81 )
                  {
                    v180 = *(HRGN *)(W32GetUserSessionState(v83, v82) + 63336);
LABEL_88:
                    v24 &= ~0x40u;
                    v169 = v24;
LABEL_40:
                    v23 = v168;
                    goto LABEL_41;
                  }
                  v116 = W32GetUserSessionState(v83, v82);
                  v117 = 5LL;
                  v118 = 0LL;
                }
                else
                {
                  v133 = *(_QWORD *)(W32GetUserSessionState(v83, v82) + 63296);
                  v116 = W32GetUserSessionState(v135, v134);
                  v117 = 2LL;
                  v118 = v133;
                }
                v119 = v172;
                GreCombineRgn(*(_QWORD *)(v116 + 63296), v172, v118, v117);
                if ( v84 )
                  GreDeleteObject(v119);
                goto LABEL_88;
              }
              v94 = *(_QWORD *)(W32GetUserSessionState(v79, v15) + 63320);
            }
            else
            {
              v94 = *(_QWORD *)(W32GetUserSessionState(v79, v15) + 63328);
            }
            v95 = *(_QWORD *)(W32GetUserSessionState(v93, v92) + 63336);
            v98 = W32GetUserSessionState(v97, v96);
            if ( (unsigned int)GreCombineRgn(*(_QWORD *)(v98 + 63336), v95, v94, 4LL) > 1 )
              goto LABEL_37;
LABEL_36:
            *(_DWORD *)(v33 + 380) &= ~0x4000u;
            LOBYTE(v32) = v32 | 8;
            goto LABEL_37;
          }
LABEL_74:
          v19 = v175;
          goto LABEL_75;
        }
        v172 = v99;
        if ( v99 != v33 )
          goto LABEL_100;
      }
      if ( !v99 )
        goto LABEL_100;
      goto LABEL_113;
    }
LABEL_44:
    if ( v174 )
    {
      v167 = W32GetUserSessionState(v16, v15);
      GreUnlockDisplayArea(*(_QWORD *)(*(_QWORD *)(v167 + 56968) + 40LL), &v186);
    }
    v35 = *(__int64 **)(v3 + 40);
    v36 = *(_DWORD *)(v3 + 28);
    while ( --v36 >= 0 )
    {
      v16 = *v35;
      if ( *v35 )
      {
        v15 = (HRGN)_HMObjectFromHandle(v16);
        if ( (*(_BYTE *)(*((_QWORD *)v15 + 5) + 26LL) & 8) != 0 )
          DeleteOldRedirectionBitmap((__int64)v15);
      }
      v35 += 21;
    }
    if ( (v24 & 0x40) == 0 )
    {
      if ( !*(_DWORD *)(v3 + 28) )
      {
        v174 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5047LL);
      }
      AtomicExecutionCheck::AtomicExecutionCheck(&v185);
      xxxInternalInvalidate(v181, v180, 0x85u);
      if ( v185.m128i_i8[0] )
        --*(_DWORD *)(v185.m128i_i64[1] + 28);
    }
    if ( *(_DWORD *)(W32GetUserSessionState(v16, v15) + 43272) )
      GreClientRgnDone();
    v10 = W32GetUserSessionState(v9, v8);
    GreRedrawSpriteOverlapPresent(*(_QWORD *)(*(_QWORD *)(v10 + 56968) + 40LL));
    if ( v19 )
    {
      GreSelectVisRgn(v19, 0LL, 1LL);
      GreGetBounds(v19, 0LL, 0LL);
      v2 = v23;
    }
    else
    {
      v2 = v168;
    }
  }
  else
  {
LABEL_2:
    v6 = *(_DWORD *)(v3 + 28) - 1;
    if ( v6 >= 0 )
    {
      v7 = (_QWORD *)(*(_QWORD *)(v3 + 40) + 96LL);
      do
      {
        if ( *v7 )
        {
          GreDeleteObject(*v7);
          *v7 = 0LL;
        }
        v7 += 21;
        --v6;
      }
      while ( v6 >= 0 );
    }
  }
  GreUnlockVisRgn();
  zzzEndDeferWinEventNotify();
  return v2;
}
