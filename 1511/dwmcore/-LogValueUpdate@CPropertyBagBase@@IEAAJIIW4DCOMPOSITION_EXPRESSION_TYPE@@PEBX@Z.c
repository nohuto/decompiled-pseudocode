/*
 * XREFs of ?LogValueUpdate@CPropertyBagBase@@IEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18012E290
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180135F00 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CPropertyBagBase::LogValueUpdate(__int64 a1, unsigned int a2, const GUID *a3, int a4, int *a5)
{
  unsigned int v6; // ebx
  int v7; // edx
  const GUID *v9; // r9
  const GUID *v10; // r9
  const GUID *v11; // r9
  const GUID *v12; // r9
  const GUID *v13; // r9
  const GUID *v14; // r9
  const GUID *v15; // r9
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  int *v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  int *v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  int *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  int *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  _DWORD *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  _DWORD *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  _DWORD *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  _DWORD *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  _DWORD *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  _DWORD *v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]
  _DWORD *v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+128h] [rbp+28h]
  _DWORD *v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]
  _DWORD *v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]
  _DWORD *v51; // [rsp+150h] [rbp+50h]
  __int64 v52; // [rsp+158h] [rbp+58h]
  _DWORD *v53; // [rsp+160h] [rbp+60h]
  __int64 v54; // [rsp+168h] [rbp+68h]
  _DWORD *v55; // [rsp+170h] [rbp+70h]
  __int64 v56; // [rsp+178h] [rbp+78h]
  _DWORD *v57; // [rsp+180h] [rbp+80h]
  __int64 v58; // [rsp+188h] [rbp+88h]
  _DWORD *v59; // [rsp+190h] [rbp+90h]
  __int64 v60; // [rsp+198h] [rbp+98h]
  _DWORD *v61; // [rsp+1A0h] [rbp+A0h]
  __int64 v62; // [rsp+1A8h] [rbp+A8h]

  v6 = 0;
  v7 = *(_DWORD *)(a1 + 40);
  if ( !v7 )
    return 0LL;
  if ( a2 < 2 )
  {
    v9 = (const GUID *)(unsigned int)(a4 - 18);
    if ( !(_DWORD)v9 )
    {
      v21 = *a5;
      if ( (unsigned int)pRelatedActivityId > 5
        && (qword_18019E950 & 1) != 0
        && (qword_18019E958 & 1) == qword_18019E958 )
      {
        v18 = v7;
        v23 = &v18;
        v25 = &v17;
        v27 = &v19;
        v29 = &v20;
        v31 = &v21;
        v24 = 4LL;
        v17 = a2;
        v26 = 4LL;
        v19 = 18;
        v28 = 4LL;
        v20 = (int)a3;
        v30 = 4LL;
        v32 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017DD45, a3, v9, 7u, &pData);
      }
      return v6;
    }
    v10 = (const GUID *)(unsigned int)((_DWORD)v9 - 17);
    if ( !(_DWORD)v10 )
    {
      if ( (unsigned int)pRelatedActivityId > 5
        && (qword_18019E950 & 1) != 0
        && (qword_18019E958 & 1) == qword_18019E958 )
      {
        v18 = *(_DWORD *)(a1 + 40);
        v23 = &v18;
        v25 = &v17;
        v27 = &v19;
        v29 = &v20;
        v31 = a5;
        v33 = a5 + 1;
        v24 = 4LL;
        v17 = a2;
        v26 = 4LL;
        v19 = 35;
        v28 = 4LL;
        v20 = (int)a3;
        v30 = 4LL;
        v32 = 4LL;
        v34 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017DCD7, a3, v10, 8u, &pData);
      }
      return v6;
    }
    v11 = (const GUID *)(unsigned int)((_DWORD)v10 - 17);
    if ( !(_DWORD)v11 )
    {
      if ( (unsigned int)pRelatedActivityId > 5
        && (qword_18019E950 & 1) != 0
        && (qword_18019E958 & 1) == qword_18019E958 )
      {
        v23 = &v18;
        v25 = &v17;
        v27 = &v19;
        v29 = &v20;
        v33 = a5 + 1;
        v35 = a5 + 2;
        v18 = v7;
        v24 = 4LL;
        v17 = a2;
        v26 = 4LL;
        v19 = 52;
        v28 = 4LL;
        v20 = (int)a3;
        v30 = 4LL;
        v31 = a5;
        v32 = 4LL;
        v34 = 4LL;
        v36 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017DC66, a3, v11, 9u, &pData);
      }
      return v6;
    }
    v12 = (const GUID *)(unsigned int)((_DWORD)v11 - 17);
    if ( !(_DWORD)v12 )
    {
      if ( (unsigned int)pRelatedActivityId > 5
        && (qword_18019E950 & 1) != 0
        && (qword_18019E958 & 1) == qword_18019E958 )
      {
        v23 = &v18;
        v25 = &v17;
        v27 = &v19;
        v29 = &v20;
        v33 = a5 + 1;
        v35 = a5 + 2;
        v37 = a5 + 3;
        v18 = v7;
        v24 = 4LL;
        v17 = a2;
        v26 = 4LL;
        v19 = 69;
        v28 = 4LL;
        v20 = (int)a3;
        v30 = 4LL;
        v31 = a5;
        v32 = 4LL;
        v34 = 4LL;
        v36 = 4LL;
        v38 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017DB7E, a3, v12, 0xAu, &pData);
      }
      return v6;
    }
    v13 = (const GUID *)(unsigned int)((_DWORD)v12 - 1);
    if ( !(_DWORD)v13 )
    {
      if ( (unsigned int)pRelatedActivityId > 5
        && (qword_18019E950 & 1) != 0
        && (qword_18019E958 & 1) == qword_18019E958 )
      {
        v23 = &v18;
        v25 = &v17;
        v27 = &v19;
        v29 = &v20;
        v33 = a5 + 1;
        v35 = a5 + 2;
        v37 = a5 + 3;
        v18 = v7;
        v24 = 4LL;
        v17 = a2;
        v26 = 4LL;
        v19 = 70;
        v28 = 4LL;
        v20 = (int)a3;
        v30 = 4LL;
        v31 = a5;
        v32 = 4LL;
        v34 = 4LL;
        v36 = 4LL;
        v38 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017DBF2, a3, v13, 0xAu, &pData);
      }
      return v6;
    }
    v14 = (const GUID *)(unsigned int)((_DWORD)v13 - 1);
    if ( !(_DWORD)v14 )
    {
      if ( (unsigned int)pRelatedActivityId > 5
        && (qword_18019E950 & 1) != 0
        && (qword_18019E958 & 1) == qword_18019E958 )
      {
        v23 = &v18;
        v25 = &v17;
        v27 = &v19;
        v29 = &v20;
        v33 = a5 + 1;
        v35 = a5 + 2;
        v37 = a5 + 3;
        v18 = v7;
        v24 = 4LL;
        v17 = a2;
        v26 = 4LL;
        v19 = 71;
        v28 = 4LL;
        v20 = (int)a3;
        v30 = 4LL;
        v31 = a5;
        v32 = 4LL;
        v34 = 4LL;
        v36 = 4LL;
        v38 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017DB7E, a3, v14, 0xAu, &pData);
      }
      return v6;
    }
    v15 = (const GUID *)(unsigned int)((_DWORD)v14 - 33);
    if ( !(_DWORD)v15 )
    {
      if ( (unsigned int)pRelatedActivityId > 5
        && (qword_18019E950 & 1) != 0
        && (qword_18019E958 & 1) == qword_18019E958 )
      {
        v23 = &v18;
        v25 = &v17;
        v27 = &v19;
        v29 = &v20;
        v33 = a5 + 1;
        v35 = a5 + 2;
        v37 = a5 + 3;
        v39 = a5 + 4;
        v41 = a5 + 5;
        v18 = v7;
        v24 = 4LL;
        v17 = a2;
        v26 = 4LL;
        v19 = 104;
        v28 = 4LL;
        v20 = (int)a3;
        v30 = 4LL;
        v31 = a5;
        v32 = 4LL;
        v34 = 4LL;
        v36 = 4LL;
        v38 = 4LL;
        v40 = 4LL;
        v42 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017DAF8, a3, v15, 0xCu, &pData);
      }
      return v6;
    }
    if ( (_DWORD)v15 == 161 )
    {
      if ( (unsigned int)pRelatedActivityId > 5
        && (qword_18019E950 & 1) != 0
        && (qword_18019E958 & 1) == qword_18019E958 )
      {
        v23 = &v20;
        v25 = &v19;
        v27 = &v17;
        v29 = &v18;
        v33 = a5 + 1;
        v35 = a5 + 2;
        v37 = a5 + 3;
        v39 = a5 + 4;
        v41 = a5 + 5;
        v43 = a5 + 6;
        v45 = a5 + 7;
        v47 = a5 + 8;
        v49 = a5 + 9;
        v51 = a5 + 10;
        v53 = a5 + 11;
        v55 = a5 + 12;
        v57 = a5 + 13;
        v59 = a5 + 14;
        v61 = a5 + 15;
        v20 = v7;
        v24 = 4LL;
        v19 = a2;
        v26 = 4LL;
        v17 = 265;
        v28 = 4LL;
        v18 = (int)a3;
        v30 = 4LL;
        v31 = a5;
        v32 = 4LL;
        v34 = 4LL;
        v36 = 4LL;
        v38 = 4LL;
        v40 = 4LL;
        v42 = 4LL;
        v44 = 4LL;
        v46 = 4LL;
        v48 = 4LL;
        v50 = 4LL;
        v52 = 4LL;
        v54 = 4LL;
        v56 = 4LL;
        v58 = 4LL;
        v60 = 4LL;
        v62 = 4LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017DA40, a3, v15, 0x16u, &pData);
      }
      return v6;
    }
    cData = 560;
  }
  else
  {
    cData = 406;
  }
  v6 = -2147418113;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, cData);
  return v6;
}
