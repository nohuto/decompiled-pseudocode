/*
 * XREFs of ClearKeyboardStates @ 0x1C0094F30
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 * Callees:
 *     ClearKeyboardToggleStates @ 0x1C0095094 (ClearKeyboardToggleStates.c)
 */

__int64 ClearKeyboardStates()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 result; // rax

  v0 = 0LL;
  v1 = 4LL;
  do
  {
    *(__m128i *)(v0 + *(_QWORD *)gafAsyncKeyState) = _mm_and_si128(
                                                       _mm_loadu_si128((const __m128i *)(v0 + *(_QWORD *)gafAsyncKeyState)),
                                                       (__m128i)_xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa);
    v0 += 16LL;
    --v1;
  }
  while ( v1 );
  result = ClearKeyboardToggleStates(v0);
  gfsModifiers = 0;
  gfsModOnlyCandidate = 0;
  gfsSASModifiersDown = 0;
  gfsRawModifiersForHotKey = 0;
  WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  return result;
}
