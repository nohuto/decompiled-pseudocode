/*
 * XREFs of ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18003EBD4
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18003E748 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?GetNext@?$TList@VTSSession@@@@QEBAHAEAPEAXPEAPEAVTSSession@@@Z @ 0x18003963C (-GetNext@-$TList@VTSSession@@@@QEBAHAEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18003EC70 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionLogonConnectTime@@YA_JPEAVTSSession@@@Z @ 0x18003F0BC (-TsSessionLogonConnectTime@@YA_JPEAVTSSession@@@Z.c)
 */

void __fastcall TsSessionConsiderForPrimaryConsoleAudioSession(struct TSSession *a1)
{
  struct TSSession *v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r10
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF
  struct TSSession *v6; // [rsp+38h] [rbp+10h] BYREF

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x11u,
      (__int64)&WPP_a039a10251cf52648c3361a61631dc40_Traceguids,
      *(_DWORD *)a1);
  }
  if ( !*((_DWORD *)a1 + 1) && *(_DWORD *)a1 )
  {
    TsSessionLogonConnectTime(a1);
    v2 = (struct TSSession *)qword_1800E68A0;
    v5 = qword_1800E68A0;
    while ( (unsigned int)TList<TSSession>::GetNext((__int64)v2, &v5, &v6) )
    {
      v2 = v6;
      if ( *(_DWORD *)v6 != (_DWORD)v3 && *((_DWORD *)v6 + 90) != (_DWORD)v3 )
      {
        v3 = TsSessionLogonConnectTime(v6);
        break;
      }
    }
    if ( v4 > v3 )
      TsSessionNewPrimaryConsoleAudioSession(a1);
  }
}
