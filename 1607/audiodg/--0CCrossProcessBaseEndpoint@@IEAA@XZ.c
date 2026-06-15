/*
 * XREFs of ??0CCrossProcessBaseEndpoint@@IEAA@XZ @ 0x140014024
 * Callers:
 *     ??0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x140013BF0 (--0CCrossProcessBaseServerEndpoint@@QEAA@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z.c)
 *     ??0CCrossProcessBaseClientEndpoint@@QEAA@XZ @ 0x140034940 (--0CCrossProcessBaseClientEndpoint@@QEAA@XZ.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x1400050C4 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0CCrossProcessEndpointTraceLogger@@QEAA@XZ @ 0x1400140C0 (--0CCrossProcessEndpointTraceLogger@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessBaseEndpoint *__fastcall CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint(
        CCrossProcessBaseEndpoint *this)
{
  *(_QWORD *)this = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  CCrossProcessEndpointTraceLogger::CCrossProcessEndpointTraceLogger((CCrossProcessBaseEndpoint *)((char *)this + 176));
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 34) = 1;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  return this;
}
