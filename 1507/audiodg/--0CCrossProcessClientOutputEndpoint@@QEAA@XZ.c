/*
 * XREFs of ??0CCrossProcessClientOutputEndpoint@@QEAA@XZ @ 0x140035584
 * Callers:
 *     ??0?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140034FB4 (--0-$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140035314 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 *     ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x140035470 (--0CCrossProcessBaseClientEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessClientOutputEndpoint *__fastcall CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint(
        CCrossProcessClientOutputEndpoint *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 114) = 0;
  v2 = (char *)this + 464;
  memset_0((char *)this + 464, 0, 0x28uLL);
  v2[40] = 0;
  CCrossProcessBaseClientEndpoint::CCrossProcessBaseClientEndpoint(this);
  *((_QWORD *)this + 52) = &CCrossProcessOutputEndpoint::`vftable';
  *((_QWORD *)this + 53) = this;
  *((_DWORD *)this + 108) = 3;
  *((_DWORD *)this + 109) = 0;
  *((_QWORD *)this + 55) = &CCrossProcessControl::`vftable';
  *((_QWORD *)this + 56) = this;
  *((_QWORD *)this + 64) = 0LL;
  return this;
}
