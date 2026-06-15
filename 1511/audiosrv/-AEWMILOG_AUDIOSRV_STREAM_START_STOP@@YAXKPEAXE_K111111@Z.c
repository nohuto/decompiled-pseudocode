/*
 * XREFs of ?AEWMILOG_AUDIOSRV_STREAM_START_STOP@@YAXKPEAXE_K111111@Z @ 0x1800396A8
 * Callers:
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180022390 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180047978 (memset_0.c)
 */

void __fastcall AEWMILOG_AUDIOSRV_STREAM_START_STOP(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9,
        unsigned __int64 a10)
{
  _WORD v11[2]; // [rsp+20h] [rbp-59h] BYREF
  char v12; // [rsp+24h] [rbp-55h]
  __int128 v13; // [rsp+38h] [rbp-41h]
  int v14; // [rsp+4Ch] [rbp-2Dh]
  __int64 v15; // [rsp+50h] [rbp-29h]
  int v16; // [rsp+58h] [rbp-21h]
  __int64 v17; // [rsp+60h] [rbp-19h]
  unsigned __int64 v18; // [rsp+68h] [rbp-11h]
  unsigned __int64 v19; // [rsp+70h] [rbp-9h]
  unsigned __int64 v20; // [rsp+78h] [rbp-1h]
  unsigned __int64 v21; // [rsp+80h] [rbp+7h]
  unsigned __int64 v22; // [rsp+88h] [rbp+Fh]
  unsigned __int64 v23; // [rsp+90h] [rbp+17h]

  if ( g_u32AEWMILogLevel >= 3 )
  {
    memset_0(v11, 0, 0x40uLL);
    v15 = 0LL;
    v16 = 0;
    v11[0] = 120;
    v18 = a5;
    v19 = a6;
    v20 = a7;
    v21 = a8;
    v22 = a9;
    v23 = a10;
    v14 = 0x20000;
    v13 = AEWMIGUID_AUDIOSRV;
    v12 = 2;
    v17 = a4;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v11);
  }
}
