/*
 * XREFs of ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4E18
 * Callers:
 *     DxgkApplyPathsModality @ 0x1C00C6280 (DxgkApplyPathsModality.c)
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00C6908 (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00C9138 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000B054 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Detach@CPROCESSATTACHHELPER@@QEAAXXZ @ 0x1C000B08C (-Detach@CPROCESSATTACHHELPER@@QEAAXXZ.c)
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z @ 0x1C000CE58 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@0@Z.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0096990 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEAU_LUID@@IEPEAPEAVSESSION_VIEW@@@Z @ 0x1C009F048 (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEAU_LUID@@IEPEAPEAVSESSION_VIEW@@@Z.c)
 *     ?CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00A300C (-CleanupPrimaryPathIndex@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00A3048 (-BuildPrimaryPathIndexFromCloneGroupId@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C00A3CD0 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z.c)
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00A423C (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00A4894 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00A4904 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00A4940 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00A4B98 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C00B1110 (DxgkStatusChangeNotify.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x1C00C6094 (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C0181BB0 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEAU_LUID@@IJ@Z @ 0x1C0181FE0 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEAU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopology(CCD_TOPOLOGY *this, unsigned int a2)
{
  unsigned int v2; // r13d
  unsigned __int16 v4; // si
  __int64 v5; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v8; // rcx
  unsigned int v9; // r14d
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rcx
  struct DXGPROCESS *v12; // r15
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int Active; // eax
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rcx
  DXGGLOBAL *v27; // rax
  SIZE_T v28; // rax
  unsigned __int64 MaximumAdapterCount; // kr00_8
  PVOID v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int i; // r14d
  DXGGLOBAL *v37; // rax
  __int64 v38; // rbx
  unsigned __int16 v39; // r8
  struct DXGPROCESS *v40; // r15
  int j; // r11d
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned __int16 k; // r9
  __int64 v46; // r10
  __int64 v47; // rcx
  unsigned __int16 m; // r9
  __int64 v49; // r8
  __int64 v50; // r14
  unsigned int v51; // r11d
  unsigned int v52; // ebx
  _DWORD *v53; // r10
  int v54; // r11d
  __int64 v55; // rcx
  unsigned __int16 n; // dx
  __int64 v57; // r8
  unsigned __int16 v58; // r9
  __int64 v59; // rdx
  unsigned int v60; // r8d
  unsigned int v61; // ecx
  __int64 v62; // r10
  __int64 v63; // r11
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rcx
  unsigned __int16 v69; // r14
  __int64 v70; // rbx
  int v71; // eax
  unsigned int v72; // esi
  __int64 v73; // rcx
  unsigned int v74; // edx
  __int64 v75; // r9
  __int64 v76; // r8
  __int64 v77; // r15
  __int64 v78; // rax
  unsigned int v79; // edx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rax
  __int64 v83; // rcx
  char v84; // r12
  unsigned int v85; // esi
  int v86; // eax
  __int64 v87; // r14
  __int64 v88; // rbx
  int v89; // eax
  __int64 v90; // r14
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rbx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rcx
  _BYTE *v99; // rax
  __int64 v100; // rax
  unsigned __int16 v101; // si
  __int64 v102; // r15
  __int64 v103; // rax
  unsigned int v104; // r13d
  int v105; // ebx
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rdx
  unsigned int v109; // eax
  LONG v110; // ecx
  __int64 v111; // rcx
  DXGGLOBAL *v112; // rax
  struct DXGPROCESS *v113; // rcx
  int v114; // eax
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rdx
  int v118; // r10d
  unsigned int v119; // r8d
  unsigned int v120; // r9d
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v124; // r9
  __int64 v125; // rbx
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // r11
  __int64 v135; // rbx
  __int64 v136; // r10
  bool IsSameCloneGroup; // al
  _QWORD *v138; // rax
  __int64 v139; // rbx
  _QWORD *v140; // rax
  __int64 v141; // rbx
  int v142; // ebx
  __int64 v143; // rax
  _QWORD *v144; // rax
  __int64 v145; // rdx
  int v146; // eax
  __int64 v147; // rcx
  __int64 v148; // rbx
  __int64 v149; // rax
  unsigned __int16 v150[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v151; // [rsp+34h] [rbp-CCh] BYREF
  char v152; // [rsp+35h] [rbp-CBh]
  unsigned __int8 v153; // [rsp+36h] [rbp-CAh]
  unsigned int v154; // [rsp+38h] [rbp-C8h]
  struct DXGPROCESS *v155; // [rsp+40h] [rbp-C0h]
  struct tagRECT v156; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v157[16]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v158[2]; // [rsp+68h] [rbp-98h] BYREF
  struct _LUID *v159; // [rsp+78h] [rbp-88h]
  _BYTE v160[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v161; // [rsp+C0h] [rbp-40h]
  int v162; // [rsp+D4h] [rbp-2Ch]
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-20h] BYREF
  char v164; // [rsp+110h] [rbp+10h]

  v154 = a2;
  v2 = a2;
  v164 = 0;
  v4 = 8;
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v160, 8u, 0);
  Global = DXGGLOBAL::GetGlobal(v5);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  v9 = -1073741811;
  if ( !SessionData )
  {
    v125 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v125 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    v126 = v125;
    *(_QWORD *)(v125 + 32) = -1073741811LL;
LABEL_96:
    WdLogEvent5_WdError(v126);
    goto LABEL_91;
  }
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)SessionData + 2324));
  Current = DXGPROCESS::GetCurrent();
  v155 = Current;
  v12 = Current;
  if ( !Current )
  {
    v126 = WdLogNewEntry5_WdError(v11);
    goto LABEL_96;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 224LL))(0LL) )
  {
    v127 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v127 + 24) = v12;
    WdLogEvent5_WdError(v127);
    v9 = -1073741790;
  }
  else
  {
    v151 = 0;
    v14 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v151, 1);
    v18 = v14;
    if ( v14 >= 0 )
    {
      v150[0] = 8;
      while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v160, v4, v16, v17) >= v4 )
      {
        v162 |= 1u;
        Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v160, 0, 1, 1, v150);
        v18 = Active;
        if ( Active != -1073741789 )
        {
          if ( Active < 0 )
          {
            v128 = WdLogNewEntry5_WdError(v24);
            *(_QWORD *)(v128 + 24) = *((_QWORD *)this + 8);
            *(_QWORD *)(v128 + 32) = v18;
            goto LABEL_101;
          }
          CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId(this);
          CCD_TOPOLOGY::BuildPrimaryPathIndexFromCloneGroupId((CCD_TOPOLOGY *)v160);
          v25 = v161;
          v27 = DXGGLOBAL::GetGlobal(v26);
          MaximumAdapterCount = (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(v27);
          v28 = 168 * MaximumAdapterCount;
          if ( !is_mul_ok(MaximumAdapterCount, 0xA8uLL) )
            v28 = -1LL;
          v30 = operator new[](v28, 0x63644356u, PagedPool);
          v34 = *((_QWORD *)this + 8);
          *(_QWORD *)(v34 + 40) = v30;
          v35 = *((_QWORD *)this + 8);
          if ( *(_QWORD *)(v35 + 40) )
          {
            *(_WORD *)(v35 + 28) = 0;
            for ( i = 0; ; ++i )
            {
              v37 = DXGGLOBAL::GetGlobal(v34);
              if ( i >= (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(v37) )
                break;
              v38 = 168LL * i;
              memset((void *)(v38 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)), 0, 0xA8uLL);
              memset((void *)(v38 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 8LL), 255, 0x40uLL);
            }
            DxgkRemoveAllSessionViewForCurrentSession();
            v39 = 0;
            v40 = v155;
            for ( j = 1; v39 < *(_WORD *)(v25 + 20); v39 += j )
            {
              v42 = 216LL * v39;
              v43 = *(unsigned int *)(v42 + v25 + 236);
              if ( (_DWORD)v43 == v39
                || !CCD_TOPOLOGY::IsMatchingSource(
                      (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v42 + v25 + 48),
                      (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(216 * v43 + v25 + 48)) )
              {
                *(_DWORD *)(v42 + v25 + 232) = 0;
              }
              else
              {
                *(_DWORD *)(v42 + v25 + 232) = j;
                *(_DWORD *)(216LL * *(unsigned int *)(v42 + v25 + 236) + v25 + 232) = j;
              }
            }
            v44 = *((_QWORD *)this + 8);
            for ( k = 0; k < *(_WORD *)(v44 + 20); k += j )
            {
              v46 = 216LL * k;
              v47 = *(unsigned int *)(v46 + v44 + 236);
              if ( (_DWORD)v47 == k
                || !CCD_TOPOLOGY::IsMatchingSource(
                      (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v46 + v44 + 48),
                      (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v44 + 216 * v47 + 48)) )
              {
                *(_DWORD *)(v46 + v44 + 232) = 0;
              }
              else
              {
                *(_DWORD *)(v46 + v44 + 232) = j;
                *(_DWORD *)(216LL * *(unsigned int *)(v46 + *((_QWORD *)this + 8) + 236) + *((_QWORD *)this + 8) + 232) = j;
              }
              v44 = *((_QWORD *)this + 8);
            }
            for ( m = 0; m < *(_WORD *)(v25 + 20); m += j )
            {
              v49 = v25 + 216LL * m;
              if ( !*(_DWORD *)(v49 + 232) )
              {
                v50 = *((_QWORD *)this + 8);
                v51 = 0;
                v52 = *(unsigned __int16 *)(v50 + 20);
                if ( *(_WORD *)(v50 + 20) )
                {
                  while ( !CCD_TOPOLOGY::IsMatchingSource(
                             (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v49 + 48),
                             (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v50 + 216LL * v51 + 48)) )
                  {
                    v51 = v54 + 1;
                    if ( v51 >= v52 )
                      goto LABEL_30;
                  }
                  if ( *(_DWORD *)(v49 + 68) != v53[17]
                    || !CCD_TOPOLOGY::IsMatchingSource(
                          (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v25 + 216LL * *(unsigned int *)(v49 + 236) + 48),
                          (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(216LL * (unsigned int)v53[59] + v50 + 48)) )
                  {
                    v131 = *(unsigned int *)(v49 + 236);
                    if ( (_DWORD)v131 != m )
                      *(_DWORD *)(216 * v131 + v25 + 232) |= 2u;
                    v132 = (unsigned int)v53[59];
                    if ( (_DWORD)v132 != v54 )
                      *(_DWORD *)(216 * v132 + *((_QWORD *)this + 8) + 232) |= 2u;
                  }
                  *(_DWORD *)(v49 + 232) |= 1u;
                  v53[58] |= 1u;
                }
LABEL_30:
                j = 1;
                if ( !*(_DWORD *)(v49 + 232) )
                {
                  v133 = *(unsigned int *)(v49 + 236);
                  if ( (_DWORD)v133 != m )
                  {
                    *(_DWORD *)(v49 + 232) = 1;
                    *(_DWORD *)(216 * v133 + v25 + 232) |= 2u;
                  }
                }
              }
            }
            v55 = *((_QWORD *)this + 8);
            for ( n = 0; n < *(_WORD *)(v55 + 20); n += j )
            {
              v57 = 216LL * n;
              if ( !*(_DWORD *)(v57 + v55 + 232) )
              {
                v124 = *(unsigned int *)(v57 + v55 + 236);
                if ( (_DWORD)v124 != n )
                {
                  *(_DWORD *)(v57 + v55 + 232) = j;
                  *(_DWORD *)(216 * v124 + *((_QWORD *)this + 8) + 232) |= 2u;
                }
              }
              v55 = *((_QWORD *)this + 8);
            }
            v58 = 0;
            if ( *(_WORD *)(v25 + 20) )
            {
              do
              {
                v59 = *((_QWORD *)this + 8);
                v60 = 0;
                v61 = *(_DWORD *)(v59 + 36);
                if ( v61 )
                {
                  v134 = *(_QWORD *)(v59 + 40);
                  v135 = 216LL * v58;
                  do
                  {
                    v136 = 168LL * v60;
                    if ( *(_DWORD *)(v135 + v25 + 56) == *(_DWORD *)(v136 + v134)
                      && *(_DWORD *)(v135 + v25 + 60) == *(_DWORD *)(v136 + v134 + 4) )
                    {
                      break;
                    }
                    ++v60;
                  }
                  while ( v60 < v61 );
                }
                v62 = 168LL * v60;
                v63 = 216LL * v58;
                *(_DWORD *)(*(_QWORD *)(v59 + 40) + v62 + 144) |= 1 << *(_DWORD *)(v63 + v25 + 64);
                if ( (*(_DWORD *)(v63 + v25 + 232) & 2) != 0 )
                  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v62 + 140) |= 1 << *(_DWORD *)(v63 + v25 + 64);
                v64 = *((_QWORD *)this + 8);
                v65 = *(unsigned int *)(v64 + 36);
                if ( v60 < (unsigned int)v65 )
                {
                  j = 1;
                }
                else
                {
                  v66 = 168 * v65;
                  v67 = *(_QWORD *)(v63 + v25 + 56);
                  j = 1;
                  *(_QWORD *)(v66 + *(_QWORD *)(v64 + 40)) = v67;
                  ++*(_DWORD *)(*((_QWORD *)this + 8) + 36LL);
                }
                ++v58;
              }
              while ( v58 < *(_WORD *)(v25 + 20) );
              v2 = v154;
            }
            v68 = *((_QWORD *)this + 8);
            v69 = 0;
            if ( *(_WORD *)(v68 + 20) )
            {
              while ( 2 )
              {
                v70 = 216LL * v69;
                v71 = *(_DWORD *)(v70 + v68 + 48);
                if ( (v71 & 0x187) != 0 )
                {
                  *(_DWORD *)(v70 + v68 + 48) = v71 | 0x400000;
                  *(_DWORD *)(v70 + *((_QWORD *)this + 8) + 52) |= *(_DWORD *)(v70 + *((_QWORD *)this + 8) + 48) & 0x187;
                }
                v72 = 0;
                *(_DWORD *)(v70 + *((_QWORD *)this + 8) + 256) = 0;
                v73 = *((_QWORD *)this + 8);
                v74 = *(_DWORD *)(v73 + 36);
                if ( v74 )
                {
                  v75 = *(_QWORD *)(v73 + 40);
                  do
                  {
                    v76 = 168LL * v72;
                    if ( *(_DWORD *)(v70 + v73 + 56) == *(_DWORD *)(v76 + v75)
                      && *(_DWORD *)(v70 + v73 + 60) == *(_DWORD *)(v76 + v75 + 4) )
                    {
                      break;
                    }
                    v72 += j;
                  }
                  while ( v72 < v74 );
                }
                v77 = 168LL * v72;
                *(_DWORD *)(*(_QWORD *)(v73 + 40) + v77 + 148) |= j << *(_DWORD *)(v70 + v73 + 64);
                v78 = *((_QWORD *)this + 8);
                v79 = *(_DWORD *)(v70 + v78 + 236);
                if ( v79 == v69 )
                {
                  *(_DWORD *)(*(_QWORD *)(v78 + 40) + v77 + 136) |= j << *(_DWORD *)(v70 + v78 + 64);
                  goto LABEL_52;
                }
                IsSameCloneGroup = CCD_TOPOLOGY::IsSameCloneGroup(this, v79, v69, j);
                j = 1;
                if ( !IsSameCloneGroup )
LABEL_52:
                  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL)
                            + 4 * (42LL * v72 + *(unsigned int *)(v70 + *((_QWORD *)this + 8) + 64))
                            + 8) = v69;
                v80 = *((_QWORD *)this + 8);
                if ( (*(_DWORD *)(v70 + v80 + 232) & 2) != 0 )
                  *(_DWORD *)(*(_QWORD *)(v80 + 40) + v77 + 140) |= j << *(_DWORD *)(v70 + v80 + 64);
                v81 = *((_QWORD *)this + 8);
                v82 = *(unsigned int *)(v81 + 36);
                if ( v72 >= (unsigned int)v82 )
                {
                  *(_QWORD *)(168 * v82 + *(_QWORD *)(v81 + 40)) = *(_QWORD *)(v70 + v81 + 56);
                  *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) += j;
                }
                v68 = *((_QWORD *)this + 8);
                v69 += j;
                if ( v69 >= *(_WORD *)(v68 + 20) )
                {
                  v40 = v155;
                  v2 = v154;
                  break;
                }
                continue;
              }
            }
            v83 = *(unsigned int *)(*((_QWORD *)this + 8) + 36LL);
            v84 = *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) != 0 ? j : 0;
            v85 = 0;
            v152 = v84;
            if ( (_DWORD)v83 )
            {
              do
              {
                v86 = CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(this, v85);
                v87 = v86;
                if ( v86 < 0 )
                {
                  v138 = (_QWORD *)WdLogNewEntry5_WdError(v83);
                  v139 = 168LL * v85;
                  v138[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v139 + 4);
                  v138[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v139);
                  v138[5] = *((_QWORD *)this + 8);
                  v138[6] = v87;
                  WdLogEvent5_WdError(v138);
                  CCD_TOPOLOGY::MarkPathsApplyFailure(
                    this,
                    (struct _LUID *)(v139 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
                    0xFFFFFFFF,
                    v87);
                }
                else
                {
                  v88 = 168LL * v85;
                  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v88 + 144) )
                  {
                    v89 = CCD_TOPOLOGY::ApplyTopologyOnAdapter(this, (struct DXGFASTMUTEX *const *)v40, v2, v85);
                    v90 = v89;
                    if ( v89 < 0 )
                    {
                      v140 = (_QWORD *)WdLogNewEntry5_WdError(v83);
                      v140[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v88 + 4);
                      v140[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + 168LL * v85);
                      v140[5] = *((_QWORD *)this + 8);
                      v140[6] = v90;
                      WdLogEvent5_WdError(v140);
                    }
                    else
                    {
                      v84 = 0;
                    }
                  }
                }
                ++v85;
              }
              while ( v85 < *(_DWORD *)(*((_QWORD *)this + 8) + 36LL) );
              v152 = v84;
            }
            v93 = *((_QWORD *)DXGGLOBAL::GetGlobal(v83) + 134);
            if ( *(_BYTE *)v93 )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v92, v91, v94, v95) + 24) = 193LL;
            }
            else
            {
              DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v157, *(struct DXGFASTMUTEX *const *)(v93 + 8));
              DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v157);
              v98 = 18LL;
              v99 = (_BYTE *)(v93 + 16);
              do
              {
                *v99 = 0;
                v99 += 48;
                --v98;
              }
              while ( v98 );
              ++*(_DWORD *)(v93 + 880);
              *(_QWORD *)(WdLogNewEntry5_WdTrace(0LL, 1LL, v96, v97) + 24) = 215LL;
              if ( v157[8] )
                DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v157);
            }
            v100 = *((_QWORD *)this + 8);
            v101 = 0;
            v150[0] = 0;
            if ( *(_WORD *)(v100 + 20) )
            {
              while ( 2 )
              {
                v102 = 216LL * v101;
                v103 = *((_QWORD *)this + 8);
                v104 = *(_DWORD *)(v102 + v103 + 236);
                if ( *(int *)(v102 + v103 + 256) < 0 )
                  goto LABEL_82;
                v105 = v101;
                if ( v104 != v101 && CCD_TOPOLOGY::IsSameCloneGroup(this, v104, v101, 1) )
                  goto LABEL_82;
                v106 = *(_DWORD *)(v102 + *((_QWORD *)this + 8) + 48) & 0x20800;
                if ( (_DWORD)v106 != 133120 )
                {
                  v107 = WdLogNewEntry5_WdAssertion(v106);
                  WdLogEvent5_WdAssertion(v107);
                }
                v108 = *((_QWORD *)this + 8);
                v109 = *(_DWORD *)(v102 + v108 + 64);
                v156.left = *(_DWORD *)(v102 + v108 + 180);
                v156.right = *(_DWORD *)(v102 + v108 + 188) + v156.left;
                v110 = *(_DWORD *)(v102 + v108 + 184);
                v154 = v109;
                v156.top = v110;
                v111 = (unsigned int)(*(_DWORD *)(v102 + v108 + 192) + v110);
                v156.bottom = v111;
                v153 = v104 == v101;
                v159 = (struct _LUID *)(v102 + v108 + 56);
                v112 = DXGGLOBAL::GetGlobal(v111);
                v155 = DXGGLOBAL::GetSessionData(v112);
                v113 = v155;
                if ( v155 )
                {
                  if ( *((struct _KTHREAD **)v155 + 2318) != KeGetCurrentThread() )
                  {
                    v143 = WdLogNewEntry5_WdAssertion(v155);
                    *(_QWORD *)(v143 + 24) = 685LL;
                    WdLogEvent5_WdAssertion(v143);
                    v113 = v155;
                  }
                  v114 = DXGSESSIONDATA::AddSourceViewToSession(v113, &v156, v159, v154, v153);
                  v101 = v150[0];
                  if ( v114 >= 0 )
                  {
                    if ( v104 == v105 )
                      ++*(_WORD *)(*((_QWORD *)this + 8) + 28LL);
LABEL_82:
                    v116 = *((_QWORD *)this + 8);
                    v150[0] = ++v101;
                    if ( v101 >= *(_WORD *)(v116 + 20) )
                    {
                      v84 = v152;
                      goto LABEL_84;
                    }
                    continue;
                  }
                  v142 = v114;
                }
                else
                {
                  v141 = WdLogNewEntry5_WdError(0LL);
                  *(_QWORD *)(v141 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
                  *(_QWORD *)(v141 + 32) = -1073741811LL;
                  WdLogEvent5_WdError(v141);
                  v142 = -1073741811;
                }
                break;
              }
              v144 = (_QWORD *)WdLogNewEntry5_WdError(v115);
              v144[3] = *(int *)(v102 + *((_QWORD *)this + 8) + 60);
              v144[4] = *(unsigned int *)(v102 + *((_QWORD *)this + 8) + 56);
              v145 = *(unsigned int *)(v102 + *((_QWORD *)this + 8) + 64);
              v144[6] = v142;
              v144[5] = v145;
              WdLogEvent5_WdError(v144);
              *(_DWORD *)(v102 + *((_QWORD *)this + 8) + 256) = v142;
              goto LABEL_82;
            }
LABEL_84:
            CCD_TOPOLOGY::CleanupPrimaryPathIndex(this);
            CCD_TOPOLOGY::CleanupPrimaryPathIndex((CCD_TOPOLOGY *)v160);
            v117 = *((_QWORD *)this + 8);
            v118 = 0;
            v119 = 0;
            v120 = *(_DWORD *)(v117 + 36);
            if ( v120 )
            {
              v121 = *(_QWORD *)(v117 + 40);
              while ( 1 )
              {
                v122 = 168LL * v119;
                if ( *(_DWORD *)(v122 + v121 + 148) || *(_DWORD *)(v122 + v121 + 152) )
                  break;
                if ( *(_DWORD *)(v122 + v121 + 164) || *(_DWORD *)(v122 + v121 + 160) || *(_DWORD *)(v122 + v121 + 156) )
                  v118 = 1;
                if ( ++v119 >= v120 )
                  goto LABEL_88;
              }
              v118 = 0;
LABEL_88:
              if ( v118 )
              {
                v158[0] = 11LL;
                v158[1] = 0LL;
                v146 = DxgkStatusChangeNotify(v158);
                v148 = v146;
                if ( v146 < 0 )
                {
                  v149 = WdLogNewEntry5_WdError(v147);
                  *(_QWORD *)(v149 + 24) = v148;
                  WdLogEvent5_WdError(v149);
                }
              }
            }
            v9 = v84 != 0 ? 0xC0000001 : 0;
            goto LABEL_90;
          }
          v129 = WdLogNewEntry5_WdLowResource(v34, v31, v32, v33);
          *(_QWORD *)(v129 + 24) = this;
          v130 = *((_QWORD *)this + 8);
LABEL_146:
          *(_QWORD *)(v129 + 32) = v130;
          WdLogEvent5_WdLowResource(v129);
          LODWORD(v18) = -1073741801;
          goto LABEL_147;
        }
        v4 = v150[0];
      }
      v129 = WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
      *(_QWORD *)(v129 + 24) = *((_QWORD *)this + 8);
      v130 = v4;
      goto LABEL_146;
    }
    v128 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v128 + 24) = v18;
LABEL_101:
    WdLogEvent5_WdError(v128);
LABEL_147:
    v9 = v18;
LABEL_90:
    DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v151);
  }
LABEL_91:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v160);
  CPROCESSATTACHHELPER::Detach(&ApcState);
  return v9;
}
