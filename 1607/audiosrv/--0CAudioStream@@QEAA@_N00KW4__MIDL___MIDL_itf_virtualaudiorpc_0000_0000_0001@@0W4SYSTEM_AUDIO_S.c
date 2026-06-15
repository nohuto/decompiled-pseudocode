/*
 * XREFs of ??0CAudioStream@@QEAA@_N00KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0001@@0W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x180019EF0
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180009F10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180012D40 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     WPP_SF_qdd @ 0x18005FFFC (WPP_SF_qdd.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAudioStream::CAudioStream(__int64 a1, char a2, char a3, char a4, int a5, int a6, char a7, int a8)
{
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax

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
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_BYTE *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(a1 + 128));
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_DWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 200) = &AudioSrvVolumeTelemetryStreamVolume::`vftable';
  v9 = (_QWORD *)(a1 + 232);
  *(_QWORD *)(a1 + 256) = 15LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  if ( *(_QWORD *)(a1 + 256) >= 0x10uLL )
    v9 = (_QWORD *)*v9;
  *(_BYTE *)v9 = 0;
  v10 = (_QWORD *)(a1 + 264);
  *(_QWORD *)(a1 + 288) = 7LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  if ( *(_QWORD *)(a1 + 288) >= 8uLL )
    v10 = (_QWORD *)*v10;
  *(_WORD *)v10 = 0;
  *(_QWORD *)(a1 + 296) = 0LL;
  v11 = (_QWORD *)(a1 + 304);
  *(_QWORD *)(a1 + 328) = 7LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  if ( *(_QWORD *)(a1 + 328) >= 8uLL )
    v11 = (_QWORD *)*v11;
  *(_WORD *)v11 = 0;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_BYTE *)(a1 + 344) = 0;
  *(_DWORD *)(a1 + 348) = -1;
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(a1 + 352));
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_DWORD *)(a1 + 432) = 10;
  *(_DWORD *)(a1 + 440) = 255;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_DWORD *)(a1 + 480) = a5;
  *(_DWORD *)(a1 + 484) = a8;
  *(_DWORD *)(a1 + 488) = a6;
  *(_BYTE *)(a1 + 492) = a7;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdd(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_56c0583fd767319afe66d4370de2ea71_Traceguids, a1, a8, a5);
  }
  return a1;
}
