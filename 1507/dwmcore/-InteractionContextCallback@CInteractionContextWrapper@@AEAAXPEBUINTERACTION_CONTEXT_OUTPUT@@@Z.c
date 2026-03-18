/*
 * XREFs of ?InteractionContextCallback@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18012EF34
 * Callers:
 *     ?s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z @ 0x18012F460 (-s_InteractionContextCallback@CInteractionContextWrapper@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@.c)
 * Callees:
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

void __fastcall CInteractionContextWrapper::InteractionContextCallback(
        LPCGUID pActivityId,
        const struct INTERACTION_CONTEXT_OUTPUT *a2)
{
  unsigned int v3; // ecx
  float v4; // xmm0_4
  int v5; // eax
  int v6; // [rsp+30h] [rbp-79h] BYREF
  int v7; // [rsp+34h] [rbp-75h] BYREF
  int v8; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v9; // [rsp+3Ch] [rbp-6Dh] BYREF
  LPCGUID v10; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  LPCGUID *v12; // [rsp+70h] [rbp-39h]
  __int64 v13; // [rsp+78h] [rbp-31h]
  unsigned int *v14; // [rsp+80h] [rbp-29h]
  __int64 v15; // [rsp+88h] [rbp-21h]
  int *v16; // [rsp+90h] [rbp-19h]
  __int64 v17; // [rsp+98h] [rbp-11h]
  char *v18; // [rsp+A0h] [rbp-9h]
  __int64 v19; // [rsp+A8h] [rbp-1h]
  char *v20; // [rsp+B0h] [rbp+7h]
  __int64 v21; // [rsp+B8h] [rbp+Fh]
  char *v22; // [rsp+C0h] [rbp+17h]
  __int64 v23; // [rsp+C8h] [rbp+1Fh]
  int *v24; // [rsp+D0h] [rbp+27h]
  __int64 v25; // [rsp+D8h] [rbp+2Fh]
  int *v26; // [rsp+E0h] [rbp+37h]
  __int64 v27; // [rsp+E8h] [rbp+3Fh]

  pActivityId[3].Data4[0] |= 1u;
  v3 = *(_DWORD *)a2;
  if ( ((*(_DWORD *)a2 - 1) & 0xFFFFFFFC) == 0 && v3 != 3 )
  {
    pActivityId[2].Data1 = v3;
    *(_DWORD *)&pActivityId[2].Data2 = *((_DWORD *)a2 + 1);
    if ( *(_DWORD *)a2 == 1 )
    {
      if ( *((_DWORD *)a2 + 19) == 2 )
      {
        if ( *((float *)a2 + 10) == 0.0 )
          *(_DWORD *)&pActivityId[3].Data2 = 2;
        else
          *(_DWORD *)&pActivityId[3].Data2 = 1;
      }
      *(float *)pActivityId[2].Data4 = *((float *)a2 + 5) + *(float *)pActivityId[2].Data4;
      *(float *)&pActivityId[2].Data4[4] = *((float *)a2 + 6) + *(float *)&pActivityId[2].Data4[4];
      v4 = *((float *)a2 + 7);
      if ( v4 != 0.0 )
        *(float *)&pActivityId[3].Data1 = v4 * *(float *)&pActivityId[3].Data1;
    }
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_180190AC0 & 2) != 0 && (qword_180190AC8 & 2) == qword_180190AC8 )
  {
    v10 = pActivityId;
    v12 = &v10;
    v9 = *(_DWORD *)a2;
    v14 = &v9;
    v8 = *((_DWORD *)a2 + 1);
    v16 = &v8;
    v18 = (char *)a2 + 20;
    v20 = (char *)a2 + 24;
    v22 = (char *)a2 + 28;
    v6 = *((_DWORD *)a2 + 19);
    v24 = &v6;
    v5 = pActivityId[3].Data4[0] & 1;
    v13 = 8LL;
    v7 = v5;
    v26 = &v7;
    v15 = 4LL;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 4LL;
    v23 = 4LL;
    v25 = 4LL;
    v27 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18016F7B7, pActivityId, (LPCGUID)4, 0xAu, &pData);
  }
}
