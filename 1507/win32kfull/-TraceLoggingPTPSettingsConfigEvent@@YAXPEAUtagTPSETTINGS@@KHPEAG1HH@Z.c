/*
 * XREFs of ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HH@Z @ 0x1C0224830
 * Callers:
 *     _TelemPTPConfigUpdateEx @ 0x1C01CFD04 (_TelemPTPConfigUpdateEx.c)
 * Callees:
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1C0224F24 (_TlgCreateWsz.c)
 */

void __fastcall TraceLoggingPTPSettingsConfigEvent(
        struct tagTPSETTINGS *a1,
        __int64 a2,
        int a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        char a6,
        char a7)
{
  __int64 v7; // rcx
  int v8; // r8d
  const WCHAR *v9; // r9
  LPCWSTR v10; // r10
  int v11; // r11d
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A0h]
  int v18; // [rsp+68h] [rbp-98h]
  int v19; // [rsp+6Ch] [rbp-94h]
  __int64 v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+7Ch] [rbp-84h]
  __int64 v23; // [rsp+80h] [rbp-80h]
  int v24; // [rsp+88h] [rbp-78h]
  int v25; // [rsp+8Ch] [rbp-74h]
  int *v26; // [rsp+90h] [rbp-70h]
  int v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+9Ch] [rbp-64h]
  int *v29; // [rsp+A0h] [rbp-60h]
  int v30; // [rsp+A8h] [rbp-58h]
  int v31; // [rsp+ACh] [rbp-54h]
  int *v32; // [rsp+B0h] [rbp-50h]
  int v33; // [rsp+B8h] [rbp-48h]
  int v34; // [rsp+BCh] [rbp-44h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+D0h] [rbp-30h] BYREF
  char *v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  char *v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+F8h] [rbp-8h]
  int v42; // [rsp+FCh] [rbp-4h]
  int v43; // [rsp+130h] [rbp+30h] BYREF

  v43 = a3;
  if ( (unsigned int)dword_1C031D7B0 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
    {
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v20 = v7 + 4;
      v23 = v7 + 8;
      v15 = *(_DWORD *)(v7 + 12);
      v26 = &v15;
      v29 = &v14;
      v17 = v7;
      v32 = &v43;
      v18 = 4;
      v21 = 4;
      v24 = 4;
      v27 = 4;
      v14 = v8;
      v30 = 4;
      v33 = 4;
      TlgCreateWsz(&pDesc, v9);
      TlgCreateWsz(&v36, v10);
      v39 = 0;
      v42 = 0;
      v40 = &a7;
      v37 = &a6;
      v38 = v11;
      v41 = v11;
      TlgWrite((TraceLoggingHProvider)&a6, &unk_1C02EA9F1, v12, v13, 0xCu, &pData);
    }
  }
}
