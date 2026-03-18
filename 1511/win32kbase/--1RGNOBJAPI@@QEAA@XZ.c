/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0027EDC
 * Callers:
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     GreCopyVisRgn @ 0x1C0044310 (GreCopyVisRgn.c)
 *     GrePtInRegion @ 0x1C00726F0 (GrePtInRegion.c)
 *     GreGetRegionData @ 0x1C0074D10 (GreGetRegionData.c)
 *     EngDeleteRgn @ 0x1C0074EB0 (EngDeleteRgn.c)
 *     GreIsValidRegion @ 0x1C007A4D0 (GreIsValidRegion.c)
 *     NtGdiEqualRgn @ 0x1C007DF80 (NtGdiEqualRgn.c)
 *     EngEqualRgn @ 0x1C00BF3B0 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C013A000 (InitializeGre.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0028690 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 4) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
