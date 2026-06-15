/*
 * XREFs of ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x140007190
 * Callers:
 *     ?ResetAPOs@CSystemAudioDeviceSharedBase@@UEAAJXZ @ 0x140005D30 (-ResetAPOs@CSystemAudioDeviceSharedBase@@UEAAJXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140004C24 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x140008140 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x14000BF50 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioDeviceGraph::ResetAPOs(CAudioDeviceGraph *this, __int64 a2, bool a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  CPipeInstance **Next; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 184),
    a3);
  if ( *((_DWORD *)this + 56) )
  {
    v10 = (_QWORD *)*((_QWORD *)this + 17);
    while ( v10 )
    {
      Next = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v5, &v10);
      CPipeInstance::ResetAPOs(*Next);
    }
    CPipeInstance::ResetAPOs(*((CPipeInstance **)this + 16));
  }
  else
  {
    v4 = -2005139437;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        74LL,
        &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids,
        2289827859LL);
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
