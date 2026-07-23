/*
 * XREFs of EtwTracePsIoRateControl @ 0x1404D4430
 * Callers:
 *     PspSetJobIoRateControl @ 0x1404D4610 (PspSetJobIoRateControl.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall EtwTracePsIoRateControl(int a1, __int64 a2, __int64 a3, int a4)
{
  REGHANDLE v4; // r14
  __int64 v5; // rsi
  const EVENT_DESCRIPTOR *v7; // rdi
  BOOLEAN result; // al
  const WCHAR *v9; // r9
  __int64 v10; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v12; // [rsp+48h] [rbp-C0h]
  __int64 v13; // [rsp+50h] [rbp-B8h]
  __int64 v14; // [rsp+58h] [rbp-B0h]
  __int64 v15; // [rsp+60h] [rbp-A8h]
  __int64 v16; // [rsp+68h] [rbp-A0h]
  __int64 v17; // [rsp+70h] [rbp-98h]
  __int64 v18; // [rsp+78h] [rbp-90h]
  __int64 v19; // [rsp+80h] [rbp-88h]
  __int64 v20; // [rsp+88h] [rbp-80h]
  __int64 v21; // [rsp+90h] [rbp-78h]
  __int64 v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+A0h] [rbp-68h]
  __int64 v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  __int64 v26; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  __int64 v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  __int64 v30; // [rsp+D8h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-28h]
  __int64 v32; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  __int64 v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  __int64 v36; // [rsp+108h] [rbp+0h]
  __int64 v37; // [rsp+110h] [rbp+8h]
  __int64 v38; // [rsp+118h] [rbp+10h]
  __int64 v39; // [rsp+120h] [rbp+18h]
  const WCHAR *v40; // [rsp+128h] [rbp+20h]
  int v41; // [rsp+130h] [rbp+28h]
  int v42; // [rsp+134h] [rbp+2Ch]
  int *v43; // [rsp+138h] [rbp+30h]
  __int64 v44; // [rsp+140h] [rbp+38h]
  int v45; // [rsp+188h] [rbp+80h] BYREF
  __int64 v46; // [rsp+198h] [rbp+90h] BYREF
  int v47; // [rsp+1A0h] [rbp+98h] BYREF

  v47 = a4;
  v46 = a3;
  v45 = a1;
  v4 = EtwpPsProvRegHandle;
  v5 = a2 + 36;
  v7 = (const EVENT_DESCRIPTOR *)&PsIoRateControlStart;
  if ( (*(_BYTE *)(a2 + 36) & 1) == 0 )
    v7 = &PsIoRateControlStop;
  result = EtwEventEnabled(EtwpPsProvRegHandle, v7);
  if ( result )
  {
    v9 = L"Global";
    if ( *(_QWORD *)(a2 + 24) )
      v9 = *(const WCHAR **)(a2 + 24);
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] );
    v40 = v9;
    v41 = 2 * v10 + 2;
    UserData.Ptr = (ULONGLONG)&v45;
    *(_QWORD *)&UserData.Size = 4LL;
    v12 = &v46;
    v13 = 8LL;
    v16 = a2 + 8;
    v14 = a2;
    v18 = a2 + 72;
    v15 = 8LL;
    v20 = a2 + 16;
    v22 = a2 + 56;
    v24 = a2 + 80;
    v26 = a2 + 48;
    v28 = a2 + 64;
    v30 = a2 + 88;
    v32 = a2 + 96;
    v34 = a2 + 104;
    v36 = a2 + 112;
    v43 = &v47;
    v17 = 8LL;
    v19 = 8LL;
    v21 = 8LL;
    v23 = 8LL;
    v25 = 8LL;
    v27 = 8LL;
    v29 = 8LL;
    v31 = 8LL;
    v33 = 8LL;
    v35 = 8LL;
    v37 = 8LL;
    v38 = v5;
    v39 = 4LL;
    v42 = 0;
    v44 = 4LL;
    return EtwWrite(v4, v7, 0LL, 0x11u, &UserData);
  }
  return result;
}
