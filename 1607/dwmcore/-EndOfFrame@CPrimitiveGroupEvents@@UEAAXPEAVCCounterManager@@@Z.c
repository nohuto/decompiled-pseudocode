/*
 * XREFs of ?EndOfFrame@CPrimitiveGroupEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800B0B80
 * Callers:
 *     ?OnEndComposition@CCrossThreadComposition@@MEAAXXZ @ 0x180038C60 (-OnEndComposition@CCrossThreadComposition@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPrimitiveGroupEvents::EndOfFrame(CPrimitiveGroupEvents *this, struct CCounterManager *a2)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qq(this, &ENDFRAME_PRIMITIVE_GROUP_STATS, *((unsigned int *)a2 + 10), *((unsigned int *)a2 + 11));
}
