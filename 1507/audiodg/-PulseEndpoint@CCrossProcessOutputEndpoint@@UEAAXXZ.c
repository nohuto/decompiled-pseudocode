/*
 * XREFs of ?PulseEndpoint@CCrossProcessOutputEndpoint@@UEAAXXZ @ 0x140037E10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 */

void __fastcall CCrossProcessOutputEndpoint::PulseEndpoint(CCrossProcessOutputEndpoint *this)
{
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x80000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 5u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xCu,
      (__int64)&WPP_922a60730360a173c64e82180a3fecc4_Traceguids);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 32LL))(*((_QWORD *)this + 1) + 8LL);
}
