/*
 * XREFs of PnpTraceRebalanceResult @ 0x14064940C
 * Callers:
 *     PnpRebalance @ 0x140630484 (PnpRebalance.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x14010CF00 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PnpTraceRebalanceResult(__int64 a1, UCHAR a2)
{
  BOOLEAN result; // al
  __int64 v3; // r10
  __int64 v4; // rbx
  __int64 v5; // r9
  int *v6; // r10
  __int64 v7; // r11
  unsigned __int64 v8; // rcx
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  char v10; // [rsp+31h] [rbp-CFh] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v17; // [rsp+70h] [rbp-90h]
  __int64 v18; // [rsp+78h] [rbp-88h]
  __int64 v19; // [rsp+80h] [rbp-80h]
  _DWORD v20[2]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  __int64 v23; // [rsp+A0h] [rbp-60h]
  _DWORD v24[2]; // [rsp+A8h] [rbp-58h] BYREF
  int *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  _DWORD *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  __int64 v29; // [rsp+D0h] [rbp-30h]
  _DWORD v30[2]; // [rsp+D8h] [rbp-28h] BYREF
  char *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  char *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  int *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  int *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  __int64 *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]

  result = TraceLoggingProviderEnabled(&stru_1402F3230, a2, 0x400000000000uLL);
  if ( result )
  {
    if ( !v3 || !*(_QWORD *)(v3 + 40) || !*(_QWORD *)(v3 + 24) )
      __fastfail(5u);
    v4 = MEMORY[0xFFFFF78000000008];
    if ( stru_1402F3230.LevelPlus1 > 5 )
    {
      result = TlgKeywordOn(&stru_1402F3230, 0x400000000000uLL);
      if ( result )
      {
        v8 = v4 - *((_QWORD *)v6 + 7);
        v11 = *v6;
        v9 = *((_BYTE *)v6 + 32);
        v10 = *((_BYTE *)v6 + 48);
        v12 = v6[3];
        v13 = v6[5];
        v15 = v4;
        v17 = v20;
        v19 = *(_QWORD *)(v5 + 48);
        v20[0] = *(unsigned __int16 *)(v5 + 40);
        v21 = v24;
        v23 = *(_QWORD *)(v5 + 64);
        v24[0] = *(unsigned __int16 *)(v5 + 56);
        v25 = &v11;
        v27 = v30;
        v29 = *(_QWORD *)(v7 + 48);
        v30[0] = *(unsigned __int16 *)(v7 + 40);
        v31 = &v9;
        v33 = &v10;
        v35 = &v12;
        v37 = &v13;
        v39 = &v14;
        v41 = &v15;
        v14 = v8 / 0x2710;
        v18 = 2LL;
        v20[1] = 0;
        v22 = 2LL;
        v24[1] = 0;
        v26 = 4LL;
        v28 = 2LL;
        v30[1] = 0;
        v32 = 1LL;
        v34 = 1LL;
        v36 = 4LL;
        v38 = 4LL;
        v40 = 8LL;
        v42 = 8LL;
        return TlgWrite(&stru_1402F3230, &unk_14027BE19, 0LL, 0LL, 0xFu, &pData);
      }
    }
  }
  return result;
}
