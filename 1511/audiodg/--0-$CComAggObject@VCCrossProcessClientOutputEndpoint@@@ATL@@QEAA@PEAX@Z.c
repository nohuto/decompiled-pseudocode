/*
 * XREFs of ??0?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140035184
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140037084 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@S.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ??0CCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x140035754 (--0CCrossProcessClientOutputEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CCrossProcessClientOutputEndpoint>::CComAggObject<CCrossProcessClientOutputEndpoint>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rbx

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CCrossProcessClientOutputEndpoint>::`vftable';
  v4 = (_QWORD *)(a1 + 24);
  CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint((CCrossProcessClientOutputEndpoint *)(a1 + 24));
  *v4 = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpoint'};
  v4[1] = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  v4[47] = &ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::`vftable'{for `IAudioCrossProcessClientEndpoint'};
  v4[48] = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock'};
  v4[49] = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `IAudioClock2'};
  v4[52] = &ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::`vftable'{for `CCrossProcessOutputEndpoint'};
  v4[55] = &ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::`vftable'{for `CCrossProcessControl'};
  v4[57] = a2;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
