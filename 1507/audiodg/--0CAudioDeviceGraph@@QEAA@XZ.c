/*
 * XREFs of ??0CAudioDeviceGraph@@QEAA@XZ @ 0x14001051C
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140014354 (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 *     ??0?$CComAggObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z @ 0x140026C0C (--0-$CComAggObject@VCAudioDeviceGraph@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x140010644 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 */

// Hidden C++ exception states: #wind=5
CAudioDeviceGraph *__fastcall CAudioDeviceGraph::CAudioDeviceGraph(CAudioDeviceGraph *this)
{
  *((_DWORD *)this + 6) = 0;
  memset_0((char *)this + 32, 0, 0x28uLL);
  *((_BYTE *)this + 72) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 10;
  ATL::CCriticalSection::CCriticalSection((CAudioDeviceGraph *)((char *)this + 184));
  ATL::CCriticalSection::CCriticalSection((CAudioDeviceGraph *)((char *)this + 232));
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *(GUID *)((char *)this + 328) = GUID_00000000_0000_0000_0000_000000000000;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 88) = 0;
  *((_QWORD *)this + 46) = 0LL;
  return this;
}
