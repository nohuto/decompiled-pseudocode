/*
 * XREFs of ?AddSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18002A1F8
 * Callers:
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18001F94C (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIAudioSessionInfo@@@Z @ 0x1800303E8 (-AddHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::AddSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  unsigned int v3; // ebx
  ATL::CAtlException *v5; // rbx
  ATL::CAtlException *v6; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v8; // [rsp+38h] [rbp-10h]
  int v9; // [rsp+50h] [rbp+8h]
  struct IAudioSessionInfo *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = 0;
  try
  {
    ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::AddHead((char *)this + 72, &v10);
  }
  catch ( ATL::CAtlException *v6 )
  {
    v5 = v6;
    if ( *(_DWORD *)v6 == -1073741571 )
      _resetstkoflw();
    v9 = *(_DWORD *)v5;
    v3 = *(_DWORD *)v5;
    if ( v9 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        38LL,
        &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
        (unsigned int)v9);
    }
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
