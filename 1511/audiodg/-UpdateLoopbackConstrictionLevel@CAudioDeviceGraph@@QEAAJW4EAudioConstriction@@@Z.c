/*
 * XREFs of ?UpdateLoopbackConstrictionLevel@CAudioDeviceGraph@@QEAAJW4EAudioConstriction@@@Z @ 0x140006B08
 * Callers:
 *     ?RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConstriction@@@Z @ 0x140016D30 (-RequestPolicyChange@CProtectedOutputController@@UEAAJPEAVCVirtualProtectedOutput@@W4EAudioConst.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140004C24 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x140008140 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z @ 0x14000C5C0 (-SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::UpdateLoopbackConstrictionLevel(
        CAudioDeviceGraph *this,
        enum EAudioConstriction a2)
{
  int v4; // ebx
  int v5; // esi
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  bool v7; // r8
  __int64 v8; // rcx
  CPipeInstance **Next; // rax
  CPipeInstance **v11; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v13; // [rsp+30h] [rbp-28h]
  _QWORD *v14; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)this + 56) )
  {
    ATL::CCritSecLock::CCritSecLock(
      (ATL::CCritSecLock *)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 184),
      v7);
    v14 = (_QWORD *)*((_QWORD *)this + 17);
    if ( !v14 )
      goto LABEL_7;
    do
    {
      Next = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v8, &v14);
      v4 = CPipeInstance::SetLoopbackConstriction(*Next, a2);
      if ( v4 >= 0 )
        v5 = 1;
    }
    while ( v14 );
    if ( v4 < 0 )
    {
      if ( v5 )
      {
        v14 = (_QWORD *)*((_QWORD *)this + 17);
        while ( v14 )
        {
          v11 = (CPipeInstance **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v8, &v14);
          CPipeInstance::SetLoopbackConstriction(*v11, *((enum EAudioConstriction *)this + 20));
        }
      }
      if ( v13 )
        LeaveCriticalSection(lpCriticalSection);
    }
    else
    {
LABEL_7:
      if ( v13 )
        LeaveCriticalSection(lpCriticalSection);
      *((_DWORD *)this + 20) = a2;
    }
  }
  else
  {
    v4 = -2005139437;
  }
  LeaveCriticalSection(v6);
  if ( v4 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      80LL,
      &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids,
      (unsigned int)v4);
  }
  return (unsigned int)v4;
}
