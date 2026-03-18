/*
 * XREFs of ?EndOfFrame@CTessellatedPrimitivesEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800B0BC0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x18011718C (Template_qqq.c)
 */

void __fastcall CTessellatedPrimitivesEvents::EndOfFrame(
        CTessellatedPrimitivesEvents *this,
        struct CCounterManager *a2)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qqq(
      (_DWORD)this,
      (unsigned int)&ENDFRAME_TESSELLATED_PRIMITIVES_STATS,
      *((_DWORD *)a2 + 12),
      *((_DWORD *)a2 + 13),
      *((_DWORD *)a2 + 14));
}
