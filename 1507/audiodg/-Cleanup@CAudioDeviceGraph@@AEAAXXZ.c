/*
 * XREFs of ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14000EDF8
 * Callers:
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x1400103B0 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 * Callees:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x1400086A0 (--1CPipeInstance@@QEAA@XZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F590 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140012DAC (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x140026594 (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140027518 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDeviceGraph::Cleanup(CAudioDeviceGraph *this)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(CAudioDeviceGraph *__hidden); // rdi
  _QWORD *v4; // rdi
  char *v5; // rbx
  __int64 *v6; // rcx
  LPVOID *v7; // rdi
  __int64 v8; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)&WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
  {
    if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        61LL,
        &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids,
        this);
      v2 = *(_QWORD *)&WPP_GLOBAL_Control;
    }
    if ( (unsigned int *)v2 != &WPP_GLOBAL_Control && (*(_DWORD *)(v2 + 28) & 0x20000) != 0 && *(_BYTE *)(v2 + 25) >= 4u )
      WPP_SF_(*(_QWORD *)(v2 + 16), 62LL, &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids);
  }
  v3 = *(__int64 (__fastcall **)(CAudioDeviceGraph *__hidden))(*(_QWORD *)this + 96LL);
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
  v11 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v5 = (char *)this + 136;
  while ( *((_QWORD *)v5 + 2) )
  {
    v6 = *(__int64 **)v5;
    if ( !*(_QWORD *)v5 )
      ATL::AtlThrowImpl(-2147467259);
    v7 = (LPVOID *)v6[2];
    v8 = *v6;
    *(_QWORD *)v5 = *v6;
    if ( v8 )
      *(_QWORD *)(v8 + 8) = 0LL;
    else
      *((_QWORD *)v5 + 1) = 0LL;
    *v6 = *((_QWORD *)v5 + 4);
    *((_QWORD *)v5 + 4) = v6;
    if ( (*((_QWORD *)v5 + 2))-- == 1LL )
      ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll(v5);
    if ( v7 )
    {
      CPipeInstance::~CPipeInstance(v7);
      operator delete(v7);
    }
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 63LL, &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids);
  }
}
