/*
 * XREFs of ?RemovePendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z @ 0x18004F710
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180009F10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180050484 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::RemovePendingStreamCreate(CAudioSession *this, struct CAudioStream *a2)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  LPCRITICAL_SECTION v8; // [rsp+28h] [rbp-20h] BYREF
  char v9; // [rsp+30h] [rbp-18h]

  v4 = -2147023728;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v8, (struct _RTL_CRITICAL_SECTION *)((char *)this + 272));
  v5 = 0LL;
  if ( *((_QWORD *)this + 40) )
  {
    while ( 1 )
    {
      v6 = *((_QWORD *)this + 39);
      if ( *(struct CAudioStream **)(v6 + 8 * v5) == a2 )
        break;
      if ( ++v5 >= *((_QWORD *)this + 40) )
        goto LABEL_8;
    }
    if ( v5 >= *((_QWORD *)this + 40) )
      ATL::AtlThrowImpl(-2147024809);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 8 * v5) + 72LL))(*(_QWORD *)(v6 + 8 * v5));
    ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt((char *)this + 312, v5);
    v4 = 0;
  }
LABEL_8:
  if ( v9 )
    ATL::CCritSecLock::Unlock(&v8);
  return v4;
}
