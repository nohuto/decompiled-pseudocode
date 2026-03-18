/*
 * XREFs of PopSqmThermalZoneEnumeration @ 0x1406BECDC
 * Callers:
 *     PopDiagTraceThermalZoneEnumeration @ 0x140170D0C (PopDiagTraceThermalZoneEnumeration.c)
 * Callees:
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1400EFFDC (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall PopSqmThermalZoneEnumeration(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v11; // r9d
  int v12; // r10d
  int v13; // r11d
  const WCHAR *v14; // rdx
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  int v22; // [rsp+4Ch] [rbp-B4h] BYREF
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  int *v26; // [rsp+90h] [rbp-70h]
  int v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+9Ch] [rbp-64h]
  int *v29; // [rsp+A0h] [rbp-60h]
  int v30; // [rsp+A8h] [rbp-58h]
  int v31; // [rsp+ACh] [rbp-54h]
  int *v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+B8h] [rbp-48h]
  int v34; // [rsp+BCh] [rbp-44h]
  int *v35; // [rsp+C0h] [rbp-40h]
  int v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+CCh] [rbp-34h]
  int *v38; // [rsp+D0h] [rbp-30h]
  int v39; // [rsp+D8h] [rbp-28h]
  int v40; // [rsp+DCh] [rbp-24h]
  int *v41; // [rsp+E0h] [rbp-20h]
  int v42; // [rsp+E8h] [rbp-18h]
  int v43; // [rsp+ECh] [rbp-14h]
  int *v44; // [rsp+F0h] [rbp-10h]
  int v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FCh] [rbp-4h]
  int *v47; // [rsp+100h] [rbp+0h]
  int v48; // [rsp+108h] [rbp+8h]
  int v49; // [rsp+10Ch] [rbp+Ch]
  int *v50; // [rsp+110h] [rbp+10h]
  int v51; // [rsp+118h] [rbp+18h]
  int v52; // [rsp+11Ch] [rbp+1Ch]

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
    {
      v14 = *(const WCHAR **)(a1 + 8);
      v23 = a6;
      v17 = a7;
      v21 = a8;
      v15 = a10;
      v16 = a9;
      v18 = a5;
      v19 = v13;
      v20 = v12;
      v22 = v11;
      TlgCreateWsz(&pDesc, v14);
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v40 = 0;
      v43 = 0;
      v46 = 0;
      v49 = 0;
      v52 = 0;
      v29 = &v17;
      v32 = &v21;
      v35 = &v19;
      v38 = &v15;
      v41 = &v16;
      v44 = &v18;
      v47 = &v20;
      v50 = &v22;
      v26 = &v23;
      v27 = 4;
      v30 = 4;
      v33 = 4;
      v36 = 4;
      v39 = 4;
      v42 = 4;
      v45 = 4;
      v48 = 4;
      v51 = 4;
      TlgWrite(&pCallbackContext, &unk_1402A4C68, 0LL, 0LL, 0xCu, &pData);
    }
  }
}
