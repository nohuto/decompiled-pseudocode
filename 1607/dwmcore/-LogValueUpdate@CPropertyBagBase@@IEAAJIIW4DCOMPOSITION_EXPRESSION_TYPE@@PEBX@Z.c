/*
 * XREFs of ?LogValueUpdate@CPropertyBagBase@@IEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18008C770
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18008D340 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 */

__int64 __fastcall CPropertyBagBase::LogValueUpdate(
        __int64 a1,
        unsigned int a2,
        const GUID *a3,
        int a4,
        unsigned __int8 *a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // edx
  unsigned __int64 v9; // r9
  const GUID *v10; // r9
  const GUID *v11; // r9
  const GUID *v12; // r9
  const GUID *v13; // r9
  const GUID *v14; // r9
  const GUID *v15; // r9
  const void *v16; // rdx
  unsigned int *v17; // rax
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  unsigned int v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD v23[4]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int *v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  int *v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  int *v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  int *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  unsigned int *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  unsigned __int8 *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  unsigned __int8 *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  unsigned __int8 *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  unsigned __int8 *v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  unsigned __int8 *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  unsigned __int8 *v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  unsigned __int8 *v49; // [rsp+130h] [rbp+30h]
  __int64 v50; // [rsp+138h] [rbp+38h]
  unsigned __int8 *v51; // [rsp+140h] [rbp+40h]
  __int64 v52; // [rsp+148h] [rbp+48h]
  unsigned __int8 *v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  unsigned __int8 *v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  unsigned __int8 *v57; // [rsp+170h] [rbp+70h]
  __int64 v58; // [rsp+178h] [rbp+78h]
  unsigned __int8 *v59; // [rsp+180h] [rbp+80h]
  __int64 v60; // [rsp+188h] [rbp+88h]
  unsigned __int8 *v61; // [rsp+190h] [rbp+90h]
  __int64 v62; // [rsp+198h] [rbp+98h]
  unsigned __int8 *v63; // [rsp+1A0h] [rbp+A0h]
  __int64 v64; // [rsp+1A8h] [rbp+A8h]

  v6 = 0;
  v7 = *(_DWORD *)(a1 + 112);
  if ( !v7 )
    return 0LL;
  if ( a2 < 2 )
  {
    v9 = (unsigned int)(a4 - 17);
    if ( (_DWORD)v9 )
    {
      v9 = (unsigned int)(v9 - 1);
      if ( (_DWORD)v9 )
      {
        v10 = (const GUID *)(unsigned int)(v9 - 17);
        if ( !(_DWORD)v10 )
        {
          if ( (unsigned int)pRelatedActivityId > 5
            && (qword_1801EAA90 & 1) != 0
            && (qword_1801EAA98 & 1) == qword_1801EAA98 )
          {
            v22 = *(_DWORD *)(a1 + 112);
            v25 = &v22;
            v27 = &v21;
            v29 = &v20;
            v31 = (int *)&v19;
            v33 = (unsigned int *)a5;
            v35 = a5 + 4;
            v26 = 4LL;
            v21 = a2;
            v28 = 4LL;
            v20 = 35;
            v30 = 4LL;
            v19 = (unsigned int)a3;
            v32 = 4LL;
            v34 = 4LL;
            v36 = 4LL;
            TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C490D, a3, v10, 8u, &pData);
          }
          return v6;
        }
        v11 = (const GUID *)(unsigned int)((_DWORD)v10 - 17);
        if ( !(_DWORD)v11 )
        {
          if ( (unsigned int)pRelatedActivityId > 5
            && (qword_1801EAA90 & 1) != 0
            && (qword_1801EAA98 & 1) == qword_1801EAA98 )
          {
            v25 = &v22;
            v27 = &v21;
            v29 = &v20;
            v31 = (int *)&v19;
            v35 = a5 + 4;
            v37 = a5 + 8;
            v22 = v7;
            v26 = 4LL;
            v21 = a2;
            v28 = 4LL;
            v20 = 52;
            v30 = 4LL;
            v19 = (unsigned int)a3;
            v32 = 4LL;
            v33 = (unsigned int *)a5;
            v34 = 4LL;
            v36 = 4LL;
            v38 = 4LL;
            TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C489C, a3, v11, 9u, &pData);
          }
          return v6;
        }
        v12 = (const GUID *)(unsigned int)((_DWORD)v11 - 17);
        if ( !(_DWORD)v12 )
        {
          if ( (unsigned int)pRelatedActivityId > 5
            && (qword_1801EAA90 & 1) != 0
            && (qword_1801EAA98 & 1) == qword_1801EAA98 )
          {
            v25 = &v22;
            v27 = &v21;
            v29 = &v20;
            v31 = (int *)&v19;
            v35 = a5 + 4;
            v37 = a5 + 8;
            v39 = a5 + 12;
            v22 = v7;
            v26 = 4LL;
            v21 = a2;
            v28 = 4LL;
            v20 = 69;
            v30 = 4LL;
            v19 = (unsigned int)a3;
            v32 = 4LL;
            v33 = (unsigned int *)a5;
            v34 = 4LL;
            v36 = 4LL;
            v38 = 4LL;
            v40 = 4LL;
            TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4828, a3, v12, 0xAu, &pData);
          }
          return v6;
        }
        v13 = (const GUID *)(unsigned int)((_DWORD)v12 - 1);
        if ( !(_DWORD)v13 )
        {
          if ( (unsigned int)pRelatedActivityId > 5
            && (qword_1801EAA90 & 1) != 0
            && (qword_1801EAA98 & 1) == qword_1801EAA98 )
          {
            v25 = &v22;
            v27 = &v21;
            v29 = &v20;
            v31 = (int *)&v19;
            v35 = a5 + 4;
            v37 = a5 + 8;
            v39 = a5 + 12;
            v22 = v7;
            v26 = 4LL;
            v21 = a2;
            v28 = 4LL;
            v20 = 70;
            v30 = 4LL;
            v19 = (unsigned int)a3;
            v32 = 4LL;
            v33 = (unsigned int *)a5;
            v34 = 4LL;
            v36 = 4LL;
            v38 = 4LL;
            v40 = 4LL;
            TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C47B4, a3, v13, 0xAu, &pData);
          }
          return v6;
        }
        v14 = (const GUID *)(unsigned int)((_DWORD)v13 - 1);
        if ( !(_DWORD)v14 )
        {
          if ( (unsigned int)pRelatedActivityId > 5
            && (qword_1801EAA90 & 1) != 0
            && (qword_1801EAA98 & 1) == qword_1801EAA98 )
          {
            v25 = &v22;
            v27 = &v21;
            v29 = &v20;
            v31 = (int *)&v19;
            v35 = a5 + 4;
            v37 = a5 + 8;
            v39 = a5 + 12;
            v22 = v7;
            v26 = 4LL;
            v21 = a2;
            v28 = 4LL;
            v20 = 71;
            v30 = 4LL;
            v19 = (unsigned int)a3;
            v32 = 4LL;
            v33 = (unsigned int *)a5;
            v34 = 4LL;
            v36 = 4LL;
            v38 = 4LL;
            v40 = 4LL;
            TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4828, a3, v14, 0xAu, &pData);
          }
          return v6;
        }
        v15 = (const GUID *)(unsigned int)((_DWORD)v14 - 33);
        if ( !(_DWORD)v15 )
        {
          if ( (unsigned int)pRelatedActivityId > 5
            && (qword_1801EAA90 & 1) != 0
            && (qword_1801EAA98 & 1) == qword_1801EAA98 )
          {
            v25 = &v22;
            v27 = &v21;
            v29 = &v20;
            v31 = (int *)&v19;
            v35 = a5 + 4;
            v37 = a5 + 8;
            v39 = a5 + 12;
            v41 = a5 + 16;
            v43 = a5 + 20;
            v22 = v7;
            v26 = 4LL;
            v21 = a2;
            v28 = 4LL;
            v20 = 104;
            v30 = 4LL;
            v19 = (unsigned int)a3;
            v32 = 4LL;
            v33 = (unsigned int *)a5;
            v34 = 4LL;
            v36 = 4LL;
            v38 = 4LL;
            v40 = 4LL;
            v42 = 4LL;
            v44 = 4LL;
            TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C472E, a3, v15, 0xCu, &pData);
          }
          return v6;
        }
        if ( (_DWORD)v15 == 161 )
        {
          if ( (unsigned int)pRelatedActivityId > 5
            && (qword_1801EAA90 & 1) != 0
            && (qword_1801EAA98 & 1) == qword_1801EAA98 )
          {
            v25 = &v19;
            v27 = &v20;
            v29 = &v21;
            v31 = (int *)&v22;
            v35 = a5 + 4;
            v37 = a5 + 8;
            v39 = a5 + 12;
            v41 = a5 + 16;
            v43 = a5 + 20;
            v45 = a5 + 24;
            v47 = a5 + 28;
            v49 = a5 + 32;
            v51 = a5 + 36;
            v53 = a5 + 40;
            v55 = a5 + 44;
            v57 = a5 + 48;
            v59 = a5 + 52;
            v61 = a5 + 56;
            v63 = a5 + 60;
            v19 = v7;
            v26 = 4LL;
            v20 = a2;
            v28 = 4LL;
            v21 = 265;
            v30 = 4LL;
            v22 = (unsigned int)a3;
            v32 = 4LL;
            v33 = (unsigned int *)a5;
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
            v64 = 4LL;
            TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C4676, a3, v15, 0x16u, &pData);
          }
          return v6;
        }
        cData = 602;
        goto LABEL_6;
      }
      v23[0] = *(_DWORD *)a5;
      if ( (unsigned int)pRelatedActivityId <= 5
        || (qword_1801EAA90 & 1) == 0
        || (qword_1801EAA98 & 1) != qword_1801EAA98 )
      {
        return v6;
      }
      v22 = v7;
      v25 = &v22;
      v16 = &unk_1801C497B;
      v21 = a2;
      v27 = &v21;
      v29 = &v20;
      v31 = (int *)&v19;
      v17 = v23;
      v20 = 18;
      v19 = (unsigned int)a3;
    }
    else
    {
      LODWORD(v9) = *a5;
      if ( (unsigned int)pRelatedActivityId <= 5
        || (qword_1801EAA90 & 1) == 0
        || (qword_1801EAA98 & 1) != qword_1801EAA98 )
      {
        return v6;
      }
      v23[0] = *(_DWORD *)(a1 + 112);
      v25 = v23;
      v16 = &unk_1801C49E2;
      v22 = a2;
      v27 = (int *)&v22;
      v29 = &v21;
      v31 = &v20;
      v19 = (unsigned __int8)v9;
      v17 = &v19;
      v21 = 17;
      v20 = (int)a3;
    }
    v34 = 4LL;
    v33 = v17;
    v32 = 4LL;
    v30 = 4LL;
    v28 = 4LL;
    v26 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, v16, a3, (LPCGUID)v9, 7u, &pData);
    return v6;
  }
  cData = 434;
LABEL_6:
  v6 = -2147418113;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, cData);
  return v6;
}
