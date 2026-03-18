/*
 * XREFs of GreCombineRgn @ 0x1C0026E40
 * Callers:
 *     UserSetDCVisRgn @ 0x1C0023820 (UserSetDCVisRgn.c)
 *     NtGdiCombineRgn @ 0x1C0025190 (NtGdiCombineRgn.c)
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0043A70 (GetMonitorDC.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C006AC44 (-UpdateUserScreen@@YAHH@Z.c)
 *     UserValidateCopyRgn @ 0x1C0073690 (UserValidateCopyRgn.c)
 *     EngCombineRgn @ 0x1C0074DD0 (EngCombineRgn.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0075658 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     EngCopyRgn @ 0x1C00BF360 (EngCopyRgn.c)
 *     EngIntersectRgn @ 0x1C00BF480 (EngIntersectRgn.c)
 *     EngSubtractRgn @ 0x1C00BF580 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C00BF5F0 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C00BF660 (EngXorRgn.c)
 * Callees:
 *     IsWin32FreePoolImplSupported_0 @ 0x1C0002C18 (IsWin32FreePoolImplSupported_0.c)
 *     Win32FreePoolImpl_0 @ 0x1C0002C20 (Win32FreePoolImpl_0.c)
 *     IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C38 (IsWin32AllocateFromPagedLookasideListImplSupported_0.c)
 *     Win32AllocateFromPagedLookasideListImpl_0 @ 0x1C0002C40 (Win32AllocateFromPagedLookasideListImpl_0.c)
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C48 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C50 (Win32FreeToPagedLookasideListImpl_0.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C001F2F4 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F318 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001F3CC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027EDC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0027FA0 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0028350 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C002863C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C002865C (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0028690 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0028890 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0028E90 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0029890 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0029990 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C00299E0 (-bSwap@RGNOBJ@@QEAAHPEAV1@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0029E50 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0029EE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     AllocateObject @ 0x1C002B640 (AllocateObject.c)
 *     PushThreadGuardedObject @ 0x1C0052730 (PushThreadGuardedObject.c)
 *     HmgReplace @ 0x1C0071330 (HmgReplace.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall GreCombineRgn(HRGN a1, HRGN a2, HRGN a3, int a4)
{
  __int64 v4; // r14
  unsigned int v8; // r15d
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r12
  char v12; // r13
  char *v13; // rsi
  int v14; // eax
  int v15; // r14d
  __int64 v16; // rdi
  __int64 v17; // rbx
  char v18; // r12
  char *v19; // rsi
  int v20; // eax
  int v21; // r14d
  __int64 v22; // r8
  unsigned int v23; // edi
  int v24; // r13d
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // r8
  _QWORD *ThreadWin32Thread; // rax
  _QWORD *v29; // rdi
  __int64 v30; // r13
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 *v33; // rax
  __int64 v34; // rcx
  HRGN v35; // r13
  __int64 v36; // r12
  _DWORD *v37; // rdi
  int v38; // eax
  __int64 v39; // r14
  unsigned int v40; // ecx
  struct RGNOBJ *v41; // r13
  __int64 v42; // r14
  unsigned int v43; // ebx
  unsigned int *v44; // r12
  __int64 Object; // rax
  __int64 v46; // rdx
  _QWORD *v47; // rax
  __int16 *v48; // rdi
  __int16 *v49; // rbx
  __int64 v50; // r12
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 *v53; // rax
  __int64 v54; // rcx
  int v55; // eax
  __int16 *v56; // rdi
  int v57; // r14d
  __int16 *v58; // rbx
  __int64 v59; // rdx
  __int16 **v60; // rcx
  int v61; // eax
  __int16 **v62; // rcx
  unsigned int v63; // edx
  struct RGNOBJ *v64; // rdx
  __int64 v65; // rdx
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // xmm2_8
  unsigned __int64 v68; // r9
  unsigned __int64 v69; // xmm1_8
  LONG v70; // r8d
  LONG v71; // edx
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // r9
  unsigned __int64 v74; // r10
  int v75; // eax
  _DWORD *SystemArgument2; // rbx
  __int64 v77; // r13
  __int64 v78; // r14
  __int64 v79; // rdi
  __int64 *CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v81; // rax
  __int64 v82; // r12
  signed __int32 v83; // eax
  unsigned int v84; // edx
  __int64 v85; // r12
  __m128i v86; // xmm2
  __int64 v87; // r8
  __int64 v88; // xmm1_8
  volatile __int32 *v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // r14
  __int64 v92; // r13
  __int64 *v93; // rdi
  __int64 *v94; // rbx
  BOOL v95; // r12d
  __int64 *v96; // rcx
  __int64 **v97; // rax
  __int64 *v98; // rcx
  __int64 **v99; // rax
  _QWORD *v100; // rax
  _QWORD *v101; // rbx
  __int64 v102; // rdi
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 *v105; // rax
  __int64 v106; // rcx
  unsigned int v107; // eax
  __int64 *v108; // rbx
  __int64 *v109; // rcx
  __int64 **v110; // rax
  __int64 v112; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v113; // [rsp+40h] [rbp-C8h]
  __int64 v114; // [rsp+48h] [rbp-C0h] BYREF
  int v115; // [rsp+50h] [rbp-B8h]
  __int64 v116; // [rsp+58h] [rbp-B0h]
  _DWORD *v117; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v118; // [rsp+70h] [rbp-98h]
  __int16 *v119; // [rsp+78h] [rbp-90h] BYREF
  int v120; // [rsp+80h] [rbp-88h]
  __int64 v121; // [rsp+88h] [rbp-80h] BYREF
  __int64 v122; // [rsp+90h] [rbp-78h]
  int v123; // [rsp+98h] [rbp-70h]
  __int64 v124; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v125; // [rsp+A8h] [rbp-60h]
  int v126; // [rsp+B0h] [rbp-58h]
  __int16 *v127[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int16 *v128[2]; // [rsp+C8h] [rbp-40h] BYREF
  struct _RECTL v129; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v130[2]; // [rsp+E8h] [rbp-20h] BYREF
  int v131; // [rsp+F8h] [rbp-10h]
  _QWORD v132[2]; // [rsp+100h] [rbp-8h] BYREF
  int v133; // [rsp+110h] [rbp+8h]
  volatile __int32 *v134; // [rsp+118h] [rbp+10h]
  int v135; // [rsp+120h] [rbp+18h] BYREF
  __int64 v136; // [rsp+128h] [rbp+20h]
  _QWORD v137[2]; // [rsp+130h] [rbp+28h] BYREF
  int v138; // [rsp+140h] [rbp+38h]
  unsigned int v139; // [rsp+154h] [rbp+4Ch]
  int v140; // [rsp+158h] [rbp+50h]
  _QWORD v141[5]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v142; // [rsp+188h] [rbp+80h]
  __int32 v145; // [rsp+1F0h] [rbp+E8h]
  __int32 v146; // [rsp+1F0h] [rbp+E8h]
  BOOL v147; // [rsp+1F0h] [rbp+E8h]

  v4 = a4;
  if ( (unsigned int)(a4 - 1) <= 4 )
  {
    if ( a4 == 5 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v124, a1, 0);
      v8 = 1;
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v137, a2, 1);
      v9 = v124;
      v10 = v137[0];
      if ( v124 )
      {
        if ( !v137[0] )
        {
LABEL_13:
          EngSetLastError(6u);
LABEL_14:
          v8 = 0;
LABEL_15:
          if ( !v138 )
            RGNOBJ::UpdateUserRgn((RGNOBJ *)v137);
          if ( v10 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
            v9 = v124;
          }
          if ( !v126 )
            RGNOBJ::UpdateUserRgn((RGNOBJ *)&v124);
          if ( v9 )
            _InterlockedDecrement((volatile signed __int32 *)(v9 + 12));
          return v8;
        }
        v11 = v124;
        v12 = *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v125 + 14);
        v13 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v125;
        v13[14] = 0;
        v14 = RGNOBJ::bCopy((RGNOBJ *)&v124, (struct RGNOBJ *)v137);
        v9 = v124;
        v15 = v14;
        if ( v14 && v124 != v11 )
          HmgReplace(v125, v124, 0LL, 1LL, 0);
        v13[14] = v12;
        if ( v15 )
        {
          if ( *(_DWORD *)(v9 + 84) != 1 )
            v8 = (*(_DWORD *)(v9 + 80) > 0xA0u) + 2;
          goto LABEL_15;
        }
      }
      if ( v10 && v9 )
        goto LABEL_14;
      goto LABEL_13;
    }
    if ( a1 != a2 && a1 != a3 )
    {
      v8 = 1;
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v132, a2, 1);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v130, a3, 1);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v121, a1, 0);
      v16 = v121;
      if ( !v132[0] )
        goto LABEL_36;
      if ( v130[0] && v121 )
      {
        v17 = v121;
        v18 = *((_BYTE *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v122 + 14);
        v19 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v122;
        v19[14] = 0;
        v20 = RGNOBJ::iCombine((RGNOBJ *)&v121, (struct RGNOBJ *)v132, (struct RGNOBJ *)v130, v4);
        v16 = v121;
        v21 = v20;
        if ( v121 != v17 )
          HmgReplace(v122, v121, 0LL, 1LL, 0);
        v19[14] = v18;
        if ( v21 )
        {
          if ( *(_DWORD *)(v16 + 84) != 1 )
            v8 = (*(_DWORD *)(v16 + 80) > 0xA0u) + 2;
          goto LABEL_38;
        }
      }
      if ( !v132[0] || !v130[0] || !v16 )
LABEL_36:
        EngSetLastError(6u);
      v8 = 0;
LABEL_38:
      if ( !v123 )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)&v121);
      if ( v16 )
        _InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
      if ( !v131 )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)v130);
      if ( v130[0] )
        _InterlockedDecrement((volatile signed __int32 *)(v130[0] + 12LL));
      if ( !v133 )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)v132);
      if ( v132[0] )
        _InterlockedDecrement((volatile signed __int32 *)(v132[0] + 12LL));
      return v8;
    }
    if ( a2 == a3 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v141, a1, 0);
      v22 = v141[0];
      if ( v141[0] )
      {
        if ( (unsigned int)(v4 - 3) <= 1 )
        {
          *(_DWORD *)(v141[0] + 80LL) = 120;
          *(_QWORD *)(v22 + 84) = 1LL;
          *(_QWORD *)(v22 + 92) = 0LL;
          *(_DWORD *)(v22 + 100) = 0;
          *(_DWORD *)(v22 + 104) = 0;
          *(_DWORD *)(v22 + 108) = 0x80000000;
          *(_QWORD *)(v22 + 112) = 0x7FFFFFFFLL;
          *(_QWORD *)(v22 + 40) = v22 + 120;
        }
        v8 = RGNOBJ::iComplexity((RGNOBJ *)v141);
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v141);
      }
      else
      {
        EngSetLastError(6u);
        v8 = 0;
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v141);
      }
      return v8;
    }
    v23 = 216;
    LODWORD(v113) = 0;
    v8 = 1;
    if ( LODWORD(WPP_MAIN_CB.SecurityDescriptor) == 4 )
    {
      v24 = 1;
      v23 = 376;
    }
    else
    {
      v24 = 0;
    }
    if ( dword_1C0103610 >= v23
      && (int)IsWin32AllocateFromPagedLookasideListImplSupported_0() >= 0
      && (v26 = Win32AllocateFromPagedLookasideListImpl_0()) != 0 )
    {
      *(_QWORD *)v26 = 0LL;
      *(_QWORD *)(v26 + 8) = 0LL;
      *(_QWORD *)(v26 + 16) = 0LL;
      if ( v24 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v23 + v26 - 160), 0LL);
      LOWORD(v145) = *(_WORD *)(v26 + 12);
      HIWORD(v145) = *(_WORD *)(v26 + 14) | 0x8000;
      _InterlockedExchange((volatile __int32 *)(v26 + 12), v145);
    }
    else
    {
      v26 = (__int64)PALLOCMEM2(v23, 875587655LL, 0);
      if ( !v26 )
      {
        EngSetLastError(8u);
        v26 = 0LL;
LABEL_70:
        v112 = v26;
        ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread(), v25, v27);
        if ( ThreadWin32Thread )
        {
          if ( *ThreadWin32Thread )
          {
            if ( v26 )
            {
              v29 = (_QWORD *)(v26 + 48);
              if ( v26 != -48 )
              {
                KeEnterCriticalRegion();
                v30 = 0LL;
                v33 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v31, v32);
                if ( v33 )
                  v30 = *v33;
                *(_QWORD *)(v26 + 64) = v26;
                *(_QWORD *)(v26 + 72) = CleanUpRegion;
                if ( v30 )
                {
                  v34 = *(_QWORD *)(v30 + 88);
                  *v29 = v34;
                  *(_QWORD *)(v26 + 56) = v30 + 88;
                  if ( *(_QWORD *)(v34 + 8) != v30 + 88 )
                    __fastfail(3u);
                  *(_QWORD *)(v34 + 8) = v29;
                  *(_QWORD *)(v30 + 88) = v29;
                }
                else
                {
                  *(_QWORD *)(v26 + 56) = v26 + 48;
                  *v29 = v29;
                }
                KeLeaveCriticalRegion();
              }
            }
          }
        }
        v35 = a2;
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v114, a2, 0);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v117, a3, 0);
        v36 = v114;
        v37 = v117;
        if ( !v26 )
          goto LABEL_225;
        if ( !v114 )
        {
          v39 = v112;
LABEL_228:
          EngSetLastError(6u);
          goto LABEL_229;
        }
        if ( !v117 )
        {
LABEL_225:
          v39 = v112;
          goto LABEL_226;
        }
        if ( (struct REGION *)v26 == prgnDefault )
        {
LABEL_86:
          v38 = RGNOBJ::iComplexity((RGNOBJ *)&v112);
          v39 = v112;
          goto LABEL_171;
        }
        if ( (unsigned int)(v4 - 1) <= 1 )
        {
          if ( *(_DWORD *)(v114 + 80) == 160
            && *(_DWORD *)(v114 + 88) <= v117[22]
            && *(_DWORD *)(v114 + 96) >= v117[24]
            && *(_DWORD *)(v114 + 92) <= v117[23]
            && *(_DWORD *)(v114 + 100) >= v117[25] )
          {
            v40 = *(_DWORD *)(v26 + 24);
            v41 = (struct RGNOBJ *)&v117;
            if ( (_DWORD)v4 != 1 )
              v41 = (struct RGNOBJ *)&v114;
            if ( v40 > 0xD8 )
            {
              if ( *(_DWORD *)(*(_QWORD *)v41 + 24LL) > 0xD8u )
              {
                v63 = *(_DWORD *)(*(_QWORD *)v41 + 80LL);
                if ( v40 >= v63 )
                {
                  RGNOBJ::vCopy((RGNOBJ *)&v112, v41);
                  goto LABEL_98;
                }
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v128, v63);
                if ( !v128[0] )
                {
                  RGNMEMOBJTMP::~RGNMEMOBJTMP(v128);
                  goto LABEL_150;
                }
                RGNOBJ::vCopy((RGNOBJ *)v128, v41);
                v61 = RGNOBJ::bSwap((RGNOBJ *)&v112, (struct RGNOBJ *)v128);
                v62 = v128;
              }
              else
              {
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v127);
                if ( !v127[0] )
                {
                  RGNMEMOBJTMP::~RGNMEMOBJTMP(v127);
                  goto LABEL_150;
                }
                RGNOBJ::vCopy((RGNOBJ *)v127, v41);
                v61 = RGNOBJ::bSwap((RGNOBJ *)&v112, (struct RGNOBJ *)v127);
                v62 = v127;
              }
              v57 = v61;
              RGNMEMOBJTMP::~RGNMEMOBJTMP(v62);
            }
            else
            {
              v42 = *(_QWORD *)v41;
              if ( *(_DWORD *)(*(_QWORD *)v41 + 24LL) <= 0xD8u )
              {
                memmove((void *)(v26 + 80), (const void *)(v42 + 80), *(unsigned int *)(v42 + 80) - 80LL);
                *(_QWORD *)(v26 + 40) = v26 + *(_DWORD *)(v42 + 40) - (int)v42 - 104 + 104LL;
                goto LABEL_98;
              }
              v43 = *(_DWORD *)(v42 + 80);
              v44 = (unsigned int *)(v42 + 80);
              v120 = 0;
              if ( v43 < 0xD8 )
                v43 = 216;
              Object = AllocateObject(v43);
              v119 = (__int16 *)Object;
              if ( Object )
              {
                *(_DWORD *)(Object + 80) = 120;
                v46 = Object + 104;
                *(_QWORD *)(Object + 84) = 1LL;
                *(_QWORD *)(Object + 92) = 0LL;
                *(_DWORD *)(Object + 100) = 0;
                *(_DWORD *)(Object + 104) = 0;
                *(_DWORD *)(Object + 108) = 0x80000000;
                *(_QWORD *)(Object + 112) = 0x7FFFFFFFLL;
                *(_QWORD *)(Object + 40) = Object + 120;
                *(_DWORD *)(Object + 24) = v43;
                *(_QWORD *)(Object + 28) = 0LL;
                *(_QWORD *)(Object + 56) = Object + 48;
                *(_QWORD *)(Object + 48) = Object + 48;
              }
              v47 = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread(), v46, Object);
              if ( v47 && *v47 )
              {
                v48 = v119;
                if ( !v119 )
                {
LABEL_117:
                  RGNMEMOBJTMP::~RGNMEMOBJTMP(&v119);
                  v36 = v114;
                  v37 = v117;
LABEL_150:
                  v39 = v112;
                  v65 = v112 + 104;
                  *(_DWORD *)(v112 + 80) = 120;
                  *(_QWORD *)(v39 + 84) = 1LL;
                  *(_QWORD *)(v39 + 92) = 0LL;
                  *(_DWORD *)(v39 + 100) = 0;
                  *(_DWORD *)v65 = 0;
                  *(_DWORD *)(v65 + 4) = 0x80000000;
                  *(_QWORD *)(v65 + 8) = 0x7FFFFFFFLL;
                  *(_QWORD *)(v39 + 40) = v65 + 16;
                  goto LABEL_226;
                }
                v49 = v119 + 24;
                if ( v119 != (__int16 *)-48LL )
                {
                  KeEnterCriticalRegion();
                  v50 = 0LL;
                  v53 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v51, v52);
                  if ( v53 )
                    v50 = *v53;
                  v48 = v119;
                  *((_QWORD *)v49 + 2) = v119;
                  *((_QWORD *)v49 + 3) = CleanUpRegion;
                  if ( v50 )
                  {
                    v54 = *(_QWORD *)(v50 + 88);
                    *(_QWORD *)v49 = v54;
                    *((_QWORD *)v49 + 1) = v50 + 88;
                    if ( *(_QWORD *)(v54 + 8) != v50 + 88 )
                      __fastfail(3u);
                    *(_QWORD *)(v54 + 8) = v49;
                    *(_QWORD *)(v50 + 88) = v49;
                    KeLeaveCriticalRegion();
                    v44 = (unsigned int *)(v42 + 80);
                  }
                  else
                  {
                    *((_QWORD *)v49 + 1) = v49;
                    *(_QWORD *)v49 = v49;
                    KeLeaveCriticalRegion();
                    v44 = (unsigned int *)(v42 + 80);
                  }
                }
              }
              else
              {
                v48 = v119;
              }
              if ( !v48 )
                goto LABEL_117;
              memmove(v48 + 40, v44, *v44 - 80LL);
              *((_QWORD *)v48 + 5) = (char *)v48 + *(_DWORD *)(v42 + 40) - *(_DWORD *)v41;
              v55 = RGNOBJ::bSwap((RGNOBJ *)&v112, (struct RGNOBJ *)&v119);
              v56 = v119;
              v57 = v55;
              if ( v119 )
              {
                v58 = v119 + 24;
                if ( v119 != (__int16 *)-48LL )
                {
                  KeEnterCriticalRegion();
                  v59 = *(_QWORD *)v58;
                  v60 = (__int16 **)*((_QWORD *)v56 + 7);
                  if ( *(__int16 **)(*(_QWORD *)v58 + 8LL) != v58 || *v60 != v58 )
                    __fastfail(3u);
                  *v60 = (__int16 *)v59;
                  *(_QWORD *)(v59 + 8) = v60;
                  *((_QWORD *)v56 + 7) = v56 + 24;
                  *(_QWORD *)v58 = v58;
                  KeLeaveCriticalRegion();
                }
                if ( v56 != (__int16 *)prgnDefault )
                {
                  if ( v56[7] >= 0 )
                  {
                    Win32FreePool();
                  }
                  else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
                  {
                    Win32FreeToPagedLookasideListImpl_0();
                  }
                }
              }
              v119 = 0LL;
              if ( v120 == 1 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v119);
              v36 = v114;
              v37 = v117;
            }
            if ( !v57 )
              goto LABEL_150;
LABEL_98:
            v39 = v112;
            v35 = a2;
            if ( *(_DWORD *)(v112 + 84) == 1 )
              v38 = 1;
            else
              v38 = (*(_DWORD *)(v112 + 80) > 0xA0u) + 2;
            goto LABEL_171;
          }
          if ( v117[20] == 160 && (unsigned int)RGNOBJ::bContain((RGNOBJ *)&v117, (struct RGNOBJ *)&v114) )
          {
            v64 = (struct RGNOBJ *)&v114;
            if ( (_DWORD)v4 != 1 )
              v64 = (struct RGNOBJ *)&v117;
            if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v112, v64) )
              goto LABEL_86;
            goto LABEL_150;
          }
        }
        if ( (_DWORD)v4 == 1 && *(_DWORD *)(v36 + 80) == 160 && v37[20] == 160 )
        {
          v66 = *(_QWORD *)(v36 + 88);
          v67 = _mm_srli_si128(*(__m128i *)(v36 + 88), 8).m128i_u64[0];
          v68 = *((_QWORD *)v37 + 11);
          v69 = _mm_srli_si128(*(__m128i *)(v37 + 22), 8).m128i_u64[0];
          v70 = *(_OWORD *)(v37 + 22);
          if ( (int)v66 > (int)v68 )
            v70 = *(_QWORD *)(v36 + 88);
          v71 = v69;
          v129.left = v70;
          if ( (int)v67 < (int)v69 )
            v71 = v67;
          v72 = HIDWORD(v66);
          v73 = HIDWORD(v68);
          v129.right = v71;
          if ( (int)v72 > (int)v73 )
            LODWORD(v73) = v72;
          v74 = HIDWORD(v69);
          v129.top = v73;
          if ( SHIDWORD(v67) < SHIDWORD(v69) )
            LODWORD(v74) = HIDWORD(v67);
          v129.bottom = v74;
          if ( v70 >= v71 || (int)v73 >= (int)v74 )
          {
            v39 = v112;
            *(_DWORD *)(v26 + 80) = 120;
            *(_QWORD *)(v26 + 84) = 1LL;
            *(_QWORD *)(v26 + 92) = 0LL;
            *(_DWORD *)(v26 + 100) = 0;
            *(_DWORD *)(v26 + 104) = 0;
            *(_DWORD *)(v26 + 108) = 0x80000000;
            *(_QWORD *)(v26 + 112) = 0x7FFFFFFFLL;
            *(_QWORD *)(v26 + 40) = v26 + 120;
          }
          else
          {
            RGNOBJ::vSet((RGNOBJ *)&v112, &v129);
            v39 = v112;
          }
          goto LABEL_172;
        }
        v75 = RGNOBJ::bMerge(
                (RGNOBJ *)&v112,
                (struct RGNOBJ *)&v114,
                (struct RGNOBJ *)&v117,
                *((_BYTE *)&gafjRgnOp + v4));
        v39 = v112;
        if ( v75 )
        {
          if ( *(_DWORD *)(v112 + 84) == 1 )
            v38 = 1;
          else
            v38 = (*(_DWORD *)(v112 + 80) > 0xA0u) + 2;
LABEL_171:
          if ( v38 )
          {
LABEL_172:
            if ( a1 == v35 )
            {
              v134 = (volatile __int32 *)(v39 + 12);
              _InterlockedIncrement((volatile signed __int32 *)(v39 + 12));
              v136 = v114;
              _InterlockedIncrement((volatile signed __int32 *)(v114 + 12));
              SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
              v77 = 0LL;
              v78 = (unsigned __int16)v115;
              v79 = 3LL * (unsigned __int16)v115;
              CurrentThreadWin32ThreadAndEnterCriticalRegion = (__int64 *)PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v135);
              if ( CurrentThreadWin32ThreadAndEnterCriticalRegion
                && (v81 = *CurrentThreadWin32ThreadAndEnterCriticalRegion) != 0 )
              {
                v82 = *(_QWORD *)(v81 + 72);
              }
              else
              {
                v82 = 0LL;
              }
LABEL_177:
              _m_prefetchw(&SystemArgument2[2 * v79 + 2]);
              v83 = SystemArgument2[2 * v79 + 2];
              v84 = v83 & 0xFFFFFFFE;
              v139 = v83;
              if ( ((v83 & 0xFFFFFFFE) == (v135 & 0xFFFFFFFC) || !v84 || v82 && v84 == *(_DWORD *)(v82 + 8))
                && (SystemArgument2[2 * v79 + 3] & 0x20000000) == 0 )
              {
                while ( (SystemArgument2[2 * v79 + 3] & 0x40000000) == 0 )
                {
                  if ( (v83 & 1) != 0 )
                  {
                    KeDelayExecutionThread(0, 0, gpLockShortDelay);
                    goto LABEL_177;
                  }
                  v140 = v83 | 1;
                  if ( v83 != _InterlockedCompareExchange(&SystemArgument2[2 * v79 + 2], v83 | 1, v83)
                    || (SystemArgument2[2 * v79 + 3] & 0x40000000) != 0 )
                  {
                    goto LABEL_177;
                  }
                  *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v78) = 0LL;
                  HIBYTE(SystemArgument2[2 * v79 + 3]) |= 0x40u;
                  _m_prefetchw(&SystemArgument2[2 * v79 + 2]);
                  v139 = SystemArgument2[2 * v79 + 2] & 0xFFFFFFFE;
                  _InterlockedExchange(&SystemArgument2[2 * v79 + 2], v139);
                  v83 = v139;
                }
                v85 = 8 * v78;
                ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v78, 0LL);
                v39 = v112;
                v77 = *(_QWORD *)&SystemArgument2[2 * v79];
                *(_QWORD *)&SystemArgument2[2 * v79] = v112;
                if ( (SystemArgument2[2 * v79 + 3] & 0x40000000) != 0 )
                {
                  ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + v85);
                }
                else
                {
                  _m_prefetchw(&SystemArgument2[2 * v79 + 2]);
                  v139 = SystemArgument2[2 * v79 + 2] & 0xFFFFFFFE;
                  _InterlockedExchange(&SystemArgument2[2 * v79 + 2], v139);
                  v39 = v112;
                }
                KeLeaveCriticalRegion();
              }
              else
              {
                KeLeaveCriticalRegion();
                v39 = v112;
              }
              v36 = v114;
              if ( v77 == v114 )
              {
                v86 = *(__m128i *)v39;
                v87 = v136;
                v88 = *(_QWORD *)(v39 + 16);
                v89 = v134;
                *(_QWORD *)v39 = *(_QWORD *)v114;
                LOWORD(v146) = *(_WORD *)(v87 + 12);
                HIWORD(v146) = *(_WORD *)(v39 + 14);
                _InterlockedExchange(v89, v146);
                v90 = v114;
                v142 = v88;
                *(_QWORD *)(v112 + 16) = *(_QWORD *)(v114 + 16);
                *(_QWORD *)v90 = v86.m128i_i64[0];
                LOWORD(v146) = _mm_srli_si128(v86, 8).m128i_i16[2];
                HIWORD(v146) = *(_WORD *)(v90 + 14);
                _InterlockedExchange((volatile __int32 *)(v87 + 12), v146);
                v91 = v114;
                v92 = v112;
                *(_QWORD *)(v90 + 16) = v142;
                LODWORD(v89) = *(_DWORD *)(v91 + 32);
                v93 = (__int64 *)(v91 + 48);
                v94 = (__int64 *)(v92 + 48);
                *(_DWORD *)(v91 + 32) = *(_DWORD *)(v92 + 32);
                *(_DWORD *)(v92 + 32) = (_DWORD)v89;
                v95 = *v93 == (_QWORD)v93;
                v147 = *v94 == (_QWORD)v94;
                if ( v91 != -48 )
                {
                  KeEnterCriticalRegion();
                  v96 = (__int64 *)*v93;
                  v97 = *(__int64 ***)(v91 + 56);
                  if ( *(__int64 **)(*v93 + 8) != v93 || *v97 != v93 )
                    __fastfail(3u);
                  *v97 = v96;
                  v96[1] = (__int64)v97;
                  *(_QWORD *)(v91 + 56) = v91 + 48;
                  *v93 = (__int64)v93;
                  KeLeaveCriticalRegion();
                }
                if ( v92 != -48 )
                {
                  KeEnterCriticalRegion();
                  v98 = (__int64 *)*v94;
                  v99 = *(__int64 ***)(v92 + 56);
                  if ( *(__int64 **)(*v94 + 8) != v94 || *v99 != v94 )
                    __fastfail(3u);
                  *v99 = v98;
                  v98[1] = (__int64)v99;
                  *(_QWORD *)(v92 + 56) = v92 + 48;
                  *v94 = (__int64)v94;
                  KeLeaveCriticalRegion();
                }
                v114 = v92;
                v112 = v91;
                v100 = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread(), v90, v87);
                if ( v100 && *v100 )
                {
                  if ( !v95 )
                    PushThreadGuardedObject(v114 + 48, v114, CleanUpRegion);
                  if ( !v147 )
                  {
                    v101 = (_QWORD *)(v91 + 48);
                    if ( v91 != -48 )
                    {
                      KeEnterCriticalRegion();
                      v102 = 0LL;
                      v105 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v103, v104);
                      if ( v105 )
                        v102 = *v105;
                      *(_QWORD *)(v91 + 64) = v91;
                      *(_QWORD *)(v91 + 72) = CleanUpRegion;
                      if ( v102 )
                      {
                        v106 = *(_QWORD *)(v102 + 88);
                        *v101 = v106;
                        *(_QWORD *)(v91 + 56) = v102 + 88;
                        if ( *(_QWORD *)(v106 + 8) != v102 + 88 )
                          __fastfail(3u);
                        *(_QWORD *)(v106 + 8) = v101;
                        *(_QWORD *)(v102 + 88) = v101;
                      }
                      else
                      {
                        *(_QWORD *)(v91 + 56) = v91 + 48;
                        *v101 = v101;
                      }
                      KeLeaveCriticalRegion();
                    }
                  }
                }
                _InterlockedDecrement((volatile signed __int32 *)(v91 + 12));
                _InterlockedDecrement((volatile signed __int32 *)(v114 + 12));
                v36 = v114;
                v39 = v112;
                v37 = v117;
                if ( *(_DWORD *)(v114 + 84) != 1 )
                  v8 = (*(_DWORD *)(v114 + 80) > 0xA0u) + 2;
                goto LABEL_230;
              }
            }
            else
            {
              if ( (unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)&v117, (struct RGNOBJ *)&v112) )
              {
                v107 = RGNOBJ::iComplexity((RGNOBJ *)&v117);
                v39 = v112;
                v8 = v107;
                v37 = v117;
LABEL_230:
                if ( !(_DWORD)v118 )
                  RGNOBJ::UpdateUserRgn((RGNOBJ *)&v117);
                if ( v37 )
                {
                  _InterlockedDecrement(v37 + 3);
                  v39 = v112;
                  v36 = v114;
                }
                if ( !(_DWORD)v116 )
                  RGNOBJ::UpdateUserRgn((RGNOBJ *)&v114);
                if ( v36 )
                {
                  _InterlockedDecrement((volatile signed __int32 *)(v36 + 12));
                  v39 = v112;
                }
                if ( v39 )
                {
                  v108 = (__int64 *)(v39 + 48);
                  if ( v39 != -48 )
                  {
                    KeEnterCriticalRegion();
                    v109 = (__int64 *)*v108;
                    v110 = *(__int64 ***)(v39 + 56);
                    if ( *(__int64 **)(*v108 + 8) != v108 || *v110 != v108 )
                      __fastfail(3u);
                    *v110 = v109;
                    v109[1] = (__int64)v110;
                    *(_QWORD *)(v39 + 56) = v39 + 48;
                    *v108 = (__int64)v108;
                    KeLeaveCriticalRegion();
                  }
                  if ( (struct REGION *)v39 != prgnDefault )
                  {
                    if ( *(__int16 *)(v39 + 14) >= 0 )
                    {
                      if ( (int)IsWin32FreePoolImplSupported_0() >= 0 )
                        Win32FreePoolImpl_0();
                    }
                    else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
                    {
                      Win32FreeToPagedLookasideListImpl_0();
                    }
                  }
                }
                v112 = 0LL;
                if ( (_DWORD)v113 == 1 )
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v112);
                return v8;
              }
              v39 = v112;
            }
            v37 = v117;
LABEL_229:
            v8 = 0;
            goto LABEL_230;
          }
          goto LABEL_226;
        }
        *(_DWORD *)(v112 + 80) = 120;
        *(_QWORD *)(v39 + 84) = 1LL;
        *(_QWORD *)(v39 + 92) = 0LL;
        *(_DWORD *)(v39 + 100) = 0;
        *(_DWORD *)(v39 + 104) = 0;
        *(_DWORD *)(v39 + 108) = 0x80000000;
        *(_QWORD *)(v39 + 112) = 0x7FFFFFFFLL;
        *(_QWORD *)(v39 + 40) = v39 + 120;
LABEL_226:
        if ( v36 && v37 )
          goto LABEL_229;
        goto LABEL_228;
      }
      *(_QWORD *)v26 = 0LL;
      *(_QWORD *)(v26 + 8) = 0LL;
      *(_QWORD *)(v26 + 16) = 0LL;
      if ( v24 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v23 + v26 - 160), 0LL);
    }
    *(_QWORD *)(v26 + 24) = 216LL;
    *(_DWORD *)(v26 + 80) = 0;
    *(_DWORD *)(v26 + 32) = 0;
    *(_QWORD *)(v26 + 56) = v26 + 48;
    *(_QWORD *)(v26 + 48) = v26 + 48;
    goto LABEL_70;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
