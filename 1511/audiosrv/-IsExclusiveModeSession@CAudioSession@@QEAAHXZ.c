/*
 * XREFs of ?IsExclusiveModeSession@CAudioSession@@QEAAHXZ @ 0x180074B40
 * Callers:
 *     ?FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z @ 0x18007A6AC (-FindExclusiveModeAudioSession@CAudioSessionManager@@QEAAJPEAPEAVCAudioSession@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::IsExclusiveModeSession(CAudioSession *this)
{
  unsigned int v2; // edi
  unsigned __int64 i; // rcx
  LPCRITICAL_SECTION v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v5, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  v2 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDDu, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids, 0LL);
  }
  for ( i = 0LL; i < *((_QWORD *)this + 13); ++i )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) + 40LL) )
      v2 = 1;
  }
  if ( v6 )
    ATL::CCritSecLock::Unlock(&v5);
  return v2;
}
