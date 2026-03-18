/*
 * XREFs of ?TraceLoggingProcessUsageOnTerminationEvent@@YAXQEAUtagPROCESSINFO@@@Z @ 0x1C00E55F8
 * Callers:
 *     DestroyProcessInfoEditionRundown @ 0x1C00E55A0 (DestroyProcessInfoEditionRundown.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     ProcessDpiAwarenessFromKernelDpiAwarenessContext @ 0x1C00E5564 (ProcessDpiAwarenessFromKernelDpiAwarenessContext.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 */

void __fastcall TraceLoggingProcessUsageOnTerminationEvent(struct tagPROCESSINFO *const a1)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  int v7; // [rsp+38h] [rbp-D0h] BYREF
  int v8; // [rsp+3Ch] [rbp-CCh] BYREF
  int v9; // [rsp+40h] [rbp-C8h] BYREF
  int v10; // [rsp+44h] [rbp-C4h] BYREF
  int v11; // [rsp+48h] [rbp-C0h] BYREF
  int v12; // [rsp+4Ch] [rbp-BCh] BYREF
  int v13; // [rsp+50h] [rbp-B8h] BYREF
  int v14; // [rsp+54h] [rbp-B4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  char *v16; // [rsp+78h] [rbp-90h]
  __int64 v17; // [rsp+80h] [rbp-88h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  char *v19; // [rsp+98h] [rbp-70h]
  __int64 v20; // [rsp+A0h] [rbp-68h]
  char *v21; // [rsp+A8h] [rbp-60h]
  __int64 v22; // [rsp+B0h] [rbp-58h]
  int *v23; // [rsp+B8h] [rbp-50h]
  __int64 v24; // [rsp+C0h] [rbp-48h]
  int *v25; // [rsp+C8h] [rbp-40h]
  __int64 v26; // [rsp+D0h] [rbp-38h]
  int *v27; // [rsp+D8h] [rbp-30h]
  __int64 v28; // [rsp+E0h] [rbp-28h]
  int *v29; // [rsp+E8h] [rbp-20h]
  __int64 v30; // [rsp+F0h] [rbp-18h]
  int *v31; // [rsp+F8h] [rbp-10h]
  __int64 v32; // [rsp+100h] [rbp-8h]
  char *v33; // [rsp+108h] [rbp+0h]
  __int64 v34; // [rsp+110h] [rbp+8h]
  char *v35; // [rsp+118h] [rbp+10h]
  __int64 v36; // [rsp+120h] [rbp+18h]
  int *v37; // [rsp+128h] [rbp+20h]
  __int64 v38; // [rsp+130h] [rbp+28h]
  int *v39; // [rsp+138h] [rbp+30h]
  __int64 v40; // [rsp+140h] [rbp+38h]
  int *v41; // [rsp+148h] [rbp+40h]
  __int64 v42; // [rsp+150h] [rbp+48h]

  if ( dword_1C0320840 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x400000000000uLL) )
    {
      v17 = 4LL;
      v16 = (char *)a1 + 880;
      TlgCreateSz(&pDesc, "ATTRI_DEPRECATED");
      v20 = 4LL;
      v21 = (char *)a1 + 920;
      v7 = *((_DWORD *)a1 + 226);
      v23 = &v7;
      v8 = *((_DWORD *)a1 + 227);
      v25 = &v8;
      v9 = *((_DWORD *)a1 + 228);
      v27 = &v9;
      v10 = *((_DWORD *)a1 + 229);
      v19 = (char *)a1 + 900;
      v2 = *((_DWORD *)a1 + 70);
      v29 = &v10;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v3 = ProcessDpiAwarenessFromKernelDpiAwarenessContext(v2);
      v4 = *((_DWORD *)a1 + 233);
      v11 = v3;
      v31 = &v11;
      v33 = (char *)a1 + 928;
      v35 = (char *)a1 + 924;
      v32 = 4LL;
      v34 = 4LL;
      v12 = -(v4 & 1);
      v37 = &v12;
      v36 = 4LL;
      v38 = 4LL;
      v13 = -__CFSHR__(v4, 2);
      v39 = &v13;
      v41 = &v14;
      v40 = 4LL;
      v14 = -__CFSHR__(v4, 3);
      v42 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EF1C8, v5, v6, 0x10u, &pData);
    }
  }
}
