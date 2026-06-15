/*
 * XREFs of ?PulseEndpoint@CCrossProcessInputEndpoint@@UEAAXXZ @ 0x140015B50
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x140015BC0 (-ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 */

void __fastcall CCrossProcessInputEndpoint::PulseEndpoint(CCrossProcessInputEndpoint *this)
{
  __int64 v2; // rbx
  void (__fastcall *v3)(CCrossProcessBaseServerEndpoint *__hidden); // rdi

  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 5u )
  {
    WPP_SF_(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 13LL, &WPP_922a60730360a173c64e82180a3fecc4_Traceguids);
  }
  v2 = *((_QWORD *)this + 1);
  v3 = *(void (__fastcall **)(CCrossProcessBaseServerEndpoint *__hidden))(*(_QWORD *)(v2 + 8) + 32LL);
  if ( v3 == CCrossProcessBaseServerEndpoint::ProcessingComplete )
    CCrossProcessBaseServerEndpoint::ProcessingComplete((CCrossProcessBaseServerEndpoint *)(v2 + 8));
  else
    v3((CCrossProcessBaseServerEndpoint *)(v2 + 8));
}
