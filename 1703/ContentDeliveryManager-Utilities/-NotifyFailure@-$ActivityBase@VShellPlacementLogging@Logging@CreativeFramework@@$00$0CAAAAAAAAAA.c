/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18002AF40
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180001E54 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x18002418C (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002D590 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

char __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  int v4; // edx
  bool v5; // zf
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // r10
  const unsigned __int16 *v8; // r11
  const unsigned __int16 *v9; // rdx
  __int64 v10; // rax
  const unsigned __int16 *v11; // r8
  const unsigned __int16 *v12; // rdx
  const unsigned __int16 *v13; // r8
  const WCHAR *v14; // rdx
  const WCHAR *v15; // rdi
  const WCHAR *v16; // r8
  const unsigned __int16 *v17; // rdx
  const unsigned __int16 *v18; // r8
  const unsigned __int16 *v19; // rdx
  const unsigned __int16 *v20; // r8
  const WCHAR *v21; // rdx
  const WCHAR *v22; // r8
  const unsigned __int16 *v23; // rdx
  const WCHAR *v24; // rdx
  const struct _TlgProvider_t *v25; // rax
  const struct _TlgProvider_t *v26; // r10
  const unsigned __int16 *v27; // r11
  const unsigned __int16 *v28; // rdx
  __int64 v29; // rax
  const unsigned __int16 *v30; // r8
  const unsigned __int16 *v31; // rdx
  const unsigned __int16 *v32; // r8
  const WCHAR *v33; // rdx
  const WCHAR *v34; // rdi
  const WCHAR *v35; // r8
  const unsigned __int16 *v36; // rdx
  const unsigned __int16 *v37; // r8
  const unsigned __int16 *v38; // rdx
  const unsigned __int16 *v39; // r8
  const WCHAR *v40; // rdx
  const WCHAR *v41; // r8
  const unsigned __int16 *v42; // rdx
  const unsigned __int16 *v43; // r8
  const WCHAR *v44; // rdx
  const unsigned __int16 *v45; // rdx
  _DWORD *v46; // rcx
  int v47; // eax
  int v49; // [rsp+30h] [rbp-D0h] BYREF
  int v50; // [rsp+34h] [rbp-CCh] BYREF
  int v51; // [rsp+38h] [rbp-C8h] BYREF
  int v52; // [rsp+3Ch] [rbp-C4h] BYREF
  int v53; // [rsp+40h] [rbp-C0h] BYREF
  int v54; // [rsp+44h] [rbp-BCh] BYREF
  int v55; // [rsp+48h] [rbp-B8h] BYREF
  int v56; // [rsp+4Ch] [rbp-B4h] BYREF
  int v57; // [rsp+50h] [rbp-B0h] BYREF
  int v58; // [rsp+54h] [rbp-ACh] BYREF
  int v59; // [rsp+58h] [rbp-A8h] BYREF
  int v60; // [rsp+5Ch] [rbp-A4h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v62; // [rsp+70h] [rbp-90h] BYREF
  int *v63; // [rsp+90h] [rbp-70h]
  __int64 v64; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v65; // [rsp+A0h] [rbp-60h]
  int v66; // [rsp+A8h] [rbp-58h]
  int v67; // [rsp+ACh] [rbp-54h]
  int *v68; // [rsp+B0h] [rbp-50h]
  __int64 v69; // [rsp+B8h] [rbp-48h]
  const unsigned __int16 *v70; // [rsp+C0h] [rbp-40h]
  int v71; // [rsp+C8h] [rbp-38h]
  int v72; // [rsp+CCh] [rbp-34h]
  int *v73; // [rsp+D0h] [rbp-30h]
  __int64 v74; // [rsp+D8h] [rbp-28h]
  const WCHAR *v75; // [rsp+E0h] [rbp-20h]
  int v76; // [rsp+E8h] [rbp-18h]
  int v77; // [rsp+ECh] [rbp-14h]
  int *v78; // [rsp+F0h] [rbp-10h]
  __int64 v79; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v80; // [rsp+100h] [rbp+0h]
  int v81; // [rsp+108h] [rbp+8h]
  int v82; // [rsp+10Ch] [rbp+Ch]
  int *v83; // [rsp+110h] [rbp+10h]
  __int64 v84; // [rsp+118h] [rbp+18h]
  const unsigned __int16 *v85; // [rsp+120h] [rbp+20h]
  int v86; // [rsp+128h] [rbp+28h]
  int v87; // [rsp+12Ch] [rbp+2Ch]
  const WCHAR *v88; // [rsp+130h] [rbp+30h]
  int v89; // [rsp+138h] [rbp+38h]
  int v90; // [rsp+13Ch] [rbp+3Ch]
  int *v91; // [rsp+140h] [rbp+40h]
  __int64 v92; // [rsp+148h] [rbp+48h]
  const unsigned __int16 *v93; // [rsp+150h] [rbp+50h]
  int v94; // [rsp+158h] [rbp+58h]
  int v95; // [rsp+15Ch] [rbp+5Ch]
  const WCHAR *v96; // [rsp+160h] [rbp+60h]
  int v97; // [rsp+168h] [rbp+68h]
  int v98; // [rsp+16Ch] [rbp+6Ch]
  int *v99; // [rsp+170h] [rbp+70h]
  __int64 v100; // [rsp+178h] [rbp+78h]
  int *v101; // [rsp+180h] [rbp+80h]
  __int64 v102; // [rsp+188h] [rbp+88h]
  const unsigned __int16 *v103; // [rsp+190h] [rbp+90h]
  int v104; // [rsp+198h] [rbp+98h]
  int v105; // [rsp+19Ch] [rbp+9Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v107; // [rsp+1D0h] [rbp+D0h]
  __int64 v108; // [rsp+1D8h] [rbp+D8h]
  const unsigned __int16 *v109; // [rsp+1E0h] [rbp+E0h]
  int v110; // [rsp+1E8h] [rbp+E8h]
  int v111; // [rsp+1ECh] [rbp+ECh]
  int *v112; // [rsp+1F0h] [rbp+F0h]
  __int64 v113; // [rsp+1F8h] [rbp+F8h]
  const unsigned __int16 *v114; // [rsp+200h] [rbp+100h]
  int v115; // [rsp+208h] [rbp+108h]
  int v116; // [rsp+20Ch] [rbp+10Ch]
  int *v117; // [rsp+210h] [rbp+110h]
  __int64 v118; // [rsp+218h] [rbp+118h]
  const WCHAR *v119; // [rsp+220h] [rbp+120h]
  int v120; // [rsp+228h] [rbp+128h]
  int v121; // [rsp+22Ch] [rbp+12Ch]
  int *v122; // [rsp+230h] [rbp+130h]
  __int64 v123; // [rsp+238h] [rbp+138h]
  const unsigned __int16 *v124; // [rsp+240h] [rbp+140h]
  int v125; // [rsp+248h] [rbp+148h]
  int v126; // [rsp+24Ch] [rbp+14Ch]
  int *v127; // [rsp+250h] [rbp+150h]
  __int64 v128; // [rsp+258h] [rbp+158h]
  const unsigned __int16 *v129; // [rsp+260h] [rbp+160h]
  int v130; // [rsp+268h] [rbp+168h]
  int v131; // [rsp+26Ch] [rbp+16Ch]
  const WCHAR *v132; // [rsp+270h] [rbp+170h]
  int v133; // [rsp+278h] [rbp+178h]
  int v134; // [rsp+27Ch] [rbp+17Ch]
  int *v135; // [rsp+280h] [rbp+180h]
  __int64 v136; // [rsp+288h] [rbp+188h]
  const unsigned __int16 *v137; // [rsp+290h] [rbp+190h]
  int v138; // [rsp+298h] [rbp+198h]
  int v139; // [rsp+29Ch] [rbp+19Ch]
  const WCHAR *v140; // [rsp+2A0h] [rbp+1A0h]
  int v141; // [rsp+2A8h] [rbp+1A8h]
  int v142; // [rsp+2ACh] [rbp+1ACh]

  v4 = a2[2];
  v5 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen == v4;
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = v4;
  if ( v5 )
  {
    v25 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
    v26 = v25;
    if ( *(_DWORD *)v25 > 5u
      && (*((_QWORD *)v25 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v25 + 3) & 0x200000000000LL) == *((_QWORD *)v25 + 3) )
    {
      v27 = &word_180091EF8;
      v28 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
      v54 = a2[1];
      v63 = &v54;
      LODWORD(v29) = 0;
      v64 = 4LL;
      v30 = &word_180091EF8;
      if ( v28 )
      {
        v30 = v28;
        v29 = -1LL;
        do
          ++v29;
        while ( *((_BYTE *)v28 + v29) );
      }
      v31 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
      v66 = v29 + 1;
      v68 = a2 + 14;
      LODWORD(v29) = 0;
      v65 = v30;
      v32 = &word_180091EF8;
      v67 = 0;
      v69 = 4LL;
      if ( v31 )
      {
        v32 = v31;
        v29 = -1LL;
        do
          ++v29;
        while ( *((_BYTE *)v31 + v29) );
      }
      v33 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v34 = &word_180091F08;
      v70 = v32;
      v71 = v29 + 1;
      v35 = &word_180091F08;
      v55 = *a2;
      v73 = &v55;
      LODWORD(v29) = 0;
      v72 = 0;
      v74 = 4LL;
      if ( v33 )
      {
        v35 = v33;
        v29 = -1LL;
        do
          ++v29;
        while ( v33[v29] );
      }
      v36 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
      v76 = 2 * v29 + 2;
      v56 = a2[6];
      v78 = &v56;
      LODWORD(v29) = 0;
      v75 = v35;
      v37 = &word_180091EF8;
      v77 = 0;
      v79 = 4LL;
      if ( v36 )
      {
        v37 = v36;
        v29 = -1LL;
        do
          ++v29;
        while ( *((_BYTE *)v36 + v29) );
      }
      v38 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
      v81 = v29 + 1;
      v57 = a2[18];
      v83 = &v57;
      LODWORD(v29) = 0;
      v80 = v37;
      v39 = &word_180091EF8;
      v82 = 0;
      v84 = 4LL;
      if ( v38 )
      {
        v39 = v38;
        v29 = -1LL;
        do
          ++v29;
        while ( *((_BYTE *)v38 + v29) );
      }
      v40 = (const WCHAR *)*((_QWORD *)a2 + 11);
      v86 = v29 + 1;
      LODWORD(v29) = 0;
      v85 = v39;
      v41 = &word_180091F08;
      v87 = 0;
      if ( v40 )
      {
        v41 = v40;
        v29 = -1LL;
        do
          ++v29;
        while ( v40[v29] );
      }
      v42 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
      v89 = 2 * v29 + 2;
      v58 = a2[24];
      v91 = &v58;
      LODWORD(v29) = 0;
      v88 = v41;
      v43 = &word_180091EF8;
      v90 = 0;
      v92 = 4LL;
      if ( v42 )
      {
        v43 = v42;
        v29 = -1LL;
        do
          ++v29;
        while ( *((_BYTE *)v42 + v29) );
      }
      v44 = (const WCHAR *)*((_QWORD *)a2 + 14);
      v94 = v29 + 1;
      LODWORD(v29) = 0;
      v93 = v43;
      v95 = 0;
      if ( v44 )
      {
        v34 = v44;
        v29 = -1LL;
        do
          ++v29;
        while ( v44[v29] );
      }
      v45 = (const unsigned __int16 *)*((_QWORD *)a2 + 5);
      v97 = 2 * v29 + 2;
      v59 = a2[2];
      v99 = &v59;
      v60 = a2[15];
      v101 = &v60;
      LODWORD(v29) = 0;
      v96 = v34;
      v98 = 0;
      v100 = 4LL;
      v102 = 4LL;
      if ( v45 )
      {
        v27 = v45;
        v29 = -1LL;
        do
          ++v29;
        while ( *((_BYTE *)v45 + v29) );
      }
      v103 = v27;
      v104 = v29 + 1;
      v105 = 0;
      TlgWrite(v26, &unk_1800DF7EA, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x13u, &v62);
    }
  }
  else
  {
    v6 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
    v7 = v6;
    if ( *(_DWORD *)v6 > 5u
      && (*((_QWORD *)v6 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v6 + 3) & 0x200000000000LL) == *((_QWORD *)v6 + 3) )
    {
      v8 = &word_180091EF8;
      v9 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
      v49 = a2[1];
      v107 = &v49;
      LODWORD(v10) = 0;
      v108 = 4LL;
      v11 = &word_180091EF8;
      if ( v9 )
      {
        v11 = v9;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v9 + v10) );
      }
      v12 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
      v110 = v10 + 1;
      v112 = a2 + 14;
      LODWORD(v10) = 0;
      v109 = v11;
      v13 = &word_180091EF8;
      v111 = 0;
      v113 = 4LL;
      if ( v12 )
      {
        v13 = v12;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v12 + v10) );
      }
      v14 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v15 = &word_180091F08;
      v114 = v13;
      v115 = v10 + 1;
      v16 = &word_180091F08;
      v50 = *a2;
      v117 = &v50;
      LODWORD(v10) = 0;
      v116 = 0;
      v118 = 4LL;
      if ( v14 )
      {
        v16 = v14;
        v10 = -1LL;
        do
          ++v10;
        while ( v14[v10] );
      }
      v17 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
      v120 = 2 * v10 + 2;
      v51 = a2[6];
      v122 = &v51;
      LODWORD(v10) = 0;
      v119 = v16;
      v18 = &word_180091EF8;
      v121 = 0;
      v123 = 4LL;
      if ( v17 )
      {
        v18 = v17;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v17 + v10) );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
      v125 = v10 + 1;
      v52 = a2[18];
      v127 = &v52;
      LODWORD(v10) = 0;
      v124 = v18;
      v20 = &word_180091EF8;
      v126 = 0;
      v128 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v19 + v10) );
      }
      v21 = (const WCHAR *)*((_QWORD *)a2 + 11);
      v130 = v10 + 1;
      LODWORD(v10) = 0;
      v129 = v20;
      v22 = &word_180091F08;
      v131 = 0;
      if ( v21 )
      {
        v22 = v21;
        v10 = -1LL;
        do
          ++v10;
        while ( v21[v10] );
      }
      v23 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
      v133 = 2 * v10 + 2;
      v53 = a2[24];
      v135 = &v53;
      LODWORD(v10) = 0;
      v132 = v22;
      v134 = 0;
      v136 = 4LL;
      if ( v23 )
      {
        v8 = v23;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v23 + v10) );
      }
      v24 = (const WCHAR *)*((_QWORD *)a2 + 14);
      v138 = v10 + 1;
      LODWORD(v10) = 0;
      v137 = v8;
      v139 = 0;
      if ( v24 )
      {
        v15 = v24;
        v10 = -1LL;
        do
          ++v10;
        while ( v24[v10] );
      }
      v140 = v15;
      v141 = 2 * v10 + 2;
      v142 = 0;
      TlgWrite(v7, &unk_1800DF48B, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    SRWLock);
  v46 = *(_DWORD **)(a1 + 48);
  v47 = a2[1];
  if ( v47 != v46[21] && (v47 != v46[19] || (int)v46[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v46 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  return 1;
}
