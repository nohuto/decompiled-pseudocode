/*
 * XREFs of ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x140030014
 * Callers:
 *     ?RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConstriction@@@Z @ 0x14002EE90 (-RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConst.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140001C70 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400079C0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ?SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z @ 0x14002E6E8 (-SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::UpdateLoopbackConstrictionLevel(CAudioDeviceGraph *this, unsigned int a2)
{
  int v4; // ebx
  int v5; // esi
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  __int64 v7; // rcx
  CPipeInstance **Next; // rax
  CPipeInstance **v9; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v12; // [rsp+30h] [rbp-28h]
  _QWORD *v13; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)this + 56) )
  {
    ATL::CCritSecLock::CCritSecLock(
      (ATL::CCritSecLock *)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 184));
    v13 = (_QWORD *)*((_QWORD *)this + 17);
    if ( !v13 )
      goto LABEL_13;
    do
    {
      Next = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v7, &v13);
      v4 = CPipeInstance::SetLoopbackConstriction(*Next, a2);
      if ( v4 >= 0 )
        v5 = 1;
    }
    while ( v13 );
    if ( v4 < 0 )
    {
      if ( v5 )
      {
        v13 = (_QWORD *)*((_QWORD *)this + 17);
        while ( v13 )
        {
          v9 = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v7, &v13);
          CPipeInstance::SetLoopbackConstriction(*v9, *((unsigned int *)this + 20));
        }
      }
      if ( v12 )
        LeaveCriticalSection(lpCriticalSection);
    }
    else
    {
LABEL_13:
      if ( v12 )
        LeaveCriticalSection(lpCriticalSection);
      *((_DWORD *)this + 20) = a2;
    }
  }
  else
  {
    v4 = -2005139437;
  }
  LeaveCriticalSection(v6);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Du,
        (__int64)&WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids,
        v4);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::UpdateLoopbackConstrictionLevel", 1496, v4);
  }
  return (unsigned int)v4;
}
