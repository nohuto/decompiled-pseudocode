/*
 * XREFs of ?AddPendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z @ 0x1800258B0
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180022650 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddClientReference@CAudioStream@@UEAAKXZ @ 0x180020580 (-AddClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?GrowBuffer@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18002FA3C (-GrowBuffer@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@AEAA_N.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::AddPendingStreamCreate(CAudioSession *this, struct CAudioStream *a2)
{
  CAudioStream *v2; // rbx
  unsigned int v4; // esi
  _QWORD *v5; // rdi
  unsigned __int64 v6; // r14
  CAudioStream **v7; // rcx
  __int64 (__fastcall *v8)(CAudioStream *); // rdi
  __int64 result; // rax
  ATL::CAtlException *v10; // rbx
  ATL::CAtlException *v11; // [rsp+28h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+38h] [rbp-20h]

  v2 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 272);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = 0;
  try
  {
    v5 = (_QWORD *)((char *)this + 312);
    v6 = v5[1];
    if ( v6 >= v5[2]
      && !(unsigned __int8)ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::GrowBuffer(v5, v6 + 1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    v7 = (CAudioStream **)(*v5 + 8 * v6);
    if ( v7 )
      *v7 = v2;
    ++v5[1];
  }
  catch ( ATL::CAtlException *v11 )
  {
    v10 = v11;
    if ( *(_DWORD *)v11 == -1073741571 )
      _resetstkoflw();
    v4 = *(_DWORD *)v10;
    if ( *(int *)v10 >= 0 )
    {
      v2 = a2;
      goto LABEL_6;
    }
LABEL_8:
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
    result = v4;
  }
LABEL_6:
  v8 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v2 + 64LL);
  if ( v8 == CAudioStream::AddClientReference )
    CAudioStream::AddClientReference(v2);
  else
    v8(v2);
  goto LABEL_8;
}
