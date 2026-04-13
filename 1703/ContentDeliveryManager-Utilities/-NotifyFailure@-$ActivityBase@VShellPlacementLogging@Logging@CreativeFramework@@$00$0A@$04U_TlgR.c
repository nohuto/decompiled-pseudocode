/*
 * XREFs of ?NotifyFailure@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18002B720
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180001E54 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x18002418C (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?LockExclusive@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18002D590 (-LockExclusive@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgR.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

char __fastcall wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::NotifyFailure(
        __int64 a1,
        int *a2)
{
  int v3; // edx
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
  const struct _TlgProvider_t *v25; // r10
  const unsigned __int16 *v26; // r11
  const unsigned __int16 *v27; // rdx
  __int64 v28; // rax
  const unsigned __int16 *v29; // r8
  const unsigned __int16 *v30; // rdx
  const unsigned __int16 *v31; // r8
  const WCHAR *v32; // rdx
  const WCHAR *v33; // rdi
  const WCHAR *v34; // r8
  const unsigned __int16 *v35; // rdx
  const unsigned __int16 *v36; // r8
  const unsigned __int16 *v37; // rdx
  const unsigned __int16 *v38; // r8
  const WCHAR *v39; // rdx
  const WCHAR *v40; // r8
  const unsigned __int16 *v41; // rdx
  const unsigned __int16 *v42; // r8
  const WCHAR *v43; // rdx
  const unsigned __int16 *v44; // rdx
  _DWORD *v45; // rcx
  int v46; // eax
  int v48; // [rsp+30h] [rbp-D0h] BYREF
  int v49; // [rsp+34h] [rbp-CCh] BYREF
  int v50; // [rsp+38h] [rbp-C8h] BYREF
  int v51; // [rsp+3Ch] [rbp-C4h] BYREF
  int v52; // [rsp+40h] [rbp-C0h] BYREF
  int v53; // [rsp+44h] [rbp-BCh] BYREF
  int v54; // [rsp+48h] [rbp-B8h] BYREF
  int v55; // [rsp+4Ch] [rbp-B4h] BYREF
  int v56; // [rsp+50h] [rbp-B0h] BYREF
  int v57; // [rsp+54h] [rbp-ACh] BYREF
  int v58; // [rsp+58h] [rbp-A8h] BYREF
  int v59; // [rsp+5Ch] [rbp-A4h] BYREF
  PSRWLOCK SRWLock[2]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v61; // [rsp+70h] [rbp-90h] BYREF
  int *v62; // [rsp+90h] [rbp-70h]
  __int64 v63; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v64; // [rsp+A0h] [rbp-60h]
  int v65; // [rsp+A8h] [rbp-58h]
  int v66; // [rsp+ACh] [rbp-54h]
  int *v67; // [rsp+B0h] [rbp-50h]
  __int64 v68; // [rsp+B8h] [rbp-48h]
  const unsigned __int16 *v69; // [rsp+C0h] [rbp-40h]
  int v70; // [rsp+C8h] [rbp-38h]
  int v71; // [rsp+CCh] [rbp-34h]
  int *v72; // [rsp+D0h] [rbp-30h]
  __int64 v73; // [rsp+D8h] [rbp-28h]
  const WCHAR *v74; // [rsp+E0h] [rbp-20h]
  int v75; // [rsp+E8h] [rbp-18h]
  int v76; // [rsp+ECh] [rbp-14h]
  int *v77; // [rsp+F0h] [rbp-10h]
  __int64 v78; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v79; // [rsp+100h] [rbp+0h]
  int v80; // [rsp+108h] [rbp+8h]
  int v81; // [rsp+10Ch] [rbp+Ch]
  int *v82; // [rsp+110h] [rbp+10h]
  __int64 v83; // [rsp+118h] [rbp+18h]
  const unsigned __int16 *v84; // [rsp+120h] [rbp+20h]
  int v85; // [rsp+128h] [rbp+28h]
  int v86; // [rsp+12Ch] [rbp+2Ch]
  const WCHAR *v87; // [rsp+130h] [rbp+30h]
  int v88; // [rsp+138h] [rbp+38h]
  int v89; // [rsp+13Ch] [rbp+3Ch]
  int *v90; // [rsp+140h] [rbp+40h]
  __int64 v91; // [rsp+148h] [rbp+48h]
  const unsigned __int16 *v92; // [rsp+150h] [rbp+50h]
  int v93; // [rsp+158h] [rbp+58h]
  int v94; // [rsp+15Ch] [rbp+5Ch]
  const WCHAR *v95; // [rsp+160h] [rbp+60h]
  int v96; // [rsp+168h] [rbp+68h]
  int v97; // [rsp+16Ch] [rbp+6Ch]
  int *v98; // [rsp+170h] [rbp+70h]
  __int64 v99; // [rsp+178h] [rbp+78h]
  int *v100; // [rsp+180h] [rbp+80h]
  __int64 v101; // [rsp+188h] [rbp+88h]
  const unsigned __int16 *v102; // [rsp+190h] [rbp+90h]
  int v103; // [rsp+198h] [rbp+98h]
  int v104; // [rsp+19Ch] [rbp+9Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v106; // [rsp+1D0h] [rbp+D0h]
  __int64 v107; // [rsp+1D8h] [rbp+D8h]
  const unsigned __int16 *v108; // [rsp+1E0h] [rbp+E0h]
  int v109; // [rsp+1E8h] [rbp+E8h]
  int v110; // [rsp+1ECh] [rbp+ECh]
  int *v111; // [rsp+1F0h] [rbp+F0h]
  __int64 v112; // [rsp+1F8h] [rbp+F8h]
  const unsigned __int16 *v113; // [rsp+200h] [rbp+100h]
  int v114; // [rsp+208h] [rbp+108h]
  int v115; // [rsp+20Ch] [rbp+10Ch]
  int *v116; // [rsp+210h] [rbp+110h]
  __int64 v117; // [rsp+218h] [rbp+118h]
  const WCHAR *v118; // [rsp+220h] [rbp+120h]
  int v119; // [rsp+228h] [rbp+128h]
  int v120; // [rsp+22Ch] [rbp+12Ch]
  int *v121; // [rsp+230h] [rbp+130h]
  __int64 v122; // [rsp+238h] [rbp+138h]
  const unsigned __int16 *v123; // [rsp+240h] [rbp+140h]
  int v124; // [rsp+248h] [rbp+148h]
  int v125; // [rsp+24Ch] [rbp+14Ch]
  int *v126; // [rsp+250h] [rbp+150h]
  __int64 v127; // [rsp+258h] [rbp+158h]
  const unsigned __int16 *v128; // [rsp+260h] [rbp+160h]
  int v129; // [rsp+268h] [rbp+168h]
  int v130; // [rsp+26Ch] [rbp+16Ch]
  const WCHAR *v131; // [rsp+270h] [rbp+170h]
  int v132; // [rsp+278h] [rbp+178h]
  int v133; // [rsp+27Ch] [rbp+17Ch]
  int *v134; // [rsp+280h] [rbp+180h]
  __int64 v135; // [rsp+288h] [rbp+188h]
  const unsigned __int16 *v136; // [rsp+290h] [rbp+190h]
  int v137; // [rsp+298h] [rbp+198h]
  int v138; // [rsp+29Ch] [rbp+19Ch]
  const WCHAR *v139; // [rsp+2A0h] [rbp+1A0h]
  int v140; // [rsp+2A8h] [rbp+1A8h]
  int v141; // [rsp+2ACh] [rbp+1ACh]

  v3 = a2[2];
  v5 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen == v3;
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = v3;
  if ( v5 )
  {
    v25 = CreativeFramework::Logging::ShellPlacementLogging::Provider();
    if ( *(_DWORD *)v25 > 5u )
    {
      v26 = &word_180091EF8;
      v27 = (const unsigned __int16 *)*((_QWORD *)a2 + 6);
      v53 = a2[1];
      v62 = &v53;
      LODWORD(v28) = 0;
      v63 = 4LL;
      v29 = &word_180091EF8;
      if ( v27 )
      {
        v29 = v27;
        v28 = -1LL;
        do
          ++v28;
        while ( *((_BYTE *)v27 + v28) );
      }
      v30 = (const unsigned __int16 *)*((_QWORD *)a2 + 15);
      v65 = v28 + 1;
      v67 = a2 + 14;
      LODWORD(v28) = 0;
      v64 = v29;
      v31 = &word_180091EF8;
      v66 = 0;
      v68 = 4LL;
      if ( v30 )
      {
        v31 = v30;
        v28 = -1LL;
        do
          ++v28;
        while ( *((_BYTE *)v30 + v28) );
      }
      v32 = (const WCHAR *)*((_QWORD *)a2 + 2);
      v33 = &word_180091F08;
      v69 = v31;
      v70 = v28 + 1;
      v34 = &word_180091F08;
      v54 = *a2;
      v72 = &v54;
      LODWORD(v28) = 0;
      v71 = 0;
      v73 = 4LL;
      if ( v32 )
      {
        v34 = v32;
        v28 = -1LL;
        do
          ++v28;
        while ( v32[v28] );
      }
      v35 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
      v75 = 2 * v28 + 2;
      v55 = a2[6];
      v77 = &v55;
      LODWORD(v28) = 0;
      v74 = v34;
      v36 = &word_180091EF8;
      v76 = 0;
      v78 = 4LL;
      if ( v35 )
      {
        v36 = v35;
        v28 = -1LL;
        do
          ++v28;
        while ( *((_BYTE *)v35 + v28) );
      }
      v37 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
      v80 = v28 + 1;
      v56 = a2[18];
      v82 = &v56;
      LODWORD(v28) = 0;
      v79 = v36;
      v38 = &word_180091EF8;
      v81 = 0;
      v83 = 4LL;
      if ( v37 )
      {
        v38 = v37;
        v28 = -1LL;
        do
          ++v28;
        while ( *((_BYTE *)v37 + v28) );
      }
      v39 = (const WCHAR *)*((_QWORD *)a2 + 11);
      v85 = v28 + 1;
      LODWORD(v28) = 0;
      v84 = v38;
      v40 = &word_180091F08;
      v86 = 0;
      if ( v39 )
      {
        v40 = v39;
        v28 = -1LL;
        do
          ++v28;
        while ( v39[v28] );
      }
      v41 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
      v88 = 2 * v28 + 2;
      v57 = a2[24];
      v90 = &v57;
      LODWORD(v28) = 0;
      v87 = v40;
      v42 = &word_180091EF8;
      v89 = 0;
      v91 = 4LL;
      if ( v41 )
      {
        v42 = v41;
        v28 = -1LL;
        do
          ++v28;
        while ( *((_BYTE *)v41 + v28) );
      }
      v43 = (const WCHAR *)*((_QWORD *)a2 + 14);
      v93 = v28 + 1;
      LODWORD(v28) = 0;
      v92 = v42;
      v94 = 0;
      if ( v43 )
      {
        v33 = v43;
        v28 = -1LL;
        do
          ++v28;
        while ( v43[v28] );
      }
      v44 = (const unsigned __int16 *)*((_QWORD *)a2 + 5);
      v96 = 2 * v28 + 2;
      v58 = a2[2];
      v98 = &v58;
      v59 = a2[15];
      v100 = &v59;
      LODWORD(v28) = 0;
      v95 = v33;
      v97 = 0;
      v99 = 4LL;
      v101 = 4LL;
      if ( v44 )
      {
        v26 = v44;
        v28 = -1LL;
        do
          ++v28;
        while ( *((_BYTE *)v44 + v28) );
      }
      v102 = v26;
      v103 = v28 + 1;
      v104 = 0;
      TlgWrite(v25, &unk_1800DEDE3, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x13u, &v61);
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
      v48 = a2[1];
      v106 = &v48;
      LODWORD(v10) = 0;
      v107 = 4LL;
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
      v109 = v10 + 1;
      v111 = a2 + 14;
      LODWORD(v10) = 0;
      v108 = v11;
      v13 = &word_180091EF8;
      v110 = 0;
      v112 = 4LL;
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
      v113 = v13;
      v114 = v10 + 1;
      v16 = &word_180091F08;
      v49 = *a2;
      v116 = &v49;
      LODWORD(v10) = 0;
      v115 = 0;
      v117 = 4LL;
      if ( v14 )
      {
        v16 = v14;
        v10 = -1LL;
        do
          ++v10;
        while ( v14[v10] );
      }
      v17 = (const unsigned __int16 *)*((_QWORD *)a2 + 8);
      v119 = 2 * v10 + 2;
      v50 = a2[6];
      v121 = &v50;
      LODWORD(v10) = 0;
      v118 = v16;
      v18 = &word_180091EF8;
      v120 = 0;
      v122 = 4LL;
      if ( v17 )
      {
        v18 = v17;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v17 + v10) );
      }
      v19 = (const unsigned __int16 *)*((_QWORD *)a2 + 10);
      v124 = v10 + 1;
      v51 = a2[18];
      v126 = &v51;
      LODWORD(v10) = 0;
      v123 = v18;
      v20 = &word_180091EF8;
      v125 = 0;
      v127 = 4LL;
      if ( v19 )
      {
        v20 = v19;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v19 + v10) );
      }
      v21 = (const WCHAR *)*((_QWORD *)a2 + 11);
      v129 = v10 + 1;
      LODWORD(v10) = 0;
      v128 = v20;
      v22 = &word_180091F08;
      v130 = 0;
      if ( v21 )
      {
        v22 = v21;
        v10 = -1LL;
        do
          ++v10;
        while ( v21[v10] );
      }
      v23 = (const unsigned __int16 *)*((_QWORD *)a2 + 13);
      v132 = 2 * v10 + 2;
      v52 = a2[24];
      v134 = &v52;
      LODWORD(v10) = 0;
      v131 = v22;
      v133 = 0;
      v135 = 4LL;
      if ( v23 )
      {
        v8 = v23;
        v10 = -1LL;
        do
          ++v10;
        while ( *((_BYTE *)v23 + v10) );
      }
      v24 = (const WCHAR *)*((_QWORD *)a2 + 14);
      v137 = v10 + 1;
      LODWORD(v10) = 0;
      v136 = v8;
      v138 = 0;
      if ( v24 )
      {
        v15 = v24;
        v10 = -1LL;
        do
          ++v10;
        while ( v24[v10] );
      }
      v139 = v15;
      v140 = 2 * v10 + 2;
      v141 = 0;
      TlgWrite(v7, &unk_1800DF48B, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0x10u, &pData);
    }
  }
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    SRWLock);
  v45 = *(_DWORD **)(a1 + 48);
  v46 = a2[1];
  if ( v46 != v45[21] && (v46 != v45[19] || (int)v45[19] >= 0) )
    wil::StoredFailureInfo::SetFailureInfo((wil::StoredFailureInfo *)(v45 + 20), (const struct wil::FailureInfo *)a2);
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  return 1;
}
