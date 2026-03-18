/*
 * XREFs of ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1800A80C8
 * Callers:
 *     ?s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x1800BA2A0 (-s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@.c)
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CInteractionContextWrapper::InteractionContextCallback(
        CInteractionContextWrapper *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2,
        const GUID *a3,
        const GUID *a4)
{
  int v5; // ecx
  float *v7; // rdx
  float v8; // xmm2_4
  __int64 v9; // rcx
  int v10; // eax
  int v11; // [rsp+38h] [rbp-49h] BYREF
  CInteractionContextWrapper *v12; // [rsp+40h] [rbp-41h] BYREF
  int v13; // [rsp+48h] [rbp-39h] BYREF
  CInteractionContextWrapper *v14; // [rsp+50h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  CInteractionContextWrapper **v16; // [rsp+78h] [rbp-9h]
  int v17; // [rsp+80h] [rbp-1h]
  int v18; // [rsp+84h] [rbp+3h]
  float *v19; // [rsp+88h] [rbp+7h]
  int v20; // [rsp+90h] [rbp+Fh]
  int v21; // [rsp+94h] [rbp+13h]
  char *v22; // [rsp+98h] [rbp+17h]
  int v23; // [rsp+A0h] [rbp+1Fh]
  int v24; // [rsp+A4h] [rbp+23h]
  CInteractionContextWrapper **v25; // [rsp+A8h] [rbp+27h]
  int v26; // [rsp+B0h] [rbp+2Fh]
  int v27; // [rsp+B4h] [rbp+33h]
  int *v28; // [rsp+B8h] [rbp+37h]
  int v29; // [rsp+C0h] [rbp+3Fh]
  int v30; // [rsp+C4h] [rbp+43h]

  *((_BYTE *)this + 76) |= 1u;
  v5 = *(_DWORD *)a2;
  if ( ((*(_DWORD *)a2 - 1) & 0xFFFFFFFC) != 0 )
    goto LABEL_15;
  if ( v5 == 3 )
    goto LABEL_15;
  *((_DWORD *)this + 8) = v5;
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 1);
  if ( *(_DWORD *)a2 != 1 )
    goto LABEL_15;
  if ( *((_DWORD *)a2 + 19) == 2 )
  {
    if ( *((float *)a2 + 10) == 0.0 )
    {
      if ( *((float *)a2 + 11) != 0.0 )
        *((_DWORD *)this + 13) = 2;
    }
    else
    {
      *((_DWORD *)this + 13) = 1;
    }
  }
  v7 = (float *)((char *)a2 + 20);
  a3 = (const GUID *)((char *)a2 + 24);
  a4 = (const GUID *)((char *)a2 + 28);
  *((float *)this + 10) = *v7 + *((float *)this + 10);
  *((float *)this + 11) = *((float *)a2 + 6) + *((float *)this + 11);
  v8 = *((float *)a2 + 7);
  if ( v8 != 0.0 )
    *((float *)this + 12) = v8 * *((float *)this + 12);
  *((_BYTE *)this + 80) = 1;
  if ( (unsigned int)pRelatedActivityId > 4 )
  {
    v9 = qword_18019E958;
    if ( (qword_18019E950 & 2) == 0 || (qword_18019E958 & 2) != qword_18019E958 )
    {
LABEL_16:
      if ( (unsigned int)pRelatedActivityId > 4 && (qword_18019E950 & 2) != 0 && (v9 & 2) == v9 )
      {
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v16 = &v14;
        v11 = *(_DWORD *)a2;
        v19 = (float *)&v11;
        v13 = *((_DWORD *)a2 + 1);
        v22 = (char *)&v13;
        v10 = *((_BYTE *)this + 76) & 1;
        v14 = this;
        v27 = 0;
        LODWORD(v12) = v10;
        v25 = &v12;
        v17 = 8;
        v20 = 4;
        v23 = 4;
        v26 = 4;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017EAAE, a3, a4, 6u, &pData);
      }
      return;
    }
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v16 = &v12;
    v11 = *((_DWORD *)a2 + 19);
    v28 = &v11;
    v12 = this;
    v17 = 8;
    v19 = v7;
    v20 = 4;
    v22 = (char *)a2 + 24;
    v23 = 4;
    v25 = (CInteractionContextWrapper **)((char *)a2 + 28);
    v26 = 4;
    v29 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017EB34, a3, a4, 7u, &pData);
LABEL_15:
    v9 = qword_18019E958;
    goto LABEL_16;
  }
}
