/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x14023B280
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14034F3F0 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14009234C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x14024C000 (_tlgCreate1Sz_char.c)
 *     TakeTelemetryAssertsLock @ 0x140254E9C (TakeTelemetryAssertsLock.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        unsigned __int64 a1,
        unsigned int a2,
        void *a3,
        int a4,
        int a5,
        __int64 a6)
{
  unsigned int v6; // esi
  __int64 **v8; // rcx
  __int64 *v9; // rax
  __int64 *v10; // rdi
  unsigned __int64 *Pool2; // rax
  __int64 v12; // rbx
  ULONG TimeIncrement; // eax
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int16 v18; // cx
  unsigned int v19; // r15d
  unsigned int v20; // ebx
  unsigned __int64 v21; // rcx
  int v22; // r12d
  int v23; // eax
  struct _FAST_MUTEX *v24; // rcx
  int v25; // r13d
  PVOID v26; // rax
  const char *v27; // rdi
  const char *v28; // r9
  const char *v29; // rdx
  const char *v30; // rax
  const char *v31; // r9
  const char *v32; // rdx
  KIRQL v33; // al
  const char *v34; // rax
  int v35; // r12d
  const GUID *v36; // r9
  const GUID *v37; // r9
  ULONG v38; // r10d
  __int64 **v39; // rcx
  __int64 *v40; // rax
  unsigned int v41; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+54h] [rbp-ACh] BYREF
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+5Ch] [rbp-A4h] BYREF
  PVOID v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v47; // [rsp+70h] [rbp-90h] BYREF
  int v48; // [rsp+74h] [rbp-8Ch] BYREF
  int v49; // [rsp+78h] [rbp-88h] BYREF
  int CurrentIrql; // [rsp+7Ch] [rbp-84h] BYREF
  int v51; // [rsp+80h] [rbp-80h] BYREF
  int v52; // [rsp+84h] [rbp-7Ch] BYREF
  int v53; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v54; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v55; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v56; // [rsp+94h] [rbp-6Ch] BYREF
  int v57; // [rsp+98h] [rbp-68h] BYREF
  int v58; // [rsp+9Ch] [rbp-64h] BYREF
  int v59; // [rsp+A0h] [rbp-60h] BYREF
  int v60; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v61; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v62; // [rsp+ACh] [rbp-54h] BYREF
  int v63; // [rsp+B0h] [rbp-50h] BYREF
  int v64; // [rsp+B4h] [rbp-4Ch] BYREF
  int v65; // [rsp+B8h] [rbp-48h] BYREF
  int v66; // [rsp+BCh] [rbp-44h] BYREF
  unsigned int v67; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v68; // [rsp+C4h] [rbp-3Ch] BYREF
  unsigned int v69; // [rsp+C8h] [rbp-38h] BYREF
  int v70; // [rsp+CCh] [rbp-34h] BYREF
  unsigned int v71; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v72; // [rsp+D4h] [rbp-2Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+E0h] [rbp-20h] BYREF
  int *v74; // [rsp+100h] [rbp+0h]
  __int64 v75; // [rsp+108h] [rbp+8h]
  int *v76; // [rsp+110h] [rbp+10h]
  __int64 v77; // [rsp+118h] [rbp+18h]
  int *v78; // [rsp+120h] [rbp+20h]
  __int64 v79; // [rsp+128h] [rbp+28h]
  int *v80; // [rsp+130h] [rbp+30h]
  __int64 v81; // [rsp+138h] [rbp+38h]
  char v82[16]; // [rsp+140h] [rbp+40h] BYREF
  int *v83; // [rsp+150h] [rbp+50h]
  __int64 v84; // [rsp+158h] [rbp+58h]
  int *v85; // [rsp+160h] [rbp+60h]
  __int64 v86; // [rsp+168h] [rbp+68h]
  int *v87; // [rsp+170h] [rbp+70h]
  __int64 v88; // [rsp+178h] [rbp+78h]
  char v89[16]; // [rsp+180h] [rbp+80h] BYREF
  int *v90; // [rsp+190h] [rbp+90h]
  __int64 v91; // [rsp+198h] [rbp+98h]
  int *v92; // [rsp+1A0h] [rbp+A0h]
  __int64 v93; // [rsp+1A8h] [rbp+A8h]
  struct _EVENT_DATA_DESCRIPTOR v94; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v95; // [rsp+1D0h] [rbp+D0h]
  __int64 v96; // [rsp+1D8h] [rbp+D8h]
  int *v97; // [rsp+1E0h] [rbp+E0h]
  __int64 v98; // [rsp+1E8h] [rbp+E8h]
  int *v99; // [rsp+1F0h] [rbp+F0h]
  __int64 v100; // [rsp+1F8h] [rbp+F8h]
  int *v101; // [rsp+200h] [rbp+100h]
  __int64 v102; // [rsp+208h] [rbp+108h]
  char v103[16]; // [rsp+210h] [rbp+110h] BYREF
  int *v104; // [rsp+220h] [rbp+120h]
  __int64 v105; // [rsp+228h] [rbp+128h]
  __int64 *v106; // [rsp+230h] [rbp+130h]
  __int64 v107; // [rsp+238h] [rbp+138h]
  PVOID *v108; // [rsp+240h] [rbp+140h]
  __int64 v109; // [rsp+248h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR v110; // [rsp+250h] [rbp+150h] BYREF
  int *v111; // [rsp+270h] [rbp+170h]
  __int64 v112; // [rsp+278h] [rbp+178h]
  int *v113; // [rsp+280h] [rbp+180h]
  __int64 v114; // [rsp+288h] [rbp+188h]
  int *v115; // [rsp+290h] [rbp+190h]
  __int64 v116; // [rsp+298h] [rbp+198h]
  int *v117; // [rsp+2A0h] [rbp+1A0h]
  __int64 v118; // [rsp+2A8h] [rbp+1A8h]
  char v119[16]; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v120; // [rsp+2C0h] [rbp+1C0h]
  __int64 v121; // [rsp+2C8h] [rbp+1C8h]
  int *v122; // [rsp+2D0h] [rbp+1D0h]
  __int64 v123; // [rsp+2D8h] [rbp+1D8h]
  int *p_CurrentIrql; // [rsp+2E0h] [rbp+1E0h]
  __int64 v125; // [rsp+2E8h] [rbp+1E8h]
  char v126[16]; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v127; // [rsp+300h] [rbp+200h]
  __int64 v128; // [rsp+308h] [rbp+208h]
  int *v129; // [rsp+310h] [rbp+210h]
  __int64 v130; // [rsp+318h] [rbp+218h]
  char v131[16]; // [rsp+320h] [rbp+220h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v132; // [rsp+330h] [rbp+230h] BYREF
  int *v133; // [rsp+350h] [rbp+250h]
  __int64 v134; // [rsp+358h] [rbp+258h]
  int *v135; // [rsp+360h] [rbp+260h]
  __int64 v136; // [rsp+368h] [rbp+268h]
  int *v137; // [rsp+370h] [rbp+270h]
  __int64 v138; // [rsp+378h] [rbp+278h]
  int *v139; // [rsp+380h] [rbp+280h]
  __int64 v140; // [rsp+388h] [rbp+288h]
  char v141[16]; // [rsp+390h] [rbp+290h] BYREF
  int *v142; // [rsp+3A0h] [rbp+2A0h]
  __int64 v143; // [rsp+3A8h] [rbp+2A8h]
  int *v144; // [rsp+3B0h] [rbp+2B0h]
  __int64 v145; // [rsp+3B8h] [rbp+2B8h]
  int *v146; // [rsp+3C0h] [rbp+2C0h]
  __int64 v147; // [rsp+3C8h] [rbp+2C8h]
  char v148[16]; // [rsp+3D0h] [rbp+2D0h] BYREF

  v6 = 0;
  v46 = a6;
  v42 = a4;
  v45 = a3;
  v41 = a2;
  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) && KeGetCurrentIrql() <= 1u )
  {
    ExAcquireFastMutex(g_AssertFastMutex);
    v8 = (__int64 **)&g_MicrosoftTelemetryAssertsTriggeredList;
    while ( 1 )
    {
      v9 = *v8;
      v8 = (__int64 **)v9;
      if ( &g_MicrosoftTelemetryAssertsTriggeredList == v9 )
        break;
      v10 = v9 - 4;
      if ( *(v9 - 4) == a1 )
        goto LABEL_11;
    }
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, 48LL, 1953657665LL);
    v10 = (__int64 *)Pool2;
    if ( !Pool2 )
      goto LABEL_57;
    v12 = MEMORY[0xFFFFF78000000320];
    *Pool2 = a1;
    TimeIncrement = KeQueryTimeIncrement();
    v10[2] = 0LL;
    *((_DWORD *)v10 + 6) = 0;
    v10[1] = ((__int64)((unsigned __int128)(v12 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 11)
           + ((unsigned __int64)((unsigned __int128)(v12 * TimeIncrement * (__int128)0x346DC5D63886594BLL) >> 64) >> 63)
           - 60001;
    v14 = v10 + 4;
    v15 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(__int64 **)(g_MicrosoftTelemetryAssertsTriggeredList + 8) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v14 = g_MicrosoftTelemetryAssertsTriggeredList;
    v10[5] = (__int64)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_QWORD *)(v15 + 8) = v14;
    g_MicrosoftTelemetryAssertsTriggeredList = (__int64)(v10 + 4);
LABEL_11:
    ++*((_DWORD *)v10 + 4);
    ++*((_DWORD *)v10 + 5);
    v16 = MEMORY[0xFFFFF78000000320];
    v17 = v16 * KeQueryTimeIncrement() / 10000;
    if ( (unsigned __int64)(v17 - v10[1]) <= 0xEA60 )
    {
LABEL_57:
      ExReleaseFastMutex(g_AssertFastMutex);
      return;
    }
    v18 = *(_WORD *)(MEMORY[0x14000003C] + 0x140000018LL);
    if ( v18 == 267 || v18 == 523 )
    {
      v19 = *(_DWORD *)(MEMORY[0x14000003C] + 0x140000008LL);
      v20 = *(_DWORD *)(MEMORY[0x14000003C] + 0x140000050LL);
    }
    else
    {
      v19 = 0;
      v20 = 0;
    }
    if ( a1 >= 0x140000000LL )
    {
      v21 = 0x140000000LL + v20;
      if ( v21 > 0x140000000LL && a1 <= v21 )
        v6 = a1 - 0x40000000;
    }
    v22 = *((_DWORD *)v10 + 5);
    v23 = *((_DWORD *)v10 + 6);
    v24 = g_AssertFastMutex;
    v25 = *((_DWORD *)v10 + 4);
    v43 = v22;
    v44 = v23;
    v10[1] = v17;
    ExReleaseFastMutex(v24);
    v26 = v45;
    v27 = "<unknown>";
    if ( !v45 )
      v26 = g_ModuleName;
    v45 = v26;
    if ( v41 )
    {
      if ( (unsigned int)dword_1403E1040 > 5 && tlgKeywordOn((__int64)&dword_1403E1040, 0x400000000000LL) )
      {
        v60 = 10;
        v111 = &v60;
        v112 = 4LL;
        v113 = (int *)&v71;
        v71 = v6;
        v115 = (int *)&v72;
        v29 = "<unknown>";
        v114 = 4LL;
        if ( v28 )
          v29 = v28;
        v117 = (int *)&v47;
        v72 = v19;
        v116 = 4LL;
        v47 = v20;
        v118 = 4LL;
        tlgCreate1Sz_char(v119, v29);
        v48 = v25;
        v120 = &v48;
        v122 = &v49;
        v121 = 4LL;
        v49 = v22;
        v123 = 4LL;
        CurrentIrql = KeGetCurrentIrql();
        p_CurrentIrql = &CurrentIrql;
        v125 = 4LL;
        tlgCreate1Sz_char(v126, v45);
        v127 = &v51;
        v52 = a5;
        v129 = &v52;
        v30 = (const char *)v46;
        v51 = v42;
        v128 = 4LL;
        if ( !v46 )
          v30 = "<unknown>";
        v130 = 4LL;
        tlgCreate1Sz_char(v131, v30);
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1403E1040, byte_14037B068, 0LL, 0LL, 0xEu, &v110);
      }
    }
    else if ( (unsigned int)dword_1403E1040 > 5 && tlgKeywordOn((__int64)&dword_1403E1040, 0x400000000000LL) )
    {
      v53 = 10;
      v133 = &v53;
      v134 = 4LL;
      v135 = (int *)&v54;
      v54 = v6;
      v137 = (int *)&v55;
      v32 = "<unknown>";
      v136 = 4LL;
      if ( v31 )
        v32 = v31;
      v139 = (int *)&v56;
      v55 = v19;
      v138 = 4LL;
      v56 = v20;
      v140 = 4LL;
      tlgCreate1Sz_char(v141, v32);
      v57 = v25;
      v142 = &v57;
      v144 = &v58;
      v143 = 4LL;
      v58 = v22;
      v145 = 4LL;
      v33 = KeGetCurrentIrql();
      v147 = 4LL;
      v59 = v33;
      v146 = &v59;
      v34 = (const char *)v46;
      if ( !v46 )
        v34 = "<unknown>";
      tlgCreate1Sz_char(v148, v34);
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1403E1040, byte_14037B112, 0LL, 0LL, 0xBu, &v132);
    }
    if ( dword_1403E1078 && !v44 && !KeGetCurrentIrql() )
    {
      v35 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465LL, v6, g_ModuleName, v19, v20, 0LL, 0LL, 0);
      if ( v41 )
      {
        if ( (unsigned int)dword_1403E1040 > 5 && tlgKeywordOn((__int64)&dword_1403E1040, 0x400000000000LL) )
        {
          v44 = 10;
          v74 = &v44;
          v75 = 4LL;
          v76 = (int *)&v41;
          v78 = (int *)&v61;
          v80 = (int *)&v62;
          v41 = v6;
          v77 = 4LL;
          if ( g_ModuleName )
            v27 = (const char *)g_ModuleName;
          v61 = v19;
          v79 = 4LL;
          v62 = v20;
          v81 = 4LL;
          tlgCreate1Sz_char(v82, v27);
          v83 = &v63;
          v85 = &v43;
          v87 = &v64;
          v63 = v25;
          v84 = 4LL;
          v86 = 4LL;
          v64 = v35;
          v88 = 4LL;
          tlgCreate1Sz_char(v89, v45);
          v90 = &v42;
          v65 = a5;
          v92 = &v65;
          v91 = 4LL;
          v93 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1403E1040, byte_14037B17F, 0LL, v36, 0xDu, &v73);
        }
      }
      else if ( (unsigned int)dword_1403E1040 > 5 && tlgKeywordOn((__int64)&dword_1403E1040, 0x400000000000LL) )
      {
        v96 = 4LL;
        v95 = &v66;
        v67 = v6;
        v97 = (int *)&v67;
        v66 = 10;
        v99 = (int *)&v68;
        v101 = (int *)&v69;
        v98 = 4LL;
        v68 = v19;
        if ( g_ModuleName )
          v27 = (const char *)g_ModuleName;
        v100 = 4LL;
        v69 = v20;
        v102 = 4LL;
        tlgCreate1Sz_char(v103, v27);
        v70 = v25;
        v104 = &v70;
        LODWORD(v46) = v43;
        v106 = &v46;
        v108 = &v45;
        v105 = 4LL;
        v107 = 4LL;
        LODWORD(v45) = v35;
        v109 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1403E1040, byte_14037B225, 0LL, v37, v38, &v94);
      }
      if ( !v35 && !(unsigned int)TakeTelemetryAssertsLock() )
      {
        v39 = (__int64 **)&g_MicrosoftTelemetryAssertsTriggeredList;
        while ( 1 )
        {
          v40 = *v39;
          v39 = (__int64 **)v40;
          if ( &g_MicrosoftTelemetryAssertsTriggeredList == v40 )
            goto LABEL_57;
          if ( *(v40 - 4) == a1 )
          {
            ++*((_DWORD *)v40 - 2);
            goto LABEL_57;
          }
        }
      }
    }
  }
}
