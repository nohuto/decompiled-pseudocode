/*
 * XREFs of PnpTraceDeviceConfig @ 0x140648DC8
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x1406399B4 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x140134254 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void __fastcall PnpTraceDeviceConfig(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const WCHAR *a4,
        const WCHAR *pwsz,
        const WCHAR *a6,
        const WCHAR *a7,
        char a8,
        char a9,
        char a10,
        int a11)
{
  const WCHAR *v12; // r9
  LPCWSTR v13; // r10
  LPCWSTR v14; // r11
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+31h] [rbp-CFh] BYREF
  char v17; // [rsp+32h] [rbp-CEh] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v21; // [rsp+60h] [rbp-A0h]
  int v22; // [rsp+68h] [rbp-98h]
  int v23; // [rsp+6Ch] [rbp-94h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+D0h] [rbp-30h] BYREF
  char *v31; // [rsp+E0h] [rbp-20h]
  int v32; // [rsp+E8h] [rbp-18h]
  int v33; // [rsp+ECh] [rbp-14h]
  char *v34; // [rsp+F0h] [rbp-10h]
  int v35; // [rsp+F8h] [rbp-8h]
  int v36; // [rsp+FCh] [rbp-4h]
  char *v37; // [rsp+100h] [rbp+0h]
  int v38; // [rsp+108h] [rbp+8h]
  int v39; // [rsp+10Ch] [rbp+Ch]
  int *v40; // [rsp+110h] [rbp+10h]
  int v41; // [rsp+118h] [rbp+18h]
  int v42; // [rsp+11Ch] [rbp+1Ch]

  if ( stru_1402F3230.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1402F3230, 0x800000000000uLL) )
    {
      v18 = 0;
      v23 = 0;
      v15 = a8;
      v16 = a9;
      v17 = a10;
      v19 = a11;
      v21 = &v18;
      v22 = 4;
      TlgCreateWsz(&pDesc, v12);
      TlgCreateWsz(&v25, v13);
      TlgCreateWsz(&v26, v14);
      TlgCreateWsz(&v27, a4);
      TlgCreateWsz(&v28, pwsz);
      TlgCreateWsz(&v29, a6);
      TlgCreateWsz(&v30, a7);
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v34 = &v16;
      v37 = &v17;
      v40 = &v19;
      v31 = &v15;
      v32 = 1;
      v35 = 1;
      v38 = 1;
      v41 = 4;
      TlgWrite(&stru_1402F3230, &unk_14027C081, 0LL, 0LL, 0xEu, &pData);
    }
  }
}
