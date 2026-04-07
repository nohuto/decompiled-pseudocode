/*
 * XREFs of ?GetPVLTarget@CSlideOutCharm@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800100B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSlideOutCharm::GetPVLTarget(__int64 a1, __int16 a2)
{
  unsigned int v2; // r8d

  v2 = -1;
  if ( (`CSlideOutCharm::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable & 0xFFF) == (a2 & 0xFFF) )
    return *((unsigned int *)&`CSlideOutCharm::GetPVLTarget'::`2'::s_rgPVLTargetLookupTable + 1);
  return v2;
}
