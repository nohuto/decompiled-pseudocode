/*
 * XREFs of ClearKeyboardStates @ 0x1C0096998
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     ClearKeyboardToggleStates @ 0x1C0092EB4 (ClearKeyboardToggleStates.c)
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
    *(__m128i *)(v0 + *(_QWORD *)&gafAsyncKeyState[0]) = _mm_and_si128(
                                                           _mm_loadu_si128((const __m128i *)(v0
                                                                                           + *(_QWORD *)&gafAsyncKeyState[0])),
                                                           (__m128i)_xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa);
    v0 += 16LL;
    --v1;
  }
  while ( v1 );
  result = ClearKeyboardToggleStates();
  gfsModifiers = 0;
  gfsModOnlyCandidate = 0;
  gfsSASModifiersDown = 0;
  gfsRawModifiersForHotKey = 0;
  WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  return result;
}
