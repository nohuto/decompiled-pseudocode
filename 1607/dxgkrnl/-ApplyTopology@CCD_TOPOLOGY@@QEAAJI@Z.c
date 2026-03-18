/*
 * XREFs of ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A2E8
 * Callers:
 *     DxgkApplyPathsModality @ 0x1C00DB0F0 (DxgkApplyPathsModality.c)
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00DB89C (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00DE56C (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0001388 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C00013C0 (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C00017E4 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1C000D530 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DxgkStatusChangeNotify @ 0x1C00728B0 (DxgkStatusChangeNotify.c)
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAPEAVSESSION_VIEW@@@Z @ 0x1C007BBF0 (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAPEAVSESSION_VIEW@@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0089D68 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0089DE4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0089E20 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C008A078 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C008B378 (-CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C008B3B4 (-BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C008C040 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C008C62C (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00A3884 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00DAC6C (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C01AAF78 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C01AB1AC (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopology(CCD_TOPOLOGY *this, unsigned int a2)
{
  unsigned int v2; // r13d
  unsigned __int16 v4; // si
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v7; // rcx
  unsigned int v8; // r14d
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  __int64 v12; // rcx
  struct DXGPROCESS *v13; // r15
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rcx
  int Active; // eax
  __int64 v22; // rcx
  __int64 v23; // rsi
  DXGGLOBAL *v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 MaximumAdapterCount; // kr00_8
  void *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned int i; // r14d
  DXGGLOBAL *v31; // rax
  __int64 v32; // rbx
  unsigned __int16 v33; // r8
  struct DXGPROCESS *v34; // r15
  int j; // r11d
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned __int16 k; // r9
  __int64 v40; // r10
  __int64 v41; // rcx
  unsigned __int16 m; // r9
  __int64 v43; // r8
  __int64 v44; // r14
  unsigned int v45; // r11d
  unsigned int v46; // ebx
  _DWORD *v47; // r10
  int v48; // r11d
  __int64 v49; // rcx
  unsigned __int16 n; // dx
  __int64 v51; // r8
  unsigned __int16 v52; // r9
  __int64 v53; // rdx
  unsigned int v54; // r8d
  unsigned int v55; // ecx
  __int64 v56; // r10
  __int64 v57; // r11
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rcx
  unsigned __int16 v63; // r14
  __int64 v64; // rbx
  int v65; // eax
  unsigned int v66; // esi
  __int64 v67; // rcx
  unsigned int v68; // edx
  __int64 v69; // r9
  __int64 v70; // r8
  __int64 v71; // r15
  __int64 v72; // rax
  unsigned int v73; // edx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rax
  int v77; // ecx
  char v78; // r12
  unsigned int v79; // esi
  int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // r14
  __int64 v83; // rbx
  int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // r14
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rbx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rcx
  _BYTE *v95; // rax
  __int64 v96; // rax
  unsigned __int16 v97; // si
  __int64 v98; // r15
  __int64 v99; // rax
  unsigned int v100; // r13d
  int v101; // ebx
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rdx
  unsigned int v105; // eax
  LONG v106; // ecx
  DXGGLOBAL *v107; // rax
  struct DXGPROCESS *v108; // rcx
  int v109; // eax
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rdx
  int v113; // r10d
  unsigned int v114; // r8d
  unsigned int v115; // r9d
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v119; // r9
  __int64 v120; // rbx
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // r11
  __int64 v130; // rbx
  __int64 v131; // r10
  bool IsSameCloneGroup; // al
  _QWORD *v133; // rax
  __int64 v134; // rbx
  _QWORD *v135; // rax
  __int64 v136; // rbx
  int v137; // ebx
  __int64 v138; // rax
  _QWORD *v139; // rax
  __int64 v140; // rdx
  int v141; // eax
  __int64 v142; // rcx
  __int64 v143; // rbx
  __int64 v144; // rax
  unsigned __int16 v145[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v146; // [rsp+34h] [rbp-CCh]
  char v147; // [rsp+35h] [rbp-CBh] BYREF
  unsigned __int8 v148; // [rsp+36h] [rbp-CAh]
  unsigned int v149; // [rsp+38h] [rbp-C8h]
  struct DXGPROCESS *v150; // [rsp+40h] [rbp-C0h]
  struct tagRECT v151; // [rsp+48h] [rbp-B8h] BYREF
  struct _LUID *v152; // [rsp+58h] [rbp-A8h]
  _BYTE v153[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v154[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v155[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v156; // [rsp+C0h] [rbp-40h]
  int v157; // [rsp+D4h] [rbp-2Ch]
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-20h] BYREF
  char v159; // [rsp+110h] [rbp+10h]

  v149 = a2;
  v2 = a2;
  v159 = 0;
  v4 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v155, 8u, 0);
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v8 = -1073741811;
  if ( !SessionData )
  {
    v120 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v120 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    v121 = v120;
    *(_QWORD *)(v120 + 32) = -1073741811LL;
LABEL_96:
    WdLogEvent5_WdError(v121);
    goto LABEL_91;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionData + 2323));
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v10);
  v150 = ProcessDxgProcess;
  v13 = ProcessDxgProcess;
  if ( !ProcessDxgProcess )
  {
    v121 = WdLogNewEntry5_WdError(v12);
    goto LABEL_96;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)ProcessDxgProcess + 9) + 224LL))(0LL) )
  {
    v122 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v122 + 24) = v13;
    WdLogEvent5_WdError(v122);
    v8 = -1073741790;
  }
  else
  {
    v147 = 0;
    v15 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v147, 1);
    v19 = v15;
    if ( v15 >= 0 )
    {
      v145[0] = 8;
      while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v155, v4, v17, v18) >= v4 )
      {
        v157 |= 3u;
        Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v155, 0, 1, 1, v145);
        v19 = Active;
        if ( Active != -1073741789 )
        {
          if ( Active < 0 )
          {
            v123 = WdLogNewEntry5_WdError(v22);
            *(_QWORD *)(v123 + 24) = *((_QWORD *)this + 8);
            *(_QWORD *)(v123 + 32) = v19;
            goto LABEL_101;
          }
          CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(this);
          CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId((CCD_TOPOLOGY *)v155);
          v23 = v156;
          v24 = DXGGLOBAL::GetGlobal();
          MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(v24);
          v25 = 168 * MaximumAdapterCount;
          if ( !is_mul_ok(MaximumAdapterCount, 0xA8uLL) )
            v25 = -1LL;
          v27 = operator new[](v25, 0x63644356u, PagedPool);
          v28 = *((_QWORD *)this + 8);
          *(_QWORD *)(v28 + 40) = v27;
          v29 = *((_QWORD *)this + 8);
          if ( *(_QWORD *)(v29 + 40) )
          {
            *(_WORD *)(v29 + 28) = 0;
            for ( i = 0; ; ++i )
            {
              v31 = DXGGLOBAL::GetGlobal();
              if ( i >= DXGGLOBAL::GetMaximumAdapterCount(v31) )
                break;
              v32 = 168LL * i;
              memset((void *)(v32 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)), 0, 0xA8uLL);
              memset((void *)(v32 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 8LL), 255, 0x40uLL);
            }
            DxgkRemoveAllSessionViewForCurrentSession();
            v33 = 0;
            v34 = v150;
            for ( j = 1; v33 < *(_WORD *)(v23 + 20); v33 += j )
            {
              v36 = 216LL * v33;
              v37 = *(unsigned int *)(v36 + v23 + 236);
              if ( (_DWORD)v37 == v33
                || !CCD_TOPOLOGY::IsMatchingSource(
                      (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v36 + v23 + 48),
                      (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(216 * v37 + v23 + 48)) )
              {
                *(_DWORD *)(v36 + v23 + 232) = 0;
              }
              else
              {
                *(_DWORD *)(v36 + v23 + 232) = j;
                *(_DWORD *)(216LL * *(unsigned int *)(v36 + v23 + 236) + v23 + 232) = j;
              }
            }
            v38 = *((_QWORD *)this + 8);
            for ( k = 0; k < *(_WORD *)(v38 + 20); k += j )
            {
              v40 = 216LL * k;
              v41 = *(unsigned int *)(v40 + v38 + 236);
              if ( (_DWORD)v41 == k
                || !CCD_TOPOLOGY::IsMatchingSource(
                      (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v40 + v38 + 48),
                      (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v38 + 216 * v41 + 48)) )
              {
                *(_DWORD *)(v40 + v38 + 232) = 0;
              }
              else
              {
                *(_DWORD *)(v40 + v38 + 232) = j;
                *(_DWORD *)(216LL * *(unsigned int *)(v40 + *((_QWORD *)this + 8) + 236) + *((_QWORD *)this + 8) + 232) = j;
              }
              v38 = *((_QWORD *)this + 8);
            }
            for ( m = 0; m < *(_WORD *)(v23 + 20); m += j )
            {
              v43 = v23 + 216LL * m;
              if ( !*(_DWORD *)(v43 + 232) )
              {
                v44 = *((_QWORD *)this + 8);
                v45 = 0;
                v46 = *(unsigned __int16 *)(v44 + 20);
                if ( *(_WORD *)(v44 + 20) )
                {
                  while ( !CCD_TOPOLOGY::IsMatchingSource(
                             (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v43 + 48),
                             (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v44 + 216LL * v45 + 48)) )
                  {
                    v45 = v48 + 1;
                    if ( v45 >= v46 )
                      goto LABEL_30;
                  }
                  if ( *(_DWORD *)(v43 + 68) != v47[17]
                    || !CCD_TOPOLOGY::IsMatchingSource(
                          (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v23 + 216LL * *(unsigned int *)(v43 + 236) + 48),
                          (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(216LL * (unsigned int)v47[59] + v44 + 48)) )
                  {
                    v126 = *(unsigned int *)(v43 + 236);
                    if ( (_DWORD)v126 != m )
                      *(_DWORD *)(216 * v126 + v23 + 232) |= 2u;
                    v127 = (unsigned int)v47[59];
                    if ( (_DWORD)v127 != v48 )
                      *(_DWORD *)(216 * v127 + *((_QWORD *)this + 8) + 232) |= 2u;
                  }
                  *(_DWORD *)(v43 + 232) |= 1u;
                  v47[58] |= 1u;
                }
LABEL_30:
                j = 1;
                if ( !*(_DWORD *)(v43 + 232) )
                {
                  v128 = *(unsigned int *)(v43 + 236);
                  if ( (_DWORD)v128 != m )
                  {
                    *(_DWORD *)(v43 + 232) = 1;
                    *(_DWORD *)(216 * v128 + v23 + 232) |= 2u;
                  }
                }
              }
            }
            v49 = *((_QWORD *)this + 8);
            for ( n = 0; n < *(_WORD *)(v49 + 20); n += j )
            {
              v51 = 216LL * n;
              if ( !*(_DWORD *)(v51 + v49 + 232) )
              {
                v119 = *(unsigned int *)(v51 + v49 + 236);
                if ( (_DWORD)v119 != n )
                {
                  *(_DWORD *)(v51 + v49 + 232) = j;
                  *(_DWORD *)(216 * v119 + *((_QWORD *)this + 8) + 232) |= 2u;
                }
              }
              v49 = *((_QWORD *)this + 8);
            }
            v52 = 0;
            if ( *(_WORD *)(v23 + 20) )
            {
              do
              {
                v53 = *((_QWORD *)this + 8);
                v54 = 0;
                v55 = *(_DWORD *)(v53 + 36);
                if ( v55 )
                {
                  v129 = *(_QWORD *)(v53 + 40);
                  v130 = 216LL * v52;
                  do
                  {
                    v131 = 168LL * v54;
                    if ( *(_DWORD *)(v130 + v23 + 56) == *(_DWORD *)(v131 + v129)
                      && *(_DWORD *)(v130 + v23 + 60) == *(_DWORD *)(v131 + v129 + 4) )
                    {
                      break;
                    }
                    ++v54;
                  }
                  while ( v54 < v55 );
                }
                v56 = 168LL * v54;
                v57 = 216LL * v52;
                *(_DWORD *)(*(_QWORD *)(v53 + 40) + v56 + 144) |= 1 << *(_DWORD *)(v57 + v23 + 64);
                if ( (*(_DWORD *)(v57 + v23 + 232) & 2) != 0 )
                  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v56 + 140) |= 1 << *(_DWORD *)(v57 + v23 + 64);
                v58 = *((_QWORD *)this + 8);
                v59 = *(unsigned int *)(v58 + 36);
                if ( v54 < (unsigned int)v59 )
                {
                  j = 1;
                }
                else
                {
                  v60 = 168 * v59;
                  v61 = *(_QWORD *)(v57 + v23 + 56);
                  j = 1;
                  *(_QWORD *)(v60 + *(_QWORD *)(v58 + 40)) = v61;
                  ++*(_DWORD *)(*((_QWORD *)this + 8) + 36LL);
                }
                ++v52;
              }
              while ( v52 < *(_WORD *)(v23 + 20) );
              v2 = v149;
            }
            v62 = *((_QWORD *)this + 8);
            v63 = 0;
            if ( *(_WORD *)(v62 + 20) )
            {
              while ( 2 )
              {
                v64 = 216LL * v63;
                v65 = *(_DWORD *)(v64 + v62 + 48);
                if ( (v65 & 0x187) != 0 )
                {
                  *(_DWORD *)(v64 + v62 + 48) = v65 | 0x400000;
                  *(_DWORD *)(v64 + *((_QWORD *)this + 8) + 52) |= *(_DWORD *)(v64 + *((_QWORD *)this + 8) + 48) & 0x187;
                }
                v66 = 0;
                *(_DWORD *)(v64 + *((_QWORD *)this + 8) + 256) = 0;
                v67 = *((_QWORD *)this + 8);
                v68 = *(_DWORD *)(v67 + 36);
                if ( v68 )
                {
                  v69 = *(_QWORD *)(v67 + 40);
                  do
                  {
                    v70 = 168LL * v66;
                    if ( *(_DWORD *)(v64 + v67 + 56) == *(_DWORD *)(v70 + v69)
                      && *(_DWORD *)(v64 + v67 + 60) == *(_DWORD *)(v70 + v69 + 4) )
                    {
                      break;
                    }
                    v66 += j;
                  }
                  while ( v66 < v68 );
                }
                v71 = 168LL * v66;
                *(_DWORD *)(*(_QWORD *)(v67 + 40) + v71 + 148) |= j << *(_DWORD *)(v64 + v67 + 64);
                v72 = *((_QWORD *)this + 8);
                v73 = *(_DWORD *)(v64 + v72 + 236);
                if ( v73 == v63 )
                {
                  *(_DWORD *)(*(_QWORD *)(v72 + 40) + v71 + 136) |= j << *(_DWORD *)(v64 + v72 + 64);
                  goto LABEL_52;
                }
                IsSameCloneGroup = CCD_TOPOLOGY::IsSameCloneGroup(this, v73, v63, j);
                j = 1;
                if ( !IsSameCloneGroup )
LABEL_52:
                  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL)
                            + 4 * (42LL * v66 + *(unsigned int *)(v64 + *((_QWORD *)this + 8) + 64))
                            + 8) = v63;
                v74 = *((_QWORD *)this + 8);
                if ( (*(_DWORD *)(v64 + v74 + 232) & 2) != 0 )
                  *(_DWORD *)(*(_QWORD *)(v74 + 40) + v71 + 140) |= j << *(_DWORD *)(v64 + v74 + 64);
                v75 = *((_QWORD *)this + 8);
                v76 = *(unsigned int *)(v75 + 36);
                if ( v66 >= (unsigned int)v76 )
                {
                  *(_QWORD *)(168 * v76 + *(_QWORD *)(v75 + 40)) = *(_QWORD *)(v64 + v75 + 56);
                  *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) += j;
                }
                v62 = *((_QWORD *)this + 8);
                v63 += j;
                if ( v63 >= *(_WORD *)(v62 + 20) )
                {
                  v34 = v150;
                  v2 = v149;
                  break;
                }
                continue;
              }
            }
            v77 = *(_DWORD *)(*((_QWORD *)this + 8) + 36LL);
            v78 = v77 != 0 ? j : 0;
            v79 = 0;
            v146 = v78;
            if ( v77 )
            {
              do
              {
                v80 = CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(this, v79);
                v82 = v80;
                if ( v80 < 0 )
                {
                  v133 = (_QWORD *)WdLogNewEntry5_WdError(v81);
                  v134 = 168LL * v79;
                  v133[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v134 + 4);
                  v133[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v134);
                  v133[5] = *((_QWORD *)this + 8);
                  v133[6] = v82;
                  WdLogEvent5_WdError(v133);
                  CCD_TOPOLOGY::MarkPathsApplyFailure(
                    this,
                    (const struct _LUID *)(v134 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                    0xFFFFFFFF,
                    v82);
                }
                else
                {
                  v83 = 168LL * v79;
                  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v83 + 144) )
                  {
                    v84 = CCD_TOPOLOGY::ApplyTopologyOnAdapter(this, v34, v2, v79);
                    v86 = v84;
                    if ( v84 < 0 )
                    {
                      v135 = (_QWORD *)WdLogNewEntry5_WdError(v85);
                      v135[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v83 + 4);
                      v135[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 168LL * v79);
                      v135[5] = *((_QWORD *)this + 8);
                      v135[6] = v86;
                      WdLogEvent5_WdError(v135);
                    }
                    else
                    {
                      v78 = 0;
                    }
                  }
                }
                ++v79;
              }
              while ( v79 < *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) );
              v146 = v78;
            }
            v89 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 111);
            if ( *(_BYTE *)v89 )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v88, v87, v90, v91) + 24) = 200LL;
            }
            else
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v153, *(struct DXGFASTMUTEX *const *)(v89 + 8));
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v153);
              v94 = 18LL;
              v95 = (_BYTE *)(v89 + 16);
              do
              {
                *v95 = 0;
                v95 += 48;
                --v94;
              }
              while ( v94 );
              ++*(_DWORD *)(v89 + 880);
              *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, 1LL, v92, v93) + 24) = 222LL;
              if ( v153[8] )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v153);
            }
            v96 = *((_QWORD *)this + 8);
            v97 = 0;
            v145[0] = 0;
            if ( *(_WORD *)(v96 + 20) )
            {
              while ( 2 )
              {
                v98 = 216LL * v97;
                v99 = *((_QWORD *)this + 8);
                v100 = *(_DWORD *)(v98 + v99 + 236);
                if ( *(int *)(v98 + v99 + 256) < 0 )
                  goto LABEL_82;
                v101 = v97;
                if ( v100 != v97 && CCD_TOPOLOGY::IsSameCloneGroup(this, v100, v97, 1) )
                  goto LABEL_82;
                v102 = *(_DWORD *)(v98 + *((_QWORD *)this + 8) + 48) & 0x20800;
                if ( (_DWORD)v102 != 133120 )
                {
                  v103 = WdLogNewEntry5_WdAssertion(v102);
                  WdLogEvent5_WdAssertion(v103);
                }
                v104 = *((_QWORD *)this + 8);
                v105 = *(_DWORD *)(v98 + v104 + 64);
                v151.left = *(_DWORD *)(v98 + v104 + 184);
                v151.right = *(_DWORD *)(v98 + v104 + 192) + v151.left;
                v106 = *(_DWORD *)(v98 + v104 + 188);
                v149 = v105;
                v151.top = v106;
                v151.bottom = *(_DWORD *)(v98 + v104 + 196) + v106;
                v148 = v100 == v97;
                v152 = (struct _LUID *)(v98 + v104 + 56);
                v107 = DXGGLOBAL::GetGlobal();
                v150 = DXGGLOBAL::GetSessionData(v107);
                v108 = v150;
                if ( v150 )
                {
                  if ( *((struct _KTHREAD **)v150 + 2315) != KeGetCurrentThread() )
                  {
                    v138 = WdLogNewEntry5_WdAssertion(v150);
                    *(_QWORD *)(v138 + 24) = 685LL;
                    WdLogEvent5_WdAssertion(v138);
                    v108 = v150;
                  }
                  v109 = DXGSESSIONDATA::AddSourceViewToSession(v108, &v151, v152, v149, v148);
                  v97 = v145[0];
                  if ( v109 >= 0 )
                  {
                    if ( v100 == v101 )
                      ++*(_WORD *)(*((_QWORD *)this + 8) + 28LL);
LABEL_82:
                    v111 = *((_QWORD *)this + 8);
                    v145[0] = ++v97;
                    if ( v97 >= *(_WORD *)(v111 + 20) )
                    {
                      v78 = v146;
                      goto LABEL_84;
                    }
                    continue;
                  }
                  v137 = v109;
                }
                else
                {
                  v136 = WdLogNewEntry5_WdError(0LL);
                  *(_QWORD *)(v136 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
                  *(_QWORD *)(v136 + 32) = -1073741811LL;
                  WdLogEvent5_WdError(v136);
                  v137 = -1073741811;
                }
                break;
              }
              v139 = (_QWORD *)WdLogNewEntry5_WdError(v110);
              v139[3] = *(int *)(v98 + *((_QWORD *)this + 8) + 60);
              v139[4] = *(unsigned int *)(v98 + *((_QWORD *)this + 8) + 56);
              v140 = *(unsigned int *)(v98 + *((_QWORD *)this + 8) + 64);
              v139[6] = v137;
              v139[5] = v140;
              WdLogEvent5_WdError(v139);
              *(_DWORD *)(v98 + *((_QWORD *)this + 8) + 256) = v137;
              goto LABEL_82;
            }
LABEL_84:
            CCD_TOPOLOGY::CleanupPrimaryPathIndex(this);
            CCD_TOPOLOGY::CleanupPrimaryPathIndex((CCD_TOPOLOGY *)v155);
            v112 = *((_QWORD *)this + 8);
            v113 = 0;
            v114 = 0;
            v115 = *(_DWORD *)(v112 + 36);
            if ( v115 )
            {
              v116 = *(_QWORD *)(v112 + 40);
              while ( 1 )
              {
                v117 = 168LL * v114;
                if ( *(_DWORD *)(v117 + v116 + 148) || *(_DWORD *)(v117 + v116 + 152) )
                  break;
                if ( *(_DWORD *)(v117 + v116 + 164) || *(_DWORD *)(v117 + v116 + 160) || *(_DWORD *)(v117 + v116 + 156) )
                  v113 = 1;
                if ( ++v114 >= v115 )
                  goto LABEL_88;
              }
              v113 = 0;
LABEL_88:
              if ( v113 )
              {
                v154[0] = 11LL;
                v154[1] = 0LL;
                v141 = DxgkStatusChangeNotify((int *)v154);
                v143 = v141;
                if ( v141 < 0 )
                {
                  v144 = WdLogNewEntry5_WdError(v142);
                  *(_QWORD *)(v144 + 24) = v143;
                  WdLogEvent5_WdError(v144);
                }
              }
            }
            v8 = v78 != 0 ? 0xC0000001 : 0;
            goto LABEL_90;
          }
          v124 = WdLogNewEntry5_WdLowResource(v28);
          *(_QWORD *)(v124 + 24) = this;
          v125 = *((_QWORD *)this + 8);
LABEL_146:
          *(_QWORD *)(v124 + 32) = v125;
          WdLogEvent5_WdLowResource(v124);
          LODWORD(v19) = -1073741801;
          goto LABEL_147;
        }
        v4 = v145[0];
      }
      v124 = WdLogNewEntry5_WdLowResource(v20);
      *(_QWORD *)(v124 + 24) = *((_QWORD *)this + 8);
      v125 = v4;
      goto LABEL_146;
    }
    v123 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v123 + 24) = v19;
LABEL_101:
    WdLogEvent5_WdError(v123);
LABEL_147:
    v8 = v19;
LABEL_90:
    DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v147);
  }
LABEL_91:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v155);
  CPROCESSATTACHHELPER::Detach(&ApcState);
  return v8;
}
