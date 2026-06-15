/*
 * XREFs of ?PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ @ 0x140014D10
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x140014D80 (-ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 */

void __fastcall CCrossProcessInputEndpoint::PulseEndpoint(CCrossProcessInputEndpoint *this)
{
  __int64 v2; // rbx
  void (__fastcall *v3)(CCrossProcessBaseServerEndpoint *__hidden); // rdi

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_d8fb3126b0185d15d45516e49e60f215_Traceguids);
  }
  v2 = *((_QWORD *)this + 1);
  v3 = *(void (__fastcall **)(CCrossProcessBaseServerEndpoint *__hidden))(*(_QWORD *)(v2 + 8) + 32LL);
  if ( v3 == CCrossProcessBaseServerEndpoint::ProcessingComplete )
    CCrossProcessBaseServerEndpoint::ProcessingComplete((CCrossProcessBaseServerEndpoint *)(v2 + 8));
  else
    v3((CCrossProcessBaseServerEndpoint *)(v2 + 8));
}
