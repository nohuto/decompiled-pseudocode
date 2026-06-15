/*
 * XREFs of ?DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z @ 0x140032068
 * Callers:
 *     ?CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140031A20 (-CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_.c)
 *     ?DestroyStream@CAudioDeviceGraph@@UEAAJ_K@Z @ 0x140032130 (-DestroyStream@CAudioDeviceGraph@@UEAAJ_K@Z.c)
 * Callees:
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14000866C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400106A0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     ?Find@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCPipeInstance@@PEAU3@@Z @ 0x1400299D0 (-Find@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEBAPEAU__P.c)
 *     ?FindKey@?$CSimpleMap@U_GUID@@PEAVCPipeInstance@@V?$CSimpleMapEqualHelper@U_GUID@@PEAVCPipeInstance@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1400322BC (-FindKey@-$CSimpleMap@U_GUID@@PEAVCPipeInstance@@V-$CSimpleMapEqualHelper@U_GUID@@PEAVCPipeInsta.c)
 *     ?RemoveAt@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140032A7C (-RemoveAt@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXPE.c)
 *     ?RemoveAt@?$CSimpleMap@U_GUID@@PEAVCPipeInstance@@V?$CSimpleMapEqualHelper@U_GUID@@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAHH@Z @ 0x140032ACC (-RemoveAt@-$CSimpleMap@U_GUID@@PEAVCPipeInstance@@V-$CSimpleMapEqualHelper@U_GUID@@PEAVCPipeInst.c)
 */

void __fastcall CAudioDeviceGraph::DestroyModePipe(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  unsigned int Key; // eax
  __int64 v7; // r11
  struct CPipeInstance *v8; // [rsp+20h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+28h] [rbp-20h] BYREF

  v8 = a2;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 184));
  v4 = ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::Find((_QWORD *)this + 17, &v8);
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAt(v5, v4);
  if ( LOBYTE(lpCriticalSection[1]) )
    LeaveCriticalSection(lpCriticalSection[0]);
  *(_OWORD *)lpCriticalSection = *((_OWORD *)a2 + 13);
  Key = ATL::CSimpleMap<_GUID,CPipeInstance *,ATL::CSimpleMapEqualHelper<_GUID,CPipeInstance *>>::FindKey(
          (char *)this + 296,
          lpCriticalSection);
  if ( Key != -1 )
    ATL::CSimpleMap<_GUID,CPipeInstance *,ATL::CSimpleMapEqualHelper<_GUID,CPipeInstance *>>::RemoveAt(v7, Key);
  CPipeInstance::`scalar deleting destructor'(a2);
}
