/*
 * XREFs of ?ResetAPOs@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F460
 * Callers:
 *     ?ResetAPOs@CSystemAudioDeviceSharedNew@@UEAAJXZ @ 0x14000E640 (-ResetAPOs@CSystemAudioDeviceSharedNew@@UEAAJXZ.c)
 * Callees:
 *     ?ResetAPOs@CPipeInstance@@QEBAXXZ @ 0x1400043F0 (-ResetAPOs@CPipeInstance@@QEBAXXZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x14000A780 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400106A0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
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
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        58LL,
        &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids,
        2289827859LL);
    }
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
