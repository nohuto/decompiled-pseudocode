/*
 * XREFs of ??0?$CComObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z @ 0x140006624
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140002734 (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 * Callees:
 *     ??0CAudioDeviceGraph@@QEAA@XZ @ 0x140007FEC (--0CAudioDeviceGraph@@QEAA@XZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CAudioDeviceGraph *__fastcall ATL::CComObject<CAudioDeviceGraph>::CComObject<CAudioDeviceGraph>(CAudioDeviceGraph *a1)
{
  CAudioDeviceGraph::CAudioDeviceGraph(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)a1 + 2) = &ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraphInternal'};
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
