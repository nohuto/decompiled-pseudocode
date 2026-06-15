/*
 * XREFs of ??0CStreamClassPolicyGainsWrapper@@QEAA@AEBV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@@Z @ 0x180068488
 * Callers:
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x18002FAC0 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180013560 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??_L@YAXPEAX_KHP6AX0@Z2@Z @ 0x180043758 (--_L@YAXPEAX_KHP6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStreamClassPolicyGainsWrapper::CStreamClassPolicyGainsWrapper(__int64 a1, __int64 a2)
{
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)a1);
  `eh vector constructor iterator'(
    (char *)(a1 + 40),
    48LL,
    21,
    (void (__fastcall *)(char *))ATL::CAtlList<CSaDeviceInstance *,ATL::CElementTraits<CSaDeviceInstance *>>::`default constructor closure');
  `eh vector constructor iterator'(
    (char *)(a1 + 1048),
    48LL,
    21,
    (void (__fastcall *)(char *))ATL::CAtlList<CSaDeviceInstance *,ATL::CElementTraits<CSaDeviceInstance *>>::`default constructor closure');
  *(_QWORD *)(a1 + 2056) = a2;
  return a1;
}
