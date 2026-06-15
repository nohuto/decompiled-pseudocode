/*
 * XREFs of ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140006828
 * Callers:
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x140007E84 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140004D0C (-FreeNode@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPE.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x1400072C0 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000C020 (--1CPipeInstance@@QEAA@XZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x14001701C (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140027E68 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDeviceGraph::Cleanup(CAudioDeviceGraph *this)
{
  _QWORD *v2; // rcx
  __int64 (__fastcall *v3)(CAudioDeviceGraph *__hidden); // rdi
  _QWORD *v4; // rdi
  __int64 **v5; // rbx
  __int64 *v6; // rdx
  CPipeInstance *v7; // rdi
  __int64 v8; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v10; // [rsp+30h] [rbp-18h]

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 77LL, &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids, this, -2LL);
      v2 = WPP_GLOBAL_Control;
    }
    if ( v2 != &WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x20000) != 0 && *((_BYTE *)v2 + 25) >= 4u )
      WPP_SF_(v2[2], 78LL, &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids);
  }
  v3 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden))(*(_QWORD *)this + 128LL);
  if ( v3 == CAudioDeviceGraph::Stop )
    CAudioDeviceGraph::Stop(this);
  else
    v3(this);
  v4 = (_QWORD *)*((_QWORD *)this + 11);
  if ( v4 )
  {
    *v4 = &CProtectedOutputController::`vftable';
    ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v4 + 2);
    operator delete(v4);
  }
  *((_QWORD *)this + 11) = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  v10 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v5 = (__int64 **)((char *)this + 136);
  while ( v5[2] )
  {
    v6 = *v5;
    if ( !*v5 )
      ATL::AtlThrowImpl(-2147467259);
    v7 = (CPipeInstance *)v6[2];
    v8 = *v6;
    *v5 = (__int64 *)*v6;
    if ( v8 )
      *(_QWORD *)(v8 + 8) = 0LL;
    else
      v5[1] = 0LL;
    ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::FreeNode((__int64)v5, v6);
    if ( v7 )
    {
      CPipeInstance::~CPipeInstance(v7);
      operator delete(v7);
    }
  }
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 79LL, &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids);
  }
}
