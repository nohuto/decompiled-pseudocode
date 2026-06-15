/*
 * XREFs of ??0CCrossProcessServerOutputEndpoint@@QEAA@XZ @ 0x140034B04
 * Callers:
 *     ??0?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400346A8 (--0-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400348C0 (--0-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x140013BF0 (--0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessServerOutputEndpoint *__fastcall CCrossProcessServerOutputEndpoint::CCrossProcessServerOutputEndpoint(
        CCrossProcessServerOutputEndpoint *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 116) = 0;
  v2 = (char *)this + 472;
  memset_0((char *)this + 472, 0, 0x28uLL);
  v2[40] = 0;
  CCrossProcessBaseServerEndpoint::CCrossProcessBaseServerEndpoint(this, eCapture);
  *((_QWORD *)this + 55) = &CCrossProcessOutputEndpoint::`vftable';
  *((_QWORD *)this + 56) = this;
  *((_DWORD *)this + 114) = 3;
  *((_DWORD *)this + 115) = 0;
  *((_DWORD *)this + 130) = 0;
  return this;
}
