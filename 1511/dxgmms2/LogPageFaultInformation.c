/*
 * XREFs of LogPageFaultInformation @ 0x1C001F4B4
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000CBB0 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C001EA0C (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1C001EA38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001EA5C (_TlgWrite.c)
 */

void __fastcall LogPageFaultInformation(const struct _TlgProvider_t *a1)
{
  BOOLEAN v1; // al
  _DWORD *v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // r11d
  const CHAR *v6; // rdx
  __int64 v7; // rcx
  unsigned __int16 *v8; // rax
  TraceLoggingHProvider v9; // rcx
  LPCGUID v10; // r9
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  _DWORD *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  __int64 v23; // [rsp+A0h] [rbp-60h]
  _DWORD v24[2]; // [rsp+A8h] [rbp-58h] BYREF
  int *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  _DWORD *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  _DWORD *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  int *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  _DWORD *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  int *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  _DWORD *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  _DWORD *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  _DWORD *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  _DWORD *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  int *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  int *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  __int64 *v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+180h] [rbp+80h] BYREF

  if ( (unsigned int)dword_1C002F020 > 5 )
  {
    v1 = TlgKeywordOn(a1, 0x400000000000uLL);
    v6 = 0LL;
    if ( v1 )
    {
      v7 = *(_QWORD *)(v4 + 16);
      v17 = *(_QWORD *)(v7 + 252);
      v19 = &v17;
      v20 = 8LL;
      v8 = *(unsigned __int16 **)(v7 + 984);
      v21 = v24;
      v22 = 2LL;
      LODWORD(v7) = *v8;
      v23 = *((_QWORD *)v8 + 1);
      v25 = &v14;
      v27 = v2 + 2;
      v29 = v2 + 4;
      v13 = v2[6];
      v31 = &v13;
      v33 = v2 + 7;
      v15 = v2[8];
      v35 = &v15;
      v37 = v2 + 10;
      v39 = v2 + 12;
      v41 = v2 + 13;
      v43 = v2 + 14;
      v24[0] = v7;
      LODWORD(v7) = v2[15] & 1;
      v11 = (int)v2[15] >> 1;
      v45 = &v11;
      v47 = &v12;
      v24[1] = 0;
      v14 = v5;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 8LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 8LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v12 = v7;
      v48 = 4LL;
      if ( v3 )
        v16 = *(_QWORD *)(v3 + 72);
      else
        v16 = 0LL;
      v50 = 8LL;
      v49 = &v16;
      if ( v3 )
        v6 = *(const CHAR **)(v3 + 80);
      TlgCreateSz(&pDesc, v6);
      TlgWrite(v9, &unk_1C0025D79, 0LL, v10, 0x13u, &pData);
    }
  }
}
