/*
 * XREFs of ?RemoveSession@CProcess@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x18002A11C
 * Callers:
 *     ?UnregisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x18001F8D0 (-UnregisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?FreeNode@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18003037C (-FreeNode@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

// Absent C++ exception handlers: #catch=1
__int64 __fastcall CProcess::RemoveSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  unsigned int v4; // edi
  __int64 *i; // rdx
  __int64 *v6; // rax
  __int64 v7; // rax
  ATL::CAtlException *v9; // [rsp+28h] [rbp-20h] BYREF
  CProcess *v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]
  int v12; // [rsp+50h] [rbp+8h]

  v4 = 0;
  v10 = (CProcess *)((char *)this + 32);
  v11 = 0;
  ATL::CCritSecLock::Lock((LPCRITICAL_SECTION *)&v10);
  for ( i = (__int64 *)*((_QWORD *)this + 9); i && (struct IAudioSessionInfo *)i[2] != a2; i = (__int64 *)*i )
    ;
  if ( i )
  {
    try
    {
      v6 = (__int64 *)*i;
      if ( i == *((__int64 **)this + 9) )
        *((_QWORD *)this + 9) = v6;
      else
        *(_QWORD *)i[1] = v6;
      v7 = i[1];
      if ( i == *((__int64 **)this + 10) )
        *((_QWORD *)this + 10) = v7;
      else
        *(_QWORD *)(*i + 8) = v7;
      ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::FreeNode((char *)this + 72);
    }
    catch ( ATL::CAtlException *v9 )
    {
      __eh34_catch_handler_absent(0, 0, CProcess::RemoveSession_::_1_::catch_0);
      v4 = v12;
      if ( v12 < 0
        && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          39LL,
          &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
          (unsigned int)v12);
      }
    }
  }
  if ( v11 )
    ATL::CCritSecLock::Unlock((LPCRITICAL_SECTION *)&v10);
  return v4;
}
