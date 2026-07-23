/*
 * XREFs of EtwpWriteAppStateChangeWithStats @ 0x14054C4C8
 * Callers:
 *     EtwTraceAppStateChange @ 0x14051B448 (EtwTraceAppStateChange.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void EtwpWriteAppStateChangeWithStats()
{
  __int64 v0; // r9
  __int64 v1; // r10
  __int64 v2; // r11
  __int64 v3; // rax
  bool v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  int v6; // [rsp+38h] [rbp-C8h] BYREF
  int v7; // [rsp+3Ch] [rbp-C4h] BYREF
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+80h] [rbp-80h]
  int v13; // [rsp+88h] [rbp-78h]
  int v14; // [rsp+8Ch] [rbp-74h]
  int *v15; // [rsp+90h] [rbp-70h]
  int v16; // [rsp+98h] [rbp-68h]
  int v17; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 *v18; // [rsp+A0h] [rbp-60h]
  int v19; // [rsp+A8h] [rbp-58h]
  int v20; // [rsp+ACh] [rbp-54h]
  int *v21; // [rsp+B0h] [rbp-50h]
  int v22; // [rsp+B8h] [rbp-48h]
  int v23; // [rsp+BCh] [rbp-44h]
  bool *v24; // [rsp+C0h] [rbp-40h]
  int v25; // [rsp+C8h] [rbp-38h]
  int v26; // [rsp+CCh] [rbp-34h]
  int *v27; // [rsp+D0h] [rbp-30h]
  int v28; // [rsp+D8h] [rbp-28h]
  int v29; // [rsp+DCh] [rbp-24h]
  __int64 v30; // [rsp+E0h] [rbp-20h]
  int v31; // [rsp+E8h] [rbp-18h]
  int v32; // [rsp+ECh] [rbp-14h]
  int *v33; // [rsp+F0h] [rbp-10h]
  int v34; // [rsp+F8h] [rbp-8h]
  int v35; // [rsp+FCh] [rbp-4h]
  __int64 *v36; // [rsp+100h] [rbp+0h]
  int v37; // [rsp+108h] [rbp+8h]
  int v38; // [rsp+10Ch] [rbp+Ch]

  if ( stru_1402F3640.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1402F3640, 0x200000000003uLL) )
    {
      v5 = *(_DWORD *)(v0 + 744);
      v9 = *(_QWORD *)(v0 + 1856) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
      v6 = *(_DWORD *)(v0 + 1580);
      v4 = (*(_BYTE *)(v0 + 1740) & 0x10) != 0;
      v7 = *(unsigned __int8 *)(v0 + 1739);
      v8 = *(_DWORD *)(v0 + 1440);
      v3 = *(_QWORD *)(v0 + 1904);
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v10 = v3 << 12;
      v15 = &v5;
      v18 = &v9;
      v21 = &v6;
      v24 = &v4;
      v27 = &v7;
      v33 = &v8;
      v36 = &v10;
      v12 = v2;
      v13 = 94;
      v16 = 4;
      v19 = 8;
      v22 = 4;
      v25 = 1;
      v28 = 4;
      v30 = v1;
      v31 = 44;
      v34 = 4;
      v37 = 8;
      TlgWrite(&stru_1402F3640, &unk_14027E933, 0LL, 0LL, 0xBu, &pData);
    }
  }
}
