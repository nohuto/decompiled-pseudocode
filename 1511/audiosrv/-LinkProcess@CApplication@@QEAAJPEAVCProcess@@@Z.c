/*
 * XREFs of ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18001C58C
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001F7FC (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x18001CB1C (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIAudioSessionInfo@@@Z @ 0x1800303E8 (-AddHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::LinkProcess(CApplication *this, struct CProcess *a2)
{
  struct CProcess *v2; // rsi
  CApplication *v3; // rbx
  unsigned int v4; // edi
  __int64 result; // rax
  ATL::CAtlException *v6; // rbx
  ATL::CAtlException *v7; // [rsp+28h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v9; // [rsp+38h] [rbp-20h]
  struct CProcess *v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+70h] [rbp+18h]

  v11 = a2;
  v2 = a2;
  v3 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v9 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( !CApplication::GetActiveProcessCount(v3) )
    *((_DWORD *)v3 + 129) = 1;
  v4 = 0;
  try
  {
    ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::AddHead((char *)v3 + 64, &v11);
  }
  catch ( ATL::CAtlException *v7 )
  {
    v6 = v7;
    if ( *(_DWORD *)v7 == -1073741571 )
      _resetstkoflw();
    v12 = *(_DWORD *)v6;
    v4 = v12;
    if ( v12 >= 0 )
    {
      v3 = this;
      v2 = v11;
      goto LABEL_4;
    }
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        11LL,
        &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
        (unsigned int)v12);
    }
LABEL_5:
    if ( v9 )
      LeaveCriticalSection(lpCriticalSection);
    result = v4;
  }
LABEL_4:
  *((_QWORD *)v2 + 28) = v3;
  goto LABEL_5;
}
