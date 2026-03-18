/*
 * XREFs of PopSqmThermalZoneEnumeration @ 0x14063E404
 * Callers:
 *     PopDiagTraceThermalZoneEnumeration @ 0x140142D5C (PopDiagTraceThermalZoneEnumeration.c)
 * Callees:
 *     _TlgCreateWsz @ 0x140092310 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

char __fastcall PopSqmThermalZoneEnumeration(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  __int64 v11; // rax
  int v13; // r9d
  int v14; // r11d
  const WCHAR *v15; // rdx
  LPCWSTR v16; // r10
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+44h] [rbp-BCh] BYREF
  int v24; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+4Ch] [rbp-B4h] BYREF
  int v26; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  int *v29; // [rsp+90h] [rbp-70h]
  int v30; // [rsp+98h] [rbp-68h]
  int v31; // [rsp+9Ch] [rbp-64h]
  int *v32; // [rsp+A0h] [rbp-60h]
  int v33; // [rsp+A8h] [rbp-58h]
  int v34; // [rsp+ACh] [rbp-54h]
  int *v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B8h] [rbp-48h]
  int v37; // [rsp+BCh] [rbp-44h]
  int *v38; // [rsp+C0h] [rbp-40h]
  int v39; // [rsp+C8h] [rbp-38h]
  int v40; // [rsp+CCh] [rbp-34h]
  int *v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+DCh] [rbp-24h]
  int *v44; // [rsp+E0h] [rbp-20h]
  int v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+ECh] [rbp-14h]
  int *v47; // [rsp+F0h] [rbp-10h]
  int v48; // [rsp+F8h] [rbp-8h]
  int v49; // [rsp+FCh] [rbp-4h]
  int *v50; // [rsp+100h] [rbp+0h]
  int v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+10Ch] [rbp+Ch]
  int *v53; // [rsp+110h] [rbp+10h]
  int v54; // [rsp+118h] [rbp+18h]
  int v55; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+120h] [rbp+20h] BYREF

  v11 = *(_QWORD *)(a2 + 8);
  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    LOBYTE(v11) = TlgKeywordOn(&pCallbackContext, 0x400000000000uLL);
    if ( (_BYTE)v11 )
    {
      v15 = *(const WCHAR **)(a1 + 8);
      v26 = a7;
      v20 = a8;
      v24 = a9;
      v18 = a11;
      v19 = a10;
      v21 = a6;
      v25 = a5;
      v22 = v14;
      v23 = v13;
      TlgCreateWsz(&pDesc, v15);
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v46 = 0;
      v49 = 0;
      v52 = 0;
      v55 = 0;
      v32 = &v20;
      v35 = &v24;
      v38 = &v22;
      v41 = &v18;
      v44 = &v19;
      v47 = &v21;
      v50 = &v23;
      v29 = &v26;
      v30 = 4;
      v33 = 4;
      v36 = 4;
      v39 = 4;
      v42 = 4;
      v45 = 4;
      v48 = 4;
      v51 = 4;
      v54 = 4;
      v53 = &v25;
      TlgCreateWsz(&v56, v16);
      LOBYTE(v11) = TlgWrite(&pCallbackContext, &unk_140254D3C, 0LL, 0LL, 0xDu, &pData);
    }
  }
  return v11;
}
