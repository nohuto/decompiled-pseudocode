/*
 * XREFs of ?GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ @ 0x140012A64
 * Callers:
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011FB0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 *     ?ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z @ 0x140012BAC (-ConnectPipesToDeviceGraph@CStreamGroup@@IEAAJPEAUISaDeviceInternal@@@Z.c)
 * Callees:
 *     ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140004800 (-GetLatency@CPipeInstance@@QEBAJPEA_J@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CStreamGroup::GetStreamGroupLatency(CStreamGroup *this)
{
  __int64 v2; // rbx
  CPipeInstance *v3; // rcx
  __int64 v4; // rax
  CPipeInstance *v5; // rcx
  __int64 v6; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v9; // [rsp+30h] [rbp-18h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = 0LL;
  v10 = 0LL;
  v3 = (CPipeInstance *)*((_QWORD *)this + 11);
  if ( v3 )
  {
    CPipeInstance::GetLatency(v3, &v10);
    v2 = v10;
  }
  v4 = 0LL;
  v10 = 0LL;
  v5 = (CPipeInstance *)*((_QWORD *)this + 34);
  if ( v5 )
  {
    CPipeInstance::GetLatency(v5, &v10);
    v4 = v10;
  }
  v6 = v4 + v2;
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
