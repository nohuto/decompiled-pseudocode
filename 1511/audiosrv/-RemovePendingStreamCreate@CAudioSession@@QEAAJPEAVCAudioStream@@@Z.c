/*
 * XREFs of ?RemovePendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z @ 0x180064C10
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180022650 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180065DF8 (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::RemovePendingStreamCreate(CAudioSession *this, struct CAudioStream *a2)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rsi
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
