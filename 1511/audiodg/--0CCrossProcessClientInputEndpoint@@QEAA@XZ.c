/*
 * XREFs of ??0CCrossProcessClientInputEndpoint@@QEAA@XZ @ 0x1400356AC
 * Callers:
 *     ??0?$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140035088 (--0-$CComAggObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140035420 (--0-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x140019034 (memset_0.c)
 *     ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x140035640 (--0CCrossProcessBaseClientEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessClientInputEndpoint *__fastcall CCrossProcessClientInputEndpoint::CCrossProcessClientInputEndpoint(
        CCrossProcessClientInputEndpoint *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 114) = 0;
  v2 = (char *)this + 464;
  memset_0((char *)this + 464, 0, 0x28uLL);
  v2[40] = 0;
  CCrossProcessBaseClientEndpoint::CCrossProcessBaseClientEndpoint(this);
  *((_QWORD *)this + 52) = &CCrossProcessInputEndpoint::`vftable';
  *((_QWORD *)this + 53) = this;
  *((_DWORD *)this + 108) = 3;
  *((_DWORD *)this + 109) = 0;
  *((_QWORD *)this + 55) = &CCrossProcessControl::`vftable';
  *((_QWORD *)this + 56) = this;
  return this;
}
