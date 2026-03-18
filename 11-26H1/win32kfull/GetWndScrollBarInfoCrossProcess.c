/*
 * XREFs of GetWndScrollBarInfoCrossProcess @ 0x140256448
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_679956ec8699b4d63e5c901704edddc1___ @ 0x1402AD748 (W32AttachToProcessAndExecute__lambda_679956ec8699b4d63e5c901704edddc1___.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x140032058 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140032228 (GetDpiForSystem.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     GetRect @ 0x14012B140 (GetRect.c)
 *     GetObjectIdString @ 0x14018F6B8 (GetObjectIdString.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsllll @ 0x14018F6F4 (WPP_RECORDER_AND_TRACE_SF_qsllll.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1401A4EE4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddddddd @ 0x14024C70C (WPP_RECORDER_AND_TRACE_SF_qdddddddddddd.c)
 *     GETCLIENTWNDINFO @ 0x140263574 (GETCLIENTWNDINFO.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddddddddddd @ 0x1402F2D5C (WPP_RECORDER_AND_TRACE_SF_ddddddddddddddd.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

char __fastcall GetWndScrollBarInfoCrossProcess(const struct tagWND *a1, int a2, int *a3)
{
  int *v3; // rbx
  const struct tagWND *v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rdx
  bool v7; // si
  bool v8; // di
  int v9; // ebx
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  char v13; // r12
  char v14; // r13
  __int64 v15; // r9
  int v16; // r13d
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // rdx
  volatile void *v21; // rcx
  __int64 CurrentProcessWow64Process; // rax
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // edx
  int v27; // ecx
  char v28; // cl
  int v29; // r12d
  int v30; // r15d
  unsigned int DpiForSystem; // eax
  unsigned int v32; // eax
  int v33; // ecx
  int v34; // r13d
  unsigned int v35; // eax
  int v36; // eax
  int v37; // r14d
  unsigned int v38; // eax
  int DpiDependentMetric; // eax
  int v40; // ecx
  unsigned int v41; // eax
  int v42; // r9d
  INT v43; // r8d
  int v44; // eax
  int v45; // r10d
  int v46; // r15d
  INT v47; // eax
  INT v48; // r11d
  INT v49; // r11d
  __int64 v50; // rdx
  int v51; // eax
  INT v52; // r8d
  int v53; // eax
  char v54; // al
  __int64 v55; // rax
  int v56; // r15d
  int v57; // r8d
  int v58; // edx
  __int64 v59; // rcx
  int v60; // r10d
  int v61; // r9d
  int v62; // ecx
  int v63; // eax
  int v64; // r8d
  int v65; // eax
  int v66; // edx
  int v67; // eax
  char v68; // cl
  __int64 v69; // rax
  int v70; // edx
  int v71; // ecx
  __int64 v72; // rdx
  bool v73; // bl
  __int64 UserSessionState; // rax
  int v75; // r8d
  int v76; // edx
  __int64 v77; // [rsp+20h] [rbp-1A8h]
  __int64 v78; // [rsp+28h] [rbp-1A0h]
  int v79; // [rsp+30h] [rbp-198h]
  int v80; // [rsp+38h] [rbp-190h]
  char v81; // [rsp+88h] [rbp-140h]
  char v82; // [rsp+C0h] [rbp-108h]
  char v83; // [rsp+C0h] [rbp-108h]
  char v84; // [rsp+C0h] [rbp-108h]
  char v85; // [rsp+C1h] [rbp-107h]
  char v86; // [rsp+C1h] [rbp-107h]
  int v87; // [rsp+C4h] [rbp-104h]
  int v88; // [rsp+C4h] [rbp-104h]
  int v89; // [rsp+C8h] [rbp-100h]
  char v90; // [rsp+C8h] [rbp-100h]
  int v91; // [rsp+CCh] [rbp-FCh]
  int v92; // [rsp+D0h] [rbp-F8h]
  INT v93; // [rsp+D0h] [rbp-F8h]
  int v94; // [rsp+D4h] [rbp-F4h]
  int v95; // [rsp+D8h] [rbp-F0h]
  int v96; // [rsp+DCh] [rbp-ECh]
  INT b; // [rsp+E0h] [rbp-E8h]
  int v98; // [rsp+E4h] [rbp-E4h]
  __int128 v99; // [rsp+E8h] [rbp-E0h] BYREF
  int v100; // [rsp+F8h] [rbp-D0h]
  const struct tagWND *v101; // [rsp+100h] [rbp-C8h]
  volatile void *Address; // [rsp+108h] [rbp-C0h]
  __int64 v103; // [rsp+110h] [rbp-B8h]
  __int128 v104; // [rsp+128h] [rbp-A0h]
  __int128 v105; // [rsp+138h] [rbp-90h]
  _DWORD v106[9]; // [rsp+150h] [rbp-78h] BYREF
  int v107; // [rsp+174h] [rbp-54h]
  int v108; // [rsp+178h] [rbp-50h]
  int v109; // [rsp+17Ch] [rbp-4Ch]
  int v110; // [rsp+180h] [rbp-48h]
  int v111; // [rsp+184h] [rbp-44h]

  v3 = a3;
  *(_QWORD *)&v99 = a3;
  v100 = a2;
  v4 = a1;
  v101 = a1;
  memset_0(v106, 0, 0x40uLL);
  v103 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  if ( *v3 == 60 )
  {
    *(_OWORD *)(v3 + 9) = 0LL;
    *(_QWORD *)(v3 + 13) = 0LL;
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v14 = 0;
      v13 = 1;
    }
    else
    {
      v13 = 1;
      v14 = 1;
    }
    v82 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v5);
      GetObjectIdString(v100);
      WPP_RECORDER_AND_TRACE_SF_qsllll(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v14,
        v82,
        v15,
        v77,
        v78,
        0xBu,
        (__int64)&WPP_050a6281044d36281c2688598113f136_Traceguids);
      v3 = (int *)v99;
      v4 = v101;
    }
    if ( v100 == -5 )
    {
      v16 = 1;
      v91 = 1;
      v17 = *((_QWORD *)v4 + 5);
      if ( (*(_BYTE *)(v17 + 30) & 0x20) != 0 )
      {
        if ( (*(_BYTE *)(v17 + 16) & 2) == 0 )
          v3[9] |= 0x10000u;
      }
      else
      {
        v3[9] |= 0x8000u;
      }
    }
    else
    {
      if ( v100 != -6 )
      {
        UserSetLastError(87);
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v13 = 0;
        }
        v73 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v13 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v72);
          LOBYTE(v75) = v73;
          LOBYTE(v76) = v13;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v76,
            v75,
            *(_QWORD *)(UserSessionState + 69152),
            2,
            9,
            12,
            (__int64)&WPP_050a6281044d36281c2688598113f136_Traceguids,
            v100);
        }
        return 0;
      }
      v16 = 0;
      v91 = 0;
      v18 = *((_QWORD *)v4 + 5);
      if ( (*(_BYTE *)(v18 + 30) & 0x10) != 0 )
      {
        if ( (*(_BYTE *)(v18 + 16) & 4) == 0 )
          v3[9] |= 0x10000u;
      }
      else
      {
        v3[9] |= 0x8000u;
      }
    }
    if ( (v3[9] & 0x8000) != 0 )
      return 1;
    v21 = *(volatile void **)(GETCLIENTWNDINFO(v4) + 32);
    Address = v21;
    if ( v21 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v21, v20);
      ProbeForRead(Address, 0x24uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      v104 = *(_OWORD *)Address;
      v105 = *((_OWORD *)Address + 1);
      LODWORD(v103) = *((_DWORD *)Address + 8);
    }
    if ( v16 )
      LODWORD(Address) = ((int)v104 >> 2) & 3;
    else
      LODWORD(Address) = v104 & 3;
    if ( (v3[9] & 0x10000) != 0 )
    {
      v61 = v111;
      v64 = v106[7];
      v34 = v106[6];
      v66 = v106[5];
      v37 = v106[4];
      v60 = v91;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
        || (LOBYTE(v20) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v20) = 0;
      }
      v83 = v20;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v23 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v23 = 0;
      }
      v85 = v23;
      if ( (_BYTE)v20 || v23 )
      {
        v24 = W32GetUserSessionState(*(unsigned int *)(*((_QWORD *)v4 + 5) + 104LL), v20);
        WPP_RECORDER_AND_TRACE_SF_qdddddddddddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v83,
          v85,
          *(_QWORD *)(v24 + 69152),
          5u,
          9u,
          0xEu,
          (__int64)&WPP_050a6281044d36281c2688598113f136_Traceguids);
        v3 = (int *)v99;
        v4 = v101;
        v16 = v91;
      }
      v99 = 0LL;
      GetRect(v4, (__int64)&v99, 33);
      v25 = *((_QWORD *)v4 + 5);
      if ( (*(_BYTE *)(v25 + 26) & 0x40) != 0 )
      {
        v26 = *(_DWORD *)(v25 + 96) - *(_DWORD *)(v25 + 88);
        v27 = v99;
        LODWORD(v99) = v26 - DWORD2(v99);
        DWORD2(v99) = v26 - v27;
      }
      if ( v16 )
      {
        v28 = *(_BYTE *)(v25 + 16) & 2;
        if ( (*(_BYTE *)(v25 + 25) & 0x40) != 0 )
        {
          v29 = v99;
          v30 = v99;
          if ( v28 )
          {
            DpiForSystem = GetDpiForSystem();
            v29 -= GetDpiDependentMetric(0, DpiForSystem);
          }
        }
        else
        {
          v30 = DWORD2(v99);
          v29 = DWORD2(v99);
          if ( v28 )
          {
            v32 = GetDpiForSystem();
            v30 += GetDpiDependentMetric(0, v32);
          }
        }
        v33 = HIDWORD(v99);
        v87 = HIDWORD(v99);
        v34 = DWORD1(v99);
        v92 = DWORD1(v99);
      }
      else
      {
        v33 = HIDWORD(v99);
        v87 = HIDWORD(v99);
        v34 = HIDWORD(v99);
        v92 = HIDWORD(v99);
        if ( (*(_BYTE *)(v25 + 16) & 4) != 0 )
        {
          v35 = GetDpiForSystem();
          v33 = GetDpiDependentMetric(1, v35) + v34;
          v87 = v33;
        }
        v30 = DWORD2(v99);
        v29 = v99;
      }
      if ( v91 )
      {
        v98 = DWORD1(v105);
        b = HIDWORD(v105);
        v36 = DWORD2(v105);
      }
      else
      {
        v98 = DWORD1(v104);
        v103 = (unsigned int)v105;
        b = HIDWORD(v104);
        v36 = DWORD2(v104);
      }
      v96 = v36;
      if ( v91 )
      {
        v37 = v34;
        v94 = v33;
        v34 = v29;
        v95 = v30;
        v38 = GetDpiForSystem();
        DpiDependentMetric = GetDpiDependentMetric(10, v38);
        v30 = v87;
        v40 = v92;
      }
      else
      {
        v37 = v29;
        v94 = v30;
        v95 = v33;
        v41 = GetDpiForSystem();
        DpiDependentMetric = GetDpiDependentMetric(11, v41);
        v40 = v29;
      }
      v42 = DpiDependentMetric;
      v89 = DpiDependentMetric;
      LODWORD(v99) = DpiDependentMetric;
      v43 = v96 - v98 + 1;
      v44 = (v30 - v40) / 2;
      if ( v44 >= v42 )
        v44 = v42;
      v45 = v44 + v40;
      v107 = v44 + v40;
      v46 = v30 - v44;
      v108 = v46;
      v47 = v42;
      v93 = v42;
      v48 = b;
      if ( b )
      {
        v93 = v42;
        if ( v96 - v98 != -1 )
        {
          v49 = EngMulDiv(v46 - v45, b, v43);
          if ( v89 / 2 > v49 )
            v49 = v89 / 2;
          LODWORD(v99) = v49;
          v47 = v49;
          v93 = v49;
          v43 = v96 - v98 + 1;
          v45 = v107;
          v48 = b;
        }
      }
      v50 = (unsigned int)(v46 - v45 - v47);
      v90 = v46 - v45 - v47;
      v51 = 1;
      if ( v48 )
        v51 = v48;
      v52 = v43 - v51;
      if ( v52 )
        v53 = v107 + EngMulDiv(v103 - v98, v50, v52);
      else
        v53 = v45 - 1;
      v88 = v53;
      v110 = v53 + v93;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
        || (LOBYTE(v50) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v50) = 0;
      }
      v86 = v50;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
        || (v54 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
      {
        v54 = 0;
      }
      v84 = v54;
      if ( (_BYTE)v50 || v54 )
      {
        v55 = W32GetUserSessionState(WPP_GLOBAL_Control, v50);
        v81 = v46;
        v56 = v94;
        LOBYTE(v57) = v84;
        LOBYTE(v58) = v86;
        WPP_RECORDER_AND_TRACE_SF_ddddddddddddddd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v58,
          v57,
          *(_QWORD *)(v55 + 69152),
          v77,
          v78,
          v79,
          v80,
          v98,
          v96,
          b,
          v103,
          v94,
          v34,
          v95,
          v99,
          v107,
          v81,
          v109,
          v110,
          v88,
          v90,
          v107);
      }
      else
      {
        v56 = v94;
      }
      v59 = *((_QWORD *)v101 + 5);
      v60 = v91;
      v61 = v88;
      if ( (*(_BYTE *)(v59 + 26) & 0x40) == 0 )
      {
        v64 = v95;
        v4 = v101;
        goto LABEL_93;
      }
      v62 = *(_DWORD *)(v59 + 96) - *(_DWORD *)(v59 + 88);
      if ( v91 )
      {
        v63 = v34;
        v34 = v62 - v95;
        v64 = v62 - v63;
        v4 = v101;
LABEL_93:
        v66 = v94;
        goto LABEL_94;
      }
      v65 = v37;
      v37 = v62 - v56;
      v66 = v62 - v65;
      v64 = v95;
      v4 = v101;
    }
LABEL_94:
    v67 = (int)Address;
    if ( ((unsigned __int8)Address & 1) != 0 )
    {
      v3[10] |= 1u;
      v3[11] |= 1u;
    }
    if ( (v67 & 2) != 0 )
    {
      v3[14] |= 1u;
      v3[13] |= 1u;
    }
    if ( v67 == 3 )
      v3[9] |= 1u;
    v68 = *(_BYTE *)(*((_QWORD *)v4 + 5) + 22LL);
    if ( (v68 & 0x10) != 0 && (v100 != -5 || (v68 & 0x20) != 0) )
    {
      if ( (v68 & 1) != 0 )
        v3[10] |= 8u;
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 22LL) & 2) != 0 )
        v3[11] |= 8u;
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 22LL) & 4) != 0 )
        v3[13] |= 8u;
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 22LL) & 8) != 0 )
        v3[14] |= 8u;
    }
    if ( (v3[9] & 0x10000) == 0 )
    {
      if ( v60 )
      {
        v3[1] = v34;
        v3[2] = v37;
        v3[3] = v64;
        v3[4] = v66;
      }
      else
      {
        v3[1] = v37;
        v3[2] = v34;
        v3[3] = v66;
        v3[4] = v64;
        v34 = v37;
      }
      v69 = *((_QWORD *)v4 + 5);
      v70 = *(_DWORD *)(v69 + 92);
      v71 = *(_DWORD *)(v69 + 88);
      v3[1] = v71 + v34;
      v3[3] += v71;
      v3[4] += v70;
      v3[2] += v70;
      v3[5] = v107 - v37;
      v3[6] = v61 - v37;
      v3[7] = v110 - v37;
      if ( v61 == v107 )
        v3[11] |= 0x8000u;
      if ( v110 == v108 )
        v3[13] |= 0x8000u;
    }
    return 1;
  }
  UserSetLastError(87);
  v7 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v9 = *v3;
    v10 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v6);
    LOBYTE(v11) = v8;
    LOBYTE(v12) = v7;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v12,
      v11,
      *(_QWORD *)(v10 + 69152),
      2,
      9,
      10,
      (__int64)&WPP_050a6281044d36281c2688598113f136_Traceguids,
      v9);
  }
  return 0;
}
