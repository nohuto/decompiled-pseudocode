/*
 * XREFs of ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180040BD4
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18004070C (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     ?GetNext@?$TList@VTSSession@@@@QEBAHAEAPEAXPEAPEAVTSSession@@@Z @ 0x180008EE0 (-GetNext@-$TList@VTSSession@@@@QEBAHAEAPEAXPEAPEAVTSSession@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180040C70 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionLogonConnectTime@@YA_JPEAVTSSession@@@Z @ 0x1800410BC (-TsSessionLogonConnectTime@@YA_JPEAVTSSession@@@Z.c)
 */

void __fastcall TsSessionConsiderForPrimaryConsoleAudioSession(struct TSSession *a1)
{
  struct TSSession *v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r10
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF
  struct TSSession *v6; // [rsp+38h] [rbp+10h] BYREF

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x11u,
      (__int64)&WPP_c40d8c8986032b8f982279e707239ad1_Traceguids,
      *(_DWORD *)a1);
  }
  if ( !*((_DWORD *)a1 + 1) && *(_DWORD *)a1 )
  {
    TsSessionLogonConnectTime(a1);
    v2 = (struct TSSession *)qword_1800E88D0;
    v5 = qword_1800E88D0;
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
