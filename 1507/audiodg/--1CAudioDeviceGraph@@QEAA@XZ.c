/*
 * XREFs of ??1CAudioDeviceGraph@@QEAA@XZ @ 0x1400103B0
 * Callers:
 *     ??1?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x14000EC40 (--1-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CAudioDeviceGraph_::_CComObject_CAudioDeviceGraph__::_1_::dtor$0 @ 0x14001B692 (_ATL--CComObject_CAudioDeviceGraph_--_CComObject_CAudioDeviceGraph__--_1_--dtor$0.c)
 *     _ATL::CComCreator_ATL::CComObject_CAudioDeviceGraph___::CreateInstance_::_1_::dtor$1 @ 0x14001BD9E (_ATL--CComCreator_ATL--CComObject_CAudioDeviceGraph___--CreateInstance_--_1_--dtor$1.c)
 *     ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x140026CC8 (--1-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@QEAA@XZ @ 0x140026D50 (--1-$CComContainedObject@VCAudioDeviceGraph@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14000EDF8 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140012DAC (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CAudioDeviceGraph::~CAudioDeviceGraph(CAudioDeviceGraph *this)
{
  __int64 v2; // rsi
  __int64 v3; // rsi
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rsi

  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 10LL, &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids);
  }
  CAudioDeviceGraph::Cleanup(this);
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 11LL, &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids);
  }
  v2 = *((_QWORD *)this + 45);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 45));
  v3 = *((_QWORD *)this + 40);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 40));
  v4 = (void *)*((_QWORD *)this + 37);
  if ( v4 )
  {
    free(v4);
    *((_QWORD *)this + 37) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 38);
  if ( v5 )
  {
    free(v5);
    *((_QWORD *)this + 38) = 0LL;
  }
  *((_DWORD *)this + 78) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((char *)this + 136);
  v6 = *((_QWORD *)this + 15);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 15));
  v7 = *((_QWORD *)this + 14);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 14));
  if ( *((_BYTE *)this + 72) )
  {
    *((_BYTE *)this + 72) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
}
