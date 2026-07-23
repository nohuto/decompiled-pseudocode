/*
 * XREFs of PnpTraceDeviceRemovalForResetComplete @ 0x140648F5C
 * Callers:
 *     IopDeviceRemovalForResetComplete @ 0x14062C74C (IopDeviceRemovalForResetComplete.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x14010CF00 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PnpTraceDeviceRemovalForResetComplete(__int64 a1, UCHAR a2)
{
  __int64 v2; // rax
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // r10
  int v6; // r11d
  int v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v14; // [rsp+70h] [rbp-90h]
  __int64 v15; // [rsp+78h] [rbp-88h]
  __int64 v16; // [rsp+80h] [rbp-80h]
  _DWORD v17[2]; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+98h] [rbp-68h]
  __int64 v20; // [rsp+A0h] [rbp-60h]
  _DWORD v21[2]; // [rsp+A8h] [rbp-58h] BYREF
  int *v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  int *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  int *v26; // [rsp+D0h] [rbp-30h]
  __int64 v27; // [rsp+D8h] [rbp-28h]
  __int64 *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  int *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  _DWORD *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  __int64 v34; // [rsp+110h] [rbp+10h]
  _DWORD v35[2]; // [rsp+118h] [rbp+18h] BYREF

  LOBYTE(v2) = TraceLoggingProviderEnabled(&stru_1402F3230, a2, 0x400000000000uLL);
  if ( (_BYTE)v2 )
  {
    v2 = *(_QWORD *)(v3 + 184);
    if ( v2 )
      v2 = *(_QWORD *)(v2 + 312);
    if ( stru_1402F3230.LevelPlus1 > 5 )
    {
      LOBYTE(v2) = TlgKeywordOn(&stru_1402F3230, 0x400000000000uLL);
      if ( (_BYTE)v2 )
      {
        v8 = *(_DWORD *)(v4 + 300);
        v9 = *(_DWORD *)(v5 + 164);
        v10 = *(_DWORD *)(v5 + 176);
        v12 = PnpResetRetryInterval;
        v11 = *(_DWORD *)(v5 + 192);
        v14 = v17;
        v16 = *(_QWORD *)(v4 + 48);
        v17[0] = *(unsigned __int16 *)(v4 + 40);
        v18 = v21;
        v20 = *(_QWORD *)(v4 + 64);
        v21[0] = *(unsigned __int16 *)(v4 + 56);
        v22 = &v8;
        v24 = &v9;
        v26 = &v10;
        v28 = &v12;
        v30 = &v11;
        v32 = v35;
        v34 = *(_QWORD *)(v5 + 208);
        v35[0] = *(unsigned __int16 *)(v5 + 200);
        v15 = 2LL;
        v17[1] = v6;
        v19 = 2LL;
        v21[1] = v6;
        v23 = 4LL;
        v25 = 4LL;
        v27 = 4LL;
        v29 = 8LL;
        v31 = 4LL;
        v33 = 2LL;
        v35[1] = v6;
        LOBYTE(v2) = TlgWrite(&stru_1402F3230, &unk_14027BD86, 0LL, 0LL, 0xDu, &pData);
      }
    }
  }
  return v2;
}
