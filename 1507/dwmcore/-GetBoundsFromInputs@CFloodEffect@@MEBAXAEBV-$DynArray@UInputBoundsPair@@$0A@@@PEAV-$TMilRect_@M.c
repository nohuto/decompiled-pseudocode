/*
 * XREFs of ?GetBoundsFromInputs@CFloodEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009A1B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

void __fastcall CFloodEffect::GetBoundsFromInputs(__int64 a1, __int64 a2, _OWORD *a3)
{
  *a3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
}
