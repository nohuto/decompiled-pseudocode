/*
 * XREFs of ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@@Z @ 0x180044490
 * Callers:
 *     ??$LogMPCInputReport@AEAPEAUInputInfo@@@ISMTracing@@SAXAEAPEAUInputInfo@@@Z @ 0x180046960 (--$LogMPCInputReport@AEAPEAUInputInfo@@@ISMTracing@@SAXAEAPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180043FD0 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x180044140 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ISMTracing::LogMPCHandInputReport(struct InputInfo *a1)
{
  __int64 v2; // r13
  const unsigned __int16 *Vector3AsString; // rax
  const unsigned __int16 *v4; // r15
  const unsigned __int16 *v5; // rdx
  __int64 v6; // rcx
  const unsigned __int16 *v7; // rax
  const unsigned __int16 *v8; // rdx
  __int64 v9; // rcx
  const unsigned __int16 *v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  char *v13; // rcx
  __int64 v14; // r13
  const unsigned __int16 *v15; // rax
  const unsigned __int16 *v16; // r15
  const unsigned __int16 *v17; // rdx
  __int64 v18; // rcx
  const unsigned __int16 *v19; // rax
  const unsigned __int16 *v20; // rdx
  __int64 v21; // rcx
  const unsigned __int16 *v22; // rax
  __int64 v23; // rcx
  int v24; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  int v26; // [rsp+40h] [rbp-C8h] BYREF
  int v27; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h]
  void *v29[3]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-A0h]
  void *v31[3]; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v32; // [rsp+88h] [rbp-80h]
  void *v33[3]; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v34; // [rsp+A8h] [rbp-60h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B8h] [rbp-50h] BYREF
  int *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  int *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  char *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  char *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  int *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  int *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  char *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  char *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]
  const unsigned __int16 *v52; // [rsp+158h] [rbp+50h]
  int v53; // [rsp+160h] [rbp+58h]
  int v54; // [rsp+164h] [rbp+5Ch]
  char *v55; // [rsp+168h] [rbp+60h]
  __int64 v56; // [rsp+170h] [rbp+68h]
  const unsigned __int16 *v57; // [rsp+178h] [rbp+70h]
  int v58; // [rsp+180h] [rbp+78h]
  int v59; // [rsp+184h] [rbp+7Ch]
  const unsigned __int16 *v60; // [rsp+188h] [rbp+80h]
  int v61; // [rsp+190h] [rbp+88h]
  int v62; // [rsp+194h] [rbp+8Ch]
  char *v63; // [rsp+198h] [rbp+90h]
  __int64 v64; // [rsp+1A0h] [rbp+98h]
  char *v65; // [rsp+1A8h] [rbp+A0h]
  __int64 v66; // [rsp+1B0h] [rbp+A8h]

  v28 = -2LL;
  if ( *((_DWORD *)a1 + 176) == 6 )
  {
    v2 = *((_QWORD *)ISMTracing::Instance() + 1);
    if ( *(_DWORD *)v2 > 5u && (*(_BYTE *)(v2 + 16) & 1) != 0 && (*(_QWORD *)(v2 + 24) & 1LL) == *(_QWORD *)(v2 + 24) )
    {
      v24 = *(_DWORD *)a1;
      v36 = &v24;
      v37 = 4LL;
      v25 = *((_DWORD *)a1 + 1);
      v38 = &v25;
      v39 = 4LL;
      v40 = (char *)a1 + 8;
      v41 = 4LL;
      v42 = (char *)a1 + 712;
      v43 = 4LL;
      v26 = *((_DWORD *)a1 + 176);
      v44 = &v26;
      v45 = 4LL;
      v27 = *((_DWORD *)a1 + 177);
      v46 = &v27;
      v47 = 4LL;
      v48 = (char *)a1 + 1296;
      v49 = 4LL;
      v50 = (char *)a1 + 1300;
      v51 = 4LL;
      Vector3AsString = (const unsigned __int16 *)ISMTracing::GetVector3AsString(v33);
      if ( *((_QWORD *)Vector3AsString + 3) >= 0x10uLL )
        Vector3AsString = *(const unsigned __int16 **)Vector3AsString;
      v4 = &word_1800ACD3A;
      v5 = &word_1800ACD3A;
      LODWORD(v6) = 0;
      if ( Vector3AsString )
      {
        v5 = Vector3AsString;
        v6 = -1LL;
        do
          ++v6;
        while ( *((_BYTE *)Vector3AsString + v6) );
      }
      v52 = v5;
      v53 = v6 + 1;
      v54 = 0;
      v55 = (char *)a1 + 1316;
      v56 = 4LL;
      v7 = (const unsigned __int16 *)ISMTracing::GetVector3AsString(v31);
      if ( *((_QWORD *)v7 + 3) >= 0x10uLL )
        v7 = *(const unsigned __int16 **)v7;
      v8 = &word_1800ACD3A;
      LODWORD(v9) = 0;
      if ( v7 )
      {
        v8 = v7;
        v9 = -1LL;
        do
          ++v9;
        while ( *((_BYTE *)v7 + v9) );
      }
      v57 = v8;
      v58 = v9 + 1;
      v59 = 0;
      v10 = (const unsigned __int16 *)ISMTracing::GetVector3AsString(v29);
      if ( *((_QWORD *)v10 + 3) >= 0x10uLL )
        v10 = *(const unsigned __int16 **)v10;
      LODWORD(v11) = 0;
      if ( v10 )
      {
        v4 = v10;
        v11 = -1LL;
        do
          ++v11;
        while ( *((_BYTE *)v10 + v11) );
      }
      v60 = v4;
      v61 = v11 + 1;
      v62 = 0;
      v63 = (char *)a1 + 1344;
      v64 = 4LL;
      v65 = (char *)a1 + 1348;
      v66 = 4LL;
      TlgWrite((TraceLoggingHProvider)v2, &unk_1800B90F6, 0LL, 0LL, 0x10u, &pData);
      if ( v30 >= 0x10 )
        std::_Deallocate((char *)v29[0], v30 + 1, 1uLL);
      if ( v32 >= 0x10 )
        std::_Deallocate((char *)v31[0], v32 + 1, 1uLL);
      v12 = v34;
      if ( v34 >= 0x10 )
      {
        v13 = (char *)v33[0];
LABEL_50:
        std::_Deallocate(v13, v12 + 1, 1uLL);
      }
    }
  }
  else
  {
    v14 = *((_QWORD *)ISMTracing::Instance() + 1);
    if ( *(_DWORD *)v14 > 4u
      && (*(_BYTE *)(v14 + 16) & 1) != 0
      && (*(_QWORD *)(v14 + 24) & 1LL) == *(_QWORD *)(v14 + 24) )
    {
      v27 = *(_DWORD *)a1;
      v36 = &v27;
      v37 = 4LL;
      v26 = *((_DWORD *)a1 + 1);
      v38 = &v26;
      v39 = 4LL;
      v40 = (char *)a1 + 8;
      v41 = 4LL;
      v42 = (char *)a1 + 712;
      v43 = 4LL;
      v25 = *((_DWORD *)a1 + 176);
      v44 = &v25;
      v45 = 4LL;
      v24 = *((_DWORD *)a1 + 177);
      v46 = &v24;
      v47 = 4LL;
      v48 = (char *)a1 + 1296;
      v49 = 4LL;
      v50 = (char *)a1 + 1300;
      v51 = 4LL;
      v15 = (const unsigned __int16 *)ISMTracing::GetVector3AsString(v29);
      if ( *((_QWORD *)v15 + 3) >= 0x10uLL )
        v15 = *(const unsigned __int16 **)v15;
      v16 = &word_1800ACD3A;
      v17 = &word_1800ACD3A;
      LODWORD(v18) = 0;
      if ( v15 )
      {
        v17 = v15;
        v18 = -1LL;
        do
          ++v18;
        while ( *((_BYTE *)v15 + v18) );
      }
      v52 = v17;
      v53 = v18 + 1;
      v54 = 0;
      v55 = (char *)a1 + 1316;
      v56 = 4LL;
      v19 = (const unsigned __int16 *)ISMTracing::GetVector3AsString(v31);
      if ( *((_QWORD *)v19 + 3) >= 0x10uLL )
        v19 = *(const unsigned __int16 **)v19;
      v20 = &word_1800ACD3A;
      LODWORD(v21) = 0;
      if ( v19 )
      {
        v20 = v19;
        v21 = -1LL;
        do
          ++v21;
        while ( *((_BYTE *)v19 + v21) );
      }
      v57 = v20;
      v58 = v21 + 1;
      v59 = 0;
      v22 = (const unsigned __int16 *)ISMTracing::GetVector3AsString(v33);
      if ( *((_QWORD *)v22 + 3) >= 0x10uLL )
        v22 = *(const unsigned __int16 **)v22;
      LODWORD(v23) = 0;
      if ( v22 )
      {
        v16 = v22;
        v23 = -1LL;
        do
          ++v23;
        while ( *((_BYTE *)v22 + v23) );
      }
      v60 = v16;
      v61 = v23 + 1;
      v62 = 0;
      v63 = (char *)a1 + 1344;
      v64 = 4LL;
      v65 = (char *)a1 + 1348;
      v66 = 4LL;
      TlgWrite((TraceLoggingHProvider)v14, &unk_1800B93D5, 0LL, 0LL, 0x10u, &pData);
      if ( v34 >= 0x10 )
        std::_Deallocate((char *)v33[0], v34 + 1, 1uLL);
      if ( v32 >= 0x10 )
        std::_Deallocate((char *)v31[0], v32 + 1, 1uLL);
      v12 = v30;
      if ( v30 >= 0x10 )
      {
        v13 = (char *)v29[0];
        goto LABEL_50;
      }
    }
  }
}
