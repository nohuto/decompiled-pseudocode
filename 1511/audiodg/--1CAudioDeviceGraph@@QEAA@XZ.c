/*
 * XREFs of ??1CAudioDeviceGraph@@QEAA@XZ @ 0x140007E84
 * Callers:
 *     ??1?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x140006594 (--1-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     _ATL::CComObject_CAudioDeviceGraph_::_CComObject_CAudioDeviceGraph__::_1_::dtor$0 @ 0x14001AF86 (_ATL--CComObject_CAudioDeviceGraph_--_CComObject_CAudioDeviceGraph__--_1_--dtor$0.c)
 *     ??1?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ @ 0x140026DD8 (--1-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@QEAA@XZ @ 0x140026EE0 (--1-$CComContainedObject@VCAudioDeviceGraph@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140004A04 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140006828 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
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

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids);
  }
  CAudioDeviceGraph::Cleanup(this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids);
  }
  v2 = *((_QWORD *)this + 46);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 46));
  v3 = *((_QWORD *)this + 41);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 41));
  v4 = (void *)*((_QWORD *)this + 38);
  if ( v4 )
  {
    free(v4);
    *((_QWORD *)this + 38) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 39);
  if ( v5 )
  {
    free(v5);
    *((_QWORD *)this + 39) = 0LL;
  }
  *((_DWORD *)this + 80) = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)this + 136);
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
