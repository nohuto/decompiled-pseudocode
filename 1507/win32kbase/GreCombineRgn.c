/*
 * XREFs of GreCombineRgn @ 0x1C0040310
 * Callers:
 *     UserValidateCopyRgn @ 0x1C0010ED0 (UserValidateCopyRgn.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     NtGdiCombineRgn @ 0x1C0042B10 (NtGdiCombineRgn.c)
 *     UserSetDCVisRgn @ 0x1C0044440 (UserSetDCVisRgn.c)
 *     GetMonitorDC @ 0x1C0053E98 (GetMonitorDC.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0056A9C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ?UpdateUserScreen@@YAHH@Z @ 0x1C0058B10 (-UpdateUserScreen@@YAHH@Z.c)
 *     EngCombineRgn @ 0x1C0083FA0 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C00BDC00 (EngCopyRgn.c)
 *     EngIntersectRgn @ 0x1C00BDDA0 (EngIntersectRgn.c)
 *     EngSubtractRgn @ 0x1C00BDF00 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C00BDF90 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C00BE020 (EngXorRgn.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported_0 @ 0x1C0002BB8 (IsWin32AllocPoolImplSupported_0.c)
 *     Win32AllocPoolImpl_0 @ 0x1C0002BC0 (Win32AllocPoolImpl_0.c)
 *     IsWin32FreePoolImplSupported_0 @ 0x1C0002BE8 (IsWin32FreePoolImplSupported_0.c)
 *     Win32FreePoolImpl_0 @ 0x1C0002BF0 (Win32FreePoolImpl_0.c)
 *     IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C08 (IsWin32AllocateFromPagedLookasideListImplSupported_0.c)
 *     Win32AllocateFromPagedLookasideListImpl_0 @ 0x1C0002C10 (Win32AllocateFromPagedLookasideListImpl_0.c)
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C18 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C20 (Win32FreeToPagedLookasideListImpl_0.c)
 *     HmgReplace @ 0x1C000EBA0 (HmgReplace.c)
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     PushThreadGuardedObject @ 0x1C001CA70 (PushThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C003E0B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003E0E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C003E7A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C003EE60 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C003FAF0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C003FBF0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?bSwap@RGNOBJ@@QEAAHPEAV1@@Z @ 0x1C003FC40 (-bSwap@RGNOBJ@@QEAAHPEAV1@@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C00400F0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0040180 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0042C0C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0042CD0 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C0049F18 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049F40 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0049FFC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C004C220 (Win32AllocateFromPagedLookasideList.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00AEF50 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00B0F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GreCombineRgn(HRGN a1, HRGN a2, HRGN a3, int a4)
{
  __int64 v4; // r14
  HRGN v7; // r13
  unsigned int v8; // r15d
  __int64 v9; // rbx
  char v10; // r14
  __int64 v11; // rdi
  int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  char v16; // si
  __int64 v17; // rdi
  int v18; // r14d
  __int64 v19; // r8
  unsigned int v20; // edi
  __int64 v21; // rbx
  _QWORD *ThreadWin32Thread; // rax
  _QWORD *v23; // rdi
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  HRGN v28; // rdi
  __int64 v29; // r8
  __int64 v30; // rdx
  int v31; // eax
  __int16 *v32; // r14
  unsigned int v33; // ecx
  struct RGNOBJ *v34; // r12
  __int64 v35; // rax
  unsigned int v36; // r13d
  unsigned int v37; // r14d
  __int64 v38; // rdi
  _QWORD *v39; // rax
  _QWORD *v40; // r14
  __int64 v41; // r13
  __int64 *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // r12
  __int16 v47; // r8
  __int16 v48; // cx
  __m128i v49; // xmm2
  int v50; // ecx
  int v51; // ecx
  BOOL v52; // r13d
  __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // r13
  __int64 *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rcx
  _QWORD *v65; // rax
  int v66; // eax
  __m128i **v67; // rcx
  unsigned int v68; // edx
  int v69; // ebx
  struct RGNOBJ *v70; // rdx
  __int16 *v71; // rdx
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // xmm2_8
  unsigned __int64 v74; // r9
  unsigned __int64 v75; // xmm1_8
  LONG v76; // r8d
  LONG v77; // edx
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // r9
  unsigned __int64 v80; // r10
  int v81; // eax
  volatile __int32 *v82; // r13
  __int64 v83; // rbx
  __int64 v84; // r14
  __int64 v85; // rdi
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v87; // r12
  signed __int32 v88; // eax
  unsigned int v89; // edx
  __int64 v90; // r12
  __int16 *v91; // rax
  bool v92; // zf
  __int16 v93; // r8
  __int16 v94; // ax
  __m128i v95; // xmm2
  __int16 *v96; // r14
  __int16 *v97; // rbx
  int v98; // ecx
  int v99; // ecx
  _QWORD *v100; // rdi
  BOOL v101; // r12d
  BOOL v102; // r13d
  __int64 v103; // rcx
  _QWORD *v104; // rax
  __int64 v105; // rcx
  __int16 **v106; // rax
  __int64 v107; // rdi
  _QWORD *v108; // rax
  _QWORD *v109; // rbx
  __int64 v110; // r14
  __int64 *v111; // rax
  __int64 v112; // rcx
  unsigned int v113; // eax
  __int16 *v114; // rbx
  __int64 v115; // rcx
  __int16 **v116; // rax
  __int16 *v118; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v119; // [rsp+40h] [rbp-C8h]
  __int16 *v120; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v121; // [rsp+50h] [rbp-B8h] BYREF
  int v122; // [rsp+70h] [rbp-98h]
  __int64 v123; // [rsp+78h] [rbp-90h]
  __int64 v124; // [rsp+80h] [rbp-88h] BYREF
  char v125[40]; // [rsp+88h] [rbp-80h] BYREF
  int v126; // [rsp+B0h] [rbp-58h]
  __m128i *v127[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int16 *v128; // [rsp+C8h] [rbp-40h]
  __m128i *v129[2]; // [rsp+D0h] [rbp-38h] BYREF
  struct _RECTL v130; // [rsp+E0h] [rbp-28h] BYREF
  int v131; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v132; // [rsp+F8h] [rbp-10h] BYREF
  char v133[32]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v134; // [rsp+120h] [rbp+18h]
  int v135; // [rsp+128h] [rbp+20h]
  __int64 v136; // [rsp+130h] [rbp+28h] BYREF
  int v137; // [rsp+138h] [rbp+30h]
  __int64 v138; // [rsp+140h] [rbp+38h] BYREF
  char v139[32]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v140; // [rsp+168h] [rbp+60h]
  int v141; // [rsp+170h] [rbp+68h]
  unsigned int v142; // [rsp+184h] [rbp+7Ch]
  int v143; // [rsp+188h] [rbp+80h]
  __int64 v144; // [rsp+1A0h] [rbp+98h]
  __int64 v145; // [rsp+1A8h] [rbp+A0h] BYREF
  char v146[40]; // [rsp+1B0h] [rbp+A8h] BYREF
  int v147; // [rsp+1D8h] [rbp+D0h]
  __int64 v148; // [rsp+1E0h] [rbp+D8h] BYREF
  char v149[40]; // [rsp+1E8h] [rbp+E0h] BYREF
  int v150; // [rsp+210h] [rbp+108h]
  __int64 v151; // [rsp+218h] [rbp+110h] BYREF
  char v152[40]; // [rsp+220h] [rbp+118h] BYREF
  int v153; // [rsp+248h] [rbp+140h]
  _QWORD v154[6]; // [rsp+250h] [rbp+148h] BYREF
  int v157; // [rsp+2E0h] [rbp+1D8h]
  __int32 v158; // [rsp+2E0h] [rbp+1D8h]
  int v159; // [rsp+2E0h] [rbp+1D8h]
  __int32 v160; // [rsp+2E0h] [rbp+1D8h]
  __int32 v161; // [rsp+2E0h] [rbp+1D8h]
  BOOL v162; // [rsp+2E0h] [rbp+1D8h]
  __int32 v163; // [rsp+2E0h] [rbp+1D8h]

  v4 = a4;
  v7 = a1;
  if ( (unsigned int)(a4 - 1) <= 4 )
  {
    if ( a4 == 5 )
    {
      v8 = 1;
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v138, a1, 0, 1);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v151, a2, 1, 0);
      v9 = v138;
      if ( v138 )
      {
        if ( !v151 )
        {
LABEL_14:
          EngSetLastError(6u);
LABEL_15:
          v8 = 0;
LABEL_16:
          if ( !v153 )
            RGNOBJ::UpdateUserRgn((RGNOBJ *)&v151);
          if ( v151 )
            _InterlockedDecrement((volatile signed __int32 *)(v151 + 12));
          UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v152);
          if ( !v141 )
            RGNOBJ::UpdateUserRgn((RGNOBJ *)&v138);
          if ( v138 )
            _InterlockedDecrement((volatile signed __int32 *)(v138 + 12));
          UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v139);
          return v8;
        }
        v10 = *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v140 + 14);
        v11 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v140;
        *(_BYTE *)(v11 + 14) = 0;
        v12 = RGNOBJ::bCopy((RGNOBJ *)&v138, (struct RGNOBJ *)&v151);
        if ( v12 && v138 != v9 )
          HmgReplace(v140, v138);
        *(_BYTE *)(v11 + 14) = v10;
        if ( v12 )
        {
          if ( *(_DWORD *)(v138 + 84) != 1 )
            v8 = (*(_DWORD *)(v138 + 80) > 0xA0u) + 2;
          goto LABEL_16;
        }
        v9 = v138;
      }
      if ( v151 && v9 )
        goto LABEL_15;
      goto LABEL_14;
    }
    if ( a1 != a2 && a1 != a3 )
    {
      v8 = 1;
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v148, a2, 1, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v145, a3, 1, 0);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v132, v7, 0, 1);
      v13 = v148;
      if ( !v148 )
        goto LABEL_39;
      v14 = v145;
      v15 = v132;
      if ( v145 && v132 )
      {
        v16 = *(_BYTE *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v134 + 14);
        v17 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v134;
        *(_BYTE *)(v17 + 14) = 0;
        v18 = RGNOBJ::iCombine((RGNOBJ *)&v132, (struct RGNOBJ *)&v148, (struct RGNOBJ *)&v145, v4);
        if ( v132 != v15 )
          HmgReplace(v134, v132);
        *(_BYTE *)(v17 + 14) = v16;
        v15 = v132;
        if ( v18 )
        {
          if ( *(_DWORD *)(v132 + 84) != 1 )
            v8 = (*(_DWORD *)(v132 + 80) > 0xA0u) + 2;
          goto LABEL_41;
        }
        v13 = v148;
        v14 = v145;
      }
      if ( !v13 || !v14 || !v15 )
      {
LABEL_39:
        EngSetLastError(6u);
        v15 = v132;
      }
      v8 = 0;
LABEL_41:
      if ( !v135 )
      {
        RGNOBJ::UpdateUserRgn((RGNOBJ *)&v132);
        v15 = v132;
      }
      if ( v15 )
        _InterlockedDecrement((volatile signed __int32 *)(v15 + 12));
      UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v133);
      if ( !v147 )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)&v145);
      if ( v145 )
        _InterlockedDecrement((volatile signed __int32 *)(v145 + 12));
      UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v146);
      if ( !v150 )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)&v148);
      if ( v148 )
        _InterlockedDecrement((volatile signed __int32 *)(v148 + 12));
      UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v149);
      return v8;
    }
    v8 = 1;
    if ( a2 == a3 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v154, a1, 0, 1);
      v19 = v154[0];
      if ( v154[0] )
      {
        if ( (unsigned int)(v4 - 3) <= 1 )
        {
          *(_DWORD *)(v154[0] + 80LL) = 120;
          *(_QWORD *)(v19 + 84) = 1LL;
          *(_QWORD *)(v19 + 92) = 0LL;
          *(_DWORD *)(v19 + 100) = 0;
          *(_DWORD *)(v19 + 104) = 0;
          *(_DWORD *)(v19 + 108) = 0x80000000;
          *(_QWORD *)(v19 + 112) = 0x7FFFFFFFLL;
          *(_QWORD *)(v19 + 40) = v19 + 120;
        }
        v8 = RGNOBJ::iComplexity((RGNOBJ *)v154);
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v154);
      }
      else
      {
        EngSetLastError(6u);
        v8 = 0;
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v154);
      }
      return v8;
    }
    v20 = 216;
    LODWORD(v119) = 0;
    if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type == 4 )
    {
      v157 = 1;
      v20 = 376;
    }
    else
    {
      v157 = 0;
    }
    if ( dword_1C0100A00 >= v20
      && (int)IsWin32AllocateFromPagedLookasideListImplSupported_0() >= 0
      && (v21 = Win32AllocateFromPagedLookasideListImpl_0()) != 0 )
    {
      *(_QWORD *)v21 = 0LL;
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_QWORD *)(v21 + 16) = 0LL;
      if ( v157 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v20 + v21 - 160), 0LL);
      LOWORD(v158) = *(_WORD *)(v21 + 12);
      HIWORD(v158) = *(_WORD *)(v21 + 14) | 0x8000;
      _InterlockedExchange((volatile __int32 *)(v21 + 12), v158);
    }
    else
    {
      v21 = PALLOCMEM2(v20);
      if ( !v21 )
      {
        EngSetLastError(8u);
        v21 = 0LL;
        goto LABEL_74;
      }
      *(_QWORD *)v21 = 0LL;
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_QWORD *)(v21 + 16) = 0LL;
      if ( v157 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v20 + v21 - 160), 0LL);
    }
    *(_QWORD *)(v21 + 24) = 216LL;
    *(_DWORD *)(v21 + 80) = 0;
    *(_QWORD *)(v21 + 32) = 0LL;
    *(_QWORD *)(v21 + 56) = v21 + 48;
    *(_QWORD *)(v21 + 48) = v21 + 48;
LABEL_74:
    v118 = (__int16 *)v21;
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      if ( *ThreadWin32Thread )
      {
        if ( v21 )
        {
          v23 = (_QWORD *)(v21 + 48);
          if ( v21 != -48 )
          {
            KeEnterCriticalRegion();
            v24 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( v24 )
              v25 = *v24;
            else
              v25 = 0LL;
            *(_QWORD *)(v21 + 64) = v21;
            *(_QWORD *)(v21 + 72) = CleanUpRegion;
            if ( v25 )
            {
              v26 = *(_QWORD *)(v25 + 88);
              v27 = (_QWORD *)(v25 + 88);
              *v23 = v26;
              *(_QWORD *)(v21 + 56) = v27;
              if ( *(_QWORD **)(v26 + 8) != v27 )
                __fastfail(3u);
              *(_QWORD *)(v26 + 8) = v23;
              *v27 = v23;
            }
            else
            {
              *(_QWORD *)(v21 + 56) = v21 + 48;
              *v23 = v23;
            }
            KeLeaveCriticalRegion();
          }
        }
      }
    }
    v28 = a2;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v120, a2, 0, v7 == a2);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v124, a3, 0, v7 == a3);
    v29 = (__int64)v120;
    if ( !v21 )
    {
      v32 = v118;
      goto LABEL_276;
    }
    if ( !v120 )
    {
      v32 = v118;
LABEL_279:
      EngSetLastError(6u);
LABEL_280:
      v30 = v124;
LABEL_281:
      v8 = 0;
      goto LABEL_282;
    }
    v30 = v124;
    if ( !v124 )
    {
      v32 = v118;
LABEL_277:
      if ( v29 && v30 )
        goto LABEL_281;
      goto LABEL_279;
    }
    if ( (struct REGION *)v21 == prgnDefault )
    {
      v31 = RGNOBJ::iComplexity((RGNOBJ *)&v118);
      v32 = v118;
      goto LABEL_221;
    }
    if ( (unsigned int)(v4 - 1) <= 1 )
    {
      if ( *((_DWORD *)v120 + 20) == 160
        && *((_DWORD *)v120 + 22) <= *(_DWORD *)(v124 + 88)
        && *((_DWORD *)v120 + 24) >= *(_DWORD *)(v124 + 96)
        && *((_DWORD *)v120 + 23) <= *(_DWORD *)(v124 + 92)
        && *((_DWORD *)v120 + 25) >= *(_DWORD *)(v124 + 100) )
      {
        v33 = *(_DWORD *)(v21 + 24);
        v34 = (struct RGNOBJ *)&v124;
        if ( (_DWORD)v4 != 1 )
          v34 = (struct RGNOBJ *)&v120;
        v35 = *(_QWORD *)v34;
        if ( v33 > 0xD8 )
        {
          if ( *(_DWORD *)(v35 + 24) > 0xD8u )
          {
            v68 = *(_DWORD *)(v35 + 80);
            if ( v33 >= v68 )
            {
              RGNOBJ::vCopy((RGNOBJ *)&v118, v34);
              goto LABEL_176;
            }
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v129, v68);
            if ( !v129[0] )
            {
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v129);
              goto LABEL_200;
            }
            RGNOBJ::vCopy((RGNOBJ *)v129, v34);
            v66 = RGNOBJ::bSwap((__int64 **)&v118, v129);
            v67 = v129;
          }
          else
          {
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v127);
            if ( !v127[0] )
            {
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v127);
              goto LABEL_200;
            }
            RGNOBJ::vCopy((RGNOBJ *)v127, v34);
            v66 = RGNOBJ::bSwap((__int64 **)&v118, v127);
            v67 = v127;
          }
          v69 = v66;
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v67);
          if ( v69 )
            goto LABEL_176;
          goto LABEL_200;
        }
        if ( *(_DWORD *)(v35 + 24) <= 0xD8u )
        {
          memmove((void *)(v21 + 80), (const void *)(v35 + 80), *(unsigned int *)(v35 + 80) - 80LL);
          *(_QWORD *)(v21 + 40) = v21 + (int)(*(_DWORD *)(*(_QWORD *)v34 + 40LL) - *(_QWORD *)v34 - 104) + 104LL;
LABEL_176:
          v32 = v118;
LABEL_177:
          if ( *((_DWORD *)v32 + 21) == 1 )
            v31 = 1;
          else
            v31 = (*((_DWORD *)v32 + 20) > 0xA0u) + 2;
          goto LABEL_220;
        }
        v36 = *(_DWORD *)(v35 + 80);
        v137 = 0;
        if ( v36 < 0xD8 )
          v36 = 216;
        v37 = v36;
        if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type == 4 )
        {
          v159 = 1;
          v37 = v36 + 160;
        }
        else
        {
          v159 = 0;
        }
        if ( dword_1C0100A00 >= v37 && (v38 = Win32AllocateFromPagedLookasideList(qword_1C0100290)) != 0 )
        {
          *(_QWORD *)v38 = 0LL;
          *(_QWORD *)(v38 + 8) = 0LL;
          *(_QWORD *)(v38 + 16) = 0LL;
          if ( v159 )
            RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v37 + v38 - 160), 0LL);
          LOWORD(v160) = *(_WORD *)(v38 + 12);
          HIWORD(v160) = *(_WORD *)(v38 + 14) | 0x8000;
          _InterlockedExchange((volatile __int32 *)(v38 + 12), v160);
        }
        else
        {
          v38 = 0LL;
          if ( v37 && (int)IsWin32AllocPoolImplSupported_0() >= 0 )
            v38 = Win32AllocPoolImpl_0();
          if ( !v38 )
          {
            EngSetLastError(8u);
            v38 = 0LL;
            v136 = 0LL;
            goto LABEL_121;
          }
          *(_QWORD *)v38 = 0LL;
          *(_QWORD *)(v38 + 8) = 0LL;
          *(_QWORD *)(v38 + 16) = 0LL;
          if ( v159 )
            RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v37 + v38 - 160), 0LL);
        }
        *(_DWORD *)(v38 + 80) = 120;
        *(_QWORD *)(v38 + 84) = 1LL;
        *(_QWORD *)(v38 + 92) = 0LL;
        *(_DWORD *)(v38 + 100) = 0;
        *(_DWORD *)(v38 + 104) = 0;
        *(_DWORD *)(v38 + 108) = 0x80000000;
        *(_QWORD *)(v38 + 112) = 0x7FFFFFFFLL;
        v136 = v38;
        *(_QWORD *)(v38 + 40) = v38 + 120;
        *(_DWORD *)(v38 + 24) = v36;
        *(_QWORD *)(v38 + 28) = 0LL;
        *(_DWORD *)(v38 + 36) = 0;
        *(_QWORD *)(v38 + 56) = v38 + 48;
        *(_QWORD *)(v38 + 48) = v38 + 48;
LABEL_121:
        v39 = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v39 && *v39 )
        {
          if ( !v38 )
          {
LABEL_134:
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v136);
LABEL_200:
            v32 = v118;
            v71 = v118 + 52;
            *((_DWORD *)v118 + 20) = 120;
            *(_QWORD *)(v32 + 42) = 1LL;
            *(_QWORD *)(v32 + 46) = 0LL;
            *((_DWORD *)v32 + 25) = 0;
            *(_DWORD *)v71 = 0;
            *((_DWORD *)v71 + 1) = 0x80000000;
            *((_QWORD *)v71 + 1) = 0x7FFFFFFFLL;
            *((_QWORD *)v32 + 5) = v71 + 8;
            v29 = (__int64)v120;
LABEL_276:
            v30 = v124;
            goto LABEL_277;
          }
          v40 = (_QWORD *)(v38 + 48);
          if ( v38 != -48 )
          {
            KeEnterCriticalRegion();
            v41 = 0LL;
            v42 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( v42 )
              v41 = *v42;
            *(_QWORD *)(v38 + 64) = v38;
            *(_QWORD *)(v38 + 72) = CleanUpRegion;
            if ( v41 )
            {
              v43 = *(_QWORD *)(v41 + 88);
              *v40 = v43;
              *(_QWORD *)(v38 + 56) = v41 + 88;
              if ( *(_QWORD *)(v43 + 8) != v41 + 88 )
                __fastfail(3u);
              *(_QWORD *)(v43 + 8) = v40;
              *(_QWORD *)(v41 + 88) = v40;
            }
            else
            {
              *(_QWORD *)(v38 + 56) = v38 + 48;
              *v40 = v40;
            }
            KeLeaveCriticalRegion();
          }
        }
        if ( !v38 )
          goto LABEL_134;
        memmove(
          (void *)(v38 + 80),
          (const void *)(*(_QWORD *)v34 + 80LL),
          *(unsigned int *)(*(_QWORD *)v34 + 80LL) - 80LL);
        v44 = *(_QWORD *)v34;
        v45 = v21 + 48;
        v46 = v38 + 48;
        *(_QWORD *)(v38 + 40) = v38 + *(_DWORD *)(v44 + 40) - (int)v44 - 104 + 104LL;
        v47 = *(_WORD *)(v21 + 14);
        v48 = *(_WORD *)(v38 + 14);
        v49 = *(__m128i *)v38;
        v144 = *(_QWORD *)(v38 + 16);
        *(_QWORD *)v38 = *(_QWORD *)v21;
        LOWORD(v161) = *(_WORD *)(v21 + 12);
        HIWORD(v161) = v47 & 0x4000 | v48 & 0x8000;
        _InterlockedExchange((volatile __int32 *)(v38 + 12), v161);
        *(_QWORD *)(v38 + 16) = *(_QWORD *)(v21 + 16);
        *(_QWORD *)v21 = v49.m128i_i64[0];
        HIWORD(v161) = v48 & 0x4000 | v47 & 0x8000;
        LOWORD(v161) = _mm_srli_si128(v49, 8).m128i_i16[2];
        _InterlockedExchange((volatile __int32 *)(v21 + 12), v161);
        *(_QWORD *)(v21 + 16) = v144;
        v50 = *(_DWORD *)(v21 + 32);
        *(_DWORD *)(v21 + 32) = *(_DWORD *)(v38 + 32);
        *(_DWORD *)(v38 + 32) = v50;
        v51 = *(_DWORD *)(v21 + 36);
        *(_DWORD *)(v21 + 36) = *(_DWORD *)(v38 + 36);
        *(_DWORD *)(v38 + 36) = v51;
        v52 = *(_QWORD *)v45 == v45;
        v162 = *(_QWORD *)v46 == v46;
        if ( v21 != -48 )
        {
          KeEnterCriticalRegion();
          v53 = *(_QWORD *)v45;
          v54 = *(_QWORD **)(v21 + 56);
          if ( *(_QWORD *)(*(_QWORD *)v45 + 8LL) != v45 || *v54 != v45 )
            __fastfail(3u);
          *v54 = v53;
          *(_QWORD *)(v53 + 8) = v54;
          *(_QWORD *)(v21 + 56) = v21 + 48;
          *(_QWORD *)v45 = v45;
          KeLeaveCriticalRegion();
        }
        if ( v38 != -48 )
        {
          KeEnterCriticalRegion();
          v55 = *(_QWORD *)v46;
          v56 = *(_QWORD **)(v38 + 56);
          if ( *(_QWORD *)(*(_QWORD *)v46 + 8LL) != v46 || *v56 != v46 )
            __fastfail(3u);
          *v56 = v55;
          *(_QWORD *)(v55 + 8) = v56;
          *(_QWORD *)(v38 + 56) = v38 + 48;
          *(_QWORD *)v46 = v46;
          KeLeaveCriticalRegion();
        }
        v118 = (__int16 *)v38;
        v57 = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v57 && *v57 )
        {
          if ( !v52 && v38 != -48 )
          {
            KeEnterCriticalRegion();
            v58 = 0LL;
            v59 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( v59 )
              v58 = *v59;
            *(_QWORD *)(v38 + 64) = v38;
            *(_QWORD *)(v38 + 72) = CleanUpRegion;
            if ( v58 )
            {
              v60 = *(_QWORD *)(v58 + 88);
              *(_QWORD *)v46 = v60;
              *(_QWORD *)(v38 + 56) = v58 + 88;
              if ( *(_QWORD *)(v60 + 8) != v58 + 88 )
                __fastfail(3u);
              *(_QWORD *)(v60 + 8) = v46;
              *(_QWORD *)(v58 + 88) = v46;
            }
            else
            {
              *(_QWORD *)(v38 + 56) = v38 + 48;
              *(_QWORD *)v46 = v46;
            }
            KeLeaveCriticalRegion();
          }
          if ( !v162 )
          {
            if ( v21 == -48 )
            {
LABEL_171:
              if ( (struct REGION *)v21 != prgnDefault )
              {
                if ( *(__int16 *)(v21 + 14) >= 0 )
                {
                  Win32FreePool();
                }
                else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
                {
                  Win32FreeToPagedLookasideListImpl_0();
                }
              }
              v28 = a2;
              v7 = a1;
              goto LABEL_176;
            }
            KeEnterCriticalRegion();
            v61 = 0LL;
            v62 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( v62 )
              v61 = *v62;
            *(_QWORD *)(v21 + 64) = v21;
            *(_QWORD *)(v21 + 72) = CleanUpRegion;
            if ( v61 )
            {
              v63 = *(_QWORD *)(v61 + 88);
              *(_QWORD *)v45 = v63;
              *(_QWORD *)(v21 + 56) = v61 + 88;
              if ( *(_QWORD *)(v63 + 8) != v61 + 88 )
                __fastfail(3u);
              *(_QWORD *)(v63 + 8) = v45;
              *(_QWORD *)(v61 + 88) = v45;
            }
            else
            {
              *(_QWORD *)(v21 + 56) = v21 + 48;
              *(_QWORD *)v45 = v45;
            }
            KeLeaveCriticalRegion();
          }
        }
        if ( v21 != -48 )
        {
          KeEnterCriticalRegion();
          v64 = *(_QWORD *)v45;
          v65 = *(_QWORD **)(v21 + 56);
          if ( *(_QWORD *)(*(_QWORD *)v45 + 8LL) != v45 || *v65 != v45 )
            __fastfail(3u);
          *v65 = v64;
          *(_QWORD *)(v64 + 8) = v65;
          *(_QWORD *)(v21 + 56) = v21 + 48;
          *(_QWORD *)v45 = v45;
          KeLeaveCriticalRegion();
        }
        goto LABEL_171;
      }
      if ( *(_DWORD *)(v124 + 80) == 160
        && *(_DWORD *)(v124 + 88) <= *((_DWORD *)v120 + 22)
        && *(_DWORD *)(v124 + 96) >= *((_DWORD *)v120 + 24)
        && *(_DWORD *)(v124 + 92) <= *((_DWORD *)v120 + 23)
        && *(_DWORD *)(v124 + 100) >= *((_DWORD *)v120 + 25) )
      {
        v70 = (struct RGNOBJ *)&v120;
        if ( (_DWORD)v4 != 1 )
          v70 = (struct RGNOBJ *)&v124;
        if ( (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v118, v70) )
        {
          v31 = RGNOBJ::iComplexity((RGNOBJ *)&v118);
          v32 = v118;
LABEL_220:
          v29 = (__int64)v120;
          v30 = v124;
LABEL_221:
          if ( v31 )
            goto LABEL_222;
          goto LABEL_277;
        }
        goto LABEL_200;
      }
    }
    if ( (_DWORD)v4 == 1 && *((_DWORD *)v120 + 20) == 160 && *(_DWORD *)(v124 + 80) == 160 )
    {
      v72 = *((_QWORD *)v120 + 11);
      v73 = _mm_srli_si128(*(__m128i *)(v120 + 44), 8).m128i_u64[0];
      v74 = *(_QWORD *)(v124 + 88);
      v75 = _mm_srli_si128(*(__m128i *)(v124 + 88), 8).m128i_u64[0];
      v76 = *(_OWORD *)(v124 + 88);
      if ( (int)v72 > (int)v74 )
        v76 = *((_QWORD *)v120 + 11);
      v77 = v75;
      v130.left = v76;
      if ( (int)v73 < (int)v75 )
        v77 = v73;
      v78 = HIDWORD(v72);
      v79 = HIDWORD(v74);
      v130.right = v77;
      if ( (int)v78 > (int)v79 )
        LODWORD(v79) = v78;
      v80 = HIDWORD(v75);
      v130.top = v79;
      if ( SHIDWORD(v73) < SHIDWORD(v75) )
        LODWORD(v80) = HIDWORD(v73);
      v130.bottom = v80;
      if ( v76 >= v77 || (int)v79 >= (int)v80 )
      {
        v32 = v118;
        *(_DWORD *)(v21 + 80) = 120;
        *(_QWORD *)(v21 + 84) = 1LL;
        *(_QWORD *)(v21 + 92) = 0LL;
        *(_DWORD *)(v21 + 100) = 0;
        *(_DWORD *)(v21 + 104) = 0;
        *(_DWORD *)(v21 + 108) = 0x80000000;
        *(_QWORD *)(v21 + 112) = 0x7FFFFFFFLL;
        *(_QWORD *)(v21 + 40) = v21 + 120;
      }
      else
      {
        RGNOBJ::vSet((RGNOBJ *)&v118, &v130);
        v32 = v118;
      }
LABEL_222:
      if ( v7 == v28 )
      {
        v82 = (volatile __int32 *)(v32 + 6);
        _InterlockedIncrement((volatile signed __int32 *)v32 + 3);
        _InterlockedIncrement((volatile signed __int32 *)v120 + 3);
        v83 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
        v84 = (unsigned __int16)v122;
        v128 = 0LL;
        v85 = 3LL * (unsigned __int16)v122;
        CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v131);
        if ( CurrentThreadWin32ThreadAndEnterCriticalRegion && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
          v87 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
        else
          v87 = 0LL;
LABEL_227:
        _m_prefetchw((const void *)(v83 + 8 * v85 + 8));
        v88 = *(_DWORD *)(v83 + 8 * v85 + 8);
        v89 = v88 & 0xFFFFFFFE;
        v142 = v88;
        if ( ((v88 & 0xFFFFFFFE) == (v131 & 0xFFFFFFFC) || !v89 || v87 && v89 == *(_DWORD *)(v87 + 8))
          && (*(_BYTE *)(v83 + 8 * v85 + 15) & 0x20) == 0 )
        {
          while ( (*(_BYTE *)(v83 + 8 * v85 + 15) & 0x40) == 0 )
          {
            if ( (v88 & 1) != 0 )
            {
              KeDelayExecutionThread(0, 0, gpLockShortDelay);
              goto LABEL_227;
            }
            v143 = v88 | 1;
            if ( v88 != _InterlockedCompareExchange((volatile signed __int32 *)(v83 + 8 * v85 + 8), v88 | 1, v88)
              || (*(_BYTE *)(v83 + 8 * v85 + 15) & 0x40) != 0 )
            {
              goto LABEL_227;
            }
            *((_QWORD *)gpentPushLock + v84) = 0LL;
            *(_BYTE *)(v83 + 8 * v85 + 15) |= 0x40u;
            _m_prefetchw((const void *)(v83 + 8 * v85 + 8));
            v142 = *(_DWORD *)(v83 + 8 * v85 + 8) & 0xFFFFFFFE;
            _InterlockedExchange((volatile __int32 *)(v83 + 8 * v85 + 8), v142);
            v88 = v142;
          }
          v90 = 8 * v84;
          ExAcquirePushLockExclusiveEx((char *)gpentPushLock + 8 * v84, 0LL);
          v91 = *(__int16 **)(v83 + 8 * v85);
          v32 = v118;
          *(_QWORD *)(v83 + 8 * v85) = v118;
          v92 = (*(_BYTE *)(v83 + 8 * v85 + 15) & 0x40) == 0;
          v128 = v91;
          if ( v92 )
          {
            _m_prefetchw((const void *)(v83 + 8 * v85 + 8));
            v142 = *(_DWORD *)(v83 + 8 * v85 + 8) & 0xFFFFFFFE;
            _InterlockedExchange((volatile __int32 *)(v83 + 8 * v85 + 8), v142);
            v32 = v118;
          }
          else
          {
            ExReleasePushLockExclusiveEx((char *)gpentPushLock + v90, 0LL);
          }
          KeLeaveCriticalRegion();
        }
        else
        {
          KeLeaveCriticalRegion();
          v32 = v118;
        }
        if ( v128 == v120 )
        {
          v93 = v120[7];
          v94 = v32[7];
          v95 = *(__m128i *)v32;
          v144 = *((_QWORD *)v32 + 2);
          *(_QWORD *)v32 = *(_QWORD *)v120;
          HIWORD(v163) = v94 & 0x8000 | v93 & 0x4000;
          LOWORD(v163) = v120[6];
          _InterlockedExchange(v82, v163);
          HIWORD(v163) = v94 & 0x4000 | v93 & 0x8000;
          *((_QWORD *)v118 + 2) = *((_QWORD *)v120 + 2);
          *(_QWORD *)v120 = v95.m128i_i64[0];
          LOWORD(v163) = _mm_srli_si128(v95, 8).m128i_i16[2];
          _InterlockedExchange((volatile __int32 *)v120 + 3, v163);
          v96 = v118;
          *((_QWORD *)v120 + 2) = v144;
          v97 = v96 + 24;
          v98 = *((_DWORD *)v120 + 8);
          *((_DWORD *)v120 + 8) = *((_DWORD *)v96 + 8);
          *((_DWORD *)v96 + 8) = v98;
          v99 = *((_DWORD *)v120 + 9);
          *((_DWORD *)v120 + 9) = *((_DWORD *)v96 + 9);
          *((_DWORD *)v96 + 9) = v99;
          v100 = v120 + 24;
          v101 = *v100 == (_QWORD)v100;
          v102 = *(_QWORD *)v97 == (_QWORD)v97;
          if ( v120 != (__int16 *)-48LL )
          {
            KeEnterCriticalRegion();
            v103 = *v100;
            v104 = (_QWORD *)v100[1];
            if ( *(_QWORD **)(*v100 + 8LL) != v100 || (_QWORD *)*v104 != v100 )
              __fastfail(3u);
            *v104 = v103;
            *(_QWORD *)(v103 + 8) = v104;
            v100[1] = v100;
            *v100 = v100;
            KeLeaveCriticalRegion();
          }
          if ( v96 != (__int16 *)-48LL )
          {
            KeEnterCriticalRegion();
            v105 = *(_QWORD *)v97;
            v106 = (__int16 **)*((_QWORD *)v96 + 7);
            if ( *(__int16 **)(*(_QWORD *)v97 + 8LL) != v97 || *v106 != v97 )
              __fastfail(3u);
            *v106 = (__int16 *)v105;
            *(_QWORD *)(v105 + 8) = v106;
            *((_QWORD *)v96 + 7) = v96 + 24;
            *(_QWORD *)v97 = v97;
            KeLeaveCriticalRegion();
          }
          v107 = (__int64)v120;
          v120 = v96;
          v118 = (__int16 *)v107;
          v108 = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v108 && *v108 )
          {
            if ( !v101 )
              PushThreadGuardedObject((__int64 *)v120 + 6, (__int64)v120, (__int64)CleanUpRegion);
            if ( !v102 )
            {
              v109 = (_QWORD *)(v107 + 48);
              if ( v107 != -48 )
              {
                KeEnterCriticalRegion();
                v110 = 0LL;
                v111 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v111 )
                  v110 = *v111;
                *(_QWORD *)(v107 + 64) = v107;
                *(_QWORD *)(v107 + 72) = CleanUpRegion;
                if ( v110 )
                {
                  v112 = *(_QWORD *)(v110 + 88);
                  *v109 = v112;
                  *(_QWORD *)(v107 + 56) = v110 + 88;
                  if ( *(_QWORD *)(v112 + 8) != v110 + 88 )
                    __fastfail(3u);
                  *(_QWORD *)(v112 + 8) = v109;
                  *(_QWORD *)(v110 + 88) = v109;
                }
                else
                {
                  *(_QWORD *)(v107 + 56) = v107 + 48;
                  *v109 = v109;
                }
                KeLeaveCriticalRegion();
              }
            }
          }
          _InterlockedDecrement((volatile signed __int32 *)(v107 + 12));
          _InterlockedDecrement((volatile signed __int32 *)v120 + 3);
          v32 = v118;
          v30 = v124;
          if ( *((_DWORD *)v120 + 21) != 1 )
            v8 = (*((_DWORD *)v120 + 20) > 0xA0u) + 2;
          goto LABEL_282;
        }
      }
      else
      {
        if ( (unsigned int)RGNOBJAPI::bSwap((RGNOBJAPI *)&v124, (struct RGNOBJ *)&v118) )
        {
          v113 = RGNOBJ::iComplexity((RGNOBJ *)&v124);
          v32 = v118;
          v8 = v113;
          v30 = v124;
LABEL_282:
          if ( !v126 )
          {
            RGNOBJ::UpdateUserRgn((RGNOBJ *)&v124);
            v30 = v124;
          }
          if ( v30 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v30 + 12));
            v32 = v118;
          }
          UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v125);
          if ( !(_DWORD)v123 )
            RGNOBJ::UpdateUserRgn((RGNOBJ *)&v120);
          if ( v120 )
          {
            _InterlockedDecrement((volatile signed __int32 *)v120 + 3);
            v32 = v118;
          }
          UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(&v121);
          if ( v32 )
          {
            v114 = v32 + 24;
            if ( v32 != (__int16 *)-48LL )
            {
              KeEnterCriticalRegion();
              v115 = *(_QWORD *)v114;
              v116 = (__int16 **)*((_QWORD *)v32 + 7);
              if ( *(__int16 **)(*(_QWORD *)v114 + 8LL) != v114 || *v116 != v114 )
                __fastfail(3u);
              *v116 = (__int16 *)v115;
              *(_QWORD *)(v115 + 8) = v116;
              *((_QWORD *)v32 + 7) = v32 + 24;
              *(_QWORD *)v114 = v114;
              KeLeaveCriticalRegion();
            }
            if ( v32 != (__int16 *)prgnDefault )
            {
              if ( v32[7] >= 0 )
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
          v118 = 0LL;
          if ( (_DWORD)v119 == 1 )
            RGNOBJ::vDeleteRGNOBJ(&v118);
          return v8;
        }
        v32 = v118;
      }
      goto LABEL_280;
    }
    v81 = RGNOBJ::bMerge((RGNOBJ *)&v118, (struct RGNOBJ *)&v120, (struct RGNOBJ *)&v124, *((_BYTE *)&gafjRgnOp + v4));
    v32 = v118;
    if ( v81 )
      goto LABEL_177;
    *((_DWORD *)v118 + 20) = 120;
    *(_QWORD *)(v32 + 42) = 1LL;
    *(_QWORD *)(v32 + 46) = 0LL;
    *((_DWORD *)v32 + 25) = 0;
    *((_DWORD *)v32 + 26) = 0;
    *((_DWORD *)v32 + 27) = 0x80000000;
    *((_QWORD *)v32 + 14) = 0x7FFFFFFFLL;
    *((_QWORD *)v32 + 5) = v32 + 60;
    v29 = (__int64)v120;
    goto LABEL_276;
  }
  EngSetLastError(0x57u);
  return 0LL;
}
