/*
 * XREFs of ?LogValueUpdate@CPropertyBagBase@@IEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180115A20
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180120C90 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CPropertyBagBase::LogValueUpdate(
        __int64 a1,
        unsigned int a2,
        const GUID *a3,
        const GUID *a4,
        int *a5)
{
  unsigned int v6; // ebx
  int v7; // edx
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  int *v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  int *v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  int *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  int *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  int *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  _DWORD *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  _DWORD *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  _DWORD *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  _DWORD *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  _DWORD *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  _DWORD *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  _DWORD *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  _DWORD *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]
  _DWORD *v42; // [rsp+140h] [rbp+40h]
  __int64 v43; // [rsp+148h] [rbp+48h]
  _DWORD *v44; // [rsp+150h] [rbp+50h]
  __int64 v45; // [rsp+158h] [rbp+58h]
  _DWORD *v46; // [rsp+160h] [rbp+60h]
  __int64 v47; // [rsp+168h] [rbp+68h]
  _DWORD *v48; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  _DWORD *v50; // [rsp+180h] [rbp+80h]
  __int64 v51; // [rsp+188h] [rbp+88h]
  _DWORD *v52; // [rsp+190h] [rbp+90h]
  __int64 v53; // [rsp+198h] [rbp+98h]
  _DWORD *v54; // [rsp+1A0h] [rbp+A0h]
  __int64 v55; // [rsp+1A8h] [rbp+A8h]

  v6 = 0;
  v7 = *(_DWORD *)(a1 + 48);
  if ( !v7 )
    return 0LL;
  if ( a2 < 2 )
  {
    switch ( (_DWORD)a4 )
    {
      case 0x11:
        v14 = *a5;
        if ( (unsigned int)pRelatedActivityId > 5
          && (qword_180190AC0 & 1) != 0
          && (qword_180190AC8 & 1) == qword_180190AC8 )
        {
          v11 = v7;
          v16 = &v11;
          v18 = &v10;
          v20 = &v12;
          v22 = &v13;
          v24 = &v14;
          v17 = 4LL;
          v10 = a2;
          v19 = 4LL;
          v12 = 17;
          v21 = 4LL;
          v13 = (int)a3;
          v23 = 4LL;
          v25 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016EB85, a3, a4, 7u, &pData);
        }
        return v6;
      case 0x22:
        if ( (unsigned int)pRelatedActivityId > 5
          && (qword_180190AC0 & 1) != 0
          && (qword_180190AC8 & 1) == qword_180190AC8 )
        {
          v11 = *(_DWORD *)(a1 + 48);
          v16 = &v11;
          v18 = &v10;
          v20 = &v12;
          v22 = &v13;
          v24 = a5;
          v26 = a5 + 1;
          v17 = 4LL;
          v10 = a2;
          v19 = 4LL;
          v12 = 34;
          v21 = 4LL;
          v13 = (int)a3;
          v23 = 4LL;
          v25 = 4LL;
          v27 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016EB17, a3, a4, 8u, &pData);
        }
        return v6;
      case 0x33:
        if ( (unsigned int)pRelatedActivityId > 5
          && (qword_180190AC0 & 1) != 0
          && (qword_180190AC8 & 1) == qword_180190AC8 )
        {
          v16 = &v11;
          v18 = &v10;
          v20 = &v12;
          v22 = &v13;
          v26 = a5 + 1;
          v28 = a5 + 2;
          v11 = v7;
          v17 = 4LL;
          v10 = a2;
          v19 = 4LL;
          v12 = 51;
          v21 = 4LL;
          v13 = (int)a3;
          v23 = 4LL;
          v24 = a5;
          v25 = 4LL;
          v27 = 4LL;
          v29 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016EAA6, a3, a4, 9u, &pData);
        }
        return v6;
      case 0x44:
        if ( (unsigned int)pRelatedActivityId > 5
          && (qword_180190AC0 & 1) != 0
          && (qword_180190AC8 & 1) == qword_180190AC8 )
        {
          v16 = &v11;
          v18 = &v10;
          v20 = &v12;
          v22 = &v13;
          v26 = a5 + 1;
          v28 = a5 + 2;
          v30 = a5 + 3;
          v11 = v7;
          v17 = 4LL;
          v10 = a2;
          v19 = 4LL;
          v12 = 68;
          v21 = 4LL;
          v13 = (int)a3;
          v23 = 4LL;
          v24 = a5;
          v25 = 4LL;
          v27 = 4LL;
          v29 = 4LL;
          v31 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016EA32, a3, a4, 0xAu, &pData);
        }
        return v6;
      case 0x65:
        if ( (unsigned int)pRelatedActivityId > 5
          && (qword_180190AC0 & 1) != 0
          && (qword_180190AC8 & 1) == qword_180190AC8 )
        {
          v16 = &v11;
          v18 = &v10;
          v20 = &v12;
          v22 = &v13;
          v26 = a5 + 1;
          v28 = a5 + 2;
          v30 = a5 + 3;
          v32 = a5 + 4;
          v34 = a5 + 5;
          v11 = v7;
          v17 = 4LL;
          v10 = a2;
          v19 = 4LL;
          v12 = 101;
          v21 = 4LL;
          v13 = (int)a3;
          v23 = 4LL;
          v24 = a5;
          v25 = 4LL;
          v27 = 4LL;
          v29 = 4LL;
          v31 = 4LL;
          v33 = 4LL;
          v35 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016E9AC, a3, a4, 0xCu, &pData);
        }
        return v6;
      case 0x106:
        if ( (unsigned int)pRelatedActivityId > 5
          && (qword_180190AC0 & 1) != 0
          && (qword_180190AC8 & 1) == qword_180190AC8 )
        {
          v16 = &v13;
          v18 = &v12;
          v20 = &v10;
          v22 = &v11;
          v26 = a5 + 1;
          v28 = a5 + 2;
          v30 = a5 + 3;
          v32 = a5 + 4;
          v34 = a5 + 5;
          v36 = a5 + 6;
          v38 = a5 + 7;
          v40 = a5 + 8;
          v42 = a5 + 9;
          v44 = a5 + 10;
          v46 = a5 + 11;
          v48 = a5 + 12;
          v50 = a5 + 13;
          v52 = a5 + 14;
          v54 = a5 + 15;
          v13 = v7;
          v17 = 4LL;
          v12 = a2;
          v19 = 4LL;
          v10 = 262;
          v21 = 4LL;
          v11 = (int)a3;
          v23 = 4LL;
          v24 = a5;
          v25 = 4LL;
          v27 = 4LL;
          v29 = 4LL;
          v31 = 4LL;
          v33 = 4LL;
          v35 = 4LL;
          v37 = 4LL;
          v39 = 4LL;
          v41 = 4LL;
          v43 = 4LL;
          v45 = 4LL;
          v47 = 4LL;
          v49 = 4LL;
          v51 = 4LL;
          v53 = 4LL;
          v55 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016E8F4, a3, a4, 0x16u, &pData);
        }
        return v6;
    }
    cData = 490;
  }
  else
  {
    cData = 372;
  }
  v6 = -2147418113;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, cData);
  return v6;
}
