/*
 * XREFs of ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180019ADC
 * Callers:
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x180019BB4 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x1800199CC (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 */

void __fastcall TsSessionConsiderForPrimaryConsoleAudioSession(struct TSSession *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x11u,
      &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids,
      *(_DWORD *)a1);
  }
  v2 = 0LL;
  if ( !*((_DWORD *)a1 + 1) && *(_DWORD *)a1 )
  {
    v3 = *((_QWORD *)a1 + 5);
    v4 = *(_QWORD *)(v3 + 200);
    if ( v4 && (v5 = *(_QWORD *)(v3 + 176)) != 0 )
    {
      if ( v4 > v5 )
        v5 = v4;
    }
    else
    {
      v5 = 0LL;
    }
    v6 = qword_180031D68;
    while ( v6 )
    {
      v7 = v6[2];
      v6 = (_QWORD *)*v6;
      if ( *(_DWORD *)v7 && *(_DWORD *)(v7 + 368) )
      {
        v8 = *(_QWORD *)(v7 + 40);
        v9 = *(_QWORD *)(v8 + 200);
        if ( v9 )
        {
          v10 = *(_QWORD *)(v8 + 176);
          if ( v10 )
          {
            v2 = v10;
            if ( v9 > v10 )
              v2 = v9;
          }
        }
        break;
      }
    }
    if ( v5 > v2 )
      TsSessionNewPrimaryConsoleAudioSession(a1);
  }
}
