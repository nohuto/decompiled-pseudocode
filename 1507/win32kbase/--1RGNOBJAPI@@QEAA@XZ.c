/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0042C0C
 * Callers:
 *     GrePtInRegion @ 0x1C000FB90 (GrePtInRegion.c)
 *     EngDeleteRgn @ 0x1C0011020 (EngDeleteRgn.c)
 *     GreIsValidRegion @ 0x1C0016810 (GreIsValidRegion.c)
 *     NtGdiEqualRgn @ 0x1C00191F0 (NtGdiEqualRgn.c)
 *     GreCombineRgn @ 0x1C0040310 (GreCombineRgn.c)
 *     GreCopyVisRgn @ 0x1C0054850 (GreCopyVisRgn.c)
 *     GreGetRegionData @ 0x1C0084E70 (GreGetRegionData.c)
 *     EngEqualRgn @ 0x1C00BDC80 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C0137A5C (InitializeGre.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003E0E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 12) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>((char *)this + 8);
}
