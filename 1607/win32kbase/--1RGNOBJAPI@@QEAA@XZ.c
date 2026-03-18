/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0036760
 * Callers:
 *     GreCombineRgn @ 0x1C002FB30 (GreCombineRgn.c)
 *     bDeleteRegion @ 0x1C003A220 (bDeleteRegion.c)
 *     GreCopyVisRgn @ 0x1C00767F0 (GreCopyVisRgn.c)
 *     GrePtInRegion @ 0x1C0076C20 (GrePtInRegion.c)
 *     GreGetRegionData @ 0x1C0078730 (GreGetRegionData.c)
 *     EngDeleteRgn @ 0x1C0078910 (EngDeleteRgn.c)
 *     GreIsValidRegion @ 0x1C0080560 (GreIsValidRegion.c)
 *     NtGdiEqualRgn @ 0x1C0081D10 (NtGdiEqualRgn.c)
 *     EngEqualRgn @ 0x1C00CB460 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C0154000 (InitializeGre.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C002D3A0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 12) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>((char *)this + 8);
}
