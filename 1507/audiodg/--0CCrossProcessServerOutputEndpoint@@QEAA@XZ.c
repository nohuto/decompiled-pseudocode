/*
 * XREFs of ??0CCrossProcessServerOutputEndpoint@@QEAA@XZ @ 0x140035634
 * Callers:
 *     ??0?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140035180 (--0-$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400353D8 (--0-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 *     ??0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x140025C50 (--0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z.c)
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
