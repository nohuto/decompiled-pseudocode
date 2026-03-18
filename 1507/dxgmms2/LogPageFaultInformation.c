/*
 * XREFs of LogPageFaultInformation @ 0x1C0013A7C
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C00042DC (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0011DE4 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1C0011E10 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0011E3C (_TlgWrite.c)
 */

void __fastcall LogPageFaultInformation(const struct _TlgProvider_t *a1, ULONGLONG a2)
{
  BOOLEAN v2; // al
  _DWORD *v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  int v6; // r11d
  const CHAR *v7; // rdx
  __int64 v8; // rcx
  unsigned __int16 *v9; // rax
  TraceLoggingHProvider v10; // rcx
  LPCGUID v11; // r9
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  _DWORD *v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  __int64 v24; // [rsp+A0h] [rbp-60h]
  _DWORD v25[2]; // [rsp+A8h] [rbp-58h] BYREF
  int *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  _DWORD *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  _DWORD *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  int *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  _DWORD *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  int *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  _DWORD *v38; // [rsp+110h] [rbp+10h]
  __int64 v39; // [rsp+118h] [rbp+18h]
  _DWORD *v40; // [rsp+120h] [rbp+20h]
  __int64 v41; // [rsp+128h] [rbp+28h]
  _DWORD *v42; // [rsp+130h] [rbp+30h]
  __int64 v43; // [rsp+138h] [rbp+38h]
  _DWORD *v44; // [rsp+140h] [rbp+40h]
  __int64 v45; // [rsp+148h] [rbp+48h]
  int *v46; // [rsp+150h] [rbp+50h]
  __int64 v47; // [rsp+158h] [rbp+58h]
  int *v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  __int64 *v50; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+180h] [rbp+80h] BYREF

  if ( (unsigned int)dword_1C0027010 > 5 )
  {
    v2 = TlgKeywordOn(a1, a2);
    v7 = 0LL;
    if ( v2 )
    {
      v8 = *(_QWORD *)(v5 + 16);
      v18 = *(_QWORD *)(v8 + 252);
      v20 = &v18;
      v21 = 8LL;
      v9 = *(unsigned __int16 **)(v8 + 976);
      v22 = v25;
      v23 = 2LL;
      LODWORD(v8) = *v9;
      v24 = *((_QWORD *)v9 + 1);
      v26 = &v15;
      v28 = v3 + 2;
      v30 = v3 + 4;
      v14 = v3[6];
      v32 = &v14;
      v34 = v3 + 7;
      v16 = v3[8];
      v36 = &v16;
      v38 = v3 + 10;
      v40 = v3 + 12;
      v42 = v3 + 13;
      v44 = v3 + 14;
      v25[0] = v8;
      LODWORD(v8) = v3[15] & 1;
      v12 = (int)v3[15] >> 1;
      v46 = &v12;
      v48 = &v13;
      v25[1] = 0;
      v15 = v6;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 8LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 8LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      v13 = v8;
      v49 = 4LL;
      if ( v4 )
        v17 = *(_QWORD *)(v4 + 72);
      else
        v17 = 0LL;
      v51 = 8LL;
      v50 = &v17;
      if ( v4 )
        v7 = *(const CHAR **)(v4 + 80);
      TlgCreateSz(&pDesc, v7);
      TlgWrite(v10, &unk_1C0020BB9, 0LL, v11, 0x13u, &pData);
    }
  }
}
