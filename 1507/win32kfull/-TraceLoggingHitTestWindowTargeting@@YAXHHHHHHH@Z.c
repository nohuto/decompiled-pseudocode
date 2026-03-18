/*
 * XREFs of ?TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z @ 0x1C02241F8
 * Callers:
 *     ?SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z @ 0x1C022AEF0 (-SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingHitTestWindowTargeting(
        const struct _TlgProvider_t *a1,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-61h] BYREF
  int *v11; // [rsp+58h] [rbp-41h]
  __int64 v12; // [rsp+60h] [rbp-39h]
  int *v13; // [rsp+68h] [rbp-31h]
  __int64 v14; // [rsp+70h] [rbp-29h]
  int *v15; // [rsp+78h] [rbp-21h]
  __int64 v16; // [rsp+80h] [rbp-19h]
  int *v17; // [rsp+88h] [rbp-11h]
  __int64 v18; // [rsp+90h] [rbp-9h]
  char *v19; // [rsp+98h] [rbp-1h]
  __int64 v20; // [rsp+A0h] [rbp+7h]
  char *v21; // [rsp+A8h] [rbp+Fh]
  __int64 v22; // [rsp+B0h] [rbp+17h]
  char *v23; // [rsp+B8h] [rbp+1Fh]
  __int64 v24; // [rsp+C0h] [rbp+27h]
  int v25; // [rsp+E8h] [rbp+4Fh] BYREF
  int v26; // [rsp+F0h] [rbp+57h] BYREF
  int v27; // [rsp+F8h] [rbp+5Fh] BYREF
  int v28; // [rsp+100h] [rbp+67h] BYREF

  v28 = a4;
  v27 = a3;
  v26 = a2;
  v25 = (int)a1;
  if ( (unsigned int)dword_1C031D7B0 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v12 = 4LL;
      v11 = &v25;
      v13 = &v26;
      v15 = &v27;
      v17 = &v28;
      v19 = &a5;
      v21 = &a6;
      v23 = &a7;
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      TlgWrite(v7, &unk_1C02EA688, v8, v9, 9u, &pData);
    }
  }
}
