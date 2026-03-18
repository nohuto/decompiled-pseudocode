/*
 * XREFs of DxgkGetAdapterDeviceDesc @ 0x1C008B8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C008C260 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C008C4A4 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?D3dPixelFormatToDisplayConfigPixelFormat@@YAXW4_D3DDDIFORMAT@@PEAW4DISPLAYCONFIG_PIXELFORMAT@@@Z @ 0x1C008D884 (-D3dPixelFormatToDisplayConfigPixelFormat@@YAXW4_D3DDDIFORMAT@@PEAW4DISPLAYCONFIG_PIXELFORMAT@@@.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkGetAdapterDeviceDesc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  struct DXGGLOBAL *v5; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // r13
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 CurrentProcess; // rbx
  __int64 ProcessWin32Process; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  struct DXGADAPTER **v26; // r9
  unsigned int v27; // edx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  volatile signed __int64 *v32; // rbx
  struct DXGADAPTER *v33; // rdi
  _BOOL8 v34; // rcx
  __int64 v35; // rax
  struct DXGADAPTER *v36; // r14
  signed __int64 v37; // rax
  struct DXGADAPTER *v38; // rbx
  __int64 v39; // rax
  struct DXGADAPTER *v40; // rcx
  char v41; // of
  __int64 v42; // rax
  __int64 v43; // rt0
  struct DXGADAPTER *v44; // rbx
  int v45; // eax
  struct DXGADAPTER *v46; // r9
  int v47; // eax
  int v48; // eax
  _WORD *v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // r8
  __int16 v54; // ax
  unsigned __int16 *v55; // rax
  _WORD *v56; // rcx
  __int64 v57; // rdi
  unsigned __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int16 v61; // ax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  struct DXGADAPTER *v67; // r14
  struct DXGADAPTER *v68; // rbx
  char *v69; // r15
  __int64 v70; // rcx
  int v71; // eax
  __int64 v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  struct DXGADAPTER *v83; // r15
  __int64 v84; // rax
  __int64 v85; // rbx
  __int64 v86; // r12
  int **v87; // r13
  int v88; // ebx
  __int64 v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // r14
  __int64 v95; // rbx
  __int64 v96; // rbx
  __int64 v97; // rax
  int v98; // eax
  int v99; // ecx
  int v100; // eax
  struct DXGADAPTER *v101; // r8
  int v102; // eax
  int v103; // eax
  _WORD *v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int16 v107; // ax
  unsigned __int16 *v108; // rcx
  _WORD *v109; // rax
  unsigned __int64 v110; // r8
  __int64 v111; // rdx
  __int16 v112; // cx
  __int64 v113; // rcx
  __int64 v114; // rax
  struct DXGADAPTER *v115; // rcx
  __int64 v116; // rax
  struct DXGADAPTER *v117; // rcx
  __int64 v118; // rdi
  unsigned int v120; // ebx
  DXGGLOBAL *Global; // rax
  __int64 v122; // rdx
  __int64 v123; // r8
  __int64 v124; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  _QWORD *v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  _QWORD *v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  struct DXGADAPTER *v155; // [rsp+20h] [rbp-79h] BYREF
  struct DXGADAPTER *v156; // [rsp+28h] [rbp-71h] BYREF
  DXGFASTMUTEX *v157; // [rsp+30h] [rbp-69h] BYREF
  char v158; // [rsp+38h] [rbp-61h]
  char *v159; // [rsp+40h] [rbp-59h]
  struct DXGADAPTER *v160; // [rsp+48h] [rbp-51h]
  _BYTE v161[8]; // [rsp+58h] [rbp-41h] BYREF
  struct DXGADAPTER *v162; // [rsp+60h] [rbp-39h]
  char v163; // [rsp+68h] [rbp-31h]
  _BYTE v164[8]; // [rsp+70h] [rbp-29h] BYREF
  struct DXGADAPTER *v165; // [rsp+78h] [rbp-21h]
  char v166; // [rsp+80h] [rbp-19h]
  struct DXGADAPTER *v167; // [rsp+88h] [rbp-11h] BYREF
  char v168; // [rsp+90h] [rbp-9h]
  struct DXGADAPTER *v169; // [rsp+98h] [rbp-1h] BYREF
  char v170; // [rsp+A0h] [rbp+7h]
  unsigned int v172; // [rsp+108h] [rbp+6Fh]
  bool v174; // [rsp+118h] [rbp+7Fh]

  v172 = a2;
  v4 = (unsigned int)a2;
  v156 = 0LL;
  v155 = 0LL;
  if ( !a3 )
  {
    v128 = WdLogNewEntry5_WdAssertion(a1, a2, 0LL, a4);
    *(_QWORD *)(v128 + 24) = 4855LL;
    WdLogEvent5_WdAssertion(v128);
  }
  v5 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v129 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v129 + 24) = 1038LL;
    WdLogEvent5_WdAssertion(v129);
    v5 = DXGGLOBAL::m_pGlobal;
  }
  v158 = 0;
  v157 = (struct DXGGLOBAL *)((char *)v5 + 376);
  if ( v5 == (struct DXGGLOBAL *)-376LL )
  {
    v130 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v130 + 24) = 421LL;
    WdLogEvent5_WdAssertion(v130);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v157 + 1) == CurrentThread )
  {
    v131 = WdLogNewEntry5_WdAssertion(CurrentThread, a2, a3, a4);
    *(_QWORD *)(v131 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v131);
  }
  if ( v158 )
  {
    v132 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, a2, a3);
    v132[5] = &v157;
    v132[3] = 275LL;
    v132[4] = 4LL;
    v132[6] = 0LL;
    v132[7] = 0LL;
    WdLogEvent5_WdCriticalError(v132);
  }
  DXGFASTMUTEX::Acquire(v157);
  v158 = 1;
  v8 = (_QWORD *)*((_QWORD *)v5 + 52);
LABEL_12:
  while ( v8 != (_QWORD *)((char *)v5 + 416) && v8 )
  {
    v9 = v8;
    v8 = (_QWORD *)*v8;
    if ( *(_QWORD *)((char *)v9 + 252) == a1 )
    {
      _m_prefetchw(v9 + 3);
      v10 = v9[3];
      if ( v10 )
      {
        while ( 1 )
        {
          v7 = v10 + 1;
          v11 = v10;
          v10 = _InterlockedCompareExchange64(v9 + 3, v10 + 1, v10);
          if ( v11 == v10 )
            break;
          if ( !v10 )
            goto LABEL_12;
        }
        if ( v158 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v157);
        v12 = DxgkAcquireSessionModeChangeLock(0LL);
        v14 = v12;
        v174 = v12 >= 0;
        if ( v12 < 0 )
        {
          v133 = WdLogNewEntry5_WdError(v13);
          *(_QWORD *)(v133 + 24) = v14;
          WdLogEvent5_WdError(v133);
          goto LABEL_130;
        }
        CurrentProcess = PsGetCurrentProcess(v13);
        ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
        if ( ProcessWin32Process )
        {
          v21 = *(_QWORD *)(ProcessWin32Process + 248);
        }
        else
        {
          v134 = WdLogNewEntry5_WdEvent(v18, v17, v19, v20);
          *(_QWORD *)(v134 + 24) = CurrentProcess;
          WdLogEvent5_WdEvent(v134);
          v21 = 0LL;
        }
        if ( !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v21 + 80) + 224LL))(0LL) )
        {
          if ( (_DWORD)v4 != -1 )
          {
            v26 = &v156;
            v27 = v4;
            goto LABEL_25;
          }
LABEL_135:
          v26 = 0LL;
          v27 = 0;
LABEL_25:
          if ( (int)DxgkpGetPairingAdapters((struct DXGADAPTER *)v9, v27, &v155, v26) < 0 )
          {
            v136 = WdLogNewEntry5_WdError(v29);
            *(_QWORD *)(v136 + 32) = (unsigned int)v4;
            *(_QWORD *)(v136 + 24) = v9;
            WdLogEvent5_WdError(v136);
            LODWORD(v14) = -1073741811;
            goto LABEL_130;
          }
          v32 = (volatile signed __int64 *)v155;
          if ( !v155 )
          {
            v137 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
            *(_QWORD *)(v137 + 24) = 4935LL;
            WdLogEvent5_WdAssertion(v137);
          }
          v33 = v156;
          v34 = (_DWORD)v4 == -1;
          if ( v34 != (v156 == 0LL) )
          {
            v138 = WdLogNewEntry5_WdAssertion(v34, v28, v30, v31);
            *(_QWORD *)(v138 + 24) = 4936LL;
            WdLogEvent5_WdAssertion(v138);
          }
          v162 = (struct DXGADAPTER *)v32;
          v163 = 0;
          if ( !v33 )
            v33 = (struct DXGADAPTER *)v32;
          if ( v32 )
          {
            if ( _InterlockedAdd64(v32 + 3, 1uLL) <= 0 )
            {
              v139 = WdLogNewEntry5_WdAssertion(v34, v28, v30, v31);
              *(_QWORD *)(v139 + 24) = 1050LL;
              WdLogEvent5_WdAssertion(v139);
            }
            v32 = (volatile signed __int64 *)v155;
          }
          if ( v33 )
            v32 = (volatile signed __int64 *)v33;
          v165 = (struct DXGADAPTER *)v32;
          v166 = 0;
          if ( v32 && _InterlockedAdd64(v32 + 3, 1uLL) <= 0 )
          {
            v140 = WdLogNewEntry5_WdAssertion(v34, v28, v30, v31);
            *(_QWORD *)(v140 + 24) = 1050LL;
            WdLogEvent5_WdAssertion(v140);
          }
          v35 = _InterlockedDecrement64(v9 + 3);
          if ( v35 )
          {
            if ( v35 < 0 )
            {
              v141 = WdLogNewEntry5_WdAssertion(v34, v28, v30, v31);
              *(_QWORD *)(v141 + 24) = 1067LL;
              WdLogEvent5_WdAssertion(v141);
            }
          }
          else
          {
            DXGGLOBAL::DestroyAdapter((DXGGLOBAL *)v9[2], (struct DXGADAPTER *)v9);
          }
          v36 = v155;
          v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)v155 + 3, 0xFFFFFFFFFFFFFFFFuLL);
          v38 = v155;
          v39 = v37 - 1;
          if ( v39 )
          {
            if ( v39 < 0 )
            {
              v142 = WdLogNewEntry5_WdAssertion(v34, v28, v30, v31);
              *(_QWORD *)(v142 + 24) = 1067LL;
              WdLogEvent5_WdAssertion(v142);
            }
          }
          else
          {
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v155 + 2), v155);
          }
          v40 = v156;
          v41 = 0;
          if ( v156 )
          {
            v42 = _InterlockedDecrement64((volatile signed __int64 *)v156 + 3);
            if ( v42 )
            {
              v41 = 0;
              if ( v42 < 0 )
              {
                v143 = WdLogNewEntry5_WdAssertion(v40, v28, v30, v31);
                *(_QWORD *)(v143 + 24) = 1067LL;
                WdLogEvent5_WdAssertion(v143);
              }
              v38 = v155;
            }
            else
            {
              DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v156 + 2), v156);
              v38 = v155;
            }
          }
          else
          {
            v156 = v38;
          }
          v169 = v38;
          v43 = _InterlockedAdd64((volatile signed __int64 *)v36 + 3, 1uLL);
          if ( (v43 < 0) ^ v41 | (v43 == 0) )
          {
            v144 = WdLogNewEntry5_WdAssertion(v40, v28, v30, v31);
            *(_QWORD *)(v144 + 24) = 1050LL;
            WdLogEvent5_WdAssertion(v144);
          }
          KeEnterCriticalRegion();
          v44 = v155;
          v159 = (char *)v155 + 104;
          ExAcquirePushLockSharedEx((char *)v155 + 104, 0LL);
          v45 = *((_DWORD *)v44 + 40);
          v170 = 1;
          if ( v45 != 1 )
          {
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v169);
            LODWORD(v14) = -1073741130;
            goto LABEL_118;
          }
          v46 = v155;
          v14 = a3;
          *(_DWORD *)(a3 + 832) = *((_DWORD *)v155 + 70);
          *(_DWORD *)(a3 + 836) = *((_DWORD *)v46 + 65);
          *(_DWORD *)(a3 + 840) = *((_DWORD *)v46 + 66);
          *(_DWORD *)(a3 + 844) = *((_DWORD *)v46 + 67);
          *(_DWORD *)(a3 + 848) = *((_DWORD *)v46 + 68);
          *(_DWORD *)(a3 + 852) = *((_DWORD *)v46 + 69);
          *(_DWORD *)(a3 + 1636) = (*((_DWORD *)v46 + 71) & 0x40) != 0;
          *(_DWORD *)(a3 + 1640) = *((_DWORD *)v46 + 58) > 1u;
          v47 = *((_DWORD *)v46 + 412);
          if ( v47 == 0x2000 )
          {
            v48 = 2000;
          }
          else if ( v47 == 4864 )
          {
            v48 = 1300;
          }
          else if ( *((_QWORD *)v46 + 86) )
          {
            v48 = 1300;
          }
          else if ( v47 == 4608 )
          {
            v48 = 1200;
          }
          else if ( !*((_QWORD *)v46 + 82) || !*((_QWORD *)v46 + 81) || (v48 = 1105, (*((_DWORD *)v46 + 341) & 4) == 0) )
          {
            v48 = 1000;
          }
          *(_DWORD *)(a3 + 856) = v48;
          v49 = (_WORD *)(a3 + 860);
          v50 = *((_QWORD *)v46 + 121);
          v51 = 128LL;
          if ( v50 )
          {
            v52 = 128LL;
            v53 = v50 - (_QWORD)v49;
            while ( v52 != -2147483518 )
            {
              v54 = *(_WORD *)((char *)v49 + v53);
              if ( !v54 )
                break;
              *v49++ = v54;
              if ( !--v52 )
              {
                --v49;
                break;
              }
            }
LABEL_64:
            *v49 = 0;
          }
          else if ( a3 != -860 )
          {
            goto LABEL_64;
          }
          v55 = (unsigned __int16 *)*((_QWORD *)v46 + 122);
          v56 = (_WORD *)(a3 + 1116);
          v57 = 260LL;
          v58 = (unsigned __int64)*v55 >> 1;
          if ( v58 <= 0x7FFFFFFE )
          {
            v59 = 260LL;
            v60 = *((_QWORD *)v55 + 1) - (_QWORD)v56;
            while ( v59 + v58 - 260 )
            {
              v61 = *(_WORD *)((char *)v56 + v60);
              if ( !v61 )
                break;
              *v56++ = v61;
              if ( !--v59 )
              {
                --v56;
                break;
              }
            }
          }
          *v56 = 0;
          ExReleasePushLockSharedEx(v159, 0LL);
          KeLeaveCriticalRegion();
          v66 = _InterlockedDecrement64((volatile signed __int64 *)v36 + 3);
          if ( v66 )
          {
            if ( v66 < 0 )
            {
              v145 = WdLogNewEntry5_WdAssertion(v63, v62, v64, v65);
              *(_QWORD *)(v145 + 24) = 1067LL;
              WdLogEvent5_WdAssertion(v145);
            }
          }
          else
          {
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v155 + 2), v155);
          }
          v67 = v156;
          v160 = v156;
          if ( !v156 )
            goto LABEL_117;
          v167 = v156;
          if ( _InterlockedAdd64((volatile signed __int64 *)v156 + 3, 1uLL) <= 0 )
          {
            v146 = WdLogNewEntry5_WdAssertion(v63, v62, v64, v65);
            *(_QWORD *)(v146 + 24) = 1050LL;
            WdLogEvent5_WdAssertion(v146);
          }
          KeEnterCriticalRegion();
          v68 = v156;
          v69 = (char *)v156 + 104;
          v159 = (char *)v156 + 104;
          ExAcquirePushLockSharedEx((char *)v156 + 104, 0LL);
          v71 = *((_DWORD *)v68 + 40);
          v168 = 1;
          if ( v71 == 1 )
          {
            if ( (_DWORD)v4 == -1
              || ((v72 = PsGetCurrentProcess(v70), (v73 = PsGetProcessWin32Process(v72)) == 0)
                ? (v147 = WdLogNewEntry5_WdEvent(v75, v74, v76, v77),
                   *(_QWORD *)(v147 + 24) = v72,
                   WdLogEvent5_WdEvent(v147),
                   v78 = 0LL)
                : (v78 = *(_QWORD *)(v73 + 248)),
                  (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v78 + 80) + 224LL))(0LL)) )
            {
              v14 = a3;
              v99 = 1;
              goto LABEL_96;
            }
            v83 = v156;
            v84 = *((_QWORD *)v156 + 247);
            if ( v84 && (unsigned int)v4 < *(_DWORD *)(v84 + 80) )
            {
              _mm_lfence();
              v85 = v9[247];
              if ( (unsigned int)v4 >= *(_DWORD *)(v85 + 80) )
              {
                v148 = WdLogNewEntry5_WdAssertion(v80, v79, v81, v82);
                *(_QWORD *)(v148 + 24) = 10012LL;
                WdLogEvent5_WdAssertion(v148);
              }
              v86 = 1008LL * (unsigned int)v4;
              v87 = *(int ***)(*(_QWORD *)(v85 + 112) + v86 + 48);
              if ( v87 && (v88 = **v87, v88 == (unsigned int)PsGetCurrentProcessSessionId(v80, v79, v81, v82)) )
              {
                v89 = *((_QWORD *)v83 + 247);
                DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v89 + 16));
                if ( v172 >= *(_DWORD *)(v89 + 80) )
                {
                  v149 = WdLogNewEntry5_WdAssertion(v91, v90, v92, v93);
                  *(_QWORD *)(v149 + 24) = 3473LL;
                  WdLogEvent5_WdAssertion(v149);
                }
                v94 = v86 + *(_QWORD *)(v89 + 112) + 900LL;
                *(_DWORD *)(a3 + 1916) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v83 + 247) + 112LL) + v86 + 956);
                v95 = *((_QWORD *)v83 + 247);
                if ( v172 >= *(_DWORD *)(v95 + 80) )
                {
                  v150 = WdLogNewEntry5_WdAssertion(a3, v90, v92, v93);
                  *(_QWORD *)(v150 + 24) = 3763LL;
                  WdLogEvent5_WdAssertion(v150);
                }
                *(_DWORD *)(a3 + 1920) = *(_DWORD *)(*(_QWORD *)(v95 + 112) + v86 + 624);
                *(_OWORD *)(a3 + 1644) = *(_OWORD *)(v87 + 3);
                v96 = *((_QWORD *)v83 + 247);
                DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v96 + 16));
                v97 = *(_QWORD *)(v96 + 112);
                v14 = a3;
                *(_OWORD *)(a3 + 1952) = *(_OWORD *)(v97 + v86 + 652);
                *(_DWORD *)(a3 + 1924) = *(_DWORD *)v94;
                *(_DWORD *)(a3 + 1928) = *(_DWORD *)(v94 + 4);
                D3dPixelFormatToDisplayConfigPixelFormat(
                  *(enum _D3DDDIFORMAT *)(v94 + 8),
                  (enum DISPLAYCONFIG_PIXELFORMAT *)(a3 + 1932));
                v98 = *(_DWORD *)(v94 + 16);
                if ( v98 == -2 && *(_DWORD *)(v94 + 20) == -2 )
                {
                  v99 = 1;
                  *(_DWORD *)(a3 + 1936) = 64;
                  *(_DWORD *)(a3 + 1940) = 1;
                }
                else
                {
                  *(_DWORD *)(a3 + 1936) = v98;
                  v99 = 1;
                  *(_DWORD *)(a3 + 1940) = *(_DWORD *)(v94 + 20);
                }
                v69 = v159;
                *(_DWORD *)(a3 + 1944) = *(_DWORD *)(v94 + 28);
                v100 = *(_DWORD *)(v94 + 24);
                v67 = v160;
                *(_DWORD *)(a3 + 1948) = v100;
              }
              else
              {
                v14 = a3;
                v69 = v159;
                v99 = 1;
                *(_DWORD *)(a3 + 1916) = -1;
                *(_QWORD *)(a3 + 1644) = 0LL;
                *(_QWORD *)(a3 + 1652) = 0LL;
                *(_QWORD *)(a3 + 1952) = 0LL;
                *(_QWORD *)(a3 + 1960) = 0LL;
                *(_QWORD *)(a3 + 1924) = 0LL;
                *(_QWORD *)(a3 + 1932) = 5LL;
                *(_DWORD *)(a3 + 1940) = 1;
                *(_QWORD *)(a3 + 1944) = 1LL;
              }
LABEL_96:
              v101 = v156;
              *(_DWORD *)(v14 + 20) = *((_DWORD *)v156 + 70);
              *(_DWORD *)(v14 + 24) = *((_DWORD *)v101 + 65);
              *(_DWORD *)(v14 + 28) = *((_DWORD *)v101 + 66);
              *(_DWORD *)(v14 + 32) = *((_DWORD *)v101 + 67);
              *(_DWORD *)(v14 + 36) = *((_DWORD *)v101 + 68);
              *(_DWORD *)(v14 + 40) = *((_DWORD *)v101 + 69);
              *(_DWORD *)(v14 + 824) = (*((_DWORD *)v101 + 71) & 0x40) != 0;
              if ( *((_DWORD *)v101 + 58) <= 1u )
                v99 = 0;
              *(_DWORD *)(v14 + 828) = v99;
              v102 = *((_DWORD *)v101 + 412);
              if ( v102 == 0x2000 )
              {
                v103 = 2000;
              }
              else if ( v102 == 4864 )
              {
                v103 = 1300;
              }
              else if ( *((_QWORD *)v101 + 86) )
              {
                v103 = 1300;
              }
              else if ( v102 == 4608 )
              {
                v103 = 1200;
              }
              else if ( !*((_QWORD *)v101 + 82)
                     || !*((_QWORD *)v101 + 81)
                     || (v103 = 1105, (*((_DWORD *)v101 + 341) & 4) == 0) )
              {
                v103 = 1000;
              }
              *(_DWORD *)(v14 + 44) = v103;
              v104 = (_WORD *)(v14 + 48);
              v105 = *((_QWORD *)v101 + 121);
              if ( v105 )
              {
                v106 = v105 - (_QWORD)v104;
                while ( v51 != -2147483518 )
                {
                  v107 = *(_WORD *)((char *)v104 + v106);
                  if ( !v107 )
                    break;
                  *v104++ = v107;
                  if ( !--v51 )
                  {
                    --v104;
                    break;
                  }
                }
LABEL_107:
                *v104 = 0;
              }
              else if ( v14 != -48 )
              {
                goto LABEL_107;
              }
              v108 = (unsigned __int16 *)*((_QWORD *)v101 + 122);
              v109 = (_WORD *)(v14 + 304);
              v110 = (unsigned __int64)*v108 >> 1;
              if ( v110 <= 0x7FFFFFFE )
              {
                v111 = *((_QWORD *)v108 + 1) - (_QWORD)v109;
                while ( v57 + v110 - 260 )
                {
                  v112 = *(_WORD *)((char *)v109 + v111);
                  if ( !v112 )
                    break;
                  *v109++ = v112;
                  if ( !--v57 )
                  {
                    --v109;
                    break;
                  }
                }
              }
              *v109 = 0;
              ExReleasePushLockSharedEx(v69, 0LL);
              KeLeaveCriticalRegion();
              v114 = _InterlockedDecrement64((volatile signed __int64 *)v67 + 3);
              if ( v114 )
              {
                if ( v114 < 0 )
                {
                  v152 = WdLogNewEntry5_WdAssertion(v113, v62, v64, v65);
                  *(_QWORD *)(v152 + 24) = 1067LL;
                  WdLogEvent5_WdAssertion(v152);
                }
              }
              else
              {
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v156 + 2), v156);
              }
LABEL_117:
              *(_WORD *)(v14 + 306) = 92;
              *(_WORD *)(v14 + 1118) = 92;
              LODWORD(v14) = 0;
LABEL_118:
              v115 = v165;
              if ( v165 )
              {
                if ( v166 )
                {
                  COREACCESS::Release((COREACCESS *)v164);
                  v115 = v165;
                }
                v116 = _InterlockedDecrement64((volatile signed __int64 *)v115 + 3);
                if ( v116 )
                {
                  if ( v116 < 0 )
                  {
                    v153 = WdLogNewEntry5_WdAssertion(v115, v62, v64, v65);
                    *(_QWORD *)(v153 + 24) = 1067LL;
                    WdLogEvent5_WdAssertion(v153);
                  }
                }
                else
                {
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v115 + 2), v115);
                }
              }
              v117 = v162;
              if ( v162 )
              {
                if ( v163 )
                {
                  COREACCESS::Release((COREACCESS *)v161);
                  v117 = v162;
                }
                v118 = _InterlockedDecrement64((volatile signed __int64 *)v117 + 3);
                if ( v118 )
                {
                  if ( v118 < 0 )
                  {
                    v154 = WdLogNewEntry5_WdAssertion(v117, v62, v64, v65);
                    *(_QWORD *)(v154 + 24) = 1067LL;
                    WdLogEvent5_WdAssertion(v154);
                  }
                }
                else
                {
                  DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v117 + 2), v117);
                }
              }
LABEL_130:
              if ( v174 )
                DxgkReleaseSessionModeChangeLock();
              return (unsigned int)v14;
            }
            v151 = (_QWORD *)WdLogNewEntry5_WdError(v80);
            LODWORD(v14) = -1073741811;
            v151[3] = (unsigned int)v4;
            v151[4] = v9;
            v151[5] = -1073741811LL;
            WdLogEvent5_WdError(v151);
          }
          else
          {
            LODWORD(v14) = -1073741130;
          }
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v167);
          goto LABEL_118;
        }
        v120 = 0;
        Global = DXGGLOBAL::GetGlobal(v23, v22, v24, v25);
        SessionData = DXGGLOBAL::GetSessionData(Global, v122, v123, v124);
        if ( SessionData )
        {
          v126 = *((unsigned int *)v9 + 63);
          if ( *((_DWORD *)SessionData + 4623) == (_DWORD)v126 )
          {
            v126 = HIDWORD(*(_QWORD *)((char *)SessionData + 18492));
            if ( (_DWORD)v126 == HIDWORD(*(_QWORD *)((char *)v9 + 252)) )
              v120 = *((_DWORD *)SessionData + 4625);
          }
        }
        if ( (_DWORD)v4 == -1 || (unsigned int)v4 < v120 )
        {
          LODWORD(v4) = -1;
          v172 = -1;
          goto LABEL_135;
        }
        v135 = WdLogNewEntry5_WdError(v126);
        *(_QWORD *)(v135 + 32) = v120;
        *(_QWORD *)(v135 + 24) = v4;
        WdLogEvent5_WdError(v135);
        LODWORD(v14) = -1073741811;
        goto LABEL_130;
      }
    }
  }
  if ( v158 )
  {
    v158 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v157);
  }
  v127 = WdLogNewEntry5_WdError(v7);
  *(_QWORD *)(v127 + 24) = SHIDWORD(a1);
  *(_QWORD *)(v127 + 32) = (unsigned int)a1;
  WdLogEvent5_WdError(v127);
  return -1073741811LL;
}
