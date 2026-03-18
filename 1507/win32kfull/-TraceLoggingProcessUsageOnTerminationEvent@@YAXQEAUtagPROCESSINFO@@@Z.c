/*
 * XREFs of ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1C007C348
 * Callers:
 *     DestroyProcessInfoEditionRundown @ 0x1C007C2F0 (DestroyProcessInfoEditionRundown.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C007C2B8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingProcessUsageOnTerminationEvent(struct tagPROCESSINFO *const a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // ecx
  const struct _TlgProvider_t *v5; // rcx
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  int v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+3Ch] [rbp-CCh] BYREF
  int v10; // [rsp+40h] [rbp-C8h] BYREF
  int v11; // [rsp+44h] [rbp-C4h] BYREF
  int v12; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+4Ch] [rbp-BCh] BYREF
  int v14; // [rsp+50h] [rbp-B8h] BYREF
  int v15; // [rsp+54h] [rbp-B4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+78h] [rbp-90h]
  __int64 v18; // [rsp+80h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  char *v20; // [rsp+98h] [rbp-70h]
  __int64 v21; // [rsp+A0h] [rbp-68h]
  char *v22; // [rsp+A8h] [rbp-60h]
  __int64 v23; // [rsp+B0h] [rbp-58h]
  int *v24; // [rsp+B8h] [rbp-50h]
  __int64 v25; // [rsp+C0h] [rbp-48h]
  int *v26; // [rsp+C8h] [rbp-40h]
  __int64 v27; // [rsp+D0h] [rbp-38h]
  int *v28; // [rsp+D8h] [rbp-30h]
  __int64 v29; // [rsp+E0h] [rbp-28h]
  int *v30; // [rsp+E8h] [rbp-20h]
  __int64 v31; // [rsp+F0h] [rbp-18h]
  int *v32; // [rsp+F8h] [rbp-10h]
  __int64 v33; // [rsp+100h] [rbp-8h]
  char *v34; // [rsp+108h] [rbp+0h]
  __int64 v35; // [rsp+110h] [rbp+8h]
  char *v36; // [rsp+118h] [rbp+10h]
  __int64 v37; // [rsp+120h] [rbp+18h]
  int *v38; // [rsp+128h] [rbp+20h]
  __int64 v39; // [rsp+130h] [rbp+28h]
  int *v40; // [rsp+138h] [rbp+30h]
  __int64 v41; // [rsp+140h] [rbp+38h]
  int *v42; // [rsp+148h] [rbp+40h]
  __int64 v43; // [rsp+150h] [rbp+48h]

  if ( (unsigned int)dword_1C031D7B0 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v18 = 4LL;
      v17 = v2 + 904;
      TlgCreateSz(&pDesc, (LPCSTR)(v2 + 908));
      v21 = 4LL;
      v22 = (char *)a1 + 944;
      v9 = *((_DWORD *)a1 + 232);
      v24 = &v9;
      v13 = *((_DWORD *)a1 + 233);
      v26 = &v13;
      v11 = *((_DWORD *)a1 + 234);
      v28 = &v11;
      v15 = *((_DWORD *)a1 + 235);
      v20 = (char *)a1 + 924;
      v30 = &v15;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      v3 = DpiAwarenessFromProcess(a1);
      v4 = *((_DWORD *)a1 + 239);
      v8 = v3;
      v32 = &v8;
      v34 = (char *)a1 + 952;
      v36 = (char *)a1 + 948;
      v33 = 4LL;
      v35 = 4LL;
      v10 = -(v4 & 1);
      v38 = &v10;
      v37 = 4LL;
      v39 = 4LL;
      v12 = -__CFSHR__(v4, 2);
      v40 = &v12;
      v5 = (const struct _TlgProvider_t *)(unsigned int)-__CFSHR__(v4, 3);
      v42 = &v14;
      v41 = 4LL;
      v14 = (int)v5;
      v43 = 4LL;
      TlgWrite(v5, &unk_1C02EAB94, v6, v7, 0x10u, &pData);
    }
  }
}
