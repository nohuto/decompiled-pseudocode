/*
 * XREFs of ??0CAudioStream@@QEAA@_N00K00W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18001E2A0
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014990 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180013560 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioStream::CAudioStream(__int64 a1, char a2, char a3, char a4, int a5, char a6, char a7, int a8)
{
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)a1 = &CAudioStream::`vftable'{for `IAudioGraphCallback'};
  *(_QWORD *)(a1 + 8) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
  *(_QWORD *)(a1 + 16) = &CAudioStream::`vftable'{for `CUnknown'};
  *(_DWORD *)(a1 + 36) = 1;
  *(_BYTE *)(a1 + 40) = a2;
  *(_BYTE *)(a1 + 41) = a4;
  *(_BYTE *)(a1 + 42) = a3;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 1065353216;
  *(_BYTE *)(a1 + 92) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_BYTE *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(a1 + 120));
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_BYTE *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = -1;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(a1 + 200));
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_DWORD *)(a1 + 280) = 10;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_DWORD *)(a1 + 304) = a5;
  *(_DWORD *)(a1 + 308) = a8;
  *(_BYTE *)(a1 + 312) = a6;
  *(_BYTE *)(a1 + 313) = a7;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x200000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      10LL,
      &WPP_ac8bf37043f63ecae5504e787611946d_Traceguids,
      a1);
  }
  return a1;
}
